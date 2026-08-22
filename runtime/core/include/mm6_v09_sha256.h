#pragma once
#include <array>
#include <cstddef>
#include <cstdint>

std::array<std::uint8_t, 32> mm6_v09_sha256(const std::uint8_t* data, std::size_t bytes);
