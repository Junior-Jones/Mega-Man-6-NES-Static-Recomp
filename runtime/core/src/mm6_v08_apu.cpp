#include "mm6_v08_apu.h"

#include "mm6_v06_runtime.h"
#include "mm6_v07_ppu.h"

#include <algorithm>
#include <array>
#include <cstdint>

namespace {
constexpr std::array<std::uint8_t, 32> kLengthTable = {
  10,254,20,2,40,4,80,6,160,8,60,10,14,12,26,14,
  12,16,24,18,48,20,96,22,192,24,72,26,16,28,32,30
};
constexpr std::array<std::uint16_t, 16> kNoisePeriods = {
  4,8,16,32,64,96,128,160,202,254,380,508,762,1016,2034,4068
};
constexpr std::array<std::uint16_t, 16> kDmcPeriods = {
  428,380,340,320,286,254,226,214,190,160,142,128,106,84,72,54
};
constexpr std::array<std::array<std::uint8_t,8>,4> kDuty = {{
  {{0,0,0,0,0,0,0,1}},
  {{0,0,0,0,0,0,1,1}},
  {{0,0,0,0,1,1,1,1}},
  {{1,1,1,1,1,1,0,0}},
}};
constexpr std::array<std::uint8_t,32> kTriangle = {
  15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,
  0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15
};

void update_irq_line(MM6Runtime* rt) {
  rt->cpu.apu_irq_pending = rt->apu.frame.irq_flag || rt->apu.dmc.irq_flag;
}

void envelope_write(MM6ApuEnvelopeState& e, std::uint8_t value) {
  e.loop = (value & 0x20u) != 0;
  e.constant_volume = (value & 0x10u) != 0;
  e.volume = static_cast<std::uint8_t>(value & 0x0Fu);
}

void envelope_restart(MM6ApuEnvelopeState& e) { e.start = true; }

void clock_envelope(MM6ApuEnvelopeState& e) {
  if (e.start) {
    e.start = false;
    e.decay = 15;
    e.divider = e.volume;
    return;
  }
  if (e.divider == 0) {
    e.divider = e.volume;
    if (e.decay > 0) --e.decay;
    else if (e.loop) e.decay = 15;
  } else {
    --e.divider;
  }
}

std::uint8_t envelope_output(const MM6ApuEnvelopeState& e, std::uint8_t length) {
  if (length == 0) return 0;
  return e.constant_volume ? e.volume : e.decay;
}

std::uint16_t pulse_sweep_target(const MM6ApuPulseState& p, bool pulse1) {
  const std::uint16_t delta = static_cast<std::uint16_t>(p.timer_period >> p.sweep_shift);
  if (!p.sweep_negate) return static_cast<std::uint16_t>(p.timer_period + delta);
  const int target = static_cast<int>(p.timer_period) - static_cast<int>(delta) - (pulse1 ? 1 : 0);
  return target < 0 ? 0xFFFFu : static_cast<std::uint16_t>(target);
}

bool pulse_muted(const MM6ApuPulseState& p, bool pulse1) {
  if (p.timer_period < 8u) return true;
  if (!p.sweep_negate && pulse_sweep_target(p, pulse1) > 0x07FFu) return true;
  return false;
}

void update_pulse_output(MM6ApuPulseState& p, bool pulse1) {
  if (!p.enabled || p.length_counter == 0 || pulse_muted(p, pulse1)) {
    p.output = 0;
    return;
  }
  const std::uint8_t duty = kDuty[p.duty & 3u][p.duty_step & 7u];
  p.output = duty ? envelope_output(p.envelope, p.length_counter) : 0;
}

void clock_sweep(MM6ApuPulseState& p, bool pulse1) {
  // The hardware divider period is P+1.  Its counter decrements before the
  // zero test; a just-written reload flag therefore reloads the divider
  // without spuriously applying a sweep on that same half-frame tick.
  p.sweep_divider = static_cast<std::uint8_t>(p.sweep_divider - 1u);
  if (p.sweep_divider == 0u) {
    const std::uint16_t target = pulse_sweep_target(p, pulse1);
    if (p.sweep_enabled && p.sweep_shift > 0u && p.timer_period >= 8u && target <= 0x07FFu) {
      p.timer_period = target;
    }
    p.sweep_divider = p.sweep_period;
  }
  if (p.sweep_reload) {
    p.sweep_divider = p.sweep_period;
    p.sweep_reload = false;
  }
  update_pulse_output(p, pulse1);
}

void clock_quarter_frame(MM6Runtime* rt) {
  clock_envelope(rt->apu.pulse1.envelope);
  clock_envelope(rt->apu.pulse2.envelope);
  clock_envelope(rt->apu.noise.envelope);
  auto& t = rt->apu.triangle;
  if (t.linear_reload_flag) t.linear_counter = t.linear_reload;
  else if (t.linear_counter > 0) --t.linear_counter;
  if (!t.control) t.linear_reload_flag = false;
  update_pulse_output(rt->apu.pulse1, true);
  update_pulse_output(rt->apu.pulse2, false);
}

void clock_half_frame(MM6Runtime* rt) {
  auto tick_length = [](std::uint8_t& c, bool halt) { if (c > 0 && !halt) --c; };
  tick_length(rt->apu.pulse1.length_counter, rt->apu.pulse1.envelope.loop);
  tick_length(rt->apu.pulse2.length_counter, rt->apu.pulse2.envelope.loop);
  tick_length(rt->apu.triangle.length_counter, rt->apu.triangle.control);
  tick_length(rt->apu.noise.length_counter, rt->apu.noise.envelope.loop);
  clock_sweep(rt->apu.pulse1, true);
  clock_sweep(rt->apu.pulse2, false);
}

void apply_frame_counter_write(MM6Runtime* rt) {
  auto& f = rt->apu.frame;
  const std::uint8_t value = f.pending_value;
  f.five_step = (value & 0x80u) != 0;
  f.irq_inhibit = (value & 0x40u) != 0;
  f.sequence_cycle = 0;
  f.write_delay = -1;
  if (f.irq_inhibit) f.irq_flag = false;
  if (f.five_step) {
    // The 5-step write clocks both quarter- and half-frame units when applied.
    clock_quarter_frame(rt);
    clock_half_frame(rt);
  }
  update_irq_line(rt);
}

void clock_frame_counter(MM6Runtime* rt) {
  auto& f = rt->apu.frame;
  if (f.write_delay > 0) {
    --f.write_delay;
    if (f.write_delay == 0) apply_frame_counter_write(rt);
  }
  ++f.sequence_cycle;
  if (!f.five_step) {
    switch (f.sequence_cycle) {
      case 7457: clock_quarter_frame(rt); break;
      case 14913: clock_quarter_frame(rt); clock_half_frame(rt); break;
      case 22371: clock_quarter_frame(rt); break;
      case 29828:
        if (!f.irq_inhibit) f.irq_flag = true;
        break;
      case 29829:
        clock_quarter_frame(rt); clock_half_frame(rt);
        if (!f.irq_inhibit) f.irq_flag = true;
        break;
      case 29830:
        if (!f.irq_inhibit) f.irq_flag = true;
        f.sequence_cycle = 0;
        break;
      default: break;
    }
  } else {
    switch (f.sequence_cycle) {
      case 7457: clock_quarter_frame(rt); break;
      case 14913: clock_quarter_frame(rt); clock_half_frame(rt); break;
      case 22371: clock_quarter_frame(rt); break;
      case 37281: clock_quarter_frame(rt); clock_half_frame(rt); break;
      case 37282: f.sequence_cycle = 0; break;
      default: break;
    }
  }
  update_irq_line(rt);
}

void clock_pulse_timer(MM6ApuPulseState& p, bool pulse1) {
  if (p.timer_counter == 0) {
    p.timer_counter = static_cast<std::uint16_t>((p.timer_period << 1u) | 1u);
    p.duty_step = static_cast<std::uint8_t>((p.duty_step - 1u) & 7u);
  } else {
    --p.timer_counter;
  }
  update_pulse_output(p, pulse1);
}

void clock_triangle_timer(MM6ApuTriangleState& t) {
  if (t.timer_counter == 0) {
    t.timer_counter = t.timer_period;
    if (t.enabled && t.length_counter > 0 && t.linear_counter > 0) {
      t.sequence_step = static_cast<std::uint8_t>((t.sequence_step + 1u) & 31u);
      t.output = kTriangle[t.sequence_step];
    }
  } else {
    --t.timer_counter;
  }
}

void clock_noise_timer(MM6ApuNoiseState& n) {
  if (n.timer_counter == 0) {
    n.timer_counter = n.timer_period;
    const unsigned tap = n.mode ? 6u : 1u;
    const std::uint16_t feedback = static_cast<std::uint16_t>((n.shift_register & 1u) ^ ((n.shift_register >> tap) & 1u));
    n.shift_register = static_cast<std::uint16_t>((n.shift_register >> 1u) | (feedback << 14u));
  } else {
    --n.timer_counter;
  }
  if (!n.enabled || n.length_counter == 0 || (n.shift_register & 1u)) n.output = 0;
  else n.output = envelope_output(n.envelope, n.length_counter);
}

void request_dmc_dma(MM6ApuDmcState& d) {
  if (d.sample_buffer_empty && d.bytes_remaining > 0 && !d.dma_pending) d.dma_pending = true;
}

void init_dmc_sample(MM6ApuDmcState& d) {
  d.current_address = d.sample_address;
  d.bytes_remaining = d.sample_length;
}

void clock_dmc_output(MM6ApuDmcState& d) {
  if (!d.silence) {
    if (d.shift_register & 1u) {
      if (d.output_level <= 125u) d.output_level = static_cast<std::uint8_t>(d.output_level + 2u);
    } else if (d.output_level >= 2u) {
      d.output_level = static_cast<std::uint8_t>(d.output_level - 2u);
    }
    d.shift_register >>= 1u;
  }
  if (--d.bits_remaining == 0) {
    d.bits_remaining = 8;
    if (d.sample_buffer_empty) {
      d.silence = true;
    } else {
      d.silence = false;
      d.shift_register = d.sample_buffer;
      d.sample_buffer_empty = true;
      request_dmc_dma(d);
    }
  }
}

void clock_dmc_timer(MM6ApuDmcState& d) {
  if (d.timer_counter == 0) {
    d.timer_counter = d.timer_period;
    clock_dmc_output(d);
  } else {
    --d.timer_counter;
  }
}

std::int16_t mixed_sample(const MM6Runtime* rt) {
  const std::uint64_t pulse_sum = static_cast<std::uint64_t>(rt->apu.pulse1.output + rt->apu.pulse2.output);
  std::uint64_t pulse_pcm = 0;
  if (pulse_sum) {
    const std::uint64_t num = 9588ull * pulse_sum * 32767ull;
    const std::uint64_t den = 100ull * (8128ull + 100ull * pulse_sum);
    pulse_pcm = num / den;
  }

  // Deterministic fixed-point implementation of the NES TND nonlinear mixer.
  constexpr std::uint64_t Q = 1ull << 32u;
  std::uint64_t s_q = (static_cast<std::uint64_t>(rt->apu.triangle.output) * Q) / 8227ull;
  s_q += (static_cast<std::uint64_t>(rt->apu.noise.output) * Q) / 12241ull;
  s_q += (static_cast<std::uint64_t>(rt->apu.dmc.output_level) * Q) / 22638ull;
  std::uint64_t tnd_pcm = 0;
  if (s_q) {
    const std::uint64_t num = 15979ull * s_q * 32767ull;
    const std::uint64_t den = 100ull * (Q + 100ull * s_q);
    tnd_pcm = num / den;
  }
  const std::uint64_t sum = std::min<std::uint64_t>(32767ull, pulse_pcm + tnd_pcm);
  return static_cast<std::int16_t>(sum);
}

void emit_pcm(MM6Runtime* rt) {
  const std::int16_t sample = mixed_sample(rt);
  auto& a = rt->apu;
  a.last_mixed_sample = sample;
  if (a.pcm_count == a.pcm.size()) {
    a.pcm_read = (a.pcm_read + 1u) % a.pcm.size();
    --a.pcm_count;
    ++a.pcm_dropped;
  }
  a.pcm[a.pcm_write] = sample;
  a.pcm_write = (a.pcm_write + 1u) % a.pcm.size();
  ++a.pcm_count;
}

std::uint8_t controller_bit(MM6Runtime* rt, unsigned port, bool side_effect) {
  auto& c = rt->controllers;
  if (port >= 2u) return 1u;
  std::uint8_t bit = 1u;
  if (c.strobe) {
    bit = static_cast<std::uint8_t>(c.host_mask[port] & 1u);
  } else {
    const std::uint8_t idx = c.shift_index[port];
    bit = idx < 8u ? static_cast<std::uint8_t>((c.latched_mask[port] >> idx) & 1u) : 1u;
    if (side_effect && c.shift_index[port] < 8u) ++c.shift_index[port];
  }
  if (side_effect) ++c.read_count;
  return bit;
}

void latch_controllers(MM6Runtime* rt) {
  rt->controllers.latched_mask = rt->controllers.host_mask;
  rt->controllers.shift_index = {};
  ++rt->controllers.latch_count;
}

bool raw_dma_read(MM6Runtime* rt, std::uint16_t address, std::uint8_t* out) {
  if (!rt || !out) return false;
  if (address < 0x2000u) {
    *out = rt->internal_ram[address & 0x07FFu];
    return true;
  }
  if (address < 0x4000u) return mm6_v07_ppu_cpu_read(rt, address, out);
  if (address <= 0x401Fu) {
    if (address <= 0x4017u) return mm6_v08_apu_cpu_read(rt, address, out);
    *out = rt->cpu_open_bus;
    return true;
  }
  if (address < 0x8000u) {
    *out = rt->cpu_open_bus;
    return true;
  }
  if (!rt->prg_rom || rt->prg_rom_size != 64u * 0x2000u) return false;
  std::uint8_t bank = 0;
  if (!mm6_v06_resolve_prg_bank(rt, address, &bank)) return false;
  *out = rt->prg_rom[static_cast<std::size_t>(bank) * 0x2000u + (address & 0x1FFFu)];
  return true;
}

void write_pulse(MM6ApuPulseState& p, bool pulse1, unsigned reg, std::uint8_t value) {
  switch (reg) {
    case 0:
      p.duty = static_cast<std::uint8_t>((value >> 6u) & 3u);
      envelope_write(p.envelope, value);
      break;
    case 1:
      p.sweep_enabled = (value & 0x80u) != 0;
      p.sweep_period = static_cast<std::uint8_t>(((value >> 4u) & 7u) + 1u);
      p.sweep_negate = (value & 0x08u) != 0;
      p.sweep_shift = static_cast<std::uint8_t>(value & 7u);
      p.sweep_reload = true;
      break;
    case 2:
      p.timer_period = static_cast<std::uint16_t>((p.timer_period & 0x0700u) | value);
      break;
    case 3:
      p.timer_period = static_cast<std::uint16_t>((p.timer_period & 0x00FFu) | ((value & 7u) << 8u));
      if (p.enabled) p.length_counter = kLengthTable[value >> 3u];
      p.duty_step = 0;
      envelope_restart(p.envelope);
      break;
    default: break;
  }
  update_pulse_output(p, pulse1);
}

} // namespace

