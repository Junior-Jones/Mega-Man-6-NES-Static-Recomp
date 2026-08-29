# Mega Man 6 generated static translation

This is the closed V13 branch-refined, mapper-aware static translation,
losslessly compacted for release 1.2.0. Every accepted physical PRG-bank
and CPU-PC identity remains explicit and calls its fixed opcode/mode helper.
Runtime code does not decode opcode bytes or fall back to an interpreter.

Flow edges, fail-closed dispatch traps and all 25,156 instruction contexts
remain compiled. Audit-only ordered bus-plan strings were moved to
`../analysis/mm6_static_core_compaction.json`; per-identity forwarding
wrappers were replaced by direct helper calls. The compacted and original
cores are verified with the same deterministic 4,000-frame trace. No
commercial ROM is embedded in this source tree.
