# Application source

`gui` contains the production Windows launcher, exact-ROM validation, SDL3
video and audio integration, keyboard and gamepad input, accessible dialogs,
settings, snapshots, and screenshot support.

The application calls the fixed static-core public API directly. It does not
contain an opcode interpreter or emulator fallback.
