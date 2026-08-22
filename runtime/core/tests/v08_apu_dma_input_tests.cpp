#include "mm6_v06_runtime.h"
#include "mm6_v08_apu.h"

#include <cstdint>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

namespace {
std::uint64_t checks = 0;
std::uint64_t failures = 0;
#define CHECK(x) do { ++checks; if (!(x)) { ++failures; std::cerr << "FAIL " << __FILE__ << ':' << __LINE__ << " " #x "\n"; } } while (0)

std::vector<std::uint8_t> load_prg(const char* path) {
  std::ifstream f(path, std::ios::binary);
  std::vector<std::uint8_t> raw((std::istreambuf_iterator<char>(f)), {});
  if (raw.size() != 524304u || raw[0] != 'N' || raw[1] != 'E' || raw[2] != 'S' || raw[3] != 0x1A) return {};
  return std::vector<std::uint8_t>(raw.begin() + 16, raw.end());
}

void known_mapper(MM6Runtime& rt) {
  rt.mapper.bank_select = 0;
  rt.mapper.bank_select_known = true;
  for (unsigned i = 0; i < 8; ++i) {
    rt.mapper.bank_registers[i] = static_cast<std::uint8_t>(i);
    rt.mapper.bank_register_known[i] = true;
  }
  rt.mapper.mirroring_bit = 0;
  rt.mapper.mirroring_known = true;
  rt.mapper.irq_latch = 0;
  rt.mapper.irq_latch_known = true;
  rt.mapper.irq_counter = 0;
  rt.mapper.irq_counter_known = true;
  rt.mapper.irq_reload = false;
  rt.mapper.irq_reload_known = true;
  rt.mapper.irq_enabled = false;
  rt.mapper.irq_enabled_known = true;
  rt.mapper.irq_pending = false;
  rt.mapper.irq_pending_known = true;
}

void attach(MM6Runtime& rt, const std::vector<std::uint8_t>& prg) {
  mm6_v06_initialize(&rt);
  CHECK(mm6_v06_attach_prg_payload(&rt, prg.data(), prg.size()));
  known_mapper(rt);
  rt.ppu.allow_full_access = true;
}

void step_cycles(MM6Runtime& rt, unsigned n) {
  for (unsigned i = 0; i < n && rt.trap.code == MM6TrapCode::None; ++i) mm6_v06_scheduler_cpu_cycle(&rt);
}

void test_register_surface_and_status(const std::vector<std::uint8_t>& prg) {
  MM6Runtime rt; attach(rt, prg);
  CHECK(mm6_v06_cpu_write(&rt, 0x4015, 0x1F, "APU_ENABLE"));
  CHECK(rt.apu.pulse1.enabled && rt.apu.pulse2.enabled && rt.apu.triangle.enabled && rt.apu.noise.enabled && rt.apu.dmc.enabled);
  CHECK(mm6_v06_cpu_write(&rt, 0x4000, 0xDF, "P1_ENV"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4001, 0x8A, "P1_SWEEP"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4002, 0x34, "P1_TLO"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4003, 0xF8, "P1_THI"));
  CHECK(rt.apu.pulse1.duty == 3 && rt.apu.pulse1.timer_period == 0x34 && rt.apu.pulse1.length_counter == 30 && rt.apu.pulse1.envelope.start);
  CHECK(rt.apu.pulse1.sweep_enabled && rt.apu.pulse1.sweep_negate && rt.apu.pulse1.sweep_shift == 2);

  CHECK(mm6_v06_cpu_write(&rt, 0x4004, 0x9A, "P2_ENV"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4006, 0x40, "P2_TLO"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4007, 0x20, "P2_THI"));
  CHECK(rt.apu.pulse2.length_counter > 0);

  CHECK(mm6_v06_cpu_write(&rt, 0x4008, 0x85, "TRI_LINEAR"));
  CHECK(mm6_v06_cpu_write(&rt, 0x400A, 0x20, "TRI_TLO"));
  CHECK(mm6_v06_cpu_write(&rt, 0x400B, 0x18, "TRI_THI"));
  CHECK(rt.apu.triangle.control && rt.apu.triangle.linear_reload == 5 && rt.apu.triangle.length_counter > 0 && rt.apu.triangle.linear_reload_flag);

  CHECK(mm6_v06_cpu_write(&rt, 0x400C, 0x1F, "NOISE_ENV"));
  CHECK(mm6_v06_cpu_write(&rt, 0x400E, 0x8F, "NOISE_PERIOD"));
  CHECK(mm6_v06_cpu_write(&rt, 0x400F, 0x28, "NOISE_LEN"));
  CHECK(rt.apu.noise.mode && rt.apu.noise.period_index == 15 && rt.apu.noise.length_counter > 0);

  CHECK(mm6_v06_cpu_write(&rt, 0x4010, 0x8F, "DMC_CTRL"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4011, 0x55, "DMC_DAC"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4012, 0x22, "DMC_ADDR"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4013, 0x03, "DMC_LEN"));
  CHECK(rt.apu.dmc.irq_enabled && !rt.apu.dmc.loop && rt.apu.dmc.rate_index == 15);
  CHECK(rt.apu.dmc.output_level == 0x55 && rt.apu.dmc.sample_address == 0xC880 && rt.apu.dmc.sample_length == 49);

  std::uint8_t st = 0;
  rt.apu.frame.irq_flag = true;
  rt.apu.dmc.irq_flag = true;
  rt.cpu.apu_irq_pending = true;
  CHECK(mm6_v06_cpu_read(&rt, 0x4015, "STATUS", &st));
  CHECK((st & 0x0F) == 0x0F);
  CHECK((st & 0x40) != 0 && (st & 0x80) != 0);
  CHECK(!rt.apu.frame.irq_flag && rt.apu.dmc.irq_flag && rt.cpu.apu_irq_pending);
  CHECK(mm6_v06_cpu_write(&rt, 0x4015, 0x00, "DISABLE_ALL"));
  CHECK(rt.apu.pulse1.length_counter == 0 && rt.apu.pulse2.length_counter == 0 && rt.apu.triangle.length_counter == 0 && rt.apu.noise.length_counter == 0);
  CHECK(!rt.apu.dmc.irq_flag);
}

void test_frame_counter_envelope_sweep(const std::vector<std::uint8_t>& prg) {
  MM6Runtime rt; attach(rt, prg);
  CHECK(mm6_v06_cpu_write(&rt, 0x4015, 0x01, "P1_ENABLE"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4000, 0x02, "P1_DECAY"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4002, 0x40, "P1_PERIOD"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4003, 0x18, "P1_LENGTH"));
  CHECK(rt.apu.pulse1.envelope.start);
  const std::uint8_t len0 = rt.apu.pulse1.length_counter;
  step_cycles(rt, 7458);
  CHECK(!rt.apu.pulse1.envelope.start && rt.apu.pulse1.envelope.decay == 15);
  step_cycles(rt, 7456);
  CHECK(rt.apu.pulse1.length_counter < len0);

  // 4-step frame IRQ assertion and $4015 clear.
  mm6_v08_apu_reset(&rt);
  known_mapper(rt);
  step_cycles(rt, 29828);
  CHECK(rt.apu.frame.irq_flag && rt.cpu.apu_irq_pending);
  std::uint8_t st = 0;
  CHECK(mm6_v08_apu_cpu_read(&rt, 0x4015, &st));
  CHECK((st & 0x40) != 0 && !rt.apu.frame.irq_flag && !rt.cpu.apu_irq_pending);

  // IRQ inhibit is effective immediately; 5-step application clocks quarter+half after 3/4 CPU cycles.
  rt.apu.pulse1.enabled = true;
  rt.apu.pulse1.length_counter = 10;
  rt.apu.pulse1.envelope.start = true;
  CHECK(mm6_v08_apu_cpu_write(&rt, 0x4017, 0xC0));
  CHECK(rt.apu.frame.irq_inhibit && !rt.apu.frame.irq_flag);
  const std::uint8_t before_len = rt.apu.pulse1.length_counter;
  step_cycles(rt, 5);
  CHECK(rt.apu.frame.five_step);
  CHECK(!rt.apu.pulse1.envelope.start);
  CHECK(rt.apu.pulse1.length_counter < before_len);
}

void test_sweep_reload_and_noise_power_phase(const std::vector<std::uint8_t>& prg) {
  MM6Runtime rt; attach(rt, prg);
  CHECK(rt.apu.noise.timer_counter == 0u);
  const auto noise0 = rt.apu.noise.shift_register;
  mm6_v08_apu_step_cpu_cycle(&rt);
  CHECK(rt.apu.noise.shift_register != noise0);

  rt.apu.pulse1.enabled = true;
  rt.apu.pulse1.length_counter = 10;
  rt.apu.pulse1.timer_period = 0x100;
  CHECK(mm6_v08_apu_cpu_write(&rt, 0x4001, 0x81)); // enabled, P=0 => divider period 1, shift 1
  CHECK(rt.apu.pulse1.sweep_period == 1u && rt.apu.pulse1.sweep_reload);
  const auto before = rt.apu.pulse1.timer_period;
  // First half-frame after the register write only consumes the reload flag.
  rt.apu.frame.sequence_cycle = 14912;
  mm6_v08_apu_step_cpu_cycle(&rt);
  CHECK(rt.apu.pulse1.timer_period == before && !rt.apu.pulse1.sweep_reload && rt.apu.pulse1.sweep_divider == 1u);
  // With P=0, the following half-frame applies the sweep.
  rt.apu.frame.sequence_cycle = 14912;
  mm6_v08_apu_step_cpu_cycle(&rt);
  CHECK(rt.apu.pulse1.timer_period == static_cast<std::uint16_t>(before + (before >> 1u)));
}

void test_channel_timers_and_mixer(const std::vector<std::uint8_t>& prg) {
  MM6Runtime rt; attach(rt, prg);
  CHECK(mm6_v06_cpu_write(&rt, 0x4015, 0x0F, "CHANNEL_ENABLE"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4000, 0xDF, "P1_CONST"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4002, 8, "P1_LO"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4003, 0x08, "P1_HI"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4008, 0xFF, "TRI_CTRL"));
  CHECK(mm6_v06_cpu_write(&rt, 0x400A, 2, "TRI_LO"));
  CHECK(mm6_v06_cpu_write(&rt, 0x400B, 0x08, "TRI_HI"));
  CHECK(mm6_v06_cpu_write(&rt, 0x400C, 0x1F, "NOISE_CONST"));
  CHECK(mm6_v06_cpu_write(&rt, 0x400E, 0x00, "NOISE_FAST"));
  CHECK(mm6_v06_cpu_write(&rt, 0x400F, 0x08, "NOISE_LEN"));
  rt.apu.triangle.linear_counter = 127;
  const std::uint16_t lfsr0 = rt.apu.noise.shift_register;
  const std::uint8_t tri0 = rt.apu.triangle.sequence_step;
  step_cycles(rt, 5000);
  CHECK(rt.apu.noise.shift_register != lfsr0);
  CHECK(rt.apu.triangle.sequence_step != tri0);
  CHECK(rt.apu.pulse1.output <= 15 && rt.apu.triangle.output <= 15 && rt.apu.noise.output <= 15);
  CHECK(mm6_v08_audio_available(&rt) >= 100);
  std::vector<std::int16_t> samples(mm6_v08_audio_available(&rt));
  const std::size_t got = mm6_v08_audio_pop(&rt, samples.data(), samples.size());
  CHECK(got == samples.size() && mm6_v08_audio_available(&rt) == 0);
  bool nonzero = false;
  for (auto s : samples) { CHECK(s >= 0); if (s != 0) nonzero = true; }
  CHECK(nonzero);
}

void test_dmc_dma_irq_loop_wrap(const std::vector<std::uint8_t>& prg) {
  MM6Runtime rt; attach(rt, prg);
  CHECK(mm6_v06_cpu_write(&rt, 0x4010, 0x8F, "DMC_IRQ_FAST"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4012, 0x00, "DMC_C000"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4013, 0x00, "DMC_LEN1"));
  const std::uint64_t cyc0 = rt.scheduler.cpu_cycles;
  CHECK(mm6_v06_cpu_write(&rt, 0x4015, 0x10, "DMC_ENABLE"));
  step_cycles(rt, 8);
  CHECK(rt.dma.dmc_fetches == 1);
  CHECK(rt.dma.dmc_stall_cycles >= 3 && rt.dma.dmc_stall_cycles <= 4);
  CHECK(rt.scheduler.cpu_cycles > cyc0 + 8);
  CHECK(rt.apu.dmc.bytes_remaining == 0);
  CHECK(rt.apu.dmc.irq_flag && rt.cpu.apu_irq_pending);
  std::uint8_t st = 0;
  CHECK(mm6_v06_cpu_read(&rt, 0x4015, "DMC_STATUS", &st));
  CHECK((st & 0x80) != 0 && rt.apu.dmc.irq_flag);
  CHECK(mm6_v06_cpu_write(&rt, 0x4015, 0x00, "DMC_DISABLE"));
  CHECK(!rt.apu.dmc.irq_flag);

  // Directly exercise address wrap using the same DMA coordinator.
  rt.apu.dmc.current_address = 0xFFFF;
  rt.apu.dmc.bytes_remaining = 1;
  rt.apu.dmc.sample_buffer_empty = true;
  rt.apu.dmc.dma_pending = true;
  mm6_v08_service_pending_dmc_dma(&rt);
  CHECK(rt.apu.dmc.current_address == 0x8000);

  // Loop restarts sample instead of asserting IRQ.
  rt.apu.dmc.irq_flag = false;
  rt.apu.dmc.irq_enabled = true;
  rt.apu.dmc.loop = true;
  rt.apu.dmc.sample_address = 0xC000;
  rt.apu.dmc.sample_length = 1;
  rt.apu.dmc.current_address = 0xC000;
  rt.apu.dmc.bytes_remaining = 1;
  rt.apu.dmc.sample_buffer_empty = true;
  rt.apu.dmc.dma_pending = true;
  mm6_v08_service_pending_dmc_dma(&rt);
  CHECK(!rt.apu.dmc.irq_flag);
  CHECK(rt.apu.dmc.bytes_remaining == 1 && rt.apu.dmc.current_address == 0xC000);
}

void test_controllers_and_dmc_bit_deletion(const std::vector<std::uint8_t>& prg) {
  MM6Runtime rt; attach(rt, prg);
  mm6_v08_set_controller_mask(&rt, 0, 0xA5); // A,B,Sel,Start,Up,Down,Left,Right LSB-first
  mm6_v08_set_controller_mask(&rt, 1, 0x3C);
  CHECK(mm6_v06_cpu_write(&rt, 0x4016, 1, "PAD_STROBE_HIGH"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4016, 0, "PAD_STROBE_LOW"));
  CHECK(rt.controllers.latch_count >= 2);
  const std::uint8_t latched = rt.controllers.latched_mask[0];
  mm6_v08_set_controller_mask(&rt, 0, 0x00); // must not alter the already-latched low-strobe packet
  CHECK(rt.controllers.latched_mask[0] == latched);
  for (unsigned i = 0; i < 8; ++i) {
    std::uint8_t v = 0; CHECK(mm6_v06_cpu_read(&rt, 0x4016, "PAD_READ", &v));
    CHECK((v & 1u) == ((0xA5u >> i) & 1u));
  }
  std::uint8_t after = 0; CHECK(mm6_v06_cpu_read(&rt, 0x4016, "PAD_AFTER8", &after)); CHECK((after & 1u) == 1u);

  // Strobe high returns current A continuously and does not advance the shift index.
  mm6_v08_set_controller_mask(&rt, 0, 0x01);
  CHECK(mm6_v06_cpu_write(&rt, 0x4016, 1, "PAD_HIGH_AGAIN"));
  const auto idx0 = rt.controllers.shift_index[0];
  std::uint8_t a = 0, b = 0;
  CHECK(mm6_v06_cpu_read(&rt, 0x4016, "PAD_A1", &a)); CHECK(mm6_v06_cpu_read(&rt, 0x4016, "PAD_A2", &b));
  CHECK((a & 1u) == 1u && (b & 1u) == 1u && rt.controllers.shift_index[0] == idx0);

  // DMC DMA beginning on an NES controller read causes one extra serial clock.
  CHECK(mm6_v06_cpu_write(&rt, 0x4016, 0, "PAD_LOW_DMC"));
  mm6_v08_set_controller_mask(&rt, 0, 0x01);
  CHECK(mm6_v06_cpu_write(&rt, 0x4016, 1, "PAD_LATCH1"));
  CHECK(mm6_v06_cpu_write(&rt, 0x4016, 0, "PAD_LATCH0"));
  rt.apu.dmc.current_address = 0xC000;
  rt.apu.dmc.bytes_remaining = 1;
  rt.apu.dmc.sample_buffer_empty = true;
  rt.apu.dmc.dma_pending = true;
  rt.apu.dmc.start_delay = 0;
  std::uint8_t glitched = 0;
  CHECK(mm6_v06_cpu_read(&rt, 0x4016, "PAD_DMC_COLLISION", &glitched));
  CHECK(rt.controllers.dmc_extra_clocks == 1);
  CHECK(rt.controllers.shift_index[0] == 2);
  CHECK((glitched & 1u) == 0u); // A=1 was consumed by the DMC dummy clock; CPU sees B=0.
}

void test_oam_dmc_collision(const std::vector<std::uint8_t>& prg) {
  MM6Runtime rt; attach(rt, prg);
  for (unsigned i = 0; i < 256; ++i) rt.internal_ram[0x200 + i] = static_cast<std::uint8_t>(i ^ 0x5A);
  rt.ppu.oam_addr = 0x20;
  rt.apu.dmc.current_address = 0xC000;
  rt.apu.dmc.bytes_remaining = 1;
  rt.apu.dmc.sample_buffer_empty = true;
  rt.apu.dmc.dma_pending = false;
  rt.apu.dmc.start_delay = 2; // become pending while OAM DMA is already active
  const auto before = rt.scheduler.cpu_cycles;
  CHECK(mm6_v08_oam_dma(&rt, 0x02));
  const auto delta = rt.scheduler.cpu_cycles - before;
  CHECK(rt.dma.oam_transfers == 1 && rt.dma.oam_stall_cycles == delta);
  CHECK(delta >= 513);
  CHECK(rt.dma.dmc_oam_collisions >= 1 && rt.dma.dmc_fetches >= 1);
  for (unsigned i = 0; i < 256; ++i) CHECK(rt.ppu.oam[static_cast<std::uint8_t>(0x20 + i)] == static_cast<std::uint8_t>(i ^ 0x5A));
}

std::vector<std::int16_t> deterministic_audio_run(const std::vector<std::uint8_t>& prg, unsigned cycles, std::uint64_t* dropped) {
  MM6Runtime rt; attach(rt, prg);
  mm6_v08_apu_cpu_write(&rt, 0x4015, 0x0F);
  mm6_v08_apu_cpu_write(&rt, 0x4000, 0xDF);
  mm6_v08_apu_cpu_write(&rt, 0x4002, 0x40);
  mm6_v08_apu_cpu_write(&rt, 0x4003, 0x18);
  mm6_v08_apu_cpu_write(&rt, 0x4008, 0xFF);
  mm6_v08_apu_cpu_write(&rt, 0x400A, 0x20);
  mm6_v08_apu_cpu_write(&rt, 0x400B, 0x18);
  mm6_v08_apu_cpu_write(&rt, 0x400C, 0x1F);
  mm6_v08_apu_cpu_write(&rt, 0x400E, 0x03);
  mm6_v08_apu_cpu_write(&rt, 0x400F, 0x18);
  rt.apu.triangle.linear_counter = 127;
  step_cycles(rt, cycles);
  if (dropped) *dropped = rt.apu.pcm_dropped;
  std::vector<std::int16_t> out(mm6_v08_audio_available(&rt));
  mm6_v08_audio_pop(&rt, out.data(), out.size());
  return out;
}

void test_resampling_reproducibility_and_bounds(const std::vector<std::uint8_t>& prg) {
  std::uint64_t d1 = 0, d2 = 0;
  const auto a = deterministic_audio_run(prg, 100000, &d1);
  const auto b = deterministic_audio_run(prg, 100000, &d2);
  CHECK(a == b && d1 == 0 && d2 == 0);
  CHECK(a.size() >= 2680 && a.size() <= 2682); // 100000 * 48000 / 1789773
  bool nz = false; for (auto s : a) { CHECK(s >= 0 && s <= 32767); if (s) nz = true; } CHECK(nz);
  std::uint64_t dropped = 0;
  const auto bounded = deterministic_audio_run(prg, 200000, &dropped);
  CHECK(bounded.size() == 4096 && dropped > 0);
}

void test_no_v08_trap_and_cold_boot_frontier(const std::vector<std::uint8_t>& prg) {
  MM6Runtime rt; attach(rt, prg);
  for (std::uint16_t a = 0x4000; a <= 0x4017; ++a) {
    if (a == 0x4014) continue;
    mm6_v06_clear_trap(&rt);
    CHECK(mm6_v06_cpu_write(&rt, a, 0, "V08_SURFACE"));
    CHECK(rt.trap.code != MM6TrapCode::UnsupportedApuDmaInputV08);
  }

  MM6Runtime boot; mm6_v06_initialize(&boot); CHECK(mm6_v06_attach_prg_payload(&boot, prg.data(), prg.size())); CHECK(mm6_v06_cold_reset(&boot));
  std::uint64_t steps = 0; MM6ExecResult r = MM6ExecResult::Continue;
  while (r == MM6ExecResult::Continue && steps < 200000u) { r = mm6_v06_step(&boot); ++steps; }
  CHECK(boot.trap.code != MM6TrapCode::UnsupportedApuDmaInputV08);
  std::cout << "V08_COLD_BOOT_FRONTIER steps=" << steps << " trap=" << mm6_v06_trap_code_name(boot.trap.code)
            << " pc=$" << std::hex << boot.trap.cpu_pc << " addr=$" << boot.trap.address << std::dec
            << " owner=" << boot.trap.owner << " reason=" << boot.trap.reason << "\n";
}
}

int main(int argc, char** argv) {
  if (argc != 2) { std::cerr << "usage: v08_apu_dma_input_tests exact-rom.nes\n"; return 2; }
  auto prg = load_prg(argv[1]); if (prg.size() != 524288u) { std::cerr << "bad exact rom\n"; return 2; }
  test_register_surface_and_status(prg);
  test_frame_counter_envelope_sweep(prg);
  test_sweep_reload_and_noise_power_phase(prg);
  test_channel_timers_and_mixer(prg);
  test_dmc_dma_irq_loop_wrap(prg);
  test_controllers_and_dmc_bit_deletion(prg);
  test_oam_dmc_collision(prg);
  test_resampling_reproducibility_and_bounds(prg);
  test_no_v08_trap_and_cold_boot_frontier(prg);
  std::cout << "V08 APU/DMA/input tests: checks=" << checks << " failures=" << failures << "\n";
  return failures ? 1 : 0;
}
