# Static-core compaction — Mega Man 6 1.2.0

## Goal and safety boundary

Version 1.2.0 reduces repeated generated C++ without changing the static
program authority. Every one of the 25,156 accepted physical-PRG-bank and
CPU-PC identities remains explicit. Every dispatcher miss still traps closed.
There is no runtime opcode decoder, interpreter, emulator core, or fallback.

The deterministic tool is `tools/compact_mm6_static_core.py`. It performs two
lossless transformations:

1. Each per-identity forwarding wrapper is replaced by a direct call from its
   existing switch case to the same fixed opcode/addressing-mode helper and the
   same identity context.
2. Ordered bus-plan strings, which the runtime never reads, are removed from
   compiled C++ and preserved per identity in
   `generated/analysis/mm6_static_core_compaction.json`.

Instruction contexts, operands, flow-edge arrays, dispatch cases and runtime
fail-closed checks remain compiled. The sidecar records original and compact
bank hashes, helper mappings and the complete removed ordered bus plans.

## Measured result

| Artifact | Uncompacted | Compacted | Reduction |
| --- | ---: | ---: | ---: |
| Generated bank C++ | 18,304,011 bytes | 10,096,182 bytes | 44.84% |
| `mm6-static-core.lib` | 13,452,886 bytes | 9,987,982 bytes | 25.76% |
| `Launcher.exe` | 7,152,640 bytes | 6,135,808 bytes | 14.22% |

Both builds used Release configuration, x64 MSVC, `/W4 /WX`, CMake 3.28.3
from Visual Studio 2022 and the same source/frontend state.

## Equivalence proof

`tests/mm6_compaction_trace.cpp` drives the exact supported ROM through 4,000
frames with deterministic controller input and hashes every indexed frame,
all produced audio and the final core-owned snapshot. The uncompacted and
compacted executables produced the exact same line:

```text
MM6_COMPACTION_TRACE frames=4000 end_frame=4000 bank=62 pc=C581 instructions=37866467 frame_fnv=B6845CF852960549 audio_fnv=058E09D5CF444770 snapshot_fnv=FAF080EC53BB0DA2 snapshot_bytes=76570
```

The compact Release build also passed the v08 APU/DMA/input tests, v09 public
API tests, headless boot test, frontend contract, screenshot contract,
settings-persistence contract and compaction-structure contract.
