#!/usr/bin/env python3
"""Lock the Windows input path to the Mega Man 6 one-player NES contract."""

from pathlib import Path
import sys


root = Path(sys.argv[1])
launcher = (root / "src/gui/mm6_windows_launcher.cpp").read_text(encoding="utf-8")
live = (root / "src/gui/mm6_windows_live.cpp").read_text(encoding="utf-8")
adapter = (root / "src/gui/mm6_direct_core.cpp").read_text(encoding="utf-8")

for token in (
    "keyboard[0]|s->pressed[0]",
    "s->pressed[player]|=(uint8_t)(mask&action&~s->keyboard[player])",
    "s->keyboard[player]|=mask",
    "else s->keyboard[player]&=(uint8_t)~mask;",
    "s->pressed[0]=0;s->next_tick+=ticks;++ran;",
    "mm6_direct_core_advance_frame(s->core,buttons,0u,0u",
):
    assert token in live, f"missing Mega Man 6 input contract: {token}"

for token in (
    "case WM_KEYDOWN:",
    "mm6_windows_live_key_event(WM_KEYDOWN,wp)",
    "case WM_KEYUP:",
    "mm6_windows_live_key_event(WM_KEYUP,wp)",
    "MsgWaitForMultipleObjectsEx",
    "while(PeekMessageW(&msg,nullptr,0,0,PM_REMOVE))",
    "if(timer_ready&&current==timer)mm6_windows_live_service_frame_timer();",
):
    assert token in launcher, f"missing Mega Man 6 message/input route: {token}"

assert "mm6_static_core_advance_frame(core->machine" in adapter
assert "GetAsyncKeyState" not in live
assert "reconcile_keyboard" not in live
assert "processed<256u" not in launcher
assert "WaitForSingleObject(current,0)" not in launcher

print("PASS input and frame scheduling match the Mega Man 6 frontend contract")
