#include "mm6_static_core.h"

#include "mm6_v06_runtime.h"
#include "mm6_v07_ppu.h"
#include "mm6_v08_apu.h"
#include "mm6_v09_sha256.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <limits>
#include <new>
#include <string>
#include <utility>
#include <vector>

namespace {
constexpr std::size_t kPrgBytes = 524288u;
constexpr std::size_t kRomBytes = 524304u;
constexpr std::array<std::uint8_t, 16> kExpectedHeader = {
  0x4Eu,0x45u,0x53u,0x1Au,0x20u,0x00u,0x40u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u
};
constexpr std::array<std::uint8_t, 32> kExpectedRomSha = {
  0x86u,0xE0u,0x69u,0x79u,0x2Au,0xDDu,0xF2u,0x13u,0x22u,0x35u,0x5Cu,0x24u,0x5Au,0x0Bu,0x15u,0x5Bu,
  0xA7u,0x4Eu,0x12u,0x3Bu,0x4Au,0x3Eu,0xB9u,0xCDu,0x34u,0x71u,0x75u,0x44u,0x45u,0x69u,0xD1u,0x22u
};
constexpr std::array<std::uint8_t, 8> kSnapshotMagic = {'M','M','6','V','0','9','S','1'};
constexpr std::uint32_t kSnapshotVersion = 1u;
constexpr std::size_t kSnapshotHeaderBytes = 8u + 4u + 32u + 32u + 32u + 8u + 32u;
constexpr std::uint64_t kDefaultInstructionLimit = 20000000ull;
constexpr char kProfileIdentity[] = "Mega Man 6 (USA)|NES-TGROM-01|MMC3C|NTSC|PRG=524288|CHR-RAM=8192|PRG-RAM=0";
constexpr char kCoreIdentity[] = "MM6_STATIC_CORE_V09|V05_TREE=7d30a77dd42872224a01bb76f46e9aef694e8725f236fe486674df1262a2bb2b|OPAQUE_API_SNAPSHOT_HOOKS=1";

class Writer {
 public:
  std::vector<std::uint8_t> data;
  void u8(std::uint8_t v) { data.push_back(v); }
  void b(bool v) { u8(v ? 1u : 0u); }
  void i8(std::int8_t v) { u8(static_cast<std::uint8_t>(v)); }
  void u16(std::uint16_t v) { u8(static_cast<std::uint8_t>(v)); u8(static_cast<std::uint8_t>(v >> 8)); }
  void i16(std::int16_t v) { u16(static_cast<std::uint16_t>(v)); }
  void u32(std::uint32_t v) { for (unsigned i=0;i<4u;++i) u8(static_cast<std::uint8_t>(v >> (8u*i))); }
  void u64(std::uint64_t v) { for (unsigned i=0;i<8u;++i) u8(static_cast<std::uint8_t>(v >> (8u*i))); }
  void bytes(const std::uint8_t* p, std::size_t n) { if (n) data.insert(data.end(), p, p+n); }
  template<std::size_t N> void arr8(const std::array<std::uint8_t,N>& a) { bytes(a.data(),a.size()); }
  void str(const std::string& s) {
    const std::size_t n = std::min<std::size_t>(s.size(), 4096u);
    u32(static_cast<std::uint32_t>(n));
    bytes(reinterpret_cast<const std::uint8_t*>(s.data()), n);
  }
};

class Reader {
 public:
  Reader(const std::uint8_t* p, std::size_t n): p_(p), n_(n) {}
  bool ok() const { return ok_; }
  std::size_t remaining() const { return ok_ && pos_ <= n_ ? n_ - pos_ : 0u; }
  std::uint8_t u8() { if (!need(1)) return 0; return p_[pos_++]; }
  bool b() { const auto v=u8(); if (v>1u) ok_=false; return v!=0; }
  std::int8_t i8() { return static_cast<std::int8_t>(u8()); }
  std::uint16_t u16() { std::uint16_t v=0; for(unsigned i=0;i<2u;++i) v|=static_cast<std::uint16_t>(u8())<<(8u*i); return v; }
  std::int16_t i16() { return static_cast<std::int16_t>(u16()); }
  std::uint32_t u32() { std::uint32_t v=0; for(unsigned i=0;i<4u;++i) v|=static_cast<std::uint32_t>(u8())<<(8u*i); return v; }
  std::uint64_t u64() { std::uint64_t v=0; for(unsigned i=0;i<8u;++i) v|=static_cast<std::uint64_t>(u8())<<(8u*i); return v; }
  bool bytes(std::uint8_t* out, std::size_t n) { if(!need(n)) return false; if(n) std::memcpy(out,p_+pos_,n); pos_+=n; return true; }
  template<std::size_t N> bool arr8(std::array<std::uint8_t,N>& a) { return bytes(a.data(),a.size()); }
  std::string str() {
    const auto n=u32(); if(!ok_ || n>4096u || !need(n)){ok_=false;return {};}
    std::string s(reinterpret_cast<const char*>(p_+pos_),n);pos_+=n;return s;
  }
 private:
  bool need(std::size_t n) { if(!ok_ || pos_>n_ || n>n_-pos_){ok_=false;return false;} return true; }
  const std::uint8_t* p_=nullptr; std::size_t n_=0; std::size_t pos_=0; bool ok_=true;
};

std::array<std::uint8_t,32> identity_hash(const char* s) {
  return mm6_v09_sha256(reinterpret_cast<const std::uint8_t*>(s), std::strlen(s));
}

void write_envelope(Writer& w, const MM6ApuEnvelopeState& e) {
  w.b(e.constant_volume);w.b(e.loop);w.u8(e.volume);w.b(e.start);w.u8(e.divider);w.u8(e.decay);
}
bool read_envelope(Reader& r, MM6ApuEnvelopeState& e) {
  e.constant_volume=r.b();e.loop=r.b();e.volume=r.u8();e.start=r.b();e.divider=r.u8();e.decay=r.u8();return r.ok();
}
void write_pulse(Writer& w,const MM6ApuPulseState& p){
  w.b(p.enabled);w.u8(p.duty);w.u8(p.duty_step);w.u16(p.timer_period);w.u16(p.timer_counter);w.u8(p.length_counter);write_envelope(w,p.envelope);
  w.b(p.sweep_enabled);w.u8(p.sweep_period);w.b(p.sweep_negate);w.u8(p.sweep_shift);w.b(p.sweep_reload);w.u8(p.sweep_divider);w.u8(p.output);
}
bool read_pulse(Reader& r,MM6ApuPulseState& p){
  p.enabled=r.b();p.duty=r.u8();p.duty_step=r.u8();p.timer_period=r.u16();p.timer_counter=r.u16();p.length_counter=r.u8();if(!read_envelope(r,p.envelope))return false;
  p.sweep_enabled=r.b();p.sweep_period=r.u8();p.sweep_negate=r.b();p.sweep_shift=r.u8();p.sweep_reload=r.b();p.sweep_divider=r.u8();p.output=r.u8();return r.ok();
}
void write_sprite(Writer& w,const MM6PpuSpriteUnit&s){w.u8(s.y);w.u8(s.tile);w.u8(s.attributes);w.u8(s.x);w.u8(s.oam_index);w.u8(s.pattern_low);w.u8(s.pattern_high);w.b(s.sprite0);}
bool read_sprite(Reader&r,MM6PpuSpriteUnit&s){s.y=r.u8();s.tile=r.u8();s.attributes=r.u8();s.x=r.u8();s.oam_index=r.u8();s.pattern_low=r.u8();s.pattern_high=r.u8();s.sprite0=r.b();return r.ok();}

void write_runtime_payload(Writer& w, const MM6Runtime& rt) {
  w.u8(0u);                 // region: NTSC
  w.u32(0u);                // executable-RAM epoch: target has no proven RAM-code epoch
  const auto& c=rt.cpu;w.u8(c.a);w.u8(c.x);w.u8(c.y);w.u8(c.sp);w.u8(c.p);w.u16(c.pc);w.b(c.nmi_pending);w.b(c.apu_irq_pending);
  const auto& m=rt.mapper;w.u8(m.bank_select);w.b(m.bank_select_known);w.arr8(m.bank_registers);for(bool v:m.bank_register_known)w.b(v);w.u8(m.mirroring_bit);w.b(m.mirroring_known);w.u8(m.ram_control);w.b(m.ram_control_known);w.u8(m.irq_latch);w.b(m.irq_latch_known);w.u8(m.irq_counter);w.b(m.irq_counter_known);w.b(m.irq_reload);w.b(m.irq_reload_known);w.b(m.irq_enabled);w.b(m.irq_enabled_known);w.b(m.irq_pending);w.b(m.irq_pending_known);w.b(m.a12_low_valid);w.u64(m.a12_low_since_cpu_cycle);w.u64(m.a12_low_since_ppu_tick);
  const auto&s=rt.scheduler;w.u64(s.cpu_cycles);w.u64(s.ppu_ticks);w.u64(s.apu_ticks);w.u64(s.dma_ticks);w.u64(s.master_ticks);
  w.arr8(rt.internal_ram);w.arr8(rt.chr_ram);w.arr8(rt.ciram);
  const auto&p=rt.ppu;w.u8(p.ctrl);w.u8(p.mask);w.u8(p.status);w.u8(p.oam_addr);w.u8(p.open_bus);w.u8(p.read_buffer);w.u16(p.v);w.u16(p.t);w.u8(p.fine_x);w.b(p.write_toggle);w.i16(p.scanline);w.u16(p.dot);w.u64(p.frame);w.b(p.odd_frame);w.b(p.frame_ready);w.u64(p.completed_frames);w.b(p.allow_full_access);w.b(p.prevent_vblank_flag);w.arr8(p.oam);w.arr8(p.secondary_oam);w.arr8(p.palette);w.u16(p.bg_pattern_low_shift);w.u16(p.bg_pattern_high_shift);w.u16(p.bg_attr_low_shift);w.u16(p.bg_attr_high_shift);w.u8(p.next_nt);w.u8(p.next_attr);w.u8(p.next_pattern_low);w.u8(p.next_pattern_high);for(const auto&x:p.sprites)write_sprite(w,x);for(const auto&x:p.next_sprites)write_sprite(w,x);w.u8(p.sprite_count);w.u8(p.next_sprite_count);w.arr8(p.frame_indexed);
  const auto&a=rt.apu;write_pulse(w,a.pulse1);write_pulse(w,a.pulse2);
  const auto&t=a.triangle;w.b(t.enabled);w.b(t.control);w.u8(t.linear_reload);w.u8(t.linear_counter);w.b(t.linear_reload_flag);w.u16(t.timer_period);w.u16(t.timer_counter);w.u8(t.length_counter);w.u8(t.sequence_step);w.u8(t.output);
  const auto&n=a.noise;w.b(n.enabled);w.b(n.mode);w.u8(n.period_index);w.u16(n.timer_period);w.u16(n.timer_counter);w.u16(n.shift_register);w.u8(n.length_counter);write_envelope(w,n.envelope);w.u8(n.output);
  const auto&d=a.dmc;w.b(d.enabled);w.b(d.irq_enabled);w.b(d.loop);w.u8(d.rate_index);w.u16(d.timer_period);w.u16(d.timer_counter);w.u8(d.output_level);w.u16(d.sample_address);w.u16(d.sample_length);w.u16(d.current_address);w.u16(d.bytes_remaining);w.u8(d.sample_buffer);w.b(d.sample_buffer_empty);w.u8(d.shift_register);w.u8(d.bits_remaining);w.b(d.silence);w.b(d.irq_flag);w.b(d.dma_pending);w.u8(d.start_delay);w.u8(d.disable_delay);
  const auto&f=a.frame;w.b(f.five_step);w.b(f.irq_inhibit);w.b(f.irq_flag);w.u32(f.sequence_cycle);w.i8(f.write_delay);w.u8(f.pending_value);
  w.u64(a.cpu_cycle);w.u64(a.sample_phase);w.u64(a.pcm_dropped);w.i16(a.last_mixed_sample); // queued PCM intentionally excluded
  const auto&co=rt.controllers;w.arr8(co.host_mask);w.arr8(co.latched_mask);w.arr8(co.shift_index);w.b(co.strobe);w.u64(co.latch_count);w.u64(co.read_count);w.u64(co.dmc_extra_clocks);
  const auto&dm=rt.dma;w.b(dm.oam_active);w.b(dm.dmc_servicing);w.b(dm.cpu_access_is_read);w.u16(dm.cpu_access_address);w.u64(dm.oam_transfers);w.u64(dm.oam_stall_cycles);w.u64(dm.dmc_fetches);w.u64(dm.dmc_stall_cycles);w.u64(dm.dmc_oam_collisions);
  w.u8(rt.cpu_open_bus);
  w.u16(static_cast<std::uint16_t>(rt.trap.code));w.u8(rt.trap.physical_bank);w.u16(rt.trap.cpu_pc);w.u16(rt.trap.address);w.str(rt.trap.unresolved_id);w.str(rt.trap.owner);w.str(rt.trap.reason);
  for(const auto&g:rt.return_guards){w.b(g.valid);w.u16(g.continuation_pc);w.str(g.unresolved_id);}
  w.b(rt.stack_dispatch_guard_active);w.u32(static_cast<std::uint32_t>(rt.stack_dispatch_target_count));for(const auto target:rt.stack_dispatch_targets)w.u16(target);w.str(rt.stack_dispatch_unresolved_id);
}

bool read_runtime_payload(Reader& r, MM6Runtime& rt) {
  if (r.u8() != 0u) return false;
  if (r.u32() != 0u) return false;
  auto&c=rt.cpu;c.a=r.u8();c.x=r.u8();c.y=r.u8();c.sp=r.u8();c.p=r.u8();c.pc=r.u16();c.nmi_pending=r.b();c.apu_irq_pending=r.b();
  auto&m=rt.mapper;m.bank_select=r.u8();m.bank_select_known=r.b();r.arr8(m.bank_registers);for(auto&v:m.bank_register_known)v=r.b();m.mirroring_bit=r.u8();m.mirroring_known=r.b();m.ram_control=r.u8();m.ram_control_known=r.b();m.irq_latch=r.u8();m.irq_latch_known=r.b();m.irq_counter=r.u8();m.irq_counter_known=r.b();m.irq_reload=r.b();m.irq_reload_known=r.b();m.irq_enabled=r.b();m.irq_enabled_known=r.b();m.irq_pending=r.b();m.irq_pending_known=r.b();m.a12_low_valid=r.b();m.a12_low_since_cpu_cycle=r.u64();m.a12_low_since_ppu_tick=r.u64();
  auto&s=rt.scheduler;s.cpu_cycles=r.u64();s.ppu_ticks=r.u64();s.apu_ticks=r.u64();s.dma_ticks=r.u64();s.master_ticks=r.u64();
  r.arr8(rt.internal_ram);r.arr8(rt.chr_ram);r.arr8(rt.ciram);
  auto&p=rt.ppu;p.ctrl=r.u8();p.mask=r.u8();p.status=r.u8();p.oam_addr=r.u8();p.open_bus=r.u8();p.read_buffer=r.u8();p.v=r.u16();p.t=r.u16();p.fine_x=r.u8();p.write_toggle=r.b();p.scanline=r.i16();p.dot=r.u16();p.frame=r.u64();p.odd_frame=r.b();p.frame_ready=r.b();p.completed_frames=r.u64();p.allow_full_access=r.b();p.prevent_vblank_flag=r.b();r.arr8(p.oam);r.arr8(p.secondary_oam);r.arr8(p.palette);p.bg_pattern_low_shift=r.u16();p.bg_pattern_high_shift=r.u16();p.bg_attr_low_shift=r.u16();p.bg_attr_high_shift=r.u16();p.next_nt=r.u8();p.next_attr=r.u8();p.next_pattern_low=r.u8();p.next_pattern_high=r.u8();for(auto&x:p.sprites)if(!read_sprite(r,x))return false;for(auto&x:p.next_sprites)if(!read_sprite(r,x))return false;p.sprite_count=r.u8();p.next_sprite_count=r.u8();r.arr8(p.frame_indexed);
  auto&a=rt.apu;if(!read_pulse(r,a.pulse1)||!read_pulse(r,a.pulse2))return false;
  auto&t=a.triangle;t.enabled=r.b();t.control=r.b();t.linear_reload=r.u8();t.linear_counter=r.u8();t.linear_reload_flag=r.b();t.timer_period=r.u16();t.timer_counter=r.u16();t.length_counter=r.u8();t.sequence_step=r.u8();t.output=r.u8();
  auto&n=a.noise;n.enabled=r.b();n.mode=r.b();n.period_index=r.u8();n.timer_period=r.u16();n.timer_counter=r.u16();n.shift_register=r.u16();n.length_counter=r.u8();if(!read_envelope(r,n.envelope))return false;n.output=r.u8();
  auto&d=a.dmc;d.enabled=r.b();d.irq_enabled=r.b();d.loop=r.b();d.rate_index=r.u8();d.timer_period=r.u16();d.timer_counter=r.u16();d.output_level=r.u8();d.sample_address=r.u16();d.sample_length=r.u16();d.current_address=r.u16();d.bytes_remaining=r.u16();d.sample_buffer=r.u8();d.sample_buffer_empty=r.b();d.shift_register=r.u8();d.bits_remaining=r.u8();d.silence=r.b();d.irq_flag=r.b();d.dma_pending=r.b();d.start_delay=r.u8();d.disable_delay=r.u8();
  auto&f=a.frame;f.five_step=r.b();f.irq_inhibit=r.b();f.irq_flag=r.b();f.sequence_cycle=r.u32();f.write_delay=r.i8();f.pending_value=r.u8();
  a.cpu_cycle=r.u64();a.sample_phase=r.u64();a.pcm_dropped=r.u64();a.last_mixed_sample=r.i16();a.pcm.fill(0);a.pcm_read=0;a.pcm_write=0;a.pcm_count=0;
  auto&co=rt.controllers;r.arr8(co.host_mask);r.arr8(co.latched_mask);r.arr8(co.shift_index);co.strobe=r.b();co.latch_count=r.u64();co.read_count=r.u64();co.dmc_extra_clocks=r.u64();
  auto&dm=rt.dma;dm.oam_active=r.b();dm.dmc_servicing=r.b();dm.cpu_access_is_read=r.b();dm.cpu_access_address=r.u16();dm.oam_transfers=r.u64();dm.oam_stall_cycles=r.u64();dm.dmc_fetches=r.u64();dm.dmc_stall_cycles=r.u64();dm.dmc_oam_collisions=r.u64();
  rt.cpu_open_bus=r.u8();
  const auto trap_code=r.u16(); if(trap_code>static_cast<std::uint16_t>(MM6TrapCode::BusFault))return false;rt.trap.code=static_cast<MM6TrapCode>(trap_code);rt.trap.physical_bank=r.u8();rt.trap.cpu_pc=r.u16();rt.trap.address=r.u16();rt.trap.unresolved_id=r.str();rt.trap.owner=r.str();rt.trap.reason=r.str();
  for(auto&g:rt.return_guards){g.valid=r.b();g.continuation_pc=r.u16();g.unresolved_id=r.str();}
  rt.stack_dispatch_guard_active=r.b();rt.stack_dispatch_target_count=r.u32();if(rt.stack_dispatch_target_count>rt.stack_dispatch_targets.size())return false;for(auto&target:rt.stack_dispatch_targets)target=r.u16();rt.stack_dispatch_unresolved_id=r.str();
  rt.trace.fill({});rt.trace_count=0;
  return r.ok() && r.remaining()==0u;
}

MM6CoreTrap public_trap(MM6TrapCode t) {
  switch(t){
    case MM6TrapCode::None:return MM6_CORE_TRAP_NONE;
    case MM6TrapCode::DispatchMiss:return MM6_CORE_TRAP_DISPATCH_MISS;
    case MM6TrapCode::UnresolvedBoundary:return MM6_CORE_TRAP_UNRESOLVED_BOUNDARY;
    case MM6TrapCode::StaticIdentityMismatch:return MM6_CORE_TRAP_STATIC_IDENTITY_MISMATCH;
    case MM6TrapCode::UnknownMapperState:return MM6_CORE_TRAP_UNKNOWN_MAPPER_STATE;
    case MM6TrapCode::RomNotAttached:case MM6TrapCode::RomIdentityMismatch:return MM6_CORE_TRAP_BAD_ROM;
    case MM6TrapCode::UnsupportedCpuOperation:case MM6TrapCode::UnsupportedPpuV07:case MM6TrapCode::UnsupportedPpuTimingV07:case MM6TrapCode::UnsupportedApuDmaInputV08:return MM6_CORE_TRAP_UNSUPPORTED_CPU_OPERATION;
    case MM6TrapCode::BusFault:return MM6_CORE_TRAP_BUS_FAULT;
  }
  return MM6_CORE_TRAP_BUS_FAULT;
}

std::uint16_t current_bank(const MM6Runtime& rt) {
  const auto pc=rt.cpu.pc;if(pc<0x8000u)return 0xFFFFu;if(pc>=0xE000u)return 63u;
  if (!rt.mapper.bank_select_known) return 0xFFFFu;
  const bool mode=(rt.mapper.bank_select&0x40u)!=0;
  if(pc<0xA000u){if(mode)return 62u;if(!rt.mapper.bank_register_known[6])return 0xFFFFu;return static_cast<std::uint16_t>(rt.mapper.bank_registers[6]&0x3Fu);}
  if(pc<0xC000u){if(!rt.mapper.bank_register_known[7])return 0xFFFFu;return static_cast<std::uint16_t>(rt.mapper.bank_registers[7]&0x3Fu);}
  if(pc<0xE000u){if(!mode)return 62u;if(!rt.mapper.bank_register_known[6])return 0xFFFFu;return static_cast<std::uint16_t>(rt.mapper.bank_registers[6]&0x3Fu);}
  return 63u;
}

bool hook_match(const MM6HookFilter& f, const MM6HookEvent& e) {
  if((f.kind_mask & static_cast<std::uint32_t>(e.kind))==0u)return false;
  if(f.physical_bank>=0 && e.physical_bank!=static_cast<std::uint16_t>(f.physical_bank))return false;
  if(e.program_counter<f.pc_first || e.program_counter>f.pc_last)return false;
  if(e.kind==MM6_HOOK_BUS_EVENT && (e.address<f.address_first || e.address>f.address_last))return false;
  return true;
}
}

