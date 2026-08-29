#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <string>

#include "mm6_v05_contract.h"
#include "mm6_static_core.h"

enum class MM6TrapCode : std::uint16_t {
  None = 0,
  DispatchMiss,
  UnresolvedBoundary,
  StaticIdentityMismatch,
  UnknownMapperState,
  RomNotAttached,
  RomIdentityMismatch,
  UnsupportedPpuV07,
  UnsupportedPpuTimingV07,
  UnsupportedApuDmaInputV08,
  UnsupportedCpuOperation,
  BusFault,
};

struct MM6TrapInfo {
  MM6TrapCode code = MM6TrapCode::None;
  std::uint8_t physical_bank = 0xFF;
  std::uint16_t cpu_pc = 0;
  std::uint16_t address = 0;
  std::string unresolved_id;
  std::string owner;
  std::string reason;
};

struct MM6BusEvent {
  std::uint64_t cpu_cycle = 0;
  std::uint16_t address = 0;
  std::uint8_t value = 0;
  bool write = false;
  const char* tag = nullptr;
};

struct MM6CpuState {
  std::uint8_t a = 0;
  std::uint8_t x = 0;
  std::uint8_t y = 0;
  std::uint8_t sp = 0xFD;
  std::uint8_t p = 0x24;
  std::uint16_t pc = 0;
  bool nmi_pending = false;
  bool apu_irq_pending = false; // V08 owns generation; V06 owns priority routing.
};

struct MM6MapperState {
  std::uint8_t bank_select = 0;
  bool bank_select_known = false;
  std::array<std::uint8_t, 8> bank_registers{};
  std::array<bool, 8> bank_register_known{};
  std::uint8_t mirroring_bit = 0;
  bool mirroring_known = false;
  std::uint8_t ram_control = 0;
  bool ram_control_known = false;
  std::uint8_t irq_latch = 0;
  bool irq_latch_known = false;
  std::uint8_t irq_counter = 0;
  bool irq_counter_known = false;
  bool irq_reload = false;
  bool irq_reload_known = false;
  bool irq_enabled = false;
  bool irq_enabled_known = false;
  bool irq_pending = false;
  bool irq_pending_known = false;
  bool a12_low_valid = false;
  std::uint64_t a12_low_since_cpu_cycle = 0; // retained for V06 receipt compatibility
  std::uint64_t a12_low_since_ppu_tick = 0;   // V07 dot-accurate MMC3 A12 filter authority
};

struct MM6SchedulerState {
  std::uint64_t cpu_cycles = 0;
  std::uint64_t ppu_ticks = 0;
  std::uint64_t apu_ticks = 0;
  std::uint64_t dma_ticks = 0;
  std::uint64_t master_ticks = 0;
};


struct MM6PpuSpriteUnit {
  std::uint8_t y = 0xFF;
  std::uint8_t tile = 0;
  std::uint8_t attributes = 0;
  std::uint8_t x = 0;
  std::uint8_t oam_index = 0xFF;
  std::uint8_t pattern_low = 0;
  std::uint8_t pattern_high = 0;
  bool sprite0 = false;
};

struct MM6PpuState {
  std::uint8_t ctrl = 0;
  std::uint8_t mask = 0;
  std::uint8_t status = 0;
  std::uint8_t oam_addr = 0;
  std::uint8_t open_bus = 0;
  std::uint8_t read_buffer = 0;
  std::uint16_t v = 0;
  std::uint16_t t = 0;
  std::uint8_t fine_x = 0;
  bool write_toggle = false;

  // NTSC 2C02 construction timing. Power-on begins at pre-render dot 340,
  // matching the pinned MesenCE oracle's deterministic non-randomized state.
  std::int16_t scanline = -1;
  std::uint16_t dot = 340;
  std::uint64_t frame = 1;
  bool odd_frame = true;
  bool frame_ready = false;
  std::uint64_t completed_frames = 0;
  bool allow_full_access = false;
  // $2002 read one PPU dot before vblank suppresses that frame's vblank flag/NMI.
  bool prevent_vblank_flag = false;

  std::array<std::uint8_t, 256> oam{};
  std::array<std::uint8_t, 32> secondary_oam{};
  std::array<std::uint8_t, 32> palette{};

  std::uint16_t bg_pattern_low_shift = 0;
  std::uint16_t bg_pattern_high_shift = 0;
  std::uint16_t bg_attr_low_shift = 0;
  std::uint16_t bg_attr_high_shift = 0;
  std::uint8_t next_nt = 0;
  std::uint8_t next_attr = 0;
  std::uint8_t next_pattern_low = 0;
  std::uint8_t next_pattern_high = 0;

