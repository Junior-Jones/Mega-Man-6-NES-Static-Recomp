#include "mm6_static_core.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <fstream>
#include <iterator>
#include <vector>

namespace {
constexpr std::uint64_t kFnvOffset = 1469598103934665603ull;
constexpr std::uint64_t kFnvPrime = 1099511628211ull;

void hash_bytes(std::uint64_t& hash, const void* data, std::size_t size) {
  const auto* bytes = static_cast<const std::uint8_t*>(data);
  for (std::size_t i = 0; i < size; ++i) {
    hash ^= bytes[i];
    hash *= kFnvPrime;
  }
}

std::vector<std::uint8_t> read_all(const char* path) {
  std::ifstream stream(path, std::ios::binary);
  return {std::istreambuf_iterator<char>(stream), {}};
}

std::uint8_t scripted_input(unsigned frame) {
  if (frame == 420u || frame == 600u || frame == 780u) return 0x08u;
  if (frame >= 900u && frame < 1500u) return 0x80u;
  if (frame >= 1050u && frame < 1320u && frame % 17u == 0u) return 0x01u;
  if (frame >= 1800u && frame < 2300u) return 0x40u;
  if (frame >= 2500u && frame < 3100u) return 0x20u;
  if (frame >= 3300u && frame < 3900u) return 0x10u;
  return frame % 113u == 0u ? 0x02u : 0u;
}
}

int main(int argc, char** argv) {
  if (argc != 2) {
    std::fprintf(stderr, "usage: mm6-compaction-trace <Mega Man 6 (USA).nes>\n");
    return 2;
  }
  const auto rom = read_all(argv[1]);
  MM6StaticCore* core = mm6_static_core_create();
  if (!core || !mm6_static_core_reset(core, rom.data(), rom.size())) {
    std::fprintf(stderr, "ROM rejected\n");
    mm6_static_core_destroy(core);
    return 3;
  }

  std::array<std::uint8_t, MM6_FRAME_PIXELS> pixels{};
  std::array<std::int16_t, 4096> pcm{};
  std::uint64_t frame_hash = kFnvOffset;
  std::uint64_t audio_hash = kFnvOffset;
  std::uint64_t total_instructions = 0;
  MM6FrameResult result{};

  for (unsigned frame = 0; frame < 4000u; ++frame) {
    if (!mm6_static_core_advance_frame(core, scripted_input(frame), 0u,
                                       1000000u, &result) ||
        !result.completed || result.trap != MM6_CORE_TRAP_NONE) {
      std::fprintf(stderr, "frame %u failed: trap=%s pc=%04X\n", frame,
                   mm6_static_core_trap_name(result.trap),
                   result.program_counter);
      mm6_static_core_destroy(core);
      return 4;
    }
    total_instructions += result.executed_instructions;
    if (!mm6_static_core_frame_copy_indexed(core, pixels.data(), pixels.size())) {
      mm6_static_core_destroy(core);
      return 5;
    }
    hash_bytes(frame_hash, pixels.data(), pixels.size());
    while (mm6_static_core_audio_available(core)) {
      const std::size_t count = mm6_static_core_audio_read(
          core, pcm.data(), pcm.size());
      if (!count) {
        mm6_static_core_destroy(core);
        return 6;
      }
      hash_bytes(audio_hash, pcm.data(), count * sizeof(pcm[0]));
    }
  }

  std::size_t snapshot_size = 0;
  if (!mm6_static_core_snapshot_save(core, nullptr, 0, &snapshot_size) ||
      !snapshot_size) {
    mm6_static_core_destroy(core);
    return 7;
  }
  std::vector<std::uint8_t> snapshot(snapshot_size);
  std::size_t written = 0;
  if (!mm6_static_core_snapshot_save(core, snapshot.data(), snapshot.size(),
                                     &written) ||
      written != snapshot.size()) {
    mm6_static_core_destroy(core);
    return 8;
  }
  std::uint64_t snapshot_hash = kFnvOffset;
  hash_bytes(snapshot_hash, snapshot.data(), snapshot.size());

  std::printf(
      "MM6_COMPACTION_TRACE frames=4000 end_frame=%llu bank=%u pc=%04X "
      "instructions=%llu frame_fnv=%016llX audio_fnv=%016llX "
      "snapshot_fnv=%016llX snapshot_bytes=%zu\n",
      static_cast<unsigned long long>(result.end_frame),
      static_cast<unsigned>(result.physical_prg_bank), result.program_counter,
      static_cast<unsigned long long>(total_instructions),
      static_cast<unsigned long long>(frame_hash),
      static_cast<unsigned long long>(audio_hash),
      static_cast<unsigned long long>(snapshot_hash), snapshot.size());
  mm6_static_core_destroy(core);
  return 0;
}
