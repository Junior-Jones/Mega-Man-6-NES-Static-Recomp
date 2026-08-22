#include "mm6_rom.h"

#include "mm6_v09_sha256.h"

#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace {
constexpr size_t kExpectedBytes = 524304u;
constexpr std::array<uint8_t, 32> kExpectedSha = {
    0x86,0xe0,0x69,0x79,0x2a,0xdd,0xf2,0x13,0x22,0x35,0x5c,0x24,0x5a,0x0b,0x15,0x5b,
    0xa7,0x4e,0x12,0x3b,0x4a,0x3e,0xb9,0xcd,0x34,0x71,0x75,0x44,0x45,0x69,0xd1,0x22};

void set_error(char *out, size_t capacity, const char *message) {
    if (!out || capacity == 0u) return;
    std::snprintf(out, capacity, "%s", message ? message : "Unknown ROM error");
}
}

extern "C" int mm6_rom_load(const char *path, MM6Rom *rom, char *error, size_t error_capacity) {
    if (!path || !rom) { set_error(error, error_capacity, "Invalid ROM path or output"); return 0; }
    std::memset(rom, 0, sizeof(*rom));
    FILE *file = nullptr;
    if (fopen_s(&file, path, "rb") != 0 || !file) { set_error(error, error_capacity, "Cannot open ROM"); return 0; }
    if (std::fseek(file, 0, SEEK_END) != 0) { std::fclose(file); set_error(error, error_capacity, "Cannot size ROM"); return 0; }
    const long length = std::ftell(file);
    if (length < 0 || std::fseek(file, 0, SEEK_SET) != 0) { std::fclose(file); set_error(error, error_capacity, "Cannot size ROM"); return 0; }
    rom->file_data = static_cast<uint8_t *>(std::malloc(static_cast<size_t>(length)));
    if (!rom->file_data) { std::fclose(file); set_error(error, error_capacity, "Out of memory"); return 0; }
    rom->file_size = static_cast<size_t>(length);
    if (std::fread(rom->file_data, 1, rom->file_size, file) != rom->file_size) {
        std::fclose(file); mm6_rom_free(rom); set_error(error, error_capacity, "Short ROM read"); return 0;
    }
    std::fclose(file); set_error(error, error_capacity, ""); return 1;
}

extern "C" void mm6_rom_free(MM6Rom *rom) {
    if (!rom) return;
    std::free(rom->file_data);
    std::memset(rom, 0, sizeof(*rom));
}

extern "C" int mm6_rom_is_expected(const MM6Rom *rom, char *reason, size_t reason_capacity) {
    if (!rom || !rom->file_data) { set_error(reason, reason_capacity, "ROM is not loaded"); return 0; }
    if (rom->file_size != kExpectedBytes) { set_error(reason, reason_capacity, "File size does not match Mega Man 6 (USA)"); return 0; }
    static constexpr uint8_t header[16] = {'N','E','S',0x1a,32,0,0x40,0,0,0,0,0,0,0,0,0};
    if (std::memcmp(rom->file_data, header, sizeof(header)) != 0) { set_error(reason, reason_capacity, "iNES header does not match Mega Man 6 (USA)"); return 0; }
    if (mm6_v09_sha256(rom->file_data, rom->file_size) != kExpectedSha) { set_error(reason, reason_capacity, "SHA-256 does not match Mega Man 6 (USA)"); return 0; }
    set_error(reason, reason_capacity, "Exact Mega Man 6 (USA) ROM"); return 1;
}
