#ifndef MM6_WINDOWS_LIVE_H
#define MM6_WINDOWS_LIVE_H

#ifdef _WIN32
#include <windows.h>
#include <stddef.h>

#define MM6_NES_PLAYER_COUNT 2
#define MM6_NES_BINDING_COUNT 8
#define MM6_INPUT_KEYBOARD 0
#define MM6_INPUT_GAMEPAD 1
#define MM6_INPUT_COMBINED 2

enum MM6NesBindingAction {
    MM6_BIND_UP=0, MM6_BIND_DOWN, MM6_BIND_LEFT, MM6_BIND_RIGHT,
    MM6_BIND_B, MM6_BIND_A, MM6_BIND_START, MM6_BIND_SELECT
};

struct MM6LiveSettings {
    int fullscreen;
    int integer_scale;
    int correct_aspect;
    int vsync;
    int pause_on_focus_loss;
    int audio_enabled;
    int volume_percent;
    int audio_latency_ms;
    int input_source;
    int gamepad_deadzone_percent;
    UINT bindings[MM6_NES_PLAYER_COUNT][MM6_NES_BINDING_COUNT];
    int gamepad_bindings[MM6_NES_BINDING_COUNT];
};

void mm6_windows_live_settings_defaults(MM6LiveSettings *settings);
void mm6_windows_live_set_next_settings(const MM6LiveSettings *settings);
bool mm6_windows_live_start(HWND owner, const wchar_t *rom_path,
    wchar_t *error_text, size_t error_text_count);
void mm6_windows_live_stop(void);
void mm6_windows_live_toggle_pause(void);
void mm6_windows_live_resize(int x, int y, int width, int height);
void mm6_windows_live_key_event(UINT message, WPARAM key);
HANDLE mm6_windows_live_frame_timer(void);
void mm6_windows_live_service_frame_timer(void);
bool mm6_windows_live_quick_save(void);
bool mm6_windows_live_quick_load(void);
bool mm6_windows_live_take_screenshot(void);
bool mm6_windows_live_is_running(void);
bool mm6_windows_live_is_paused(void);
#endif

#endif
