#include "mm6_v06_runtime.h"
#include "mm6_v07_ppu.h"
#include "mm6_v08_apu.h"

#include <algorithm>
#include <cstring>

namespace {
constexpr std::size_t kPrgBytes = 64u * 0x2000u;
constexpr std::uint8_t kFixedSecondLastBank = 62u;
constexpr std::uint8_t kFixedLastBank = 63u;

constexpr std::array<std::uint8_t, 32> kExpectedPrgSha256 = {
  0x20,0x37,0xBA,0xBE,0x50,0xFE,0xD7,0xA1,0x3B,0x6F,0x65,0x59,0x91,0x4C,0xB8,0x14,
  0x97,0x24,0x5C,0x94,0x77,0x59,0x2E,0x6F,0x8D,0xA1,0x83,0xDF,0x09,0xA3,0x60,0x9A
};

constexpr std::uint32_t rotr32(std::uint32_t x, unsigned n) {
  return (x >> n) | (x << (32u - n));
}

std::array<std::uint8_t, 32> sha256(const std::uint8_t* data, std::size_t bytes) {
  static constexpr std::array<std::uint32_t, 64> k = {
    0x428a2f98u,0x71374491u,0xb5c0fbcfu,0xe9b5dba5u,0x3956c25bu,0x59f111f1u,0x923f82a4u,0xab1c5ed5u,
    0xd807aa98u,0x12835b01u,0x243185beu,0x550c7dc3u,0x72be5d74u,0x80deb1feu,0x9bdc06a7u,0xc19bf174u,
    0xe49b69c1u,0xefbe4786u,0x0fc19dc6u,0x240ca1ccu,0x2de92c6fu,0x4a7484aau,0x5cb0a9dcu,0x76f988dau,
    0x983e5152u,0xa831c66du,0xb00327c8u,0xbf597fc7u,0xc6e00bf3u,0xd5a79147u,0x06ca6351u,0x14292967u,
    0x27b70a85u,0x2e1b2138u,0x4d2c6dfcu,0x53380d13u,0x650a7354u,0x766a0abbu,0x81c2c92eu,0x92722c85u,
    0xa2bfe8a1u,0xa81a664bu,0xc24b8b70u,0xc76c51a3u,0xd192e819u,0xd6990624u,0xf40e3585u,0x106aa070u,
    0x19a4c116u,0x1e376c08u,0x2748774cu,0x34b0bcb5u,0x391c0cb3u,0x4ed8aa4au,0x5b9cca4fu,0x682e6ff3u,
    0x748f82eeu,0x78a5636fu,0x84c87814u,0x8cc70208u,0x90befffau,0xa4506cebu,0xbef9a3f7u,0xc67178f2u
  };
  std::array<std::uint32_t, 8> h = {0x6a09e667u,0xbb67ae85u,0x3c6ef372u,0xa54ff53au,0x510e527fu,0x9b05688cu,0x1f83d9abu,0x5be0cd19u};
  const std::uint64_t bit_len = static_cast<std::uint64_t>(bytes) * 8u;
  const std::size_t total = ((bytes + 9u + 63u) / 64u) * 64u;
  std::array<std::uint8_t, 64> block{};
  for (std::size_t base = 0; base < total; base += 64u) {
    block.fill(0);
    for (std::size_t i = 0; i < 64u; ++i) {
      const std::size_t pos = base + i;
      if (pos < bytes) block[i] = data[pos];
      else if (pos == bytes) block[i] = 0x80u;
    }
    if (base + 64u == total) {
      for (unsigned i = 0; i < 8u; ++i) block[56u + i] = static_cast<std::uint8_t>(bit_len >> (56u - 8u * i));
    }
    std::array<std::uint32_t, 64> w{};
    for (unsigned i = 0; i < 16u; ++i) {
      const unsigned j = i * 4u;
      w[i] = (static_cast<std::uint32_t>(block[j]) << 24) | (static_cast<std::uint32_t>(block[j+1]) << 16) |
             (static_cast<std::uint32_t>(block[j+2]) << 8) | static_cast<std::uint32_t>(block[j+3]);
    }
    for (unsigned i = 16u; i < 64u; ++i) {
      const std::uint32_t s0 = rotr32(w[i-15u],7) ^ rotr32(w[i-15u],18) ^ (w[i-15u] >> 3);
      const std::uint32_t s1 = rotr32(w[i-2u],17) ^ rotr32(w[i-2u],19) ^ (w[i-2u] >> 10);
      w[i] = w[i-16u] + s0 + w[i-7u] + s1;
    }
    std::uint32_t a=h[0],b=h[1],c=h[2],d=h[3],e=h[4],f=h[5],g=h[6],hh=h[7];
    for (unsigned i = 0; i < 64u; ++i) {
      const std::uint32_t s1 = rotr32(e,6) ^ rotr32(e,11) ^ rotr32(e,25);
      const std::uint32_t ch = (e & f) ^ ((~e) & g);
      const std::uint32_t t1 = hh + s1 + ch + k[i] + w[i];
      const std::uint32_t s0 = rotr32(a,2) ^ rotr32(a,13) ^ rotr32(a,22);
      const std::uint32_t maj = (a & b) ^ (a & c) ^ (b & c);
      const std::uint32_t t2 = s0 + maj;
      hh=g; g=f; f=e; e=d+t1; d=c; c=b; b=a; a=t1+t2;
    }
    h[0]+=a;h[1]+=b;h[2]+=c;h[3]+=d;h[4]+=e;h[5]+=f;h[6]+=g;h[7]+=hh;
  }
  std::array<std::uint8_t, 32> out{};
  for (unsigned i=0;i<8u;++i) for(unsigned j=0;j<4u;++j) out[i*4u+j]=static_cast<std::uint8_t>(h[i]>>(24u-8u*j));
  return out;
}

void trace_event(MM6Runtime* rt, std::uint16_t address, std::uint8_t value, bool write, const char* tag) {
  if (!rt) return;
  const std::size_t i = rt->trace_count < rt->trace.size() ? rt->trace_count : rt->trace.size() - 1;
  if (rt->trace_count < rt->trace.size()) {
    rt->trace[i] = MM6BusEvent{rt->scheduler.cpu_cycles, address, value, write, tag};
    ++rt->trace_count;
  }
}

bool mapper_unknown(MM6Runtime* rt, std::uint16_t address, const char* reason) {
  mm6_v06_raise_trap(rt, MM6TrapCode::UnknownMapperState, 0xFF, rt ? rt->cpu.pc : 0, address,
                     "V06/TGROM-MMC3C", reason);
  return false;
}

bool prg_peek(MM6Runtime* rt, std::uint16_t address, std::uint8_t* out) {
  if (!rt || !out) return false;
  if (!rt->prg_rom || rt->prg_rom_size != kPrgBytes) {
    mm6_v06_raise_trap(rt, MM6TrapCode::RomNotAttached, 0xFF, rt->cpu.pc, address,
                       "V01/V06", "exact external 512 KiB PRG payload is not attached");
    return false;
  }
  std::uint8_t bank = 0;
  if (!mm6_v06_resolve_prg_bank(rt, address, &bank)) return false;
  const std::size_t off = static_cast<std::size_t>(bank) * 0x2000u + (address & 0x1FFFu);
  *out = rt->prg_rom[off];
  return true;
}

bool push(MM6Runtime* rt, std::uint8_t value, const char* tag) {
  const std::uint16_t addr = static_cast<std::uint16_t>(0x0100u | rt->cpu.sp);
  if (!mm6_v06_cpu_write(rt, addr, value, tag)) return false;
  rt->cpu.sp = static_cast<std::uint8_t>(rt->cpu.sp - 1u);
  return true;
}


MM6ExecResult service_interrupt(MM6Runtime* rt, bool nmi) {
  if (!rt) return MM6ExecResult::Trap;
  std::uint8_t ignored = 0;
  // Seven-cycle 2A03 interrupt entry. The two leading reads are cycle-visible,
  // but their bytes do not select an opcode implementation.
  if (!mm6_v06_cpu_read(rt, rt->cpu.pc, "INTERRUPT_DUMMY_OPCODE_READ", &ignored)) return MM6ExecResult::Trap;
  if (!mm6_v06_cpu_read(rt, rt->cpu.pc, "INTERRUPT_DUMMY_READ", &ignored)) return MM6ExecResult::Trap;
  if (!push(rt, static_cast<std::uint8_t>(rt->cpu.pc >> 8), "INTERRUPT_STACK_PCH")) return MM6ExecResult::Trap;
  if (!push(rt, static_cast<std::uint8_t>(rt->cpu.pc), "INTERRUPT_STACK_PCL")) return MM6ExecResult::Trap;
  const std::uint8_t pushed_p = static_cast<std::uint8_t>((rt->cpu.p | MM6Runtime::FlagU) & ~MM6Runtime::FlagB);
  if (!push(rt, pushed_p, "INTERRUPT_STACK_STATUS")) return MM6ExecResult::Trap;
  rt->cpu.p = static_cast<std::uint8_t>((rt->cpu.p | MM6Runtime::FlagI | MM6Runtime::FlagU) & ~MM6Runtime::FlagB);

  const std::uint16_t vector = nmi ? 0xFFFAu : 0xFFFEu;
  std::uint8_t lo = 0, hi = 0;
  if (!mm6_v06_cpu_read(rt, vector, nmi ? "NMI_VECTOR_LOW" : "IRQ_VECTOR_LOW", &lo)) return MM6ExecResult::Trap;
  if (!mm6_v06_cpu_read(rt, static_cast<std::uint16_t>(vector + 1u), nmi ? "NMI_VECTOR_HIGH" : "IRQ_VECTOR_HIGH", &hi)) return MM6ExecResult::Trap;
  rt->cpu.pc = static_cast<std::uint16_t>(lo | (static_cast<std::uint16_t>(hi) << 8));
  if (nmi) rt->cpu.nmi_pending = false;
  return MM6ExecResult::Continue;
}
} // namespace

