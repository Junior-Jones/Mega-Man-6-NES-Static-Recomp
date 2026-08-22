#include "mm6_v07_ppu.h"
#include "mm6_v06_runtime.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>

namespace {
constexpr std::uint16_t kPpuAddressMask = 0x3FFFu;
constexpr std::size_t kFramePixels = 256u * 240u;

bool rendering_enabled(const MM6Runtime* rt) {
  return rt && (rt->ppu.mask & 0x18u) != 0;
}
bool bg_enabled(const MM6Runtime* rt) { return rt && (rt->ppu.mask & 0x08u) != 0; }
bool sprites_enabled(const MM6Runtime* rt) { return rt && (rt->ppu.mask & 0x10u) != 0; }

bool ppu_trap(MM6Runtime* rt, std::uint16_t address, const char* reason) {
  mm6_v06_raise_trap(rt, MM6TrapCode::UnsupportedPpuTimingV07, 0xFF,
                     rt ? rt->cpu.pc : 0, address, "V07/PPU", reason);
  return false;
}

std::uint16_t palette_index(std::uint16_t address) {
  std::uint16_t i = static_cast<std::uint16_t>((address - 0x3F00u) & 0x001Fu);
  if ((i & 0x13u) == 0x10u) i = static_cast<std::uint16_t>(i & ~0x10u);
  return i;
}

bool ciram_index(MM6Runtime* rt, std::uint16_t address, std::size_t* out) {
  if (!rt || !out) return false;
  std::uint16_t a = static_cast<std::uint16_t>(address & kPpuAddressMask);
  if (a >= 0x3000u && a < 0x3F00u) a = static_cast<std::uint16_t>(a - 0x1000u);
  if (a < 0x2000u || a >= 0x3000u) return ppu_trap(rt, address, "CIRAM resolution requested outside nametable space");
  if (!rt->mapper.mirroring_known) {
    mm6_v06_raise_trap(rt, MM6TrapCode::UnknownMapperState, 0xFF, rt->cpu.pc, address,
                       "V07/TGROM-MMC3C", "nametable access requires known MMC3 mirroring latch");
    return false;
  }
  const std::uint16_t nt = static_cast<std::uint16_t>((a - 0x2000u) >> 10);
  const std::uint16_t off = static_cast<std::uint16_t>((a - 0x2000u) & 0x03FFu);
  // MMC3 $A000: 0 = vertical (A,B,A,B), 1 = horizontal (A,A,B,B).
  const bool horizontal = (rt->mapper.mirroring_bit & 1u) != 0;
  const std::uint16_t physical = horizontal ? static_cast<std::uint16_t>(nt >> 1)
                                            : static_cast<std::uint16_t>(nt & 1u);
  *out = static_cast<std::size_t>(physical) * 0x400u + off;
  return true;
}

void increment_x(MM6PpuState& p) {
  if ((p.v & 0x001Fu) == 31u) {
    p.v = static_cast<std::uint16_t>((p.v & ~0x001Fu) ^ 0x0400u);
  } else {
    ++p.v;
  }
}

void increment_y(MM6PpuState& p) {
  if ((p.v & 0x7000u) != 0x7000u) {
    p.v = static_cast<std::uint16_t>(p.v + 0x1000u);
    return;
  }
  p.v = static_cast<std::uint16_t>(p.v & ~0x7000u);
  std::uint16_t y = static_cast<std::uint16_t>((p.v & 0x03E0u) >> 5);
  if (y == 29u) {
    y = 0;
    p.v ^= 0x0800u;
  } else if (y == 31u) {
    y = 0;
  } else {
    ++y;
  }
  p.v = static_cast<std::uint16_t>((p.v & ~0x03E0u) | (y << 5));
}

void increment_vram_after_cpu_access(MM6Runtime* rt) {
  if (!rt) return;
  auto& p = rt->ppu;
  if (rendering_enabled(rt) && p.scanline >= -1 && p.scanline < 240) {
    // During rendering, a $2007 access clocks both horizontal and vertical scroll
    // increment logic rather than the ordinary +1/+32 incrementer.
    increment_x(p);
    increment_y(p);
  } else {
    p.v = static_cast<std::uint16_t>((p.v + ((p.ctrl & 0x04u) ? 32u : 1u)) & 0x7FFFu);
  }
}

void load_background_shifters(MM6PpuState& p) {
  p.bg_pattern_low_shift = static_cast<std::uint16_t>((p.bg_pattern_low_shift & 0xFF00u) | p.next_pattern_low);
  p.bg_pattern_high_shift = static_cast<std::uint16_t>((p.bg_pattern_high_shift & 0xFF00u) | p.next_pattern_high);
  const std::uint8_t pal = p.next_attr & 0x03u;
  p.bg_attr_low_shift = static_cast<std::uint16_t>((p.bg_attr_low_shift & 0xFF00u) | ((pal & 1u) ? 0x00FFu : 0u));
  p.bg_attr_high_shift = static_cast<std::uint16_t>((p.bg_attr_high_shift & 0xFF00u) | ((pal & 2u) ? 0x00FFu : 0u));
}

void shift_background(MM6PpuState& p) {
  p.bg_pattern_low_shift <<= 1;
  p.bg_pattern_high_shift <<= 1;
  p.bg_attr_low_shift <<= 1;
  p.bg_attr_high_shift <<= 1;
}

bool fetch_background(MM6Runtime* rt) {
  auto& p = rt->ppu;
  const std::uint16_t phase = static_cast<std::uint16_t>((p.dot - 1u) & 7u);
  std::uint8_t value = 0;
  switch (phase) {
    case 0: {
      load_background_shifters(p);
      const std::uint16_t addr = static_cast<std::uint16_t>(0x2000u | (p.v & 0x0FFFu));
      if (!mm6_v07_ppu_memory_read(rt, addr, &p.next_nt)) return false;
      break;
    }
    case 2: {
      const std::uint16_t addr = static_cast<std::uint16_t>(0x23C0u | (p.v & 0x0C00u) |
          ((p.v >> 4) & 0x38u) | ((p.v >> 2) & 0x07u));
      if (!mm6_v07_ppu_memory_read(rt, addr, &value)) return false;
      const std::uint8_t shift = static_cast<std::uint8_t>(((p.v >> 4) & 4u) | (p.v & 2u));
      p.next_attr = static_cast<std::uint8_t>((value >> shift) & 3u);
      break;
    }
    case 4: {
      const std::uint16_t fine_y = static_cast<std::uint16_t>((p.v >> 12) & 7u);
      const std::uint16_t table = (p.ctrl & 0x10u) ? 0x1000u : 0u;
      const std::uint16_t addr = static_cast<std::uint16_t>(table + static_cast<std::uint16_t>(p.next_nt) * 16u + fine_y);
      if (!mm6_v07_ppu_memory_read(rt, addr, &p.next_pattern_low)) return false;
      break;
    }
    case 6: {
      const std::uint16_t fine_y = static_cast<std::uint16_t>((p.v >> 12) & 7u);
      const std::uint16_t table = (p.ctrl & 0x10u) ? 0x1000u : 0u;
      const std::uint16_t addr = static_cast<std::uint16_t>(table + static_cast<std::uint16_t>(p.next_nt) * 16u + fine_y + 8u);
      if (!mm6_v07_ppu_memory_read(rt, addr, &p.next_pattern_high)) return false;
      break;
    }
    case 7:
      increment_x(p);
      break;
    default:
      break;
  }
  return true;
}

int sprite_row_for_scanline(std::uint8_t y, int scanline, bool large) {
  const int row = scanline - (static_cast<int>(y) + 1);
  const int height = large ? 16 : 8;
  return (row >= 0 && row < height) ? row : -1;
}

void evaluate_sprites_for_next_scanline(MM6Runtime* rt) {
  auto& p = rt->ppu;
  p.secondary_oam.fill(0xFFu);
  p.next_sprites.fill({});
  p.next_sprite_count = 0;
  const int next = (p.scanline == -1) ? 0 : p.scanline + 1;
  if (next < 0 || next >= 240) return;
  const bool large = (p.ctrl & 0x20u) != 0;
  unsigned in_range = 0;
  for (unsigned i = 0; i < 64u; ++i) {
    const std::uint8_t y = p.oam[i * 4u];
    if (sprite_row_for_scanline(y, next, large) < 0) continue;
    ++in_range;
    if (p.next_sprite_count < 8u) {
      const unsigned slot = p.next_sprite_count++;
      auto& s = p.next_sprites[slot];
      s.y = y;
      s.tile = p.oam[i * 4u + 1u];
      s.attributes = static_cast<std::uint8_t>(p.oam[i * 4u + 2u] & 0xE3u);
      s.x = p.oam[i * 4u + 3u];
      s.oam_index = static_cast<std::uint8_t>(i);
      s.sprite0 = i == 0u;
      p.secondary_oam[slot * 4u] = s.y;
      p.secondary_oam[slot * 4u + 1u] = s.tile;
      p.secondary_oam[slot * 4u + 2u] = s.attributes;
      p.secondary_oam[slot * 4u + 3u] = s.x;
    }
  }
  if (in_range > 8u) p.status |= 0x20u;
}

std::uint16_t sprite_pattern_address(const MM6PpuState& p, const MM6PpuSpriteUnit& s,
                                     int scanline, bool high_plane) {
  const bool large = (p.ctrl & 0x20u) != 0;
  int row = sprite_row_for_scanline(s.y, scanline, large);
  if (row < 0) row = 0;
  if (s.attributes & 0x80u) row = (large ? 15 : 7) - row;
  std::uint16_t addr = 0;
  if (!large) {
    const std::uint16_t table = (p.ctrl & 0x08u) ? 0x1000u : 0u;
    addr = static_cast<std::uint16_t>(table + static_cast<std::uint16_t>(s.tile) * 16u + static_cast<unsigned>(row));
  } else {
    const std::uint16_t table = static_cast<std::uint16_t>(s.tile & 1u) << 12;
    std::uint16_t tile = static_cast<std::uint16_t>(s.tile & 0xFEu);
    if (row >= 8) { ++tile; row -= 8; }
    addr = static_cast<std::uint16_t>(table + tile * 16u + static_cast<unsigned>(row));
  }
  if (high_plane) addr = static_cast<std::uint16_t>(addr + 8u);
  return addr;
}

bool fetch_sprite_phase(MM6Runtime* rt) {
  auto& p = rt->ppu;
  if (p.dot < 257u || p.dot > 320u) return true;
  const unsigned slot = static_cast<unsigned>((p.dot - 257u) / 8u);
  const unsigned phase = static_cast<unsigned>((p.dot - 257u) & 7u);
  if (slot >= 8u) return true;
  // The real PPU performs dummy nametable fetches around sprite pattern reads.
  // Preserve those cartridge-visible low-A12 phases so MMC3 qualification sees
  // the same low interval structure even when fewer than eight sprites exist.
  if (phase == 0u || phase == 2u) {
    std::uint8_t ignored = 0;
    return mm6_v07_ppu_memory_read(rt, static_cast<std::uint16_t>(0x2000u | (p.v & 0x0FFFu)), &ignored);
  }
  if (slot >= p.next_sprite_count) {
    if (phase == 4u || phase == 6u) {
      std::uint8_t ignored = 0;
      return mm6_v07_ppu_memory_read(rt, 0x1FF0u + static_cast<std::uint16_t>(phase == 6u ? 8u : 0u), &ignored);
    }
    return true;
  }
  auto& s = p.next_sprites[slot];
  const int next_scanline = (p.scanline == -1) ? 0 : p.scanline + 1;
  if (phase == 4u) return mm6_v07_ppu_memory_read(rt, sprite_pattern_address(p, s, next_scanline, false), &s.pattern_low);
  if (phase == 6u) return mm6_v07_ppu_memory_read(rt, sprite_pattern_address(p, s, next_scanline, true), &s.pattern_high);
  return true;
}

std::uint8_t background_pixel(const MM6Runtime* rt, unsigned x, std::uint8_t* palette) {
  const auto& p = rt->ppu;
  *palette = 0;
  if (!bg_enabled(rt)) return 0;
  if (x < 8u && (p.mask & 0x02u) == 0) return 0;
  const std::uint16_t mux = static_cast<std::uint16_t>(0x8000u >> p.fine_x);
  const std::uint8_t lo = (p.bg_pattern_low_shift & mux) ? 1u : 0u;
  const std::uint8_t hi = (p.bg_pattern_high_shift & mux) ? 2u : 0u;
  const std::uint8_t px = static_cast<std::uint8_t>(lo | hi);
  if (!px) return 0;
  const std::uint8_t al = (p.bg_attr_low_shift & mux) ? 1u : 0u;
  const std::uint8_t ah = (p.bg_attr_high_shift & mux) ? 2u : 0u;
  *palette = static_cast<std::uint8_t>(al | ah);
  return px;
}

std::uint8_t sprite_pixel(MM6Runtime* rt, unsigned x, std::uint8_t* palette,
                          bool* behind_bg, bool* sprite0) {
  auto& p = rt->ppu;
  *palette = 0; *behind_bg = false; *sprite0 = false;
  if (!sprites_enabled(rt)) return 0;
  if (x < 8u && (p.mask & 0x04u) == 0) return 0;
  for (unsigned i = 0; i < p.sprite_count; ++i) {
    const auto& s = p.sprites[i];
    if (x < s.x || x >= static_cast<unsigned>(s.x) + 8u) continue;
    const unsigned rel = x - s.x;
    const unsigned bit = (s.attributes & 0x40u) ? rel : (7u - rel);
    const std::uint8_t lo = static_cast<std::uint8_t>((s.pattern_low >> bit) & 1u);
    const std::uint8_t hi = static_cast<std::uint8_t>(((s.pattern_high >> bit) & 1u) << 1);
    const std::uint8_t px = static_cast<std::uint8_t>(lo | hi);
    if (!px) continue;
    *palette = static_cast<std::uint8_t>(s.attributes & 3u);
    *behind_bg = (s.attributes & 0x20u) != 0;
    *sprite0 = s.sprite0;
    return px;
  }
  return 0;
}

void render_pixel(MM6Runtime* rt) {
  auto& p = rt->ppu;
  if (p.scanline < 0 || p.scanline >= 240 || p.dot < 1u || p.dot > 256u) return;
  const unsigned x = static_cast<unsigned>(p.dot - 1u);
  std::uint8_t bgpal = 0, sppal = 0;
  const std::uint8_t bg = background_pixel(rt, x, &bgpal);
  bool behind = false, sprite0 = false;
  const std::uint8_t sp = sprite_pixel(rt, x, &sppal, &behind, &sprite0);
  std::uint8_t pal_addr = 0;
  if (!bg && !sp) pal_addr = 0;
  else if (!bg) pal_addr = static_cast<std::uint8_t>(0x10u + (sppal << 2) + sp);
  else if (!sp) pal_addr = static_cast<std::uint8_t>((bgpal << 2) + bg);
  else {
    if (sprite0 && x < 255u && bg_enabled(rt) && sprites_enabled(rt) &&
        !(x < 8u && (((p.mask & 0x02u) == 0) || ((p.mask & 0x04u) == 0)))) {
      p.status |= 0x40u;
    }
    pal_addr = behind ? static_cast<std::uint8_t>((bgpal << 2) + bg)
                      : static_cast<std::uint8_t>(0x10u + (sppal << 2) + sp);
  }
  std::uint8_t color = p.palette[palette_index(static_cast<std::uint16_t>(0x3F00u + pal_addr))] & 0x3Fu;
  if (p.mask & 0x01u) color &= 0x30u;
  p.frame_indexed[static_cast<std::size_t>(p.scanline) * 256u + x] = color;
}

void advance_dot(MM6Runtime* rt) {
  auto& p = rt->ppu;
  if (p.scanline == -1 && p.dot == 339u && p.odd_frame && rendering_enabled(rt)) {
    p.dot = 0;
    p.scanline = 0;
    p.sprites = p.next_sprites;
    p.sprite_count = p.next_sprite_count;
    return;
  }
  if (++p.dot <= 340u) return;
  p.dot = 0;
  ++p.scanline;
  if (p.scanline > 260) {
    p.scanline = -1;
    ++p.frame;
    p.odd_frame = (p.frame & 1u) != 0;
    p.allow_full_access = true;
  }
  if (p.scanline >= 0 && p.scanline < 240) {
    p.sprites = p.next_sprites;
    p.sprite_count = p.next_sprite_count;
  } else if (p.scanline == -1) {
    p.sprites.fill({});
    p.sprite_count = 0;
  }
}

std::uint32_t bgra_from_nes(std::uint8_t index) {
  // Deterministic 64-color NTSC presentation table. This is presentation-only;
  // the authoritative rendered surface remains the 6-bit indexed framebuffer.
  static constexpr std::array<std::uint32_t,64> k = {
    0xFF626262,0xFFAB2E00,0xFFC9241D,0xFFB61E56,0xFF82208F,0xFF3F24A8,0xFF0B2AA5,0xFF00328A,
    0xFF003E58,0xFF004B15,0xFF005200,0xFF3B4F00,0xFF6E4600,0xFF000000,0xFF000000,0xFF000000,
    0xFFABABAB,0xFFFF5751,0xFFFF3D64,0xFFFF2A9B,0xFFD82DD2,0xFF7A35E8,0xFF3841E4,0xFF0C4CCB,
    0xFF005D9D,0xFF006D48,0xFF007500,0xFF657300,0xFFB56600,0xFF000000,0xFF000000,0xFF000000,
    0xFFFFFFFF,0xFFFFACA7,0xFFFF939D,0xFFFF85C6,0xFFFF87F5,0xFFC58CFF,0xFF829AFF,0xFF5BA7FF,
    0xFF4DB9F5,0xFF55CDAF,0xFF5DD675,0xFFA0D56B,0xFFE5C76A,0xFF4E4E4E,0xFF000000,0xFF000000,
    0xFFFFFFFF,0xFFFFD9D6,0xFFFFCEC9,0xFFFFC8E1,0xFFFFC9FA,0xFFE8CBFF,0xFFC9D2FF,0xFFB9DAFF,
    0xFFB3E4FA,0xFFB8EECB,0xFFBCEFAF,0xFFD5EFA8,0xFFF1EAA5,0xFFB8B8B8,0xFF000000,0xFF000000
  };
  return k[index & 0x3Fu];
}

bool dma_raw_read(MM6Runtime* rt, std::uint16_t address, std::uint8_t* out) {
  if (address < 0x2000u) { *out = rt->internal_ram[address & 0x07FFu]; return true; }
  if (address < 0x4000u) return ppu_trap(rt, address, "OAM DMA from PPU register space is not target-required and remains fail-closed");
  if (address <= 0x401Fu) {
    mm6_v06_raise_trap(rt, MM6TrapCode::UnsupportedApuDmaInputV08, 0xFF, rt->cpu.pc, address,
                       "V08/DMA", "OAM DMA from APU/controller/test I/O requires V08 side-effect arbitration");
    return false;
  }
  if (address < 0x8000u) { *out = rt->cpu_open_bus; return true; }
  if (!rt->prg_rom || rt->prg_rom_size != 64u * 0x2000u) return false;
  std::uint8_t bank = 0;
  if (!mm6_v06_resolve_prg_bank(rt, address, &bank)) return false;
  *out = rt->prg_rom[static_cast<std::size_t>(bank) * 0x2000u + (address & 0x1FFFu)];
  return true;
}
} // namespace