  std::array<MM6PpuSpriteUnit, 8> sprites{};
  std::array<MM6PpuSpriteUnit, 8> next_sprites{};
  std::uint8_t sprite_count = 0;
  std::uint8_t next_sprite_count = 0;

  // Stable copied indexed frame surface. Values retain the 6-bit NES palette
  // index; BGRA conversion is performed by the V07 copy API.
  std::array<std::uint8_t, 256u * 240u> frame_indexed{};
};


struct MM6ApuEnvelopeState {
  bool constant_volume = false;
  bool loop = false;
  std::uint8_t volume = 0;
  bool start = false;
  std::uint8_t divider = 0;
  std::uint8_t decay = 0;
};

struct MM6ApuPulseState {
  bool enabled = false;
  std::uint8_t duty = 0;
  std::uint8_t duty_step = 0;
  std::uint16_t timer_period = 0;
  std::uint16_t timer_counter = 0;
  std::uint8_t length_counter = 0;
  MM6ApuEnvelopeState envelope{};
  bool sweep_enabled = false;
  std::uint8_t sweep_period = 0;
  bool sweep_negate = false;
  std::uint8_t sweep_shift = 0;
  bool sweep_reload = false;
  std::uint8_t sweep_divider = 0;
  std::uint8_t output = 0;
};

struct MM6ApuTriangleState {
  bool enabled = false;
  bool control = false;
  std::uint8_t linear_reload = 0;
  std::uint8_t linear_counter = 0;
  bool linear_reload_flag = false;
  std::uint16_t timer_period = 0;
  std::uint16_t timer_counter = 0;
  std::uint8_t length_counter = 0;
  std::uint8_t sequence_step = 0;
  std::uint8_t output = 0;
};

struct MM6ApuNoiseState {
  bool enabled = false;
  bool mode = false;
  std::uint8_t period_index = 0;
  std::uint16_t timer_period = 3;
  std::uint16_t timer_counter = 3;
  std::uint16_t shift_register = 1;
  std::uint8_t length_counter = 0;
  MM6ApuEnvelopeState envelope{};
  std::uint8_t output = 0;
};

struct MM6ApuDmcState {
  bool enabled = false;
  bool irq_enabled = false;
  bool loop = false;
  std::uint8_t rate_index = 0;
  std::uint16_t timer_period = 427;
  std::uint16_t timer_counter = 427;
  std::uint8_t output_level = 0;
  std::uint16_t sample_address = 0xC000;
  std::uint16_t sample_length = 1;
  std::uint16_t current_address = 0;
  std::uint16_t bytes_remaining = 0;
  std::uint8_t sample_buffer = 0;
  bool sample_buffer_empty = true;
  std::uint8_t shift_register = 0;
  std::uint8_t bits_remaining = 8;
  bool silence = true;
  bool irq_flag = false;
  bool dma_pending = false;
  std::uint8_t start_delay = 0;
  std::uint8_t disable_delay = 0;
};

struct MM6ApuFrameCounterState {
  bool five_step = false;
  bool irq_inhibit = false;
  bool irq_flag = false;
  std::uint32_t sequence_cycle = 0;
  std::int8_t write_delay = -1;
  std::uint8_t pending_value = 0;
};

struct MM6ApuState {
  MM6ApuPulseState pulse1{};
  MM6ApuPulseState pulse2{};
  MM6ApuTriangleState triangle{};
  MM6ApuNoiseState noise{};
  MM6ApuDmcState dmc{};
  MM6ApuFrameCounterState frame{};
  std::uint64_t cpu_cycle = 0;
  std::uint64_t sample_phase = 0;
  static constexpr std::uint32_t SampleRate = MM6_AUDIO_SAMPLE_RATE;
  static constexpr std::uint32_t CpuRateNtsc = 1789773;
  std::array<std::int16_t, 4096> pcm{};
  std::size_t pcm_read = 0;
  std::size_t pcm_write = 0;
  std::size_t pcm_count = 0;
  std::uint64_t pcm_dropped = 0;
  std::int16_t last_mixed_sample = 0;
};

struct MM6ControllerState {
  std::array<std::uint8_t, 2> host_mask{};
  std::array<std::uint8_t, 2> latched_mask{};
  std::array<std::uint8_t, 2> shift_index{};
  bool strobe = false;
  std::uint64_t latch_count = 0;
  std::uint64_t read_count = 0;
  std::uint64_t dmc_extra_clocks = 0;
};

