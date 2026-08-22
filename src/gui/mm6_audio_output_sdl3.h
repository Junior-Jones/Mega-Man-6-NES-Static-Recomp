#ifndef MM6_AUDIO_OUTPUT_SDL3_H
#define MM6_AUDIO_OUTPUT_SDL3_H

#include <windows.h>
#include <stdint.h>
#include <SDL3/SDL_audio.h>

typedef struct MM6AudioOutput {
    SDL_AudioStream *stream;
    uint32_t target_frames;
    float playback_ratio;
    int initialized;
    int paused;
    int priming;
} MM6AudioOutput;

void mm6_audio_output_initialize(MM6AudioOutput *output);
int mm6_audio_output_open(MM6AudioOutput *output,int volume_percent,int latency_ms,
    wchar_t *error,size_t error_capacity);
void mm6_audio_output_close(MM6AudioOutput *output);
void mm6_audio_output_pause(MM6AudioOutput *output);
void mm6_audio_output_resume(MM6AudioOutput *output);
void mm6_audio_output_flush(MM6AudioOutput *output);
void mm6_audio_output_push(MM6AudioOutput *output,const int16_t *samples,size_t count);

#endif
