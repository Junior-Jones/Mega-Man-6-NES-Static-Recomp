#pragma once

#include <cstddef>
#include <cstdint>

struct MM6Runtime;

// V08 APU/DMA/input construction interface. V09 will wrap these internal
// construction APIs behind the opaque public static-core API.
void mm6_v08_apu_reset(MM6Runtime* rt);
void mm6_v08_apu_step_cpu_cycle(MM6Runtime* rt);
bool mm6_v08_apu_cpu_read(MM6Runtime* rt, std::uint16_t address, std::uint8_t* value);
bool mm6_v08_apu_cpu_write(MM6Runtime* rt, std::uint16_t address, std::uint8_t value);

void mm6_v08_set_controller_mask(MM6Runtime* rt, unsigned port, std::uint8_t nes_button_mask);
std::size_t mm6_v08_audio_available(const MM6Runtime* rt);
std::size_t mm6_v08_audio_pop(MM6Runtime* rt, std::int16_t* output, std::size_t capacity);

// Complete DMA authority used by the CPU bus in V08.
bool mm6_v08_oam_dma(MM6Runtime* rt, std::uint8_t page);
void mm6_v08_service_pending_dmc_dma(MM6Runtime* rt);