void mm6_v08_apu_reset(MM6Runtime* rt) {
  if (!rt) return;
  const auto host_masks = rt->controllers.host_mask;
  rt->apu = MM6ApuState{};
  rt->controllers = MM6ControllerState{};
  rt->controllers.host_mask = host_masks;
  rt->dma = MM6DmaState{};
  rt->apu.noise.shift_register = 1;
  rt->apu.noise.period_index = 0;
  rt->apu.noise.timer_period = static_cast<std::uint16_t>(kNoisePeriods[0] - 1u);
  rt->apu.noise.timer_counter = 0u;
  rt->apu.dmc.sample_address = 0xC000u;
  rt->apu.dmc.sample_length = 1u;
  rt->apu.dmc.timer_period = static_cast<std::uint16_t>(kDmcPeriods[0] - 1u);
  rt->apu.dmc.timer_counter = rt->apu.dmc.timer_period;
  rt->apu.dmc.bits_remaining = 8u;
  rt->apu.dmc.silence = true;
  rt->cpu.apu_irq_pending = false;
}

void mm6_v08_apu_step_cpu_cycle(MM6Runtime* rt) {
  if (!rt) return;
  ++rt->apu.cpu_cycle;
  clock_frame_counter(rt);
  clock_pulse_timer(rt->apu.pulse1, true);
  clock_pulse_timer(rt->apu.pulse2, false);
  clock_triangle_timer(rt->apu.triangle);
  clock_noise_timer(rt->apu.noise);
  clock_dmc_timer(rt->apu.dmc);

  auto& d = rt->apu.dmc;
  if (d.disable_delay > 0 && --d.disable_delay == 0) {
    d.bytes_remaining = 0;
    d.dma_pending = false;
  }
  if (d.start_delay > 0 && --d.start_delay == 0) request_dmc_dma(d);
  else if (d.start_delay == 0) request_dmc_dma(d);

  rt->apu.sample_phase += MM6ApuState::SampleRate;
  if (rt->apu.sample_phase >= MM6ApuState::CpuRateNtsc) {
    rt->apu.sample_phase -= MM6ApuState::CpuRateNtsc;
    emit_pcm(rt);
  }
  update_irq_line(rt);
}