const char* mm6_v06_trap_code_name(MM6TrapCode code) {
  switch (code) {
    case MM6TrapCode::None: return "none";
    case MM6TrapCode::DispatchMiss: return "dispatch_miss";
    case MM6TrapCode::UnresolvedBoundary: return "unresolved_boundary";
    case MM6TrapCode::StaticIdentityMismatch: return "static_identity_mismatch";
    case MM6TrapCode::UnknownMapperState: return "unknown_mapper_state";
    case MM6TrapCode::RomNotAttached: return "rom_not_attached";
    case MM6TrapCode::RomIdentityMismatch: return "rom_identity_mismatch";
    case MM6TrapCode::UnsupportedPpuV07: return "unsupported_ppu_v07";
    case MM6TrapCode::UnsupportedPpuTimingV07: return "unsupported_ppu_timing_v07";
    case MM6TrapCode::UnsupportedApuDmaInputV08: return "unsupported_apu_dma_input_v08";
    case MM6TrapCode::UnsupportedCpuOperation: return "unsupported_cpu_operation";
    case MM6TrapCode::BusFault: return "bus_fault";
  }
  return "unknown_trap";
}

MM6ExecResult mm6_v06_raise_trap(MM6Runtime* rt, MM6TrapCode code, std::uint8_t bank,
                                  std::uint16_t pc, std::uint16_t address,
                                  const char* owner, const char* reason) {
  if (!rt) return MM6ExecResult::Trap;
  if (rt->trap.code == MM6TrapCode::None) {
    rt->trap.code = code;
    rt->trap.physical_bank = bank;
    rt->trap.cpu_pc = pc;
    rt->trap.address = address;
    rt->trap.owner = owner ? owner : "";
    rt->trap.reason = reason ? reason : "";
  }
  return MM6ExecResult::Trap;
}

