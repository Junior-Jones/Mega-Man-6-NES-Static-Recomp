#ifndef MM6_VIDEO_OUTPUT_SDL3_H
#define MM6_VIDEO_OUTPUT_SDL3_H

#include <windows.h>
#include <stdint.h>
#include <SDL3/SDL.h>

#define MM6_VIDEO_FRAME_WIDTH 256
#define MM6_VIDEO_FRAME_HEIGHT 240
#define MM6_VIDEO_FRAME_PIXELS (MM6_VIDEO_FRAME_WIDTH * MM6_VIDEO_FRAME_HEIGHT)

typedef struct MM6VideoOutput {
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *texture;
    uint32_t pixels[MM6_VIDEO_FRAME_PIXELS];
    int frame_valid;
    int video_initialized;
    int vsync_enabled;
} MM6VideoOutput;

void mm6_video_output_initialize(MM6VideoOutput *output);
int mm6_video_output_open(MM6VideoOutput *output, HWND window, int vsync,
    wchar_t *error, size_t error_capacity);
void mm6_video_output_close(MM6VideoOutput *output);
int mm6_video_output_submit(MM6VideoOutput *output, const uint8_t *indices);
int mm6_video_output_present(MM6VideoOutput *output, int integer_scale,
    int correct_aspect);

#endif