void mm6_v07_ppu_reset(MM6Runtime* rt) {
  if (!rt) return;
  rt->ppu = MM6PpuState{};
  rt->ppu.scanline = -1;
  rt->ppu.dot = 340;
  rt->ppu.frame = 1;
  rt->ppu.odd_frame = true;
  rt->ppu.secondary_oam.fill(0xFFu);
  // Mesen initializes the presentation surface to black before the first rendered frame.
  // Keep the authoritative 6-bit indexed surface deterministic by using NES black $0F
  // instead of palette index $00 (gray) for untouched pixels at cold reset.
  rt->ppu.frame_indexed.fill(0x0Fu);
}

bool mm6_v07_ppu_memory_read(MM6Runtime* rt, std::uint16_t ppu_address, std::uint8_t* value) {
  if (!rt || !value) return false;
  const std::uint16_t a = static_cast<std::uint16_t>(ppu_address & kPpuAddressMask);
  if (!mm6_v06_mapper_observe_ppu_address(rt, a)) return false;
  if (a < 0x2000u) {
    std::uint8_t page = 0;
    if (!mm6_v06_resolve_chr_page(rt, a, &page)) return false;
    *value = rt->chr_ram[static_cast<std::size_t>(page) * 0x400u + (a & 0x03FFu)];
    return true;
  }
  if (a < 0x3F00u) {
    std::size_t i = 0;
    if (!ciram_index(rt, a, &i)) return false;
    *value = rt->ciram[i];
    return true;
  }
  *value = rt->ppu.palette[palette_index(a)];
  return true;
}

