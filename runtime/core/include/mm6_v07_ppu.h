#pragma once

#include <cstddef>
#include <cstdint>

struct MM6Runtime;

// V07 PPU construction interface. These remain internal construction APIs until
// V09 wraps them behind the opaque public core boundary.
void mm6_v07_ppu_reset(MM6Runtime* rt);
void mm6_v07_ppu_step_dot(MM6Runtime* rt);
bool mm6_v07_ppu_cpu_read(MM6Runtime* rt, std::uint16_t cpu_address, std::uint8_t* value);
bool mm6_v07_ppu_cpu_write(MM6Runtime* rt, std::uint16_t cpu_address, std::uint8_t value);
bool mm6_v07_ppu_memory_read(MM6Runtime* rt, std::uint16_t ppu_address, std::uint8_t* value);
bool mm6_v07_ppu_memory_write(MM6Runtime* rt, std::uint16_t ppu_address, std::uint8_t value);
bool mm6_v07_oam_dma(MM6Runtime* rt, std::uint8_t page);

bool mm6_v07_frame_copy_indexed(const MM6Runtime* rt, std::uint8_t* output, std::size_t capacity);
bool mm6_v07_frame_copy_bgra(const MM6Runtime* rt, std::uint32_t* output, std::size_t capacity);
