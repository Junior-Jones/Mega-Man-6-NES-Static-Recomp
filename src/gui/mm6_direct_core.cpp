#include "mm6_direct_core.h"

#include <cstdio>
#include <cstring>
#include <new>
#include <string>
#include <vector>

#ifdef _WIN32
#include <io.h>
#include <windows.h>
#endif

struct MM6DirectCore {
    MM6StaticCore *machine{};
    uint64_t frame_count{};
    uint16_t program_counter{};
};

namespace {
void set_error(char *output, size_t capacity, const char *message) {
    if (output && capacity) {
        std::snprintf(output, capacity, "%s", message ? message : "Unknown error");
    }
}
}

extern "C" MM6DirectCore *mm6_direct_core_create(void) {
    MM6DirectCore *core = new (std::nothrow) MM6DirectCore{};
    if (!core) return nullptr;
    core->machine = mm6_static_core_create();
    if (!core->machine) {
        delete core;
        return nullptr;
    }
    return core;
}

extern "C" void mm6_direct_core_destroy(MM6DirectCore *core) {
    if (!core) return;
    mm6_static_core_destroy(core->machine);
    delete core;
}

extern "C" int mm6_direct_core_reset(MM6DirectCore *core, const MM6Rom *rom) {
    if (!core || !core->machine || !rom || !rom->file_data) return 0;
    core->frame_count = 0;
    core->program_counter = 0;
    return mm6_static_core_reset(core->machine, rom->file_data, rom->file_size);
}

extern "C" int mm6_direct_core_advance_frame(
    MM6DirectCore *core, uint8_t player1_buttons, uint8_t player2_buttons,
    uint64_t instruction_limit, MM6FrameResult *result) {
    if (!core || !core->machine || !result) return 0;
    if (!mm6_static_core_advance_frame(core->machine, player1_buttons,
                                       player2_buttons, instruction_limit,
                                       result)) return 0;
    core->frame_count = result->end_frame;
    core->program_counter = result->program_counter;
    return result->completed && result->trap == MM6_CORE_TRAP_NONE;
}

extern "C" int mm6_direct_core_presentation_copy_indexed(
    const MM6DirectCore *core, uint8_t *output, size_t pixel_capacity,
    MM6PresentationInfo *info) {
    if (!core || !core->machine || !output || !info) return 0;
    info->width = MM6_DIRECT_CORE_FRAME_WIDTH;
    info->height = MM6_DIRECT_CORE_FRAME_HEIGHT;
    info->native_x = 0;
    info->mode = MM6_PRESENTATION_NATIVE_4_3;
    info->reason = MM6_PRESENTATION_REASON_WIDE_DISABLED;
    return mm6_static_core_frame_copy_indexed(core->machine, output,
                                               pixel_capacity);
}

extern "C" size_t mm6_direct_core_audio_available(const MM6DirectCore *core) {
    return core && core->machine ? mm6_static_core_audio_available(core->machine) : 0;
}

extern "C" size_t mm6_direct_core_audio_read(MM6DirectCore *core,
                                               int16_t *output,
                                               size_t sample_capacity) {
    return core && core->machine
        ? mm6_static_core_audio_read(core->machine, output, sample_capacity)
        : 0;
}

extern "C" void mm6_direct_core_audio_clear(MM6DirectCore *core) {
    if (core && core->machine) mm6_static_core_audio_clear(core->machine);
}

extern "C" uint64_t mm6_direct_core_frame_count(const MM6DirectCore *core) {
    return core ? core->frame_count : 0;
}

extern "C" MM6CoreTrap mm6_direct_core_trap(const MM6DirectCore *core) {
    return core && core->machine
        ? mm6_static_core_trap(core->machine)
        : MM6_CORE_TRAP_BAD_ROM;
}

extern "C" const char *mm6_direct_core_trap_name(MM6CoreTrap trap) {
    return mm6_static_core_trap_name(trap);
}

extern "C" uint16_t mm6_direct_core_program_counter(const MM6DirectCore *core) {
    return core ? core->program_counter : 0;
}

