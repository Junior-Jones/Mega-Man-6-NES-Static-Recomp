# Mega Man 6 (NES) Static Recomp 1.2.0

This is the production Windows source package for a fail-closed static
recompilation of the exact Mega Man 6 (USA) NES cartridge. The commercial ROM
is not included. The launcher validates the complete ROM and parsed payload
before gameplay can start.

## Windows build

Requirements:

- Windows 10 or Windows 11
- Visual Studio 2022 with Desktop development with C++
- CMake 3.20 or newer
- Internet access during initial configuration so CMake can fetch the pinned
  SDL source archive

From a Visual Studio developer command prompt:

```text
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release --target mega-man-6-launcher
```

The executable and runtime files are written to `build/release`.

## Runtime use

Place a legally supplied `Mega Man 6 (USA).nes` in the `Rom` folder beside
`Launcher.exe`, or select it with Browse ROM. The launcher accepts only the exact
supported ROM, which is not included.

The accessible single-player Win32 launcher provides keyboard and gamepad
controls, SDL3 video and audio, windowed and full-screen play, scaling,
pause/resume, snapshots, exact-framebuffer screenshots, and keyboard
shortcuts. Press F1 for the Welcome and shortcut guide. Frontend choices and
the remembered ROM folder are stored in one portable `settings.ini` file.

## Source layout

- `src/gui`: Windows launcher, ROM validation, video, and audio integration
- `runtime/core`: static-core runtime and public API
- `generated/static-core`: compact generated fixed game translation
- `generated/analysis`: offline compaction audit sidecar
- `tools`: deterministic static-core compaction utility
- `third_party`: gamepad helper, SDL license, and controller database

The compact runtime keeps all 25,156 explicit bank-and-address identities and
127 fixed semantic helpers. It contains no opcode interpreter, runtime opcode
decoder, or emulator fallback. Unsupported states fail closed. A deterministic
4,000-frame comparison matches the uncompacted authority for frame, audio and
snapshot output. No commercial ROM data is stored in this source package.