void mm6_v06_clear_trap(MM6Runtime* rt) {
  if (rt) rt->trap = {};
}

void mm6_v06_clear_trace(MM6Runtime* rt) {
  if (!rt) return;
  rt->trace_count = 0;
  rt->trace.fill({});
}

void mm6_v06_initialize(MM6Runtime* rt) {
  if (!rt) return;
  *rt = MM6Runtime{};
  rt->cpu.sp = 0xFD;
  rt->cpu.p = static_cast<std::uint8_t>(MM6Runtime::FlagI | MM6Runtime::FlagU);
  mm6_v07_ppu_reset(rt);
  mm6_v08_apu_reset(rt);
}

bool mm6_v06_attach_prg_payload(MM6Runtime* rt, const std::uint8_t* prg, std::size_t bytes) {
  if (!rt || !prg || bytes != kPrgBytes) {
    if (rt) mm6_v06_raise_trap(rt, MM6TrapCode::RomNotAttached, 0xFF, rt->cpu.pc, 0,
                               "V01/V06", "PRG payload must be exactly 524288 external bytes");
    return false;
  }
  if (sha256(prg, bytes) != kExpectedPrgSha256) {
    mm6_v06_raise_trap(rt, MM6TrapCode::RomIdentityMismatch, 0xFF, rt->cpu.pc, 0,
                       "V01/V06", "external PRG payload SHA-256 does not match the sealed Mega Man 6 USA authority");
    return false;
  }
  rt->prg_rom = prg;
  rt->prg_rom_size = bytes;
  return true;
}