struct MM6StaticCore {
  MM6Runtime rt{};
  std::array<std::uint8_t,kPrgBytes> prg{};
  bool rom_loaded=false;
  bool busy=false;
  bool in_hook=false;
  bool stop_requested=false;
  MM6CoreTrap last_public_trap=MM6_CORE_TRAP_NONE;
  MM6HookFilter hook_filter{0u,-1,0u,0xFFFFu,0u,0xFFFFu};
  MM6HookCallback hook=nullptr;
  void* hook_user=nullptr;
};

namespace {
MM6HookAction invoke_hook(MM6StaticCore* core, MM6HookEvent event) {
  if(!core || !core->hook || core->in_hook || !hook_match(core->hook_filter,event))return MM6_HOOK_CONTINUE;
  core->in_hook=true;const auto action=core->hook(core,&event,core->hook_user);core->in_hook=false;
  if (action == MM6_HOOK_STOP) core->stop_requested = true;
  return action;
}

void fill_result(MM6StaticCore* core,MM6FrameResult* out,std::uint64_t start,std::uint64_t executed,bool completed,bool stopped,MM6CoreTrap trap,std::uint8_t p1,std::uint8_t p2){
  if (!out) return;
  out->completed=completed?1u:0u;
  out->stopped=stopped?1u:0u;
  out->player1_buttons=p1;
  out->player2_buttons=p2;
  out->program_counter=core?core->rt.cpu.pc:0u;
  out->physical_prg_bank=core?current_bank(core->rt):0xFFFFu;
  out->start_frame=start;
  out->end_frame=core?core->rt.ppu.completed_frames:start;
  out->executed_instructions=executed;
  out->trap=trap;
}

std::vector<std::uint8_t> make_snapshot(const MM6StaticCore* core) {
  if(!core||!core->rom_loaded||core->busy||core->in_hook)return {};
  Writer payload;write_runtime_payload(payload,core->rt);
  const auto profile=identity_hash(kProfileIdentity);const auto core_id=identity_hash(kCoreIdentity);const auto ph=mm6_v09_sha256(payload.data.data(),payload.data.size());
  Writer w;w.bytes(kSnapshotMagic.data(),kSnapshotMagic.size());w.u32(kSnapshotVersion);w.bytes(kExpectedRomSha.data(),kExpectedRomSha.size());w.bytes(profile.data(),profile.size());w.bytes(core_id.data(),core_id.size());w.u64(static_cast<std::uint64_t>(payload.data.size()));w.bytes(ph.data(),ph.size());w.bytes(payload.data.data(),payload.data.size());return std::move(w.data);
}
}