bool mm6_v08_apu_cpu_read(MM6Runtime* rt, std::uint16_t address, std::uint8_t* value) {
  if (!rt || !value || address < 0x4000u || address > 0x4017u) return false;
  std::uint8_t v = rt->cpu_open_bus;
  switch (address) {
    case 0x4015u:
      v = static_cast<std::uint8_t>(rt->cpu_open_bus & 0x20u);
      if (rt->apu.pulse1.length_counter) v |= 0x01u;
      if (rt->apu.pulse2.length_counter) v |= 0x02u;
      if (rt->apu.triangle.length_counter) v |= 0x04u;
      if (rt->apu.noise.length_counter) v |= 0x08u;
      if (rt->apu.dmc.bytes_remaining) v |= 0x10u;
      if (rt->apu.frame.irq_flag) v |= 0x40u;
      if (rt->apu.dmc.irq_flag) v |= 0x80u;
      rt->apu.frame.irq_flag = false;
      update_irq_line(rt);
      break;
    case 0x4016u:
      v = static_cast<std::uint8_t>((rt->cpu_open_bus & 0xE0u) | controller_bit(rt, 0, true));
      break;
    case 0x4017u:
      v = static_cast<std::uint8_t>((rt->cpu_open_bus & 0xE0u) | controller_bit(rt, 1, true));
      break;
    default:
      // Write-only APU registers and $4014 read as CPU open bus.
      break;
  }
  *value = v;
  return true;
}