void mm6_v06_scheduler_cpu_cycle(MM6Runtime* rt) {
  if (!rt) return;
  ++rt->scheduler.cpu_cycles;
  ++rt->scheduler.apu_ticks;
  ++rt->scheduler.dma_ticks;
  mm6_v08_apu_step_cpu_cycle(rt);
  for (unsigned i = 0; i < 3u; ++i) {
    mm6_v07_ppu_step_dot(rt);
    ++rt->scheduler.ppu_ticks;
    rt->scheduler.master_ticks += 4u;
  }
  if (rt->apu.dmc.dma_pending && !rt->dma.dmc_servicing) {
    mm6_v08_service_pending_dmc_dma(rt);
  }
}

bool mm6_v06_resolve_prg_bank(MM6Runtime* rt, std::uint16_t address, std::uint8_t* physical_bank) {
  if (!rt || !physical_bank || address < 0x8000u) {
    if (rt) mm6_v06_raise_trap(rt, MM6TrapCode::BusFault, 0xFF, rt->cpu.pc, address,
                               "V06/CPU-BUS", "PRG bank resolution requested outside $8000-$FFFF");
    return false;
  }
  if (address >= 0xE000u) {
    *physical_bank = kFixedLastBank;
    return true;
  }
  if (address >= 0xA000u && address < 0xC000u) {
    if (!rt->mapper.bank_register_known[7]) return mapper_unknown(rt, address, "MMC3 R7 is unknown for $A000-$BFFF mapping");
    *physical_bank = static_cast<std::uint8_t>(rt->mapper.bank_registers[7] & 0x3Fu);
    return true;
  }
  if (!rt->mapper.bank_select_known) return mapper_unknown(rt, address, "MMC3 PRG mode is unknown");
  const bool mode1 = (rt->mapper.bank_select & 0x40u) != 0;
  if (address < 0xA000u) {
    if (mode1) {
      *physical_bank = kFixedSecondLastBank;
      return true;
    }
    if (!rt->mapper.bank_register_known[6]) return mapper_unknown(rt, address, "MMC3 R6 is unknown for mode-0 $8000-$9FFF mapping");
    *physical_bank = static_cast<std::uint8_t>(rt->mapper.bank_registers[6] & 0x3Fu);
    return true;
  }
  // $C000-$DFFF
  if (!mode1) {
    *physical_bank = kFixedSecondLastBank;
    return true;
  }
  if (!rt->mapper.bank_register_known[6]) return mapper_unknown(rt, address, "MMC3 R6 is unknown for mode-1 $C000-$DFFF mapping");
  *physical_bank = static_cast<std::uint8_t>(rt->mapper.bank_registers[6] & 0x3Fu);
  return true;
}