bool mm6_v07_ppu_memory_write(MM6Runtime* rt, std::uint16_t ppu_address, std::uint8_t value) {
  if (!rt) return false;
  const std::uint16_t a = static_cast<std::uint16_t>(ppu_address & kPpuAddressMask);
  if (!mm6_v06_mapper_observe_ppu_address(rt, a)) return false;
  if (a < 0x2000u) {
    std::uint8_t page = 0;
    if (!mm6_v06_resolve_chr_page(rt, a, &page)) return false;
    rt->chr_ram[static_cast<std::size_t>(page) * 0x400u + (a & 0x03FFu)] = value;
    return true;
  }
  if (a < 0x3F00u) {
    std::size_t i = 0;
    if (!ciram_index(rt, a, &i)) return false;
    rt->ciram[i] = value;
    return true;
  }
  rt->ppu.palette[palette_index(a)] = static_cast<std::uint8_t>(value & 0x3Fu);
  return true;
}

bool mm6_v07_ppu_cpu_read(MM6Runtime* rt, std::uint16_t cpu_address, std::uint8_t* value) {
  if (!rt || !value) return false;
  auto& p = rt->ppu;
  const std::uint8_t reg = static_cast<std::uint8_t>(cpu_address & 7u);
  std::uint8_t out = p.open_bus;
  switch (reg) {
    case 2: // PPUSTATUS
      // 2C02 race: reading one PPU dot before the vblank-set dot returns the
      // flag clear and prevents both the flag and NMI from being generated.
      if (p.scanline == 241 && p.dot == 0u) p.prevent_vblank_flag = true;
      out = static_cast<std::uint8_t>((p.status & 0xE0u) | (p.open_bus & 0x1Fu));
      p.status &= static_cast<std::uint8_t>(~0x80u);
      p.write_toggle = false;
      p.open_bus = out;
      // A status read that clears vblank also deasserts an as-yet-unserviced PPU NMI.
      rt->cpu.nmi_pending = false;
      break;
    case 4: // OAMDATA
      if (rendering_enabled(rt) && p.scanline >= 0 && p.scanline < 240) {
        // Return the byte currently exposed by secondary OAM during rendering.
        const unsigned slot = std::min<unsigned>(p.next_sprite_count, 7u);
        out = p.secondary_oam[(slot * 4u) & 0x1Fu];
      } else {
        out = p.oam[p.oam_addr];
      }
      p.open_bus = out;
      break;
    case 7: { // PPUDATA
      if (!p.allow_full_access) { out = 0; p.open_bus = out; break; }
      const std::uint16_t a = static_cast<std::uint16_t>(p.v & kPpuAddressMask);
      if (a >= 0x3F00u) {
        std::uint8_t pal = 0;
        if (!mm6_v07_ppu_memory_read(rt, a, &pal)) return false;
        out = static_cast<std::uint8_t>((pal & 0x3Fu) | (p.open_bus & 0xC0u));
        std::uint8_t mirrored = 0;
        if (!mm6_v07_ppu_memory_read(rt, static_cast<std::uint16_t>((a - 0x1000u) & kPpuAddressMask), &mirrored)) return false;
        p.read_buffer = mirrored;
      } else {
        out = p.read_buffer;
        if (!mm6_v07_ppu_memory_read(rt, a, &p.read_buffer)) return false;
      }
      increment_vram_after_cpu_access(rt);
      p.open_bus = out;
      break;
    }
    default:
      // Reads of write-only PPU registers expose the PPU I/O latch/open bus.
      out = p.open_bus;
      break;
  }
  *value = out;
  return rt->trap.code == MM6TrapCode::None;
}

