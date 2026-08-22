#include "mm6_static_core.h"

#include <cstdint>
#include <cstdio>
#include <fstream>
#include <iterator>
#include <vector>

static std::vector<std::uint8_t> read_all(const char* path) {
  std::ifstream in(path, std::ios::binary);
  return {std::istreambuf_iterator<char>(in), {}};
}

int main(int argc, char** argv) {
  if (argc != 2) {
    std::fprintf(stderr, "usage: mm6_headless_app <Mega Man 6 (USA).nes>\n");
    return 2;
  }
  const auto rom = read_all(argv[1]);
  MM6StaticCore* core = mm6_static_core_create();
  if (!core) return 3;
  if (!mm6_static_core_reset(core, rom.data(), rom.size())) {
    std::fprintf(stderr, "ROM rejected\n");
    mm6_static_core_destroy(core);
    return 4;
  }
  MM6FrameResult frame{};
  const int ok = mm6_static_core_advance_frame(core, 0, 0, 1000000u, &frame);
  if (!ok || !frame.completed || frame.trap != MM6_CORE_TRAP_NONE) {
    std::fprintf(stderr, "frame failed: trap=%s steps=%llu\n",
                 mm6_static_core_trap_name(frame.trap),
                 static_cast<unsigned long long>(frame.executed_instructions));
    mm6_static_core_destroy(core);
    return 5;
  }
  std::printf("MM6_V10_HEADLESS frame=%llu pc=$%04X bank=%u steps=%llu audio=%zu trap=%s\n",
              static_cast<unsigned long long>(frame.end_frame), frame.program_counter,
              frame.physical_prg_bank,
              static_cast<unsigned long long>(frame.executed_instructions),
              mm6_static_core_audio_available(core),
              mm6_static_core_trap_name(frame.trap));
  mm6_static_core_destroy(core);
  return 0;
}