bool mm6_v06_resolve_chr_page(MM6Runtime* rt, std::uint16_t ppu_address, std::uint8_t* physical_page) {
  if (!rt || !physical_page || ppu_address >= 0x2000u) {
    if (rt) mm6_v06_raise_trap(rt, MM6TrapCode::BusFault, 0xFF, rt->cpu.pc, ppu_address,
                               "V06/TGROM-MMC3C", "CHR page resolution requires PPU $0000-$1FFF");
    return false;
  }
  if (!rt->mapper.bank_select_known) return mapper_unknown(rt, ppu_address, "MMC3 CHR inversion mode is unknown");
  const std::uint8_t slot = static_cast<std::uint8_t>(ppu_address >> 10);
  const bool inv = (rt->mapper.bank_select & 0x80u) != 0;
  std::uint8_t reg = 0;
  bool odd = false;
  if (!inv) {
    if (slot <= 1) { reg = 0; odd = slot == 1; }
    else if (slot <= 3) { reg = 1; odd = slot == 3; }
    else reg = static_cast<std::uint8_t>(slot - 2); // 4->2 .. 7->5
  } else {
    if (slot <= 3) reg = static_cast<std::uint8_t>(slot + 2); // 0->2 .. 3->5
    else if (slot <= 5) { reg = 0; odd = slot == 5; }
    else { reg = 1; odd = slot == 7; }
  }
  if (!rt->mapper.bank_register_known[reg]) return mapper_unknown(rt, ppu_address, "required MMC3 CHR register is unknown");
  std::uint8_t v = rt->mapper.bank_registers[reg];
  if (reg <= 1) v = static_cast<std::uint8_t>((v & 0xFEu) | (odd ? 1u : 0u));
  *physical_page = static_cast<std::uint8_t>(v & 0x07u); // 8 KiB TGROM CHR RAM wraps modulo 8 pages.
  return true;
}

bool mm6_v06_mapper_write(MM6Runtime* rt, std::uint16_t address, std::uint8_t value) {
  if (!rt || address < 0x8000u) {
    if (rt) mm6_v06_raise_trap(rt, MM6TrapCode::BusFault, 0xFF, rt->cpu.pc, address,
                               "V06/TGROM-MMC3C", "MMC3 write requested outside $8000-$FFFF");
    return false;
  }
  switch (address & 0xE001u) {
    case 0x8000u:
      rt->mapper.bank_select = value;
      rt->mapper.bank_select_known = true;
      return true;
    case 0x8001u: {
      if (!rt->mapper.bank_select_known) return mapper_unknown(rt, address, "$8001 write requires a known $8000 register selector");
      const std::uint8_t reg = static_cast<std::uint8_t>(rt->mapper.bank_select & 0x07u);
      if (reg <= 1) value = static_cast<std::uint8_t>(value & 0xFEu);
      rt->mapper.bank_registers[reg] = value;
      rt->mapper.bank_register_known[reg] = true;
      return true;
    }
    case 0xA000u:
      rt->mapper.mirroring_bit = static_cast<std::uint8_t>(value & 1u);
      rt->mapper.mirroring_known = true;
      return true;
    case 0xA001u:
      rt->mapper.ram_control = value;
      rt->mapper.ram_control_known = true;
      return true; // TGROM has no PRG RAM regardless of this latch.
    case 0xC000u:
      rt->mapper.irq_latch = value;
      rt->mapper.irq_latch_known = true;
      return true;
    case 0xC001u:
      rt->mapper.irq_counter = 0;
      rt->mapper.irq_counter_known = true;
      rt->mapper.irq_reload = true;
      rt->mapper.irq_reload_known = true;
      return true;
    case 0xE000u:
      rt->mapper.irq_enabled = false;
      rt->mapper.irq_enabled_known = true;
      rt->mapper.irq_pending = false;
      rt->mapper.irq_pending_known = true;
      return true;
    case 0xE001u:
      rt->mapper.irq_enabled = true;
      rt->mapper.irq_enabled_known = true;
      return true;
  }
  return false;
}

