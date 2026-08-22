#pragma once
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MM6_FRAME_WIDTH 256u
#define MM6_FRAME_HEIGHT 240u
#define MM6_FRAME_PIXELS (MM6_FRAME_WIDTH * MM6_FRAME_HEIGHT)
#define MM6_NES_ROM_BYTES 524304u

typedef struct MM6StaticCore MM6StaticCore;

typedef enum MM6CoreTrap {
  MM6_CORE_TRAP_NONE = 0,
  MM6_CORE_TRAP_DISPATCH_MISS,
  MM6_CORE_TRAP_UNRESOLVED_BOUNDARY,
  MM6_CORE_TRAP_STATIC_IDENTITY_MISMATCH,
  MM6_CORE_TRAP_UNKNOWN_MAPPER_STATE,
  MM6_CORE_TRAP_BAD_ROM,
  MM6_CORE_TRAP_UNSUPPORTED_CPU_OPERATION,
  MM6_CORE_TRAP_BUS_FAULT,
  MM6_CORE_TRAP_STEP_LIMIT,
  MM6_CORE_TRAP_REENTRY
} MM6CoreTrap;

typedef struct MM6FrameResult {
  uint8_t completed;
  uint8_t stopped;
  uint8_t player1_buttons;
  uint8_t player2_buttons;
  uint16_t program_counter;
  uint16_t physical_prg_bank;
  uint64_t start_frame;
  uint64_t end_frame;
  uint64_t executed_instructions;
  MM6CoreTrap trap;
} MM6FrameResult;

typedef enum MM6HookKind {
  MM6_HOOK_BEFORE_INSTRUCTION = 1u,
  MM6_HOOK_BUS_EVENT = 2u,
  MM6_HOOK_FRAME = 4u,
  MM6_HOOK_FRONTIER = 8u
} MM6HookKind;

typedef enum MM6HookAction {
  MM6_HOOK_CONTINUE = 0,
  MM6_HOOK_STOP = 1
} MM6HookAction;

typedef struct MM6HookFilter {
  uint32_t kind_mask;
  int16_t physical_bank; /* -1 means any bank */
  uint16_t pc_first;
  uint16_t pc_last;
  uint16_t address_first;
  uint16_t address_last;
} MM6HookFilter;

typedef struct MM6HookEvent {
  MM6HookKind kind;
  uint64_t cpu_cycle;
  uint64_t frame;
  uint16_t physical_bank;
  uint16_t program_counter;
  uint16_t address;
  uint8_t value;
  uint8_t write;
  MM6CoreTrap trap;
  const char *frontier_id; /* callback-lifetime only; never owned by caller */
} MM6HookEvent;

typedef MM6HookAction (*MM6HookCallback)(MM6StaticCore *core, const MM6HookEvent *event, void *user);

MM6StaticCore *mm6_static_core_create(void);
void mm6_static_core_destroy(MM6StaticCore *core);
int mm6_static_core_reset(MM6StaticCore *core, const uint8_t *rom, size_t rom_bytes);
int mm6_static_core_advance_frame(MM6StaticCore *core,
                                  uint8_t player1_buttons,
                                  uint8_t player2_buttons,
                                  uint64_t instruction_limit,
                                  MM6FrameResult *result);

int mm6_static_core_frame_copy_bgra(const MM6StaticCore *core, uint32_t *output, size_t pixel_capacity);
int mm6_static_core_frame_copy_indexed(const MM6StaticCore *core, uint8_t *output, size_t pixel_capacity);
size_t mm6_static_core_audio_available(const MM6StaticCore *core);
size_t mm6_static_core_audio_read(MM6StaticCore *core, int16_t *output, size_t sample_capacity);
void mm6_static_core_audio_clear(MM6StaticCore *core);

MM6CoreTrap mm6_static_core_trap(const MM6StaticCore *core);
const char *mm6_static_core_trap_name(MM6CoreTrap trap);

void mm6_static_core_set_hook(MM6StaticCore *core,
                              const MM6HookFilter *filter,
                              MM6HookCallback callback,
                              void *user);
void mm6_static_core_clear_hook(MM6StaticCore *core);

/* Safe-boundary, core-owned snapshot API. A null output queries required size. */
size_t mm6_static_core_snapshot_size(const MM6StaticCore *core);
int mm6_static_core_snapshot_save(const MM6StaticCore *core,
                                  uint8_t *output,
                                  size_t output_capacity,
                                  size_t *written);
int mm6_static_core_snapshot_load(MM6StaticCore *core,
                                  const uint8_t *snapshot,
                                  size_t snapshot_bytes);

#ifdef __cplusplus
}
#endif
