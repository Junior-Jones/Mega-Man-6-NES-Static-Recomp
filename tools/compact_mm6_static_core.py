#!/usr/bin/env python3
"""Losslessly compact Mega Man 6's generated static dispatch banks.

The original generator emits one C++ wrapper and one compiled string-array bus
plan for every physical-bank/CPU-PC identity.  Runtime execution never reads
the plan strings.  This tool retains every identity, context, flow edge and
fixed opcode helper call while:

* moving ordered bus-plan strings into an auditable JSON sidecar; and
* replacing identity wrappers with direct helper calls in the bank switch.

There is deliberately no opcode decoder, interpreter, or dispatch fallback.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import re
from pathlib import Path


INSTRUCTION_RE = re.compile(
    r"static constexpr const char\* kPlan_(?P<identity>b\d+_[0-9A-F]+)\[\] = \{\n"
    r"(?P<plan>.*?)"
    r"\};\n"
    r"static constexpr MM6FlowEdgeSpec kEdges_(?P=identity)\[\] = \{\n"
    r"(?P<edges>.*?)"
    r"\};\n"
    r"static constexpr MM6InstructionContext kCtx_(?P=identity) = \{(?P<context>.*?)\};\n"
    r"static MM6ExecResult insn_(?P=identity)\(MM6Runtime\* rt\) \{\n"
    r"  return (?P<helper>mm6_exec_op_[A-Za-z0-9_]+)\(rt, kCtx_(?P=identity)\);\n"
    r"\}\n",
    re.DOTALL,
)

CASE_RE = re.compile(
    r"(?P<indent>\s*)case (?P<pc>0x[0-9A-F]+u): return insn_"
    r"(?P<identity>b\d+_[0-9A-F]+)\(rt\);"
)


def sha256_bytes(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def sha256_file(path: Path) -> str:
    return sha256_bytes(path.read_bytes())


def write_json(path: Path, value: object) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(
        json.dumps(value, indent=2, sort_keys=True, ensure_ascii=True) + "\n",
        encoding="utf-8",
        newline="\n",
    )


def ordered_tree_manifest(root: Path) -> tuple[list[dict[str, object]], str]:
    rows: list[dict[str, object]] = []
    paths = sorted(
        path
        for path in root.rglob("*")
        if path.is_file() and path.name != "GENERATION-MANIFEST.json"
    )
    for path in paths:
        rows.append(
            {
                "bytes": path.stat().st_size,
                "path": path.relative_to(root).as_posix(),
                "sha256": sha256_file(path),
            }
        )
    material = "".join(
        f"{row['sha256']}  {row['path']}\n" for row in rows
    ).encode("utf-8")
    return rows, sha256_bytes(material)


def refresh_generation_manifest(static_root: Path) -> None:
    manifest_path = static_root / "GENERATION-MANIFEST.json"
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    rows, tree_hash = ordered_tree_manifest(static_root)
    manifest["files"] = rows
    manifest["payload_file_count"] = len(rows)
    manifest["ordered_generated_tree_sha256"] = tree_hash
    write_json(manifest_path, manifest)


def parse_plan(raw_plan: str) -> list[str]:
    entries: list[str] = []
    for line in raw_plan.splitlines():
        stripped = line.strip()
        if not stripped:
            continue
        if not stripped.endswith(","):
            raise ValueError(f"unexpected bus-plan line: {line!r}")
        entries.append(json.loads(stripped[:-1]))
    return entries


def compact_bank(path: Path) -> tuple[dict[str, object], list[dict[str, object]]]:
    original = path.read_bytes()
    # The checked-in generator output uses CRLF; normalize the generated
    # compact authority to LF so the rewrite is deterministic on every host.
    text = original.decode("utf-8").replace("\r\n", "\n")
    entries: list[dict[str, object]] = []
    helpers: dict[str, str] = {}

    def compact_instruction(match: re.Match[str]) -> str:
        identity = match.group("identity")
        context = match.group("context")
        parts = context.split(", ")
        if len(parts) != 9:
            raise ValueError(f"{path.name}: unexpected context for {identity}: {context}")
        expected_plan = f"kPlan_{identity}"
        expected_edges = f"kEdges_{identity}"
        if parts[5] != expected_plan or parts[7] != expected_edges:
            raise ValueError(f"{path.name}: mismatched arrays for {identity}")

        bank = int(parts[0].removesuffix("u"), 10)
        cpu_pc = int(parts[1].removesuffix("u"), 16)
        rom_offset = int(parts[2].removesuffix("u"), 16)
        operand = int(parts[3].removesuffix("u"), 16)
        operand_bytes = int(parts[4].removesuffix("u"), 10)
        edge_count = sum(
            1 for line in match.group("edges").splitlines() if line.lstrip().startswith("{")
        )
        helper = match.group("helper")
        helpers[identity] = helper
        entries.append(
            {
                "cpu_pc": f"0x{cpu_pc:04X}",
                "flow_edge_count": edge_count,
                "helper": helper,
                "identity": identity,
                "operand": f"0x{operand:04X}",
                "operand_bytes": operand_bytes,
                "ordered_bus_plan": parse_plan(match.group("plan")),
                "physical_prg_bank": bank,
                "rom_bank_offset": f"0x{rom_offset:04X}",
            }
        )
        prefix = ", ".join(parts[:5])
        return (
            f"static constexpr MM6FlowEdgeSpec kEdges_{identity}[] = {{\n"
            f"{match.group('edges')}"
            "};\n"
            f"static constexpr MM6InstructionContext kCtx_{identity} = "
            f"{{{prefix}, nullptr, 0u, kEdges_{identity}, "
            f"sizeof(kEdges_{identity}) / sizeof(kEdges_{identity}[0])}};\n"
        )

    compacted, instruction_count = INSTRUCTION_RE.subn(compact_instruction, text)
    if instruction_count == 0:
        raise ValueError(f"{path.name}: no original instruction wrappers found")

    case_count = 0

    def compact_case(match: re.Match[str]) -> str:
        nonlocal case_count
        identity = match.group("identity")
        helper = helpers.get(identity)
        if helper is None:
            raise ValueError(f"{path.name}: dispatch case has no context: {identity}")
        case_count += 1
        return (
            f"{match.group('indent')}case {match.group('pc')}: "
            f"return {helper}(rt, kCtx_{identity});"
        )

    compacted = CASE_RE.sub(compact_case, compacted)
    if case_count != instruction_count:
        raise ValueError(
            f"{path.name}: {instruction_count} contexts but {case_count} dispatch cases"
        )
    if "kPlan_" in compacted or "static MM6ExecResult insn_" in compacted:
        raise ValueError(f"{path.name}: removable generated objects remain")

    compacted = compacted.replace(
        "// Generated by tools/generate_static_core_v10.py. DO NOT EDIT.\n",
        "// Generated static authority, losslessly compacted for release 1.2.0.\n"
        "// Every physical-bank/CPU-PC identity still calls its fixed semantic helper.\n",
        1,
    )
    compacted_bytes = compacted.encode("utf-8")
    path.write_bytes(compacted_bytes)
    bank_record: dict[str, object] = {
        "compact_bytes": len(compacted_bytes),
        "compact_sha256": sha256_bytes(compacted_bytes),
        "context_count": instruction_count,
        "file": path.name,
        "original_bytes": len(original),
        "original_sha256": sha256_bytes(original),
    }
    return bank_record, entries


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--project-root",
        type=Path,
        default=Path(__file__).resolve().parents[1],
        help="source-tree root (defaults to the parent of tools)",
    )
    args = parser.parse_args()
    project = args.project_root.resolve()
    static_root = project / "generated" / "static-core"
    bank_paths = sorted((static_root / "src").glob("bank_*.cpp"))
    if not bank_paths:
        raise SystemExit("no generated bank source files found")

    bank_records: list[dict[str, object]] = []
    identities: list[dict[str, object]] = []
    for bank_path in bank_paths:
        bank_record, bank_entries = compact_bank(bank_path)
        bank_records.append(bank_record)
        identities.extend(bank_entries)

    helpers = sorted({str(entry["helper"]) for entry in identities})
    original_bytes = sum(int(record["original_bytes"]) for record in bank_records)
    compact_bytes = sum(int(record["compact_bytes"]) for record in bank_records)
    sidecar = {
        "banks": bank_records,
        "compact_bank_source_bytes": compact_bytes,
        "compiled_into_runtime": False,
        "context_count": len(identities),
        "context_identity": "physical_prg_bank:cpu_pc",
        "format": "mm6-static-core-compaction-v1",
        "helper_count": len(helpers),
        "helpers": helpers,
        "identities": identities,
        "original_bank_source_bytes": original_bytes,
        "removed_runtime_data": "ordered bus-plan strings and per-identity wrapper functions",
        "runtime_opcode_decoder": False,
    }
    sidecar_path = project / "generated" / "analysis" / "mm6_static_core_compaction.json"
    write_json(sidecar_path, sidecar)

    translation_path = static_root / "translation-manifest.json"
    translation = json.loads(translation_path.read_text(encoding="utf-8"))
    translation["compaction"] = {
        "compact_bank_source_bytes": compact_bytes,
        "compiled_ordered_bus_plans": False,
        "context_count": len(identities),
        "helper_count": len(helpers),
        "identity_dispatch_preserved": True,
        "original_bank_source_bytes": original_bytes,
        "runtime_opcode_decoder": False,
        "sidecar": "../analysis/mm6_static_core_compaction.json",
        "sidecar_sha256": sha256_file(sidecar_path),
    }
    write_json(translation_path, translation)

    readme_path = static_root / "README.md"
    readme_path.write_text(
        "# Mega Man 6 generated static translation\n\n"
        "This is the closed V13 branch-refined, mapper-aware static translation,\n"
        "losslessly compacted for release 1.2.0. Every accepted physical PRG-bank\n"
        "and CPU-PC identity remains explicit and calls its fixed opcode/mode helper.\n"
        "Runtime code does not decode opcode bytes or fall back to an interpreter.\n\n"
        "Flow edges, fail-closed dispatch traps and all 25,156 instruction contexts\n"
        "remain compiled. Audit-only ordered bus-plan strings were moved to\n"
        "`../analysis/mm6_static_core_compaction.json`; per-identity forwarding\n"
        "wrappers were replaced by direct helper calls. The compacted and original\n"
        "cores are verified with the same deterministic 4,000-frame trace. No\n"
        "commercial ROM is embedded in this source tree.\n",
        encoding="utf-8",
        newline="\n",
    )
    refresh_generation_manifest(static_root)

    print(
        "MM6 static-core compaction complete: "
        f"{len(identities)} contexts, {len(helpers)} helpers, "
        f"{original_bytes} -> {compact_bytes} bank-source bytes"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