bool mm6_v06_mapper_observe_ppu_address(MM6Runtime* rt, std::uint16_t ppu_address) {
  if (!rt || ppu_address > 0x3FFFu) {
    if (rt) mm6_v06_raise_trap(rt, MM6TrapCode::BusFault, 0xFF, rt->cpu.pc, ppu_address,
                               "V06/TGROM-MMC3C", "PPU address must be 14-bit for MMC3 A12 observation");
    return false;
  }
  const bool high = (ppu_address & 0x1000u) != 0;
  if (!high) {
    if (!rt->mapper.a12_low_valid) {
      rt->mapper.a12_low_valid = true;
      rt->mapper.a12_low_since_cpu_cycle = rt->scheduler.cpu_cycles;
      rt->mapper.a12_low_since_ppu_tick = rt->scheduler.ppu_ticks;
    }
    return true;
  }
  if (!rt->mapper.a12_low_valid) return true;
  const std::uint64_t low_for = rt->scheduler.ppu_ticks - rt->mapper.a12_low_since_ppu_tick;
  rt->mapper.a12_low_valid = false;
  if (low_for < 8u) return true;

  if (!rt->mapper.irq_counter_known || !rt->mapper.irq_latch_known || !rt->mapper.irq_reload_known ||
      !rt->mapper.irq_enabled_known || !rt->mapper.irq_pending_known) {
    return mapper_unknown(rt, ppu_address, "qualified MMC3 A12 edge reached with unknown IRQ state");
  }
  if (rt->mapper.irq_counter == 0 || rt->mapper.irq_reload) {
    rt->mapper.irq_counter = rt->mapper.irq_latch;
  } else {
    rt->mapper.irq_counter = static_cast<std::uint8_t>(rt->mapper.irq_counter - 1u);
  }
  if (rt->mapper.irq_counter == 0 && rt->mapper.irq_enabled) rt->mapper.irq_pending = true; // MMC3B/C behavior.
  rt->mapper.irq_reload = false;
  return true;
}

bool mm6_v06_cpu_read(MM6Runtime* rt, std::uint16_t address, const char* tag, std::uint8_t* value) {
  if (!rt || !value) return false;
  rt->dma.cpu_access_is_read = true;
  rt->dma.cpu_access_address = address;
  mm6_v06_scheduler_cpu_cycle(rt);
  std::uint8_t v = rt->cpu_open_bus;
  bool ok = true;
  if (address < 0x2000u) {
    v = rt->internal_ram[address & 0x07FFu];
  } else if (address < 0x4000u) {
    ok = mm6_v07_ppu_cpu_read(rt, address, &v);
  } else if (address <= 0x4017u) {
    ok = mm6_v08_apu_cpu_read(rt, address, &v);
  } else if (address <= 0x7FFFu) {
    // $4018-$401F test mode and TGROM $4020-$7FFF have no populated readable target here.
    v = rt->cpu_open_bus;
  } else {
    ok = prg_peek(rt, address, &v);
  }
  rt->dma.cpu_access_is_read = false;
  if (ok) rt->cpu_open_bus = v;
  trace_event(rt, address, v, false, tag);
  *value = v;
  return ok && rt->trap.code == MM6TrapCode::None;
}