extern "C" MM6SnapshotStatus mm6_direct_core_snapshot_save(
    const MM6DirectCore *core, const MM6Rom *rom, const char *utf8_path,
    char *error, size_t error_capacity) {
    (void)rom;
    if (!core || !core->machine || !utf8_path || !*utf8_path) {
        set_error(error, error_capacity, "Invalid snapshot save request");
        return MM6_SNAPSHOT_INVALID_ARGUMENT;
    }
    const size_t size = mm6_static_core_snapshot_size(core->machine);
    if (!size) {
        set_error(error, error_capacity, "The static core did not provide a snapshot");
        return MM6_SNAPSHOT_BAD_FORMAT;
    }
    std::vector<uint8_t> data;
    try {
        data.resize(size);
    } catch (const std::bad_alloc &) {
        set_error(error, error_capacity, "Not enough memory for the snapshot");
        return MM6_SNAPSHOT_NO_MEMORY;
    }
    size_t written = 0;
    if (!mm6_static_core_snapshot_save(core->machine, data.data(), data.size(),
                                       &written) || written != data.size()) {
        set_error(error, error_capacity, "The static core could not save its state");
        return MM6_SNAPSHOT_BAD_FORMAT;
    }
    const std::string temporary = std::string(utf8_path) + ".tmp";
    FILE *file = nullptr;
    if (fopen_s(&file, temporary.c_str(), "wb") != 0 || !file) {
        set_error(error, error_capacity, "The temporary snapshot file could not be opened");
        return MM6_SNAPSHOT_IO_ERROR;
    }
    bool ok = std::fwrite(data.data(), 1, data.size(), file) == data.size();
    ok = ok && std::fflush(file) == 0;
#ifdef _WIN32
    ok = ok && _commit(_fileno(file)) == 0;
#endif
    ok = std::fclose(file) == 0 && ok;
#ifdef _WIN32
    if (ok) ok = MoveFileExA(temporary.c_str(), utf8_path,
                             MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH) != FALSE;
#else
    if (ok) ok = std::rename(temporary.c_str(), utf8_path) == 0;
#endif
    if (!ok) {
        std::remove(temporary.c_str());
        set_error(error, error_capacity, "The snapshot file could not be committed");
        return MM6_SNAPSHOT_IO_ERROR;
    }
    set_error(error, error_capacity, "");
    return MM6_SNAPSHOT_OK;
}

extern "C" MM6SnapshotStatus mm6_direct_core_snapshot_load(
    MM6DirectCore *core, const MM6Rom *rom, const char *utf8_path,
    char *error, size_t error_capacity) {
    (void)rom;
    if (!core || !core->machine || !utf8_path || !*utf8_path) {
        set_error(error, error_capacity, "Invalid snapshot load request");
        return MM6_SNAPSHOT_INVALID_ARGUMENT;
    }
    FILE *file = nullptr;
    if (fopen_s(&file, utf8_path, "rb") != 0 || !file) {
        set_error(error, error_capacity, "The snapshot file could not be opened");
        return MM6_SNAPSHOT_IO_ERROR;
    }
    bool ok = std::fseek(file, 0, SEEK_END) == 0;
    const long length = ok ? std::ftell(file) : -1;
    ok = length > 0 && std::fseek(file, 0, SEEK_SET) == 0;
    std::vector<uint8_t> data;
    if (ok) {
        try {
            data.resize(static_cast<size_t>(length));
        } catch (const std::bad_alloc &) {
            ok = false;
        }
    }
    if (ok) ok = std::fread(data.data(), 1, data.size(), file) == data.size();
    ok = std::fclose(file) == 0 && ok;
    if (!ok || !mm6_static_core_snapshot_load(core->machine, data.data(),
                                               data.size())) {
        set_error(error, error_capacity, "The snapshot is not compatible");
        return MM6_SNAPSHOT_BAD_FORMAT;
    }
    set_error(error, error_capacity, "");
    return MM6_SNAPSHOT_OK;
}