bool mm6_v08_apu_cpu_write(MM6Runtime* rt, std::uint16_t address, std::uint8_t value) {
  if (!rt || address < 0x4000u || address > 0x4017u) return false;
  if (address <= 0x4003u) {
    write_pulse(rt->apu.pulse1, true, address - 0x4000u, value);
  } else if (address >= 0x4004u && address <= 0x4007u) {
    write_pulse(rt->apu.pulse2, false, address - 0x4004u, value);
  } else {
    switch (address) {
      case 0x4008u:
        rt->apu.triangle.control = (value & 0x80u) != 0;
        rt->apu.triangle.linear_reload = static_cast<std::uint8_t>(value & 0x7Fu);
        break;
      case 0x4009u: break;
      case 0x400Au:
        rt->apu.triangle.timer_period = static_cast<std::uint16_t>((rt->apu.triangle.timer_period & 0x0700u) | value);
        break;
      case 0x400Bu:
        rt->apu.triangle.timer_period = static_cast<std::uint16_t>((rt->apu.triangle.timer_period & 0x00FFu) | ((value & 7u) << 8u));
        if (rt->apu.triangle.enabled) rt->apu.triangle.length_counter = kLengthTable[value >> 3u];
        rt->apu.triangle.linear_reload_flag = true;
        break;
      case 0x400Cu:
        envelope_write(rt->apu.noise.envelope, value);
        break;
      case 0x400Du: break;
      case 0x400Eu:
        rt->apu.noise.mode = (value & 0x80u) != 0;
        rt->apu.noise.period_index = static_cast<std::uint8_t>(value & 0x0Fu);
        rt->apu.noise.timer_period = static_cast<std::uint16_t>(kNoisePeriods[rt->apu.noise.period_index] - 1u);
        break;
      case 0x400Fu:
        if (rt->apu.noise.enabled) rt->apu.noise.length_counter = kLengthTable[value >> 3u];
        envelope_restart(rt->apu.noise.envelope);
        break;
      case 0x4010u:
        rt->apu.dmc.irq_enabled = (value & 0x80u) != 0;
        rt->apu.dmc.loop = (value & 0x40u) != 0;
        rt->apu.dmc.rate_index = static_cast<std::uint8_t>(value & 0x0Fu);
        rt->apu.dmc.timer_period = static_cast<std::uint16_t>(kDmcPeriods[rt->apu.dmc.rate_index] - 1u);
        if (!rt->apu.dmc.irq_enabled) rt->apu.dmc.irq_flag = false;
        update_irq_line(rt);
        break;
      case 0x4011u:
        rt->apu.dmc.output_level = static_cast<std::uint8_t>(value & 0x7Fu);
        break;
      case 0x4012u:
        rt->apu.dmc.sample_address = static_cast<std::uint16_t>(0xC000u | (static_cast<std::uint16_t>(value) << 6u));
        break;
      case 0x4013u:
        rt->apu.dmc.sample_length = static_cast<std::uint16_t>((static_cast<std::uint16_t>(value) << 4u) | 1u);
        break;
      case 0x4014u:
        return false; // Routed to the V08 DMA coordinator by the CPU bus.
      case 0x4015u: {
        rt->apu.pulse1.enabled = (value & 0x01u) != 0;
        rt->apu.pulse2.enabled = (value & 0x02u) != 0;
        rt->apu.triangle.enabled = (value & 0x04u) != 0;
        rt->apu.noise.enabled = (value & 0x08u) != 0;
        if (!rt->apu.pulse1.enabled) rt->apu.pulse1.length_counter = 0;
        if (!rt->apu.pulse2.enabled) rt->apu.pulse2.length_counter = 0;
        if (!rt->apu.triangle.enabled) rt->apu.triangle.length_counter = 0;
        if (!rt->apu.noise.enabled) rt->apu.noise.length_counter = 0;
        const bool dmc_enable = (value & 0x10u) != 0;
        rt->apu.dmc.enabled = dmc_enable;
        rt->apu.dmc.irq_flag = false;
        if (!dmc_enable) {
          rt->apu.dmc.disable_delay = static_cast<std::uint8_t>((rt->scheduler.cpu_cycles & 1u) ? 3u : 2u);
        } else if (rt->apu.dmc.bytes_remaining == 0) {
          init_dmc_sample(rt->apu.dmc);
          rt->apu.dmc.start_delay = static_cast<std::uint8_t>((rt->scheduler.cpu_cycles & 1u) ? 3u : 2u);
        }
        update_pulse_output(rt->apu.pulse1, true);
        update_pulse_output(rt->apu.pulse2, false);
        update_irq_line(rt);
        break;
      }
      case 0x4016u: {
        const bool new_strobe = (value & 1u) != 0;
        if (new_strobe) latch_controllers(rt);
        else if (rt->controllers.strobe) latch_controllers(rt);
        rt->controllers.strobe = new_strobe;
        break;
      }
      case 0x4017u:
        rt->apu.frame.pending_value = value;
        rt->apu.frame.write_delay = static_cast<std::int8_t>((rt->scheduler.cpu_cycles & 1u) ? 4 : 3);
        rt->apu.frame.irq_inhibit = (value & 0x40u) != 0;
        if (rt->apu.frame.irq_inhibit) rt->apu.frame.irq_flag = false;
        update_irq_line(rt);
        break;
      default: break;
    }
  }
  return true;
}

