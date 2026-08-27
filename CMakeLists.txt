cmake_minimum_required(VERSION 3.20)
project(MegaMan6NESStaticRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

include(FetchContent)
set(SDL_SHARED OFF CACHE BOOL "" FORCE)
set(SDL_STATIC ON CACHE BOOL "" FORCE)
set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
set(SDL_TESTS OFF CACHE BOOL "" FORCE)
set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SDL_INSTALL OFF CACHE BOOL "" FORCE)
FetchContent_Declare(mm6_sdl
    URL "https://github.com/libsdl-org/SDL/archive/refs/tags/release-3.4.10.zip"
    URL_HASH "SHA256=30DCE54890B17544A35E4521274762016AF6ED59C2183B896EF5E6693E97FB6C"
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE)
FetchContent_MakeAvailable(mm6_sdl)

file(GLOB MM6_GENERATED_SOURCES CONFIGURE_DEPENDS generated/static-core/src/*.cpp)
file(GLOB MM6_RUNTIME_SOURCES CONFIGURE_DEPENDS runtime/core/src/*.cpp)
add_library(mm6-static-core STATIC ${MM6_GENERATED_SOURCES} ${MM6_RUNTIME_SOURCES})
target_include_directories(mm6-static-core PUBLIC
    runtime/core/include
    generated/static-core/include)

if(WIN32)
    add_executable(mega-man-6-launcher WIN32
        src/gui/mm6_windows_launcher.cpp
        src/gui/mm6_windows_live.cpp
        src/gui/mm6_audio_output_sdl3.cpp
        src/gui/mm6_video_output_sdl3.cpp
        src/gui/mm6_rom.cpp
        third_party/mm6-gamepad/mm6_gamepad_input_win32.c)
    target_include_directories(mega-man-6-launcher PRIVATE
        src/gui third_party/mm6-gamepad)
    target_compile_definitions(mega-man-6-launcher PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
    target_link_libraries(mega-man-6-launcher PRIVATE
        mm6-static-core SDL3::SDL3-static comdlg32 user32 gdi32 ole32)
    set_target_properties(mega-man-6-launcher PROPERTIES
        OUTPUT_NAME "Launcher"
        RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/release")
    add_custom_command(TARGET mega-man-6-launcher POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/third_party/SDL-LICENSE.txt" "$<TARGET_FILE_DIR:mega-man-6-launcher>/SDL-LICENSE.txt"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/third_party/gamecontrollerdb.txt" "$<TARGET_FILE_DIR:mega-man-6-launcher>/gamecontrollerdb.txt"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/third_party/SDL_GameControllerDB-LICENSE.txt" "$<TARGET_FILE_DIR:mega-man-6-launcher>/SDL_GameControllerDB-LICENSE.txt"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/THIRD-PARTY-NOTICES.txt" "$<TARGET_FILE_DIR:mega-man-6-launcher>/THIRD-PARTY-NOTICES.txt"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/README.txt" "$<TARGET_FILE_DIR:mega-man-6-launcher>/README.txt"
        COMMAND "${CMAKE_COMMAND}" -E make_directory "$<TARGET_FILE_DIR:mega-man-6-launcher>/Rom"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/Rom/Readme.txt" "$<TARGET_FILE_DIR:mega-man-6-launcher>/Rom/Readme.txt")
endif()

if(MSVC)
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS)
    target_compile_options(mm6-static-core PRIVATE /W4)
    if(TARGET mega-man-6-launcher)
        target_compile_options(mega-man-6-launcher PRIVATE /W4 /permissive-)
    endif()
else()
    target_compile_options(mm6-static-core PRIVATE -Wall -Wextra -Wpedantic)
endif()