bool mm6_v07_ppu_cpu_write(MM6Runtime* rt, std::uint16_t cpu_address, std::uint8_t value) {
  if (!rt) return false;
  auto& p = rt->ppu;
  const std::uint8_t reg = static_cast<std::uint8_t>(cpu_address & 7u);
  p.open_bus = value;
  switch (reg) {
    case 0: // PPUCTRL
      if (!p.allow_full_access) return true;
      {
        const bool old_nmi = (p.ctrl & 0x80u) != 0;
        p.ctrl = value;
        p.t = static_cast<std::uint16_t>((p.t & ~0x0C00u) | ((static_cast<std::uint16_t>(value) & 3u) << 10));
        const bool new_nmi = (value & 0x80u) != 0;
        if (!new_nmi) rt->cpu.nmi_pending = false;
        else if (!old_nmi && (p.status & 0x80u)) rt->cpu.nmi_pending = true;
      }
      break;
    case 1: // PPUMASK
      if (p.allow_full_access) p.mask = value;
      break;
    case 2: // status is read-only
      break;
    case 3: // OAMADDR
      p.oam_addr = value;
      break;
    case 4: // OAMDATA
      if (rendering_enabled(rt) && p.scanline >= -1 && p.scanline < 240) {
        // NTSC rendering-time behavior: no OAM write; only high-six-bit bump.
        p.oam_addr = static_cast<std::uint8_t>((p.oam_addr + 4u) & 0xFCu);
      } else {
        if ((p.oam_addr & 3u) == 2u) value &= 0xE3u;
        p.oam[p.oam_addr++] = value;
      }
      break;
    case 5: // PPUSCROLL
      if (!p.allow_full_access) return true;
      if (!p.write_toggle) {
        p.fine_x = static_cast<std::uint8_t>(value & 7u);
        p.t = static_cast<std::uint16_t>((p.t & ~0x001Fu) | (value >> 3));
      } else {
        p.t = static_cast<std::uint16_t>((p.t & ~0x73E0u) |
            ((static_cast<std::uint16_t>(value) & 0xF8u) << 2) |
            ((static_cast<std::uint16_t>(value) & 7u) << 12));
      }
      p.write_toggle = !p.write_toggle;
      break;
    case 6: // PPUADDR
      if (!p.allow_full_access) return true;
      if (!p.write_toggle) {
        p.t = static_cast<std::uint16_t>((p.t & 0x00FFu) | ((static_cast<std::uint16_t>(value) & 0x3Fu) << 8));
      } else {
        p.t = static_cast<std::uint16_t>((p.t & 0x7F00u) | value);
        p.v = p.t;
      }
      p.write_toggle = !p.write_toggle;
      break;
    case 7: // PPUDATA
      if (!mm6_v07_ppu_memory_write(rt, static_cast<std::uint16_t>(p.v & kPpuAddressMask), value)) return false;
      increment_vram_after_cpu_access(rt);
      break;
  }
  return rt->trap.code == MM6TrapCode::None;
}

