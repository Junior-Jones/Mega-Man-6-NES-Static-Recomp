#ifndef MM6_DIRECT_CORE_H
#define MM6_DIRECT_CORE_H

#include "mm6_rom.h"
#include "mm6_static_core.h"

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MM6DirectCore MM6DirectCore;

#define MM6_DIRECT_CORE_FRAME_WIDTH MM6_FRAME_WIDTH
#define MM6_DIRECT_CORE_FRAME_HEIGHT MM6_FRAME_HEIGHT
#define MM6_DIRECT_CORE_FRAME_PIXELS MM6_FRAME_PIXELS
#define MM6_PRESENTATION_MAX_FRAME_PIXELS MM6_DIRECT_CORE_FRAME_PIXELS

typedef enum MM6PresentationMode {
    MM6_PRESENTATION_NATIVE_4_3 = 0
} MM6PresentationMode;

typedef enum MM6PresentationReason {
    MM6_PRESENTATION_REASON_WIDE_DISABLED = 0
} MM6PresentationReason;

typedef struct MM6PresentationInfo {
    uint32_t width;
    uint32_t height;
    uint32_t native_x;
    MM6PresentationMode mode;
    MM6PresentationReason reason;
} MM6PresentationInfo;

typedef enum MM6SnapshotStatus {
    MM6_SNAPSHOT_OK = 0,
    MM6_SNAPSHOT_INVALID_ARGUMENT,
    MM6_SNAPSHOT_NO_MEMORY,
    MM6_SNAPSHOT_IO_ERROR,
    MM6_SNAPSHOT_BAD_FORMAT
} MM6SnapshotStatus;

MM6DirectCore *mm6_direct_core_create(void);
void mm6_direct_core_destroy(MM6DirectCore *core);
int mm6_direct_core_reset(MM6DirectCore *core, const MM6Rom *rom);
int mm6_direct_core_advance_frame(MM6DirectCore *core,
                                  uint8_t player1_buttons,
                                  uint8_t player2_buttons,
                                  uint64_t instruction_limit,
                                  MM6FrameResult *result);

int mm6_direct_core_presentation_copy_indexed(
    const MM6DirectCore *core, uint8_t *output, size_t pixel_capacity,
    MM6PresentationInfo *info);

size_t mm6_direct_core_audio_available(const MM6DirectCore *core);
size_t mm6_direct_core_audio_read(MM6DirectCore *core, int16_t *output,
                                  size_t sample_capacity);
void mm6_direct_core_audio_clear(MM6DirectCore *core);

uint64_t mm6_direct_core_frame_count(const MM6DirectCore *core);
MM6CoreTrap mm6_direct_core_trap(const MM6DirectCore *core);
const char *mm6_direct_core_trap_name(MM6CoreTrap trap);
uint16_t mm6_direct_core_program_counter(const MM6DirectCore *core);

MM6SnapshotStatus mm6_direct_core_snapshot_save(
    const MM6DirectCore *core, const MM6Rom *rom, const char *utf8_path,
    char *error, size_t error_capacity);
MM6SnapshotStatus mm6_direct_core_snapshot_load(
    MM6DirectCore *core, const MM6Rom *rom, const char *utf8_path,
    char *error, size_t error_capacity);

#ifdef __cplusplus
}
#endif

#endif