bool mm6_v06_cpu_write(MM6Runtime* rt, std::uint16_t address, std::uint8_t value, const char* tag) {
  if (!rt) return false;
  rt->dma.cpu_access_is_read = false;
  rt->dma.cpu_access_address = address;
  mm6_v06_scheduler_cpu_cycle(rt);
  rt->cpu_open_bus = value;
  bool ok = true;
  if (address < 0x2000u) {
    rt->internal_ram[address & 0x07FFu] = value;
  } else if (address < 0x4000u) {
    ok = mm6_v07_ppu_cpu_write(rt, address, value);
  } else if (address == 0x4014u) {
    ok = mm6_v08_oam_dma(rt, value);
  } else if (address <= 0x4017u) {
    ok = mm6_v08_apu_cpu_write(rt, address, value);
  } else if (address < 0x8000u) {
    // No TGROM PRG RAM and no expansion hardware in $4020-$7FFF.
  } else {
    ok = mm6_v06_mapper_write(rt, address, value);
  }
  trace_event(rt, address, value, true, tag);
  return ok && rt->trap.code == MM6TrapCode::None;
}

bool mm6_v06_cold_reset(MM6Runtime* rt) {
  if (!rt) return false;
  const std::uint8_t* prg = rt->prg_rom;
  const std::size_t prg_size = rt->prg_rom_size;
  mm6_v06_initialize(rt);
  rt->prg_rom = prg;
  rt->prg_rom_size = prg_size;
  if (!prg || prg_size != kPrgBytes) {
    mm6_v06_raise_trap(rt, MM6TrapCode::RomNotAttached, 0xFF, 0, 0,
                       "V01/V06", "cold reset requires the exact external PRG payload to be attached first");
    return false;
  }
  // Preserve physical-power uncertainty for all MMC3 latches. Only the fixed final
  // PRG bank is used to obtain RESET; reset code itself establishes later state.
  rt->mapper = MM6MapperState{};
  rt->cpu = MM6CpuState{};
  rt->cpu.sp = 0xFD;
  rt->cpu.p = static_cast<std::uint8_t>(MM6Runtime::FlagI | MM6Runtime::FlagU);
  rt->scheduler = {};
  for (int i = 0; i < 8; ++i) mm6_v06_scheduler_cpu_cycle(rt);
  const std::size_t vec = static_cast<std::size_t>(kFixedLastBank) * 0x2000u + 0x1FFCu;
  rt->cpu.pc = static_cast<std::uint16_t>(prg[vec] | (static_cast<std::uint16_t>(prg[vec + 1]) << 8));
  return true;
}

MM6ExecResult mm6_v06_service_pending_interrupt(MM6Runtime* rt) {
  if (!rt) return MM6ExecResult::Trap;
  if (rt->trap.code != MM6TrapCode::None) return MM6ExecResult::Trap;
  if (rt->cpu.nmi_pending) return service_interrupt(rt, true);
  if ((rt->cpu.p & MM6Runtime::FlagI) != 0) return MM6ExecResult::Continue;
  // IRQ sources are wire-ORed. A known asserted APU IRQ is sufficient to service
  // the IRQ even if the mapper line has not yet become construction-known.
  if (rt->cpu.apu_irq_pending) return service_interrupt(rt, false);
  if (!rt->mapper.irq_pending_known) {
    return mm6_v06_raise_trap(rt, MM6TrapCode::UnknownMapperState, 0xFF, rt->cpu.pc, 0xE000u,
                              "V06/TGROM-MMC3C", "IRQ line queried while mapper pending state is unknown");
  }
  if (rt->mapper.irq_pending) return service_interrupt(rt, false);
  return MM6ExecResult::Continue;
}