void mm6_v07_ppu_step_dot(MM6Runtime* rt) {
  if (!rt || rt->trap.code != MM6TrapCode::None) return;
  auto& p = rt->ppu;

  // Flag timing.
  if (p.scanline == -1 && p.dot == 1u) {
    p.status &= static_cast<std::uint8_t>(~0xE0u);
    rt->cpu.nmi_pending = false;
    p.prevent_vblank_flag = false;
  }
  if (p.scanline == 241 && p.dot == 1u) {
    if (!p.prevent_vblank_flag) {
      p.status |= 0x80u;
      if (p.ctrl & 0x80u) rt->cpu.nmi_pending = true;
    }
    p.prevent_vblank_flag = false;
    p.frame_ready = true;
    ++p.completed_frames;
  }

  const bool render_line = p.scanline == -1 || (p.scanline >= 0 && p.scanline < 240);
  if (render_line && rendering_enabled(rt)) {
    if (p.scanline >= 0 && p.scanline < 240) render_pixel(rt);

    if ((p.dot >= 1u && p.dot <= 256u) || (p.dot >= 321u && p.dot <= 336u)) {
      shift_background(p);
      if (!fetch_background(rt)) return;
    }
    if (p.dot == 256u) increment_y(p);
    if (p.dot == 257u) {
      load_background_shifters(p);
      p.v = static_cast<std::uint16_t>((p.v & ~0x041Fu) | (p.t & 0x041Fu));
      evaluate_sprites_for_next_scanline(rt);
    }
    if (p.scanline == -1 && p.dot >= 280u && p.dot <= 304u) {
      p.v = static_cast<std::uint16_t>((p.v & ~0x7BE0u) | (p.t & 0x7BE0u));
    }
    if (p.dot >= 257u && p.dot <= 320u && !fetch_sprite_phase(rt)) return;
    if (p.dot == 338u || p.dot == 340u) {
      std::uint8_t ignored = 0;
      if (!mm6_v07_ppu_memory_read(rt, static_cast<std::uint16_t>(0x2000u | (p.v & 0x0FFFu)), &ignored)) return;
    }
  }

  advance_dot(rt);
}

