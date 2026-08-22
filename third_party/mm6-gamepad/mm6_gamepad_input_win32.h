#ifndef MM6_GAMEPAD_INPUT_WIN32_H
#define MM6_GAMEPAD_INPUT_WIN32_H

#include <stddef.h>
#include <stdint.h>
#include <windows.h>

#include <SDL3/SDL_gamepad.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MM6_GAMEPAD_BINDING_COUNT 8

typedef enum MM6GamepadControl {
    MM6_GAMEPAD_DPAD_UP = 1,
    MM6_GAMEPAD_DPAD_DOWN,
    MM6_GAMEPAD_DPAD_LEFT,
    MM6_GAMEPAD_DPAD_RIGHT,
    MM6_GAMEPAD_LEFT_STICK_UP,
    MM6_GAMEPAD_LEFT_STICK_DOWN,
    MM6_GAMEPAD_LEFT_STICK_LEFT,
    MM6_GAMEPAD_LEFT_STICK_RIGHT,
    MM6_GAMEPAD_FACE_SOUTH,
    MM6_GAMEPAD_FACE_EAST,
    MM6_GAMEPAD_FACE_WEST,
    MM6_GAMEPAD_FACE_NORTH,
    MM6_GAMEPAD_LEFT_SHOULDER,
    MM6_GAMEPAD_RIGHT_SHOULDER,
    MM6_GAMEPAD_LEFT_TRIGGER,
    MM6_GAMEPAD_RIGHT_TRIGGER,
    MM6_GAMEPAD_START,
    MM6_GAMEPAD_BACK,
    MM6_GAMEPAD_LEFT_STICK_BUTTON,
    MM6_GAMEPAD_RIGHT_STICK_BUTTON,
    MM6_GAMEPAD_CONTROL_LAST = MM6_GAMEPAD_RIGHT_STICK_BUTTON
} MM6GamepadControl;

typedef struct MM6GamepadInputWin32 {
    SDL_Gamepad *handle;
    int initialized;
    int startup_gamepad_found;
    unsigned player_index;
    unsigned refresh_countdown;
    uint32_t analog_latched;
    char preferred_guid[64];
    char guid[64];
    wchar_t name[160];
} MM6GamepadInputWin32;

int mm6_gamepad_win32_initialize(MM6GamepadInputWin32 *input,
                                     const wchar_t *mapping_path,
                                     unsigned player_index,
                                     const wchar_t *preferred_guid);
void mm6_gamepad_win32_shutdown(MM6GamepadInputWin32 *input);
void mm6_gamepad_win32_begin_frame(MM6GamepadInputWin32 *inputs,
                                       size_t input_count);
uint16_t mm6_gamepad_win32_poll(
    MM6GamepadInputWin32 *input,
    const int bindings[MM6_GAMEPAD_BINDING_COUNT],
    int deadzone_percent);
int mm6_gamepad_win32_connected(const MM6GamepadInputWin32 *input);
const wchar_t *mm6_gamepad_win32_name(const MM6GamepadInputWin32 *input);
void mm6_gamepad_win32_guid(const MM6GamepadInputWin32 *input,
                                wchar_t *guid, size_t capacity);
void mm6_gamepad_win32_default_bindings(
    int bindings[MM6_GAMEPAD_BINDING_COUNT]);
const wchar_t *mm6_gamepad_win32_control_name(int control);
int mm6_gamepad_win32_capture_control(MM6GamepadInputWin32 *input);
void mm6_gamepad_win32_control_display_name(
    const MM6GamepadInputWin32 *input, int control,
    wchar_t *text, size_t capacity);

#ifdef __cplusplus
}
#endif

#endif