MM6ExecResult mm6_v06_service_brk(MM6Runtime* rt, std::uint16_t opcode_pc) {
  if (!rt) return MM6ExecResult::Trap;
  std::uint8_t ignored = 0;
  if (!mm6_v06_cpu_read(rt, opcode_pc, "BRK_STATIC_OPCODE_CYCLE", &ignored)) return MM6ExecResult::Trap;
  if (!mm6_v06_cpu_read(rt, static_cast<std::uint16_t>(opcode_pc + 1u), "BRK_PADDING_FETCH", &ignored)) return MM6ExecResult::Trap;
  const std::uint16_t ret = static_cast<std::uint16_t>(opcode_pc + 2u);
  if (!push(rt, static_cast<std::uint8_t>(ret >> 8), "BRK_STACK_PCH")) return MM6ExecResult::Trap;
  if (!push(rt, static_cast<std::uint8_t>(ret), "BRK_STACK_PCL")) return MM6ExecResult::Trap;
  const std::uint8_t pushed_p = static_cast<std::uint8_t>(rt->cpu.p | MM6Runtime::FlagB | MM6Runtime::FlagU);
  if (!push(rt, pushed_p, "BRK_STACK_STATUS")) return MM6ExecResult::Trap;
  rt->cpu.p = static_cast<std::uint8_t>((rt->cpu.p | MM6Runtime::FlagI | MM6Runtime::FlagU) & ~MM6Runtime::FlagB);
  std::uint8_t lo = 0, hi = 0;
  if (!mm6_v06_cpu_read(rt, 0xFFFEu, "BRK_VECTOR_LOW", &lo)) return MM6ExecResult::Trap;
  if (!mm6_v06_cpu_read(rt, 0xFFFFu, "BRK_VECTOR_HIGH", &hi)) return MM6ExecResult::Trap;
  rt->cpu.pc = static_cast<std::uint16_t>(lo | (static_cast<std::uint16_t>(hi) << 8));
  return MM6ExecResult::Continue;
}

MM6ExecResult mm6_trap_dispatch_miss(MM6Runtime* rt, std::uint8_t bank, std::uint16_t pc) {
  return mm6_v06_raise_trap(rt, MM6TrapCode::DispatchMiss, bank, pc, pc,
                            "V04/V05/V06", "no generated physical-bank/PC translation exists");
}

MM6ExecResult mm6_trap_unresolved(MM6Runtime* rt, const char* unresolved_id, std::uint8_t bank, std::uint16_t pc) {
  const MM6ExecResult r = mm6_v06_raise_trap(rt, MM6TrapCode::UnresolvedBoundary, bank, pc, pc,
                                             "V04/V10", "selected control-flow edge remains deliberately unresolved");
  if (rt && unresolved_id) rt->trap.unresolved_id = unresolved_id;
  return r;
}

MM6ExecResult mm6_v06_step(MM6Runtime* rt) {
  if (!rt) return MM6ExecResult::Trap;
  if (rt->trap.code != MM6TrapCode::None) return MM6ExecResult::Trap;
  if (rt->cpu.nmi_pending || ((rt->cpu.p & MM6Runtime::FlagI) == 0 &&
      ((rt->mapper.irq_pending_known && rt->mapper.irq_pending) || rt->cpu.apu_irq_pending))) {
    return mm6_v06_service_pending_interrupt(rt);
  }
  if ((rt->cpu.p & MM6Runtime::FlagI) == 0 && !rt->mapper.irq_pending_known) {
    return mm6_v06_raise_trap(rt, MM6TrapCode::UnknownMapperState, 0xFF, rt->cpu.pc, 0xE000u,
                              "V06/TGROM-MMC3C", "instruction dispatch with interrupts enabled requires known mapper IRQ pending state");
  }
  if (rt->cpu.pc < 0x8000u) {
    return mm6_v06_raise_trap(rt, MM6TrapCode::DispatchMiss, 0xFF, rt->cpu.pc, rt->cpu.pc,
                              "V04/V05/V06", "production translated dispatcher has no proven executable-RAM identity for this PC");
  }
  std::uint8_t bank = 0;
  if (!mm6_v06_resolve_prg_bank(rt, rt->cpu.pc, &bank)) return MM6ExecResult::Trap;
  return mm6_dispatch(rt, bank, rt->cpu.pc);
}
