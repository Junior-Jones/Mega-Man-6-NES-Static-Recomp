#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MM6Rom {
    uint8_t *file_data;
    size_t file_size;
} MM6Rom;

int mm6_rom_load(const char *path, MM6Rom *rom, char *error, size_t error_capacity);
void mm6_rom_free(MM6Rom *rom);
int mm6_rom_is_expected(const MM6Rom *rom, char *reason, size_t reason_capacity);

#ifdef __cplusplus
}
#endif