extern "C" {
MM6StaticCore* mm6_static_core_create(void){
  auto* core=new(std::nothrow) MM6StaticCore();if(!core)return nullptr;mm6_v06_initialize(&core->rt);return core;
}
void mm6_static_core_destroy(MM6StaticCore* core){delete core;}

int mm6_static_core_reset(MM6StaticCore* core,const uint8_t* rom,size_t rom_bytes){
  if (!core || !rom || core->busy || core->in_hook) return 0;
  if (rom_bytes != kRomBytes) return 0;
  if (std::memcmp(rom,kExpectedHeader.data(),kExpectedHeader.size()) != 0) return 0;
  if (mm6_v09_sha256(rom, rom_bytes) != kExpectedRomSha) return 0;
  std::copy(rom+16u,rom+kRomBytes,core->prg.begin());mm6_v06_initialize(&core->rt);if(!mm6_v06_attach_prg_payload(&core->rt,core->prg.data(),core->prg.size()))return 0;if(!mm6_v06_cold_reset(&core->rt))return 0;core->rom_loaded=true;core->last_public_trap=MM6_CORE_TRAP_NONE;core->stop_requested=false;return 1;
}

int mm6_static_core_advance_frame(MM6StaticCore* core,uint8_t p1,uint8_t p2,uint64_t instruction_limit,MM6FrameResult* result){
  if(!core||!result||!core->rom_loaded||core->busy||core->in_hook){if(result) *result={};return 0;}
  core->busy=true;core->stop_requested=false;core->last_public_trap=MM6_CORE_TRAP_NONE;const std::uint64_t start=core->rt.ppu.completed_frames;const std::uint64_t target=start+1u;const std::uint64_t limit=instruction_limit?instruction_limit:kDefaultInstructionLimit;std::uint64_t executed=0;bool completed=false;bool stopped=false;MM6CoreTrap trap=MM6_CORE_TRAP_NONE;
  mm6_v08_set_controller_mask(&core->rt,0u,p1);mm6_v08_set_controller_mask(&core->rt,1u,p2);core->rt.ppu.frame_ready=false;
  while(executed<limit){
    const auto bank=current_bank(core->rt);MM6HookEvent before{MM6_HOOK_BEFORE_INSTRUCTION,core->rt.scheduler.cpu_cycles,core->rt.ppu.completed_frames,bank,core->rt.cpu.pc,0xFFFFu,0u,0u,MM6_CORE_TRAP_NONE,nullptr};
    if(invoke_hook(core,before)==MM6_HOOK_STOP){stopped=true;break;}
    mm6_v06_clear_trace(&core->rt);const auto step=mm6_v06_step(&core->rt);++executed;
    for(std::size_t i=0;i<core->rt.trace_count;++i){const auto&e=core->rt.trace[i];MM6HookEvent he{MM6_HOOK_BUS_EVENT,e.cpu_cycle,core->rt.ppu.completed_frames,bank,before.program_counter,e.address,e.value,static_cast<std::uint8_t>(e.write ? 1u : 0u),MM6_CORE_TRAP_NONE,nullptr};invoke_hook(core,he);}
    if(step==MM6ExecResult::Trap||core->rt.trap.code!=MM6TrapCode::None){trap=public_trap(core->rt.trap.code);core->last_public_trap=trap;MM6HookEvent fe{MM6_HOOK_FRONTIER,core->rt.scheduler.cpu_cycles,core->rt.ppu.completed_frames,core->rt.trap.physical_bank,core->rt.trap.cpu_pc,core->rt.trap.address,0u,0u,trap,core->rt.trap.unresolved_id.empty()?nullptr:core->rt.trap.unresolved_id.c_str()};invoke_hook(core,fe);break;}
    if(core->rt.ppu.completed_frames>=target){completed=true;MM6HookEvent frame{MM6_HOOK_FRAME,core->rt.scheduler.cpu_cycles,core->rt.ppu.completed_frames,current_bank(core->rt),core->rt.cpu.pc,0xFFFFu,0u,0u,MM6_CORE_TRAP_NONE,nullptr};invoke_hook(core,frame);stopped=core->stop_requested;break;}
    if(core->stop_requested){stopped=true;break;}
  }
  if(!completed&&!stopped&&trap==MM6_CORE_TRAP_NONE&&executed>=limit){trap=MM6_CORE_TRAP_STEP_LIMIT;core->last_public_trap=trap;}
  fill_result(core,result,start,executed,completed,stopped,trap,p1,p2);core->busy=false;return 1;
}

int mm6_static_core_frame_copy_bgra(const MM6StaticCore* core,uint32_t* output,size_t cap){if(!core||!core->rom_loaded||core->in_hook)return 0;return mm6_v07_frame_copy_bgra(&core->rt,output,cap)?1:0;}
int mm6_static_core_frame_copy_indexed(const MM6StaticCore* core,uint8_t* output,size_t cap){if(!core||!core->rom_loaded||core->in_hook)return 0;return mm6_v07_frame_copy_indexed(&core->rt,output,cap)?1:0;}
size_t mm6_static_core_audio_available(const MM6StaticCore* core){if(!core||!core->rom_loaded||core->in_hook)return 0;return mm6_v08_audio_available(&core->rt);}
size_t mm6_static_core_audio_read(MM6StaticCore* core,int16_t* output,size_t cap){if(!core||!core->rom_loaded||core->busy||core->in_hook)return 0;return mm6_v08_audio_pop(&core->rt,output,cap);}
void mm6_static_core_audio_clear(MM6StaticCore* core){if(!core||core->busy||core->in_hook)return;core->rt.apu.pcm.fill(0);core->rt.apu.pcm_read=0;core->rt.apu.pcm_write=0;core->rt.apu.pcm_count=0;}
MM6CoreTrap mm6_static_core_trap(const MM6StaticCore* core){if(!core)return MM6_CORE_TRAP_BUS_FAULT;if(core->last_public_trap!=MM6_CORE_TRAP_NONE)return core->last_public_trap;return public_trap(core->rt.trap.code);}
const char* mm6_static_core_trap_name(MM6CoreTrap t){switch(t){case MM6_CORE_TRAP_NONE:return"none";case MM6_CORE_TRAP_DISPATCH_MISS:return"dispatch_miss";case MM6_CORE_TRAP_UNRESOLVED_BOUNDARY:return"unresolved_boundary";case MM6_CORE_TRAP_STATIC_IDENTITY_MISMATCH:return"static_identity_mismatch";case MM6_CORE_TRAP_UNKNOWN_MAPPER_STATE:return"unknown_mapper_state";case MM6_CORE_TRAP_BAD_ROM:return"bad_rom";case MM6_CORE_TRAP_UNSUPPORTED_CPU_OPERATION:return"unsupported_cpu_operation";case MM6_CORE_TRAP_BUS_FAULT:return"bus_fault";case MM6_CORE_TRAP_STEP_LIMIT:return"step_limit";case MM6_CORE_TRAP_REENTRY:return"reentry";}return"unknown";}

void mm6_static_core_set_hook(MM6StaticCore* core,const MM6HookFilter* filter,MM6HookCallback cb,void* user){if(!core||core->busy||core->in_hook)return;core->hook=cb;core->hook_user=user;if(filter)core->hook_filter=*filter;else core->hook_filter=MM6HookFilter{0xFFFFFFFFu,-1,0u,0xFFFFu,0u,0xFFFFu};}
void mm6_static_core_clear_hook(MM6StaticCore* core){if(!core||core->busy||core->in_hook)return;core->hook=nullptr;core->hook_user=nullptr;core->hook_filter=MM6HookFilter{0u,-1,0u,0xFFFFu,0u,0xFFFFu};}

size_t mm6_static_core_snapshot_size(const MM6StaticCore* core){const auto s=make_snapshot(core);return s.size();}
int mm6_static_core_snapshot_save(const MM6StaticCore* core,uint8_t* output,size_t cap,size_t* written){if(written)*written=0;const auto s=make_snapshot(core);if(s.empty())return 0;if(written)*written=s.size();if(!output)return 1;if(cap<s.size())return 0;std::memcpy(output,s.data(),s.size());return 1;}
int mm6_static_core_snapshot_load(MM6StaticCore* core,const uint8_t* snap,size_t bytes){
  if (!core || !snap || !core->rom_loaded || core->busy || core->in_hook || bytes < kSnapshotHeaderBytes) return 0;
  Reader h(snap, bytes);
  std::array<std::uint8_t,8> magic{};
  if (!h.bytes(magic.data(),magic.size()) || magic != kSnapshotMagic) return 0;
  if (h.u32() != kSnapshotVersion) return 0;
  std::array<std::uint8_t,32> rom{}, profile{}, coreid{}, ph{};
  if (!h.bytes(rom.data(),rom.size()) || rom != kExpectedRomSha) return 0;
  const auto expected_profile=identity_hash(kProfileIdentity);
  if (!h.bytes(profile.data(),profile.size()) || profile != expected_profile) return 0;
  const auto expected_core=identity_hash(kCoreIdentity);
  if (!h.bytes(coreid.data(),coreid.size()) || coreid != expected_core) return 0;
  const auto payload_bytes=h.u64();
  if (payload_bytes > std::numeric_limits<std::size_t>::max() || !h.bytes(ph.data(),ph.size())) return 0;
  if (payload_bytes != h.remaining()) return 0;
  const auto* payload=snap+kSnapshotHeaderBytes;
  if (mm6_v09_sha256(payload,static_cast<std::size_t>(payload_bytes)) != ph) return 0;
  MM6Runtime temp{};mm6_v06_initialize(&temp);Reader r(payload,static_cast<std::size_t>(payload_bytes));if(!read_runtime_payload(r,temp))return 0;temp.prg_rom=core->prg.data();temp.prg_rom_size=core->prg.size();core->rt=std::move(temp);core->rt.prg_rom=core->prg.data();core->rt.prg_rom_size=core->prg.size();core->last_public_trap=public_trap(core->rt.trap.code);core->stop_requested=false;return 1;
}
}