bool mm6_v07_oam_dma(MM6Runtime* rt, std::uint8_t page) {
  if (!rt) return false;
  // The CPU register write itself already consumed its ordinary bus cycle. DMA
  // then performs one halt cycle, one alignment cycle when needed, and 256
  // alternating read/write cycles: 513 or 514 additional CPU cycles.
  const bool odd = (rt->scheduler.cpu_cycles & 1u) != 0;
  mm6_v06_scheduler_cpu_cycle(rt);
  if (odd) mm6_v06_scheduler_cpu_cycle(rt);
  for (unsigned i = 0; i < 256u; ++i) {
    std::uint8_t v = 0;
    mm6_v06_scheduler_cpu_cycle(rt);
    if (!dma_raw_read(rt, static_cast<std::uint16_t>((static_cast<std::uint16_t>(page) << 8) | i), &v)) return false;
    rt->cpu_open_bus = v;
    mm6_v06_scheduler_cpu_cycle(rt);
    rt->ppu.oam[rt->ppu.oam_addr++] = v;
  }
  return rt->trap.code == MM6TrapCode::None;
}

bool mm6_v07_frame_copy_indexed(const MM6Runtime* rt, std::uint8_t* output, std::size_t capacity) {
  if (!rt || !output || capacity < kFramePixels) return false;
  std::copy(rt->ppu.frame_indexed.begin(), rt->ppu.frame_indexed.end(), output);
  return true;
}

bool mm6_v07_frame_copy_bgra(const MM6Runtime* rt, std::uint32_t* output, std::size_t capacity) {
  if (!rt || !output || capacity < kFramePixels) return false;
  for (std::size_t i = 0; i < kFramePixels; ++i) output[i] = bgra_from_nes(rt->ppu.frame_indexed[i]);
  return true;
}