void mm6_v08_set_controller_mask(MM6Runtime* rt, unsigned port, std::uint8_t nes_button_mask) {
  if (!rt || port >= 2u) return;
  rt->controllers.host_mask[port] = nes_button_mask;
  if (rt->controllers.strobe) latch_controllers(rt);
}

std::size_t mm6_v08_audio_available(const MM6Runtime* rt) {
  return rt ? rt->apu.pcm_count : 0u;
}

std::size_t mm6_v08_audio_pop(MM6Runtime* rt, std::int16_t* output, std::size_t capacity) {
  if (!rt || !output || capacity == 0) return 0;
  const std::size_t n = std::min(capacity, rt->apu.pcm_count);
  for (std::size_t i = 0; i < n; ++i) {
    output[i] = rt->apu.pcm[rt->apu.pcm_read];
    rt->apu.pcm_read = (rt->apu.pcm_read + 1u) % rt->apu.pcm.size();
  }
  rt->apu.pcm_count -= n;
  return n;
}

void mm6_v08_service_pending_dmc_dma(MM6Runtime* rt) {
  if (!rt || !rt->apu.dmc.dma_pending || rt->dma.dmc_servicing) return;
  auto& d = rt->apu.dmc;
  rt->dma.dmc_servicing = true;
  if (rt->dma.oam_active) ++rt->dma.dmc_oam_collisions;

  // On NTSC NES behavior a DMC halt around a controller read can clock the
  // controller once before the CPU's own read, deleting one serial bit.
  if (rt->dma.cpu_access_is_read && (rt->dma.cpu_access_address == 0x4016u || rt->dma.cpu_access_address == 0x4017u) && !rt->controllers.strobe) {
    const unsigned port = rt->dma.cpu_access_address - 0x4016u;
    (void)controller_bit(rt, port, true);
    ++rt->controllers.dmc_extra_clocks;
  }

  const unsigned stall = 3u + ((rt->scheduler.cpu_cycles & 1u) ? 1u : 0u);
  for (unsigned i = 0; i < stall; ++i) mm6_v06_scheduler_cpu_cycle(rt);
  rt->dma.dmc_stall_cycles += stall;

  std::uint8_t sample = 0;
  if (!raw_dma_read(rt, d.current_address, &sample)) {
    rt->dma.dmc_servicing = false;
    return;
  }
  d.sample_buffer = sample;
  d.sample_buffer_empty = false;
  d.dma_pending = false;
  ++d.current_address;
  if (d.current_address == 0u) d.current_address = 0x8000u;
  if (d.bytes_remaining > 0) --d.bytes_remaining;
  ++rt->dma.dmc_fetches;
  if (d.bytes_remaining == 0) {
    if (d.loop) {
      init_dmc_sample(d);
      request_dmc_dma(d);
    } else if (d.irq_enabled) {
      d.irq_flag = true;
    }
  }
  rt->dma.dmc_servicing = false;
  update_irq_line(rt);
}

