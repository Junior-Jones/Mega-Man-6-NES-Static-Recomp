#!/usr/bin/env python3
from pathlib import Path
import sys


root = Path(sys.argv[1])
launcher = (root / "src/gui/mm6_windows_launcher.cpp").read_text(encoding="utf-8")
live = (root / "src/gui/mm6_windows_live.cpp").read_text(encoding="utf-8")
live_header = (root / "src/gui/mm6_windows_live.h").read_text(encoding="utf-8")
audio = (root / "src/gui/mm6_audio_output_sdl3.cpp").read_text(encoding="utf-8")
adapter = (root / "src/gui/mm6_direct_core.cpp").read_text(encoding="utf-8")
core_header = (root / "runtime/core/include/mm6_static_core.h").read_text(encoding="utf-8")

for token in (
    "route_dialog_keyboard",
    "GetNextDlgTabItem",
    "WritePrivateProfileStringW(nullptr,nullptr,nullptr,g_ini_path.c_str())",
    'L"&Controls"',
    'if(wp==VK_F1){if(g_hidden)toggle_play(w);welcome(w);return 0;}',
    'L"F1 - Welcome and shortcut guide\\r\\n\\r\\nMega Man 6',
    "for(int value=0;value<=100;++value)",
    "mm6_windows_live_set_volume(g_settings.volume_percent)",
    'write_number(L"General",L"WelcomeShown",g_welcome_shown?1:0)',
    'write_number(L"Audio",L"VolumePercent",g_settings.volume_percent)',
    'write_number(L"Input",keyboard_key,(int)g_settings.bindings[0][a])',
    'write_number(L"Input",gamepad_key,g_settings.gamepad_bindings[a])',
    'L"&Controls...\\tF5"',
):
    assert token in launcher, f"missing mature launcher contract: {token}"

for forbidden in ("Player 2", "P2Action", "Two controllers"):
    assert forbidden not in launcher, f"unsupported second-player frontend remains: {forbidden}"

assert "#define MM6_NES_PLAYER_COUNT 1" in live_header

for token in (
    "std::array<MM6GamepadInputWin32,MM6_NES_PLAYER_COUNT> gamepads",
    "keyboard[0]|s->pressed[0]",
    "mm6_direct_core_advance_frame(s->core,buttons,0u,0u",
    "WM_PAINT",
    "WM_SIZE",
    'snapshot_directory(){return exe_directory()+L"\\\\Snapshots";}',
    "ensure_directory(snapshot_directory())",
    'exe_directory()+L"\\\\Screenshots"',
    "mm6_audio_output_set_volume",
    "s->pause_on_focus_loss=0",
):
    assert token in live, f"missing mature live/core connector contract: {token}"

for token in (
    "queued_frames",
    "underruns",
    "queue_depth_frames",
    "update_drift_correction",
    "mm6_audio_output_set_volume",
):
    assert token in audio, f"missing mature audio-output contract: {token}"

assert "#define MM6_AUDIO_SAMPLE_RATE 48000u" in core_header
assert "kSampleRate=(int)MM6_AUDIO_SAMPLE_RATE" in audio
assert "kSampleRate=44100" not in audio

assert "wide_screen" not in launcher and "Wide Screen" not in launcher
assert "mm6_static_core_advance_frame(core->machine" in adapter
assert "mm6_static_core_frame_copy_indexed(core->machine" in adapter

print("PASS Windows frontend meets the mature non-widescreen baseline with a single-player connector and unified settings")
