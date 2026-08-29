#!/usr/bin/env python3
"""Verify that release compaction remains static, explicit and auditable."""

from __future__ import annotations

import hashlib
import json
import re
import sys
from pathlib import Path


root = Path(sys.argv[1])
static_root = root / "generated" / "static-core"
bank_paths = sorted((static_root / "src").glob("bank_*.cpp"))
assert len(bank_paths) == 12, f"expected 12 generated banks, found {len(bank_paths)}"

context_count = 0
case_count = 0
helpers: set[str] = set()
for bank_path in bank_paths:
    text = bank_path.read_text(encoding="utf-8")
    assert "kPlan_" not in text, f"compiled bus-plan strings returned: {bank_path.name}"
    assert "static MM6ExecResult insn_" not in text, f"identity wrappers returned: {bank_path.name}"
    assert "mm6_trap_dispatch_miss" in text, f"fail-closed miss trap absent: {bank_path.name}"
    context_count += len(re.findall(r"static constexpr MM6InstructionContext kCtx_", text))
    direct_cases = re.findall(
        r"case 0x[0-9A-F]+u: return (mm6_exec_op_[A-Za-z0-9_]+)\(rt, kCtx_",
        text,
    )
    case_count += len(direct_cases)
    helpers.update(direct_cases)

assert context_count == 25156, f"context count changed: {context_count}"
assert case_count == context_count, f"dispatch count {case_count} != contexts {context_count}"
assert len(helpers) == 127, f"semantic helper count changed: {len(helpers)}"

sidecar_path = root / "generated" / "analysis" / "mm6_static_core_compaction.json"
sidecar_bytes = sidecar_path.read_bytes()
sidecar = json.loads(sidecar_bytes)
assert sidecar["context_count"] == context_count
assert sidecar["helper_count"] == len(helpers)
assert sidecar["compiled_into_runtime"] is False
assert sidecar["runtime_opcode_decoder"] is False
assert len(sidecar["identities"]) == context_count

translation = json.loads((static_root / "translation-manifest.json").read_text(encoding="utf-8"))
compaction = translation["compaction"]
assert compaction["context_count"] == context_count
assert compaction["helper_count"] == len(helpers)
assert compaction["identity_dispatch_preserved"] is True
assert compaction["runtime_opcode_decoder"] is False
# The manifest records the canonical LF form produced by the compaction tool.
# Normalize Windows checkouts before validating the stored audit hash.
canonical_sidecar_bytes = sidecar_bytes.replace(b"\r\n", b"\n")
assert compaction["sidecar_sha256"] == hashlib.sha256(canonical_sidecar_bytes).hexdigest()

print(
    "PASS compact core preserves 25,156 explicit identities, 127 fixed helpers, "
    "fail-closed dispatch and offline audit plans"
)