bool mm6_v08_oam_dma(MM6Runtime* rt, std::uint8_t page) {
  if (!rt) return false;
  const std::uint64_t before = rt->scheduler.cpu_cycles;
  rt->dma.oam_active = true;
  ++rt->dma.oam_transfers;

  // The $4014 register write consumed its normal CPU bus cycle. OAM DMA then
  // takes a halt cycle, a parity alignment cycle when needed, and 256 get/put pairs.
  const bool odd = (rt->scheduler.cpu_cycles & 1u) != 0;
  mm6_v06_scheduler_cpu_cycle(rt);
  if (odd) mm6_v06_scheduler_cpu_cycle(rt);
  for (unsigned i = 0; i < 256u && rt->trap.code == MM6TrapCode::None; ++i) {
    mm6_v06_scheduler_cpu_cycle(rt);
    std::uint8_t v = 0;
    const std::uint16_t address = static_cast<std::uint16_t>((static_cast<std::uint16_t>(page) << 8u) | i);
    if (!raw_dma_read(rt, address, &v)) { rt->dma.oam_active = false; return false; }
    rt->cpu_open_bus = v;
    mm6_v06_scheduler_cpu_cycle(rt);
    rt->ppu.oam[rt->ppu.oam_addr++] = v;
  }
  rt->dma.oam_active = false;
  rt->dma.oam_stall_cycles += rt->scheduler.cpu_cycles - before;
  return rt->trap.code == MM6TrapCode::None;
}