struct MM6DmaState {
  bool oam_active = false;
  bool dmc_servicing = false;
  bool cpu_access_is_read = false;
  std::uint16_t cpu_access_address = 0;
  std::uint64_t oam_transfers = 0;
  std::uint64_t oam_stall_cycles = 0;
  std::uint64_t dmc_fetches = 0;
  std::uint64_t dmc_stall_cycles = 0;
  std::uint64_t dmc_oam_collisions = 0;
};

struct MM6ReturnGuard {
  bool valid = false;
  std::uint16_t continuation_pc = 0;
  std::string unresolved_id;
};

struct MM6Runtime {
  static constexpr std::uint8_t FlagC = 0x01;
  static constexpr std::uint8_t FlagZ = 0x02;
  static constexpr std::uint8_t FlagI = 0x04;
  static constexpr std::uint8_t FlagD = 0x08;
  static constexpr std::uint8_t FlagB = 0x10;
  static constexpr std::uint8_t FlagU = 0x20;
  static constexpr std::uint8_t FlagV = 0x40;
  static constexpr std::uint8_t FlagN = 0x80;

  MM6CpuState cpu{};
  MM6MapperState mapper{};
  MM6SchedulerState scheduler{};
  std::array<std::uint8_t, 0x800> internal_ram{};
  std::array<std::uint8_t, 0x2000> chr_ram{};
  std::array<std::uint8_t, 0x800> ciram{};
  MM6PpuState ppu{};
  MM6ApuState apu{};
  MM6ControllerState controllers{};
  MM6DmaState dma{};
  std::uint8_t cpu_open_bus = 0;

  const std::uint8_t* prg_rom = nullptr;
  std::size_t prg_rom_size = 0;

  MM6TrapInfo trap{};
  std::array<MM6BusEvent, 128> trace{};
  std::size_t trace_count = 0;
  std::array<MM6ReturnGuard, 256> return_guards{}; // diagnostic side-band indexed by SP after JSR pushes.
  bool stack_dispatch_guard_active = false;
  std::array<std::uint16_t, 32> stack_dispatch_targets{};
  std::size_t stack_dispatch_target_count = 0;
  std::string stack_dispatch_unresolved_id;
};

// V06 lifecycle and instruction coordinator. These are construction interfaces;
// V09 will replace them with the opaque public core API.
void mm6_v06_initialize(MM6Runtime* rt);
bool mm6_v06_attach_prg_payload(MM6Runtime* rt, const std::uint8_t* prg, std::size_t bytes);
bool mm6_v06_cold_reset(MM6Runtime* rt);
MM6ExecResult mm6_v06_step(MM6Runtime* rt);
void mm6_v06_clear_trap(MM6Runtime* rt);
void mm6_v06_clear_trace(MM6Runtime* rt);
MM6ExecResult mm6_v06_raise_trap(MM6Runtime* rt, MM6TrapCode code, std::uint8_t bank, std::uint16_t pc, std::uint16_t address, const char* owner, const char* reason);

// Common scheduler/bus authority used by translated helpers and later V07/V08 modules.
void mm6_v06_scheduler_cpu_cycle(MM6Runtime* rt);
bool mm6_v06_cpu_read(MM6Runtime* rt, std::uint16_t address, const char* tag, std::uint8_t* value);
bool mm6_v06_cpu_write(MM6Runtime* rt, std::uint16_t address, std::uint8_t value, const char* tag);

// Target TGROM/MMC3C runtime authority.
bool mm6_v06_resolve_prg_bank(MM6Runtime* rt, std::uint16_t address, std::uint8_t* physical_bank);
bool mm6_v06_resolve_chr_page(MM6Runtime* rt, std::uint16_t ppu_address, std::uint8_t* physical_page);
bool mm6_v06_mapper_write(MM6Runtime* rt, std::uint16_t address, std::uint8_t value);
bool mm6_v06_mapper_observe_ppu_address(MM6Runtime* rt, std::uint16_t ppu_address);

// Interrupt entry is part of V06 even though PPU/APU line generation is completed later.
MM6ExecResult mm6_v06_service_pending_interrupt(MM6Runtime* rt);
MM6ExecResult mm6_v06_service_brk(MM6Runtime* rt, std::uint16_t opcode_pc);

// Test/audit helpers; they do not choose opcode semantics.
const char* mm6_v06_trap_code_name(MM6TrapCode code);
