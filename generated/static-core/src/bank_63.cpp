// Generated static authority, losslessly compacted for release 1.2.0.
// Every physical-bank/CPU-PC identity still calls its fixed semantic helper.
#include "mm6_v05_contract.h"

namespace {
static constexpr MM6FlowEdgeSpec kEdges_b63_0001[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE004u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0001 = {63u, 0xE001u, 0x0001u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_0001, sizeof(kEdges_b63_0001) / sizeof(kEdges_b63_0001[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0004[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0004 = {63u, 0xE004u, 0x0004u, 0u, 0u, nullptr, 0u, kEdges_b63_0004, sizeof(kEdges_b63_0004) / sizeof(kEdges_b63_0004[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0005[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE006u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0005 = {63u, 0xE005u, 0x0005u, 0u, 0u, nullptr, 0u, kEdges_b63_0005, sizeof(kEdges_b63_0005) / sizeof(kEdges_b63_0005[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0006[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE007u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0006 = {63u, 0xE006u, 0x0006u, 0u, 0u, nullptr, 0u, kEdges_b63_0006, sizeof(kEdges_b63_0006) / sizeof(kEdges_b63_0006[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0007[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE00Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0007 = {63u, 0xE007u, 0x0007u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b63_0007, sizeof(kEdges_b63_0007) / sizeof(kEdges_b63_0007[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_000A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCF4Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE00Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_000A = {63u, 0xE00Au, 0x000Au, 0xCF4Au, 2u, nullptr, 0u, kEdges_b63_000A, sizeof(kEdges_b63_000A) / sizeof(kEdges_b63_000A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_000D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE00Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_000D = {63u, 0xE00Du, 0x000Du, 0u, 0u, nullptr, 0u, kEdges_b63_000D, sizeof(kEdges_b63_000D) / sizeof(kEdges_b63_000D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_000E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE00Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_000E = {63u, 0xE00Eu, 0x000Eu, 0u, 0u, nullptr, 0u, kEdges_b63_000E, sizeof(kEdges_b63_000E) / sizeof(kEdges_b63_000E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_000F[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_000F = {63u, 0xE00Fu, 0x000Fu, 0xC62Bu, 2u, nullptr, 0u, kEdges_b63_000F, sizeof(kEdges_b63_000F) / sizeof(kEdges_b63_000F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0012[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE015u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0012 = {63u, 0xE012u, 0x0012u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0012, sizeof(kEdges_b63_0012) / sizeof(kEdges_b63_0012[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0015[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE017u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0015 = {63u, 0xE015u, 0x0015u, 0x00FEu, 1u, nullptr, 0u, kEdges_b63_0015, sizeof(kEdges_b63_0015) / sizeof(kEdges_b63_0015[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0017[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE01Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0017 = {63u, 0xE017u, 0x0017u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0017, sizeof(kEdges_b63_0017) / sizeof(kEdges_b63_0017[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_001A[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_001A = {63u, 0xE01Au, 0x001Au, 0u, 0u, nullptr, 0u, kEdges_b63_001A, sizeof(kEdges_b63_001A) / sizeof(kEdges_b63_001A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_001B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE01Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_001B = {63u, 0xE01Bu, 0x001Bu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_001B, sizeof(kEdges_b63_001B) / sizeof(kEdges_b63_001B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_001E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE020u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_001E = {63u, 0xE01Eu, 0x001Eu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_001E, sizeof(kEdges_b63_001E) / sizeof(kEdges_b63_001E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0020[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE023u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0020 = {63u, 0xE020u, 0x0020u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0020, sizeof(kEdges_b63_0020) / sizeof(kEdges_b63_0020[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0023[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0023 = {63u, 0xE023u, 0x0023u, 0u, 0u, nullptr, 0u, kEdges_b63_0023, sizeof(kEdges_b63_0023) / sizeof(kEdges_b63_0023[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0024[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE012u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE027u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0024 = {63u, 0xE024u, 0x0024u, 0xE012u, 2u, nullptr, 0u, kEdges_b63_0024, sizeof(kEdges_b63_0024) / sizeof(kEdges_b63_0024[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0027[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE029u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0027 = {63u, 0xE027u, 0x0027u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0027, sizeof(kEdges_b63_0027) / sizeof(kEdges_b63_0027[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0029[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE02Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0029 = {63u, 0xE029u, 0x0029u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_0029, sizeof(kEdges_b63_0029) / sizeof(kEdges_b63_0029[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_002B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE02Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_002B = {63u, 0xE02Bu, 0x002Bu, 0xE522u, 2u, nullptr, 0u, kEdges_b63_002B, sizeof(kEdges_b63_002B) / sizeof(kEdges_b63_002B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_002E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE030u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_002E = {63u, 0xE02Eu, 0x002Eu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_002E, sizeof(kEdges_b63_002E) / sizeof(kEdges_b63_002E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0030[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE005u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE033u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0030 = {63u, 0xE030u, 0x0030u, 0xE005u, 2u, nullptr, 0u, kEdges_b63_0030, sizeof(kEdges_b63_0030) / sizeof(kEdges_b63_0030[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0033[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE034u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0033 = {63u, 0xE033u, 0x0033u, 0u, 0u, nullptr, 0u, kEdges_b63_0033, sizeof(kEdges_b63_0033) / sizeof(kEdges_b63_0033[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0034[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE036u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE030u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0034 = {63u, 0xE034u, 0x0034u, 0xE030u, 1u, nullptr, 0u, kEdges_b63_0034, sizeof(kEdges_b63_0034) / sizeof(kEdges_b63_0034[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0036[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0036 = {63u, 0xE036u, 0x0036u, 0u, 0u, nullptr, 0u, kEdges_b63_0036, sizeof(kEdges_b63_0036) / sizeof(kEdges_b63_0036[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0037[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE039u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0037 = {63u, 0xE037u, 0x0037u, 0x002Au, 1u, nullptr, 0u, kEdges_b63_0037, sizeof(kEdges_b63_0037) / sizeof(kEdges_b63_0037[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0039[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE03Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0039 = {63u, 0xE039u, 0x0039u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b63_0039, sizeof(kEdges_b63_0039) / sizeof(kEdges_b63_0039[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_003C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE03Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_003C = {63u, 0xE03Cu, 0x003Cu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_003C, sizeof(kEdges_b63_003C) / sizeof(kEdges_b63_003C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_003F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE041u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_003F = {63u, 0xE03Fu, 0x003Fu, 0x00DFu, 1u, nullptr, 0u, kEdges_b63_003F, sizeof(kEdges_b63_003F) / sizeof(kEdges_b63_003F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0041[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE043u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0041 = {63u, 0xE041u, 0x0041u, 0x0040u, 1u, nullptr, 0u, kEdges_b63_0041, sizeof(kEdges_b63_0041) / sizeof(kEdges_b63_0041[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0043[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE046u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0043 = {63u, 0xE043u, 0x0043u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0043, sizeof(kEdges_b63_0043) / sizeof(kEdges_b63_0043[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0046[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE048u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0046 = {63u, 0xE046u, 0x0046u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0046, sizeof(kEdges_b63_0046) / sizeof(kEdges_b63_0046[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0048[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE04Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0048 = {63u, 0xE048u, 0x0048u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0048, sizeof(kEdges_b63_0048) / sizeof(kEdges_b63_0048[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_004B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE04Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_004B = {63u, 0xE04Bu, 0x004Bu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_004B, sizeof(kEdges_b63_004B) / sizeof(kEdges_b63_004B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_004D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE04Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_004D = {63u, 0xE04Du, 0x004Du, 0u, 0u, nullptr, 0u, kEdges_b63_004D, sizeof(kEdges_b63_004D) / sizeof(kEdges_b63_004D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_004E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE051u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_004E = {63u, 0xE04Eu, 0x004Eu, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_004E, sizeof(kEdges_b63_004E) / sizeof(kEdges_b63_004E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0051[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE054u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0051 = {63u, 0xE051u, 0x0051u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_0051, sizeof(kEdges_b63_0051) / sizeof(kEdges_b63_0051[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0054[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE056u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0054 = {63u, 0xE054u, 0x0054u, 0x0098u, 1u, nullptr, 0u, kEdges_b63_0054, sizeof(kEdges_b63_0054) / sizeof(kEdges_b63_0054[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0056[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE059u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0056 = {63u, 0xE056u, 0x0056u, 0x060Du, 2u, nullptr, 0u, kEdges_b63_0056, sizeof(kEdges_b63_0056) / sizeof(kEdges_b63_0056[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0059[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE05Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0059 = {63u, 0xE059u, 0x0059u, 0x0066u, 1u, nullptr, 0u, kEdges_b63_0059, sizeof(kEdges_b63_0059) / sizeof(kEdges_b63_0059[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_005B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE05Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_005B = {63u, 0xE05Bu, 0x005Bu, 0xE522u, 2u, nullptr, 0u, kEdges_b63_005B, sizeof(kEdges_b63_005B) / sizeof(kEdges_b63_005B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_005E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE060u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_005E = {63u, 0xE05Eu, 0x005Eu, 0x0004u, 1u, nullptr, 0u, kEdges_b63_005E, sizeof(kEdges_b63_005E) / sizeof(kEdges_b63_005E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0060[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE063u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0060 = {63u, 0xE060u, 0x0060u, 0x0624u, 2u, nullptr, 0u, kEdges_b63_0060, sizeof(kEdges_b63_0060) / sizeof(kEdges_b63_0060[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0063[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE005u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE066u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0063 = {63u, 0xE063u, 0x0063u, 0xE005u, 2u, nullptr, 0u, kEdges_b63_0063, sizeof(kEdges_b63_0063) / sizeof(kEdges_b63_0063[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0066[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE068u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0066 = {63u, 0xE066u, 0x0066u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0066, sizeof(kEdges_b63_0066) / sizeof(kEdges_b63_0066[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0068[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE06Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0068 = {63u, 0xE068u, 0x0068u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0068, sizeof(kEdges_b63_0068) / sizeof(kEdges_b63_0068[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_006A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE06Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_006A = {63u, 0xE06Au, 0x006Au, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_006A, sizeof(kEdges_b63_006A) / sizeof(kEdges_b63_006A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_006C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE06Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_006C = {63u, 0xE06Cu, 0x006Cu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_006C, sizeof(kEdges_b63_006C) / sizeof(kEdges_b63_006C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_006E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE070u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_006E = {63u, 0xE06Eu, 0x006Eu, 0x0002u, 1u, nullptr, 0u, kEdges_b63_006E, sizeof(kEdges_b63_006E) / sizeof(kEdges_b63_006E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0070[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEE9Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE073u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0070 = {63u, 0xE070u, 0x0070u, 0xEE9Au, 2u, nullptr, 0u, kEdges_b63_0070, sizeof(kEdges_b63_0070) / sizeof(kEdges_b63_0070[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0073[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE075u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0073 = {63u, 0xE073u, 0x0073u, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0073, sizeof(kEdges_b63_0073) / sizeof(kEdges_b63_0073[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0075[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE077u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0075 = {63u, 0xE075u, 0x0075u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0075, sizeof(kEdges_b63_0075) / sizeof(kEdges_b63_0075[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0077[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE079u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE07Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0077 = {63u, 0xE077u, 0x0077u, 0xE07Du, 1u, nullptr, 0u, kEdges_b63_0077, sizeof(kEdges_b63_0077) / sizeof(kEdges_b63_0077[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0079[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE07Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0079 = {63u, 0xE079u, 0x0079u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0079, sizeof(kEdges_b63_0079) / sizeof(kEdges_b63_0079[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_007B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE07Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_007B = {63u, 0xE07Bu, 0x007Bu, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_007B, sizeof(kEdges_b63_007B) / sizeof(kEdges_b63_007B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_007D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE4D3u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE080u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_007D = {63u, 0xE07Du, 0x007Du, 0xE4D3u, 2u, nullptr, 0u, kEdges_b63_007D, sizeof(kEdges_b63_007D) / sizeof(kEdges_b63_007D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0080[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE083u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0080 = {63u, 0xE080u, 0x0080u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0080, sizeof(kEdges_b63_0080) / sizeof(kEdges_b63_0080[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0083[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE085u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0083 = {63u, 0xE083u, 0x0083u, 0x0020u, 1u, nullptr, 0u, kEdges_b63_0083, sizeof(kEdges_b63_0083) / sizeof(kEdges_b63_0083[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0085[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE087u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE063u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0085 = {63u, 0xE085u, 0x0085u, 0xE063u, 1u, nullptr, 0u, kEdges_b63_0085, sizeof(kEdges_b63_0085) / sizeof(kEdges_b63_0085[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0087[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE08Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0087 = {63u, 0xE087u, 0x0087u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_0087, sizeof(kEdges_b63_0087) / sizeof(kEdges_b63_0087[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_008A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE08Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_008A = {63u, 0xE08Au, 0x008Au, 0x0080u, 1u, nullptr, 0u, kEdges_b63_008A, sizeof(kEdges_b63_008A) / sizeof(kEdges_b63_008A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_008C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE08Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE095u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_008C = {63u, 0xE08Cu, 0x008Cu, 0xE095u, 1u, nullptr, 0u, kEdges_b63_008C, sizeof(kEdges_b63_008C) / sizeof(kEdges_b63_008C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_008E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE091u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_008E = {63u, 0xE08Eu, 0x008Eu, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_008E, sizeof(kEdges_b63_008E) / sizeof(kEdges_b63_008E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0091[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE093u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0091 = {63u, 0xE091u, 0x0091u, 0x0070u, 1u, nullptr, 0u, kEdges_b63_0091, sizeof(kEdges_b63_0091) / sizeof(kEdges_b63_0091[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0093[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE095u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE063u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0093 = {63u, 0xE093u, 0x0093u, 0xE063u, 1u, nullptr, 0u, kEdges_b63_0093, sizeof(kEdges_b63_0093) / sizeof(kEdges_b63_0093[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0095[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE097u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0095 = {63u, 0xE095u, 0x0095u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0095, sizeof(kEdges_b63_0095) / sizeof(kEdges_b63_0095[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0097[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE099u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0097 = {63u, 0xE097u, 0x0097u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0097, sizeof(kEdges_b63_0097) / sizeof(kEdges_b63_0097[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0099[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE09Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0099 = {63u, 0xE099u, 0x0099u, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0099, sizeof(kEdges_b63_0099) / sizeof(kEdges_b63_0099[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_009B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE09Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_009B = {63u, 0xE09Bu, 0x009Bu, 0x000Bu, 1u, nullptr, 0u, kEdges_b63_009B, sizeof(kEdges_b63_009B) / sizeof(kEdges_b63_009B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_009D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE09Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_009D = {63u, 0xE09Du, 0x009Du, 0x0001u, 1u, nullptr, 0u, kEdges_b63_009D, sizeof(kEdges_b63_009D) / sizeof(kEdges_b63_009D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_009F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD9CFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE0A2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_009F = {63u, 0xE09Fu, 0x009Fu, 0xD9CFu, 2u, nullptr, 0u, kEdges_b63_009F, sizeof(kEdges_b63_009F) / sizeof(kEdges_b63_009F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00A2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00A2 = {63u, 0xE0A2u, 0x00A2u, 0x0011u, 1u, nullptr, 0u, kEdges_b63_00A2, sizeof(kEdges_b63_00A2) / sizeof(kEdges_b63_00A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00A4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00A4 = {63u, 0xE0A4u, 0x00A4u, 0x064Bu, 2u, nullptr, 0u, kEdges_b63_00A4, sizeof(kEdges_b63_00A4) / sizeof(kEdges_b63_00A4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00A7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00A7 = {63u, 0xE0A7u, 0x00A7u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_00A7, sizeof(kEdges_b63_00A7) / sizeof(kEdges_b63_00A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00A9[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0ABu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE063u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00A9 = {63u, 0xE0A9u, 0x00A9u, 0xE063u, 1u, nullptr, 0u, kEdges_b63_00A9, sizeof(kEdges_b63_00A9) / sizeof(kEdges_b63_00A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00AB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00AB = {63u, 0xE0ABu, 0x00ABu, 0x0037u, 1u, nullptr, 0u, kEdges_b63_00AB, sizeof(kEdges_b63_00AB) / sizeof(kEdges_b63_00AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00AD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00AD = {63u, 0xE0ADu, 0x00ADu, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_00AD, sizeof(kEdges_b63_00AD) / sizeof(kEdges_b63_00AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00AF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB6Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE0B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00AF = {63u, 0xE0AFu, 0x00AFu, 0xDB6Du, 2u, nullptr, 0u, kEdges_b63_00AF, sizeof(kEdges_b63_00AF) / sizeof(kEdges_b63_00AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00B2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00B2 = {63u, 0xE0B2u, 0x00B2u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_00B2, sizeof(kEdges_b63_00B2) / sizeof(kEdges_b63_00B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00B4 = {63u, 0xE0B4u, 0x00B4u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_00B4, sizeof(kEdges_b63_00B4) / sizeof(kEdges_b63_00B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00B6 = {63u, 0xE0B6u, 0x00B6u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_00B6, sizeof(kEdges_b63_00B6) / sizeof(kEdges_b63_00B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00B8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE4D3u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE0BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00B8 = {63u, 0xE0B8u, 0x00B8u, 0xE4D3u, 2u, nullptr, 0u, kEdges_b63_00B8, sizeof(kEdges_b63_00B8) / sizeof(kEdges_b63_00B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00BB = {63u, 0xE0BBu, 0x00BBu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_00BB, sizeof(kEdges_b63_00BB) / sizeof(kEdges_b63_00BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00BD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0BFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00BD = {63u, 0xE0BDu, 0x00BDu, 0x0005u, 1u, nullptr, 0u, kEdges_b63_00BD, sizeof(kEdges_b63_00BD) / sizeof(kEdges_b63_00BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00BF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE0C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00BF = {63u, 0xE0BFu, 0x00BFu, 0xE522u, 2u, nullptr, 0u, kEdges_b63_00BF, sizeof(kEdges_b63_00BF) / sizeof(kEdges_b63_00BF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00C2 = {63u, 0xE0C2u, 0x00C2u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_00C2, sizeof(kEdges_b63_00C2) / sizeof(kEdges_b63_00C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00C4 = {63u, 0xE0C4u, 0x00C4u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_00C4, sizeof(kEdges_b63_00C4) / sizeof(kEdges_b63_00C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00C7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE005u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE0CAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00C7 = {63u, 0xE0C7u, 0x00C7u, 0xE005u, 2u, nullptr, 0u, kEdges_b63_00C7, sizeof(kEdges_b63_00C7) / sizeof(kEdges_b63_00C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00CA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00CA = {63u, 0xE0CAu, 0x00CAu, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_00CA, sizeof(kEdges_b63_00CA) / sizeof(kEdges_b63_00CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00CD[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0CFu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE0C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00CD = {63u, 0xE0CDu, 0x00CDu, 0xE0C7u, 1u, nullptr, 0u, kEdges_b63_00CD, sizeof(kEdges_b63_00CD) / sizeof(kEdges_b63_00CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00CF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00CF = {63u, 0xE0CFu, 0x00CFu, 0x0004u, 1u, nullptr, 0u, kEdges_b63_00CF, sizeof(kEdges_b63_00CF) / sizeof(kEdges_b63_00CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00D1[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xE0D5u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00D1 = {63u, 0xE0D1u, 0x00D1u, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_00D1, sizeof(kEdges_b63_00D1) / sizeof(kEdges_b63_00D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00D5[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00D5 = {63u, 0xE0D5u, 0x00D5u, 0u, 0u, nullptr, 0u, kEdges_b63_00D5, sizeof(kEdges_b63_00D5) / sizeof(kEdges_b63_00D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00D6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00D6 = {63u, 0xE0D6u, 0x00D6u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_00D6, sizeof(kEdges_b63_00D6) / sizeof(kEdges_b63_00D6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00D8[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE0EDu, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 63, 0xE0DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00D8 = {63u, 0xE0D8u, 0x00D8u, 0xE0EDu, 1u, nullptr, 0u, kEdges_b63_00D8, sizeof(kEdges_b63_00D8) / sizeof(kEdges_b63_00D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00DE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0E0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00DE = {63u, 0xE0DEu, 0x00DEu, 0x001Fu, 1u, nullptr, 0u, kEdges_b63_00DE, sizeof(kEdges_b63_00DE) / sizeof(kEdges_b63_00DE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00E0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE0E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00E0 = {63u, 0xE0E0u, 0x00E0u, 0xCA71u, 2u, nullptr, 0u, kEdges_b63_00E0, sizeof(kEdges_b63_00E0) / sizeof(kEdges_b63_00E0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00E3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00E3 = {63u, 0xE0E3u, 0x00E3u, 0x000Bu, 1u, nullptr, 0u, kEdges_b63_00E3, sizeof(kEdges_b63_00E3) / sizeof(kEdges_b63_00E3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00E5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE0E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00E5 = {63u, 0xE0E5u, 0x00E5u, 0xCA71u, 2u, nullptr, 0u, kEdges_b63_00E5, sizeof(kEdges_b63_00E5) / sizeof(kEdges_b63_00E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00E8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0EAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00E8 = {63u, 0xE0E8u, 0x00E8u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_00E8, sizeof(kEdges_b63_00E8) / sizeof(kEdges_b63_00E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00EA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE0EDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00EA = {63u, 0xE0EAu, 0x00EAu, 0xCA71u, 2u, nullptr, 0u, kEdges_b63_00EA, sizeof(kEdges_b63_00EA) / sizeof(kEdges_b63_00EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00ED[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE0F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00ED = {63u, 0xE0EDu, 0x00EDu, 0xCA71u, 2u, nullptr, 0u, kEdges_b63_00ED, sizeof(kEdges_b63_00ED) / sizeof(kEdges_b63_00ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00F0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00F0 = {63u, 0xE0F0u, 0x00F0u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_00F0, sizeof(kEdges_b63_00F0) / sizeof(kEdges_b63_00F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00F2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE0F5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00F2 = {63u, 0xE0F2u, 0x00F2u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_00F2, sizeof(kEdges_b63_00F2) / sizeof(kEdges_b63_00F2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00F5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00F5 = {63u, 0xE0F5u, 0x00F5u, 0x0049u, 1u, nullptr, 0u, kEdges_b63_00F5, sizeof(kEdges_b63_00F5) / sizeof(kEdges_b63_00F5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00F7 = {63u, 0xE0F7u, 0x00F7u, 0u, 0u, nullptr, 0u, kEdges_b63_00F7, sizeof(kEdges_b63_00F7) / sizeof(kEdges_b63_00F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00F8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00F8 = {63u, 0xE0F8u, 0x00F8u, 0x0010u, 1u, nullptr, 0u, kEdges_b63_00F8, sizeof(kEdges_b63_00F8) / sizeof(kEdges_b63_00F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00FA = {63u, 0xE0FAu, 0x00FAu, 0x0049u, 1u, nullptr, 0u, kEdges_b63_00FA, sizeof(kEdges_b63_00FA) / sizeof(kEdges_b63_00FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00FC[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00FC = {63u, 0xE0FCu, 0x00FCu, 0u, 0u, nullptr, 0u, kEdges_b63_00FC, sizeof(kEdges_b63_00FC) / sizeof(kEdges_b63_00FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE0FFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00FD = {63u, 0xE0FDu, 0x00FDu, 0x0094u, 1u, nullptr, 0u, kEdges_b63_00FD, sizeof(kEdges_b63_00FD) / sizeof(kEdges_b63_00FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_00FF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE101u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_00FF = {63u, 0xE0FFu, 0x00FFu, 0x0098u, 1u, nullptr, 0u, kEdges_b63_00FF, sizeof(kEdges_b63_00FF) / sizeof(kEdges_b63_00FF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0101[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE103u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0101 = {63u, 0xE101u, 0x0101u, 0x009Bu, 1u, nullptr, 0u, kEdges_b63_0101, sizeof(kEdges_b63_0101) / sizeof(kEdges_b63_0101[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0103[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE104u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0103 = {63u, 0xE103u, 0x0103u, 0u, 0u, nullptr, 0u, kEdges_b63_0103, sizeof(kEdges_b63_0103) / sizeof(kEdges_b63_0103[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0104[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE107u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0104 = {63u, 0xE104u, 0x0104u, 0xE111u, 2u, nullptr, 0u, kEdges_b63_0104, sizeof(kEdges_b63_0104) / sizeof(kEdges_b63_0104[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0107[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE108u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0107 = {63u, 0xE107u, 0x0107u, 0u, 0u, nullptr, 0u, kEdges_b63_0107, sizeof(kEdges_b63_0107) / sizeof(kEdges_b63_0107[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0108[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE10Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0108 = {63u, 0xE108u, 0x0108u, 0xE114u, 2u, nullptr, 0u, kEdges_b63_0108, sizeof(kEdges_b63_0108) / sizeof(kEdges_b63_0108[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_010B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE10Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_010B = {63u, 0xE10Bu, 0x010Bu, 0u, 0u, nullptr, 0u, kEdges_b63_010B, sizeof(kEdges_b63_010B) / sizeof(kEdges_b63_010B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_010C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE10Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_010C = {63u, 0xE10Cu, 0x010Cu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_010C, sizeof(kEdges_b63_010C) / sizeof(kEdges_b63_010C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_010E[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_010E = {63u, 0xE10Eu, 0x010Eu, 0xE522u, 2u, nullptr, 0u, kEdges_b63_010E, sizeof(kEdges_b63_010E) / sizeof(kEdges_b63_010E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0144[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE146u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0144 = {63u, 0xE144u, 0x0144u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0144, sizeof(kEdges_b63_0144) / sizeof(kEdges_b63_0144[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0146[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE148u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0146 = {63u, 0xE146u, 0x0146u, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0146, sizeof(kEdges_b63_0146) / sizeof(kEdges_b63_0146[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0148[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE14Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0148 = {63u, 0xE148u, 0x0148u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0148, sizeof(kEdges_b63_0148) / sizeof(kEdges_b63_0148[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_014A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE14Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_014A = {63u, 0xE14Au, 0x014Au, 0x0001u, 1u, nullptr, 0u, kEdges_b63_014A, sizeof(kEdges_b63_014A) / sizeof(kEdges_b63_014A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_014C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD9CDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE14Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_014C = {63u, 0xE14Cu, 0x014Cu, 0xD9CDu, 2u, nullptr, 0u, kEdges_b63_014C, sizeof(kEdges_b63_014C) / sizeof(kEdges_b63_014C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_014F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE151u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_014F = {63u, 0xE14Fu, 0x014Fu, 0x0013u, 1u, nullptr, 0u, kEdges_b63_014F, sizeof(kEdges_b63_014F) / sizeof(kEdges_b63_014F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0151[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE153u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0151 = {63u, 0xE151u, 0x0151u, 0x00FCu, 1u, nullptr, 0u, kEdges_b63_0151, sizeof(kEdges_b63_0151) / sizeof(kEdges_b63_0151[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0153[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE155u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0153 = {63u, 0xE153u, 0x0153u, 0x0080u, 1u, nullptr, 0u, kEdges_b63_0153, sizeof(kEdges_b63_0153) / sizeof(kEdges_b63_0153[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0155[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE158u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0155 = {63u, 0xE155u, 0x0155u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_0155, sizeof(kEdges_b63_0155) / sizeof(kEdges_b63_0155[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0158[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE15Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0158 = {63u, 0xE158u, 0x0158u, 0x00E0u, 1u, nullptr, 0u, kEdges_b63_0158, sizeof(kEdges_b63_0158) / sizeof(kEdges_b63_0158[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_015A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE15Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_015A = {63u, 0xE15Au, 0x015Au, 0x004Du, 1u, nullptr, 0u, kEdges_b63_015A, sizeof(kEdges_b63_015A) / sizeof(kEdges_b63_015A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_015C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE15Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_015C = {63u, 0xE15Cu, 0x015Cu, 0u, 0u, nullptr, 0u, kEdges_b63_015C, sizeof(kEdges_b63_015C) / sizeof(kEdges_b63_015C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_015D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE15Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_015D = {63u, 0xE15Du, 0x015Du, 0x0010u, 1u, nullptr, 0u, kEdges_b63_015D, sizeof(kEdges_b63_015D) / sizeof(kEdges_b63_015D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_015F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE162u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_015F = {63u, 0xE15Fu, 0x015Fu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_015F, sizeof(kEdges_b63_015F) / sizeof(kEdges_b63_015F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0162[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE165u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0162 = {63u, 0xE162u, 0x0162u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0162, sizeof(kEdges_b63_0162) / sizeof(kEdges_b63_0162[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0165[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE166u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0165 = {63u, 0xE165u, 0x0165u, 0u, 0u, nullptr, 0u, kEdges_b63_0165, sizeof(kEdges_b63_0165) / sizeof(kEdges_b63_0165[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0166[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE169u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0166 = {63u, 0xE166u, 0x0166u, 0x067Bu, 2u, nullptr, 0u, kEdges_b63_0166, sizeof(kEdges_b63_0166) / sizeof(kEdges_b63_0166[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0169[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE16Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0169 = {63u, 0xE169u, 0x0169u, 0x00E0u, 1u, nullptr, 0u, kEdges_b63_0169, sizeof(kEdges_b63_0169) / sizeof(kEdges_b63_0169[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_016B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE16Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_016B = {63u, 0xE16Bu, 0x016Bu, 0x004Eu, 1u, nullptr, 0u, kEdges_b63_016B, sizeof(kEdges_b63_016B) / sizeof(kEdges_b63_016B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_016D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE16Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_016D = {63u, 0xE16Du, 0x016Du, 0u, 0u, nullptr, 0u, kEdges_b63_016D, sizeof(kEdges_b63_016D) / sizeof(kEdges_b63_016D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_016E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE170u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_016E = {63u, 0xE16Eu, 0x016Eu, 0x0010u, 1u, nullptr, 0u, kEdges_b63_016E, sizeof(kEdges_b63_016E) / sizeof(kEdges_b63_016E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0170[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE173u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0170 = {63u, 0xE170u, 0x0170u, 0x067Bu, 2u, nullptr, 0u, kEdges_b63_0170, sizeof(kEdges_b63_0170) / sizeof(kEdges_b63_0170[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0173[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE176u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0173 = {63u, 0xE173u, 0x0173u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0173, sizeof(kEdges_b63_0173) / sizeof(kEdges_b63_0173[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0176[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD8ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE179u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0176 = {63u, 0xE176u, 0x0176u, 0xD8ABu, 2u, nullptr, 0u, kEdges_b63_0176, sizeof(kEdges_b63_0176) / sizeof(kEdges_b63_0176[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0179[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB94u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE17Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0179 = {63u, 0xE179u, 0x0179u, 0xDB94u, 2u, nullptr, 0u, kEdges_b63_0179, sizeof(kEdges_b63_0179) / sizeof(kEdges_b63_0179[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_017C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD92Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE17Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_017C = {63u, 0xE17Cu, 0x017Cu, 0xD92Eu, 2u, nullptr, 0u, kEdges_b63_017C, sizeof(kEdges_b63_017C) / sizeof(kEdges_b63_017C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_017F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE181u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_017F = {63u, 0xE17Fu, 0x017Fu, 0x006Bu, 1u, nullptr, 0u, kEdges_b63_017F, sizeof(kEdges_b63_017F) / sizeof(kEdges_b63_017F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0181[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE183u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0181 = {63u, 0xE181u, 0x0181u, 0x006Bu, 1u, nullptr, 0u, kEdges_b63_0181, sizeof(kEdges_b63_0181) / sizeof(kEdges_b63_0181[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0183[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE185u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0183 = {63u, 0xE183u, 0x0183u, 0x005Cu, 1u, nullptr, 0u, kEdges_b63_0183, sizeof(kEdges_b63_0183) / sizeof(kEdges_b63_0183[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0185[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE187u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0185 = {63u, 0xE185u, 0x0185u, 0x005Cu, 1u, nullptr, 0u, kEdges_b63_0185, sizeof(kEdges_b63_0185) / sizeof(kEdges_b63_0185[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0187[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB94u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE18Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0187 = {63u, 0xE187u, 0x0187u, 0xDB94u, 2u, nullptr, 0u, kEdges_b63_0187, sizeof(kEdges_b63_0187) / sizeof(kEdges_b63_0187[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_018A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD92Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE18Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_018A = {63u, 0xE18Au, 0x018Au, 0xD92Eu, 2u, nullptr, 0u, kEdges_b63_018A, sizeof(kEdges_b63_018A) / sizeof(kEdges_b63_018A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_018D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE18Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_018D = {63u, 0xE18Du, 0x018Du, 0x006Bu, 1u, nullptr, 0u, kEdges_b63_018D, sizeof(kEdges_b63_018D) / sizeof(kEdges_b63_018D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_018F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE191u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_018F = {63u, 0xE18Fu, 0x018Fu, 0x005Cu, 1u, nullptr, 0u, kEdges_b63_018F, sizeof(kEdges_b63_018F) / sizeof(kEdges_b63_018F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0191[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE192u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0191 = {63u, 0xE191u, 0x0191u, 0u, 0u, nullptr, 0u, kEdges_b63_0191, sizeof(kEdges_b63_0191) / sizeof(kEdges_b63_0191[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0192[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE194u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0192 = {63u, 0xE192u, 0x0192u, 0x003Eu, 1u, nullptr, 0u, kEdges_b63_0192, sizeof(kEdges_b63_0192) / sizeof(kEdges_b63_0192[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0194[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE196u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0194 = {63u, 0xE194u, 0x0194u, 0x005Cu, 1u, nullptr, 0u, kEdges_b63_0194, sizeof(kEdges_b63_0194) / sizeof(kEdges_b63_0194[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0196[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB94u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE199u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0196 = {63u, 0xE196u, 0x0196u, 0xDB94u, 2u, nullptr, 0u, kEdges_b63_0196, sizeof(kEdges_b63_0196) / sizeof(kEdges_b63_0196[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0199[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD92Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE19Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0199 = {63u, 0xE199u, 0x0199u, 0xD92Eu, 2u, nullptr, 0u, kEdges_b63_0199, sizeof(kEdges_b63_0199) / sizeof(kEdges_b63_0199[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_019C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE19Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_019C = {63u, 0xE19Cu, 0x019Cu, 0x006Bu, 1u, nullptr, 0u, kEdges_b63_019C, sizeof(kEdges_b63_019C) / sizeof(kEdges_b63_019C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_019E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1A0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_019E = {63u, 0xE19Eu, 0x019Eu, 0x006Bu, 1u, nullptr, 0u, kEdges_b63_019E, sizeof(kEdges_b63_019E) / sizeof(kEdges_b63_019E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01A0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1A2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01A0 = {63u, 0xE1A0u, 0x01A0u, 0x005Cu, 1u, nullptr, 0u, kEdges_b63_01A0, sizeof(kEdges_b63_01A0) / sizeof(kEdges_b63_01A0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01A2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01A2 = {63u, 0xE1A2u, 0x01A2u, 0x005Cu, 1u, nullptr, 0u, kEdges_b63_01A2, sizeof(kEdges_b63_01A2) / sizeof(kEdges_b63_01A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01A4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB94u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE1A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01A4 = {63u, 0xE1A4u, 0x01A4u, 0xDB94u, 2u, nullptr, 0u, kEdges_b63_01A4, sizeof(kEdges_b63_01A4) / sizeof(kEdges_b63_01A4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01A7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD92Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE1AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01A7 = {63u, 0xE1A7u, 0x01A7u, 0xD92Eu, 2u, nullptr, 0u, kEdges_b63_01A7, sizeof(kEdges_b63_01A7) / sizeof(kEdges_b63_01A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01AA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE1ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01AA = {63u, 0xE1AAu, 0x01AAu, 0xC62Bu, 2u, nullptr, 0u, kEdges_b63_01AA, sizeof(kEdges_b63_01AA) / sizeof(kEdges_b63_01AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01AD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01AD = {63u, 0xE1ADu, 0x01ADu, 0x0047u, 1u, nullptr, 0u, kEdges_b63_01AD, sizeof(kEdges_b63_01AD) / sizeof(kEdges_b63_01AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01AF[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1B1u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE1AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01AF = {63u, 0xE1AFu, 0x01AFu, 0xE1AAu, 1u, nullptr, 0u, kEdges_b63_01AF, sizeof(kEdges_b63_01AF) / sizeof(kEdges_b63_01AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01B1[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01B1 = {63u, 0xE1B1u, 0x01B1u, 0u, 0u, nullptr, 0u, kEdges_b63_01B1, sizeof(kEdges_b63_01B1) / sizeof(kEdges_b63_01B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01DD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01DD = {63u, 0xE1DDu, 0x01DDu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_01DD, sizeof(kEdges_b63_01DD) / sizeof(kEdges_b63_01DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1E1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01DF = {63u, 0xE1DFu, 0x01DFu, 0x008Cu, 1u, nullptr, 0u, kEdges_b63_01DF, sizeof(kEdges_b63_01DF) / sizeof(kEdges_b63_01DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01E1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01E1 = {63u, 0xE1E1u, 0x01E1u, 0u, 0u, nullptr, 0u, kEdges_b63_01E1, sizeof(kEdges_b63_01E1) / sizeof(kEdges_b63_01E1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01E2 = {63u, 0xE1E2u, 0x01E2u, 0u, 0u, nullptr, 0u, kEdges_b63_01E2, sizeof(kEdges_b63_01E2) / sizeof(kEdges_b63_01E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01E3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCC20u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE1E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01E3 = {63u, 0xE1E3u, 0x01E3u, 0xCC20u, 2u, nullptr, 0u, kEdges_b63_01E3, sizeof(kEdges_b63_01E3) / sizeof(kEdges_b63_01E3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01E6 = {63u, 0xE1E6u, 0x01E6u, 0x0016u, 1u, nullptr, 0u, kEdges_b63_01E6, sizeof(kEdges_b63_01E6) / sizeof(kEdges_b63_01E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01E8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1EAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01E8 = {63u, 0xE1E8u, 0x01E8u, 0x00F3u, 1u, nullptr, 0u, kEdges_b63_01E8, sizeof(kEdges_b63_01E8) / sizeof(kEdges_b63_01E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01EA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01EA = {63u, 0xE1EAu, 0x01EAu, 0u, 0u, nullptr, 0u, kEdges_b63_01EA, sizeof(kEdges_b63_01EA) / sizeof(kEdges_b63_01EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01EB[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1EDu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE1F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01EB = {63u, 0xE1EBu, 0x01EBu, 0xE1F6u, 1u, nullptr, 0u, kEdges_b63_01EB, sizeof(kEdges_b63_01EB) / sizeof(kEdges_b63_01EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01ED[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1EEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01ED = {63u, 0xE1EDu, 0x01EDu, 0u, 0u, nullptr, 0u, kEdges_b63_01ED, sizeof(kEdges_b63_01ED) / sizeof(kEdges_b63_01ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01EE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01EE = {63u, 0xE1EEu, 0x01EEu, 0x07D9u, 2u, nullptr, 0u, kEdges_b63_01EE, sizeof(kEdges_b63_01EE) / sizeof(kEdges_b63_01EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01F1 = {63u, 0xE1F1u, 0x01F1u, 0u, 0u, nullptr, 0u, kEdges_b63_01F1, sizeof(kEdges_b63_01F1) / sizeof(kEdges_b63_01F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01F2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1F4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE1EDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01F2 = {63u, 0xE1F2u, 0x01F2u, 0xE1EDu, 1u, nullptr, 0u, kEdges_b63_01F2, sizeof(kEdges_b63_01F2) / sizeof(kEdges_b63_01F2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01F4[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1F6u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE200u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01F4 = {63u, 0xE1F4u, 0x01F4u, 0xE200u, 1u, nullptr, 0u, kEdges_b63_01F4, sizeof(kEdges_b63_01F4) / sizeof(kEdges_b63_01F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01F6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01F6 = {63u, 0xE1F6u, 0x01F6u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_01F6, sizeof(kEdges_b63_01F6) / sizeof(kEdges_b63_01F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01F8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01F8 = {63u, 0xE1F8u, 0x01F8u, 0u, 0u, nullptr, 0u, kEdges_b63_01F8, sizeof(kEdges_b63_01F8) / sizeof(kEdges_b63_01F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01F9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01F9 = {63u, 0xE1F9u, 0x01F9u, 0x07D9u, 2u, nullptr, 0u, kEdges_b63_01F9, sizeof(kEdges_b63_01F9) / sizeof(kEdges_b63_01F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01FC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01FC = {63u, 0xE1FCu, 0x01FCu, 0u, 0u, nullptr, 0u, kEdges_b63_01FC, sizeof(kEdges_b63_01FC) / sizeof(kEdges_b63_01FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE1FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01FD = {63u, 0xE1FDu, 0x01FDu, 0u, 0u, nullptr, 0u, kEdges_b63_01FD, sizeof(kEdges_b63_01FD) / sizeof(kEdges_b63_01FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_01FE[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE200u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE1F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_01FE = {63u, 0xE1FEu, 0x01FEu, 0xE1F8u, 1u, nullptr, 0u, kEdges_b63_01FE, sizeof(kEdges_b63_01FE) / sizeof(kEdges_b63_01FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0200[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE202u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0200 = {63u, 0xE200u, 0x0200u, 0x003Eu, 1u, nullptr, 0u, kEdges_b63_0200, sizeof(kEdges_b63_0200) / sizeof(kEdges_b63_0200[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0202[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB91u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE205u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0202 = {63u, 0xE202u, 0x0202u, 0xCB91u, 2u, nullptr, 0u, kEdges_b63_0202, sizeof(kEdges_b63_0202) / sizeof(kEdges_b63_0202[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0205[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE207u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0205 = {63u, 0xE205u, 0x0205u, 0x0016u, 1u, nullptr, 0u, kEdges_b63_0205, sizeof(kEdges_b63_0205) / sizeof(kEdges_b63_0205[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0207[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE209u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0207 = {63u, 0xE207u, 0x0207u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_0207, sizeof(kEdges_b63_0207) / sizeof(kEdges_b63_0207[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0209[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE20Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0209 = {63u, 0xE209u, 0x0209u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_0209, sizeof(kEdges_b63_0209) / sizeof(kEdges_b63_0209[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_020B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE20Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_020B = {63u, 0xE20Bu, 0x020Bu, 0x07D9u, 2u, nullptr, 0u, kEdges_b63_020B, sizeof(kEdges_b63_020B) / sizeof(kEdges_b63_020B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_020E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE211u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_020E = {63u, 0xE20Eu, 0x020Eu, 0x03A0u, 2u, nullptr, 0u, kEdges_b63_020E, sizeof(kEdges_b63_020E) / sizeof(kEdges_b63_020E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0211[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE213u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE269u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0211 = {63u, 0xE211u, 0x0211u, 0xE269u, 1u, nullptr, 0u, kEdges_b63_0211, sizeof(kEdges_b63_0211) / sizeof(kEdges_b63_0211[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0213[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE216u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0213 = {63u, 0xE213u, 0x0213u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0213, sizeof(kEdges_b63_0213) / sizeof(kEdges_b63_0213[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0216[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE218u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0216 = {63u, 0xE216u, 0x0216u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_0216, sizeof(kEdges_b63_0216) / sizeof(kEdges_b63_0216[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0218[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE21Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE269u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0218 = {63u, 0xE218u, 0x0218u, 0xE269u, 1u, nullptr, 0u, kEdges_b63_0218, sizeof(kEdges_b63_0218) / sizeof(kEdges_b63_0218[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_021A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE21Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_021A = {63u, 0xE21Au, 0x021Au, 0x0458u, 2u, nullptr, 0u, kEdges_b63_021A, sizeof(kEdges_b63_021A) / sizeof(kEdges_b63_021A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_021D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE21Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_021D = {63u, 0xE21Du, 0x021Du, 0u, 0u, nullptr, 0u, kEdges_b63_021D, sizeof(kEdges_b63_021D) / sizeof(kEdges_b63_021D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_021E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCBC0u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE221u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_021E = {63u, 0xE21Eu, 0x021Eu, 0xCBC0u, 2u, nullptr, 0u, kEdges_b63_021E, sizeof(kEdges_b63_021E) / sizeof(kEdges_b63_021E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0221[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE224u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0221 = {63u, 0xE221u, 0x0221u, 0x0555u, 2u, nullptr, 0u, kEdges_b63_0221, sizeof(kEdges_b63_0221) / sizeof(kEdges_b63_0221[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0224[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE226u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE24Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0224 = {63u, 0xE224u, 0x0224u, 0xE24Bu, 1u, nullptr, 0u, kEdges_b63_0224, sizeof(kEdges_b63_0224) / sizeof(kEdges_b63_0224[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0226[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE229u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0226 = {63u, 0xE226u, 0x0226u, 0x0510u, 2u, nullptr, 0u, kEdges_b63_0226, sizeof(kEdges_b63_0226) / sizeof(kEdges_b63_0226[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0229[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE22Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0229 = {63u, 0xE229u, 0x0229u, 0x0510u, 2u, nullptr, 0u, kEdges_b63_0229, sizeof(kEdges_b63_0229) / sizeof(kEdges_b63_0229[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_022C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE22Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_022C = {63u, 0xE22Cu, 0x022Cu, 0x0510u, 2u, nullptr, 0u, kEdges_b63_022C, sizeof(kEdges_b63_022C) / sizeof(kEdges_b63_022C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_022F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE232u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_022F = {63u, 0xE22Fu, 0x022Fu, 0x04F9u, 2u, nullptr, 0u, kEdges_b63_022F, sizeof(kEdges_b63_022F) / sizeof(kEdges_b63_022F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0232[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE234u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE239u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0232 = {63u, 0xE232u, 0x0232u, 0xE239u, 1u, nullptr, 0u, kEdges_b63_0232, sizeof(kEdges_b63_0232) / sizeof(kEdges_b63_0232[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0234[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE236u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0234 = {63u, 0xE234u, 0x0234u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0234, sizeof(kEdges_b63_0234) / sizeof(kEdges_b63_0234[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0236[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE239u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0236 = {63u, 0xE236u, 0x0236u, 0x0510u, 2u, nullptr, 0u, kEdges_b63_0236, sizeof(kEdges_b63_0236) / sizeof(kEdges_b63_0236[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0239[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE23Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0239 = {63u, 0xE239u, 0x0239u, 0u, 0u, nullptr, 0u, kEdges_b63_0239, sizeof(kEdges_b63_0239) / sizeof(kEdges_b63_0239[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_023A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE23Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_023A = {63u, 0xE23Au, 0x023Au, 0u, 0u, nullptr, 0u, kEdges_b63_023A, sizeof(kEdges_b63_023A) / sizeof(kEdges_b63_023A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_023B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE23Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_023B = {63u, 0xE23Bu, 0x023Bu, 0u, 0u, nullptr, 0u, kEdges_b63_023B, sizeof(kEdges_b63_023B) / sizeof(kEdges_b63_023B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_023C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE23Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_023C = {63u, 0xE23Cu, 0x023Cu, 0x053Eu, 2u, nullptr, 0u, kEdges_b63_023C, sizeof(kEdges_b63_023C) / sizeof(kEdges_b63_023C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_023F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE241u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_023F = {63u, 0xE23Fu, 0x023Fu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_023F, sizeof(kEdges_b63_023F) / sizeof(kEdges_b63_023F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0241[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE244u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0241 = {63u, 0xE241u, 0x0241u, 0x0527u, 2u, nullptr, 0u, kEdges_b63_0241, sizeof(kEdges_b63_0241) / sizeof(kEdges_b63_0241[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0244[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE246u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0244 = {63u, 0xE244u, 0x0244u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0244, sizeof(kEdges_b63_0244) / sizeof(kEdges_b63_0244[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0246[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE248u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0246 = {63u, 0xE246u, 0x0246u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0246, sizeof(kEdges_b63_0246) / sizeof(kEdges_b63_0246[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0248[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE24Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0248 = {63u, 0xE248u, 0x0248u, 0x0555u, 2u, nullptr, 0u, kEdges_b63_0248, sizeof(kEdges_b63_0248) / sizeof(kEdges_b63_0248[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_024B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE24Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_024B = {63u, 0xE24Bu, 0x024Bu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_024B, sizeof(kEdges_b63_024B) / sizeof(kEdges_b63_024B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_024E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE250u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_024E = {63u, 0xE24Eu, 0x024Eu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_024E, sizeof(kEdges_b63_024E) / sizeof(kEdges_b63_024E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0250[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE252u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE269u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0250 = {63u, 0xE250u, 0x0250u, 0xE269u, 1u, nullptr, 0u, kEdges_b63_0250, sizeof(kEdges_b63_0250) / sizeof(kEdges_b63_0250[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0252[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE255u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0252 = {63u, 0xE252u, 0x0252u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_0252, sizeof(kEdges_b63_0252) / sizeof(kEdges_b63_0252[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0255[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE257u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE269u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0255 = {63u, 0xE255u, 0x0255u, 0xE269u, 1u, nullptr, 0u, kEdges_b63_0255, sizeof(kEdges_b63_0255) / sizeof(kEdges_b63_0255[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0257[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE25Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0257 = {63u, 0xE257u, 0x0257u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_0257, sizeof(kEdges_b63_0257) / sizeof(kEdges_b63_0257[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_025A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE25Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_025A = {63u, 0xE25Au, 0x025Au, 0u, 0u, nullptr, 0u, kEdges_b63_025A, sizeof(kEdges_b63_025A) / sizeof(kEdges_b63_025A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_025B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE25Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_025B = {63u, 0xE25Bu, 0x025Bu, 0x00F7u, 1u, nullptr, 0u, kEdges_b63_025B, sizeof(kEdges_b63_025B) / sizeof(kEdges_b63_025B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_025D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE25Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_025D = {63u, 0xE25Du, 0x025Du, 0x0004u, 1u, nullptr, 0u, kEdges_b63_025D, sizeof(kEdges_b63_025D) / sizeof(kEdges_b63_025D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_025F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE261u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE269u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_025F = {63u, 0xE25Fu, 0x025Fu, 0xE269u, 1u, nullptr, 0u, kEdges_b63_025F, sizeof(kEdges_b63_025F) / sizeof(kEdges_b63_025F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0261[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE263u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0261 = {63u, 0xE261u, 0x0261u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0261, sizeof(kEdges_b63_0261) / sizeof(kEdges_b63_0261[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0263[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE2A9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE266u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0263 = {63u, 0xE263u, 0x0263u, 0xE2A9u, 2u, nullptr, 0u, kEdges_b63_0263, sizeof(kEdges_b63_0263) / sizeof(kEdges_b63_0263[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0266[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE267u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0266 = {63u, 0xE266u, 0x0266u, 0u, 0u, nullptr, 0u, kEdges_b63_0266, sizeof(kEdges_b63_0266) / sizeof(kEdges_b63_0266[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0267[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE269u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE283u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0267 = {63u, 0xE267u, 0x0267u, 0xE283u, 1u, nullptr, 0u, kEdges_b63_0267, sizeof(kEdges_b63_0267) / sizeof(kEdges_b63_0267[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0269[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE26Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0269 = {63u, 0xE269u, 0x0269u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_0269, sizeof(kEdges_b63_0269) / sizeof(kEdges_b63_0269[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_026B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE26Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE209u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_026B = {63u, 0xE26Bu, 0x026Bu, 0xE209u, 1u, nullptr, 0u, kEdges_b63_026B, sizeof(kEdges_b63_026B) / sizeof(kEdges_b63_026B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_026D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE26Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_026D = {63u, 0xE26Du, 0x026Du, 0x008Cu, 1u, nullptr, 0u, kEdges_b63_026D, sizeof(kEdges_b63_026D) / sizeof(kEdges_b63_026D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_026F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE271u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_026F = {63u, 0xE26Fu, 0x026Fu, 0x00F0u, 1u, nullptr, 0u, kEdges_b63_026F, sizeof(kEdges_b63_026F) / sizeof(kEdges_b63_026F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0271[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE274u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0271 = {63u, 0xE271u, 0x0271u, 0x0200u, 2u, nullptr, 0u, kEdges_b63_0271, sizeof(kEdges_b63_0271) / sizeof(kEdges_b63_0271[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0274[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE275u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0274 = {63u, 0xE274u, 0x0274u, 0u, 0u, nullptr, 0u, kEdges_b63_0274, sizeof(kEdges_b63_0274) / sizeof(kEdges_b63_0274[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0275[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE276u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0275 = {63u, 0xE275u, 0x0275u, 0u, 0u, nullptr, 0u, kEdges_b63_0275, sizeof(kEdges_b63_0275) / sizeof(kEdges_b63_0275[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0276[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE277u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0276 = {63u, 0xE276u, 0x0276u, 0u, 0u, nullptr, 0u, kEdges_b63_0276, sizeof(kEdges_b63_0276) / sizeof(kEdges_b63_0276[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0277[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE278u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0277 = {63u, 0xE277u, 0x0277u, 0u, 0u, nullptr, 0u, kEdges_b63_0277, sizeof(kEdges_b63_0277) / sizeof(kEdges_b63_0277[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0278[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE27Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE271u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0278 = {63u, 0xE278u, 0x0278u, 0xE271u, 1u, nullptr, 0u, kEdges_b63_0278, sizeof(kEdges_b63_0278) / sizeof(kEdges_b63_0278[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_027A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCBE9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE27Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_027A = {63u, 0xE27Au, 0x027Au, 0xCBE9u, 2u, nullptr, 0u, kEdges_b63_027A, sizeof(kEdges_b63_027A) / sizeof(kEdges_b63_027A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_027D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCC3Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE280u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_027D = {63u, 0xE27Du, 0x027Du, 0xCC3Au, 2u, nullptr, 0u, kEdges_b63_027D, sizeof(kEdges_b63_027D) / sizeof(kEdges_b63_027D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0280[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE281u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0280 = {63u, 0xE280u, 0x0280u, 0u, 0u, nullptr, 0u, kEdges_b63_0280, sizeof(kEdges_b63_0280) / sizeof(kEdges_b63_0280[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0281[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE282u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0281 = {63u, 0xE281u, 0x0281u, 0u, 0u, nullptr, 0u, kEdges_b63_0281, sizeof(kEdges_b63_0281) / sizeof(kEdges_b63_0281[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0282[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0282 = {63u, 0xE282u, 0x0282u, 0u, 0u, nullptr, 0u, kEdges_b63_0282, sizeof(kEdges_b63_0282) / sizeof(kEdges_b63_0282[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0283[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCBE9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE286u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0283 = {63u, 0xE283u, 0x0283u, 0xCBE9u, 2u, nullptr, 0u, kEdges_b63_0283, sizeof(kEdges_b63_0283) / sizeof(kEdges_b63_0283[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0286[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCC3Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE289u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0286 = {63u, 0xE286u, 0x0286u, 0xCC3Au, 2u, nullptr, 0u, kEdges_b63_0286, sizeof(kEdges_b63_0286) / sizeof(kEdges_b63_0286[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0289[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE28Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0289 = {63u, 0xE289u, 0x0289u, 0x008Cu, 1u, nullptr, 0u, kEdges_b63_0289, sizeof(kEdges_b63_0289) / sizeof(kEdges_b63_0289[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_028B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE28Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_028B = {63u, 0xE28Bu, 0x028Bu, 0u, 0u, nullptr, 0u, kEdges_b63_028B, sizeof(kEdges_b63_028B) / sizeof(kEdges_b63_028B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_028C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE28Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_028C = {63u, 0xE28Cu, 0x028Cu, 0u, 0u, nullptr, 0u, kEdges_b63_028C, sizeof(kEdges_b63_028C) / sizeof(kEdges_b63_028C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_028D[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_028D = {63u, 0xE28Du, 0x028Du, 0u, 0u, nullptr, 0u, kEdges_b63_028D, sizeof(kEdges_b63_028D) / sizeof(kEdges_b63_028D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02A9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2ACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02A9 = {63u, 0xE2A9u, 0x02A9u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_02A9, sizeof(kEdges_b63_02A9) / sizeof(kEdges_b63_02A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02AC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02AC = {63u, 0xE2ACu, 0x02ACu, 0u, 0u, nullptr, 0u, kEdges_b63_02AC, sizeof(kEdges_b63_02AC) / sizeof(kEdges_b63_02AC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02AD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02AD = {63u, 0xE2ADu, 0x02ADu, 0x00F9u, 1u, nullptr, 0u, kEdges_b63_02AD, sizeof(kEdges_b63_02AD) / sizeof(kEdges_b63_02AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02AF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02AF = {63u, 0xE2AFu, 0x02AFu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_02AF, sizeof(kEdges_b63_02AF) / sizeof(kEdges_b63_02AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02B1 = {63u, 0xE2B1u, 0x02B1u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_02B1, sizeof(kEdges_b63_02B1) / sizeof(kEdges_b63_02B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02B4 = {63u, 0xE2B4u, 0x02B4u, 0x00E0u, 1u, nullptr, 0u, kEdges_b63_02B4, sizeof(kEdges_b63_02B4) / sizeof(kEdges_b63_02B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02B6 = {63u, 0xE2B6u, 0x02B6u, 0x008Du, 1u, nullptr, 0u, kEdges_b63_02B6, sizeof(kEdges_b63_02B6) / sizeof(kEdges_b63_02B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02B8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2B9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02B8 = {63u, 0xE2B8u, 0x02B8u, 0u, 0u, nullptr, 0u, kEdges_b63_02B8, sizeof(kEdges_b63_02B8) / sizeof(kEdges_b63_02B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02B9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2BAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02B9 = {63u, 0xE2B9u, 0x02B9u, 0u, 0u, nullptr, 0u, kEdges_b63_02B9, sizeof(kEdges_b63_02B9) / sizeof(kEdges_b63_02B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02BA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02BA = {63u, 0xE2BAu, 0x02BAu, 0u, 0u, nullptr, 0u, kEdges_b63_02BA, sizeof(kEdges_b63_02BA) / sizeof(kEdges_b63_02BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02BB = {63u, 0xE2BBu, 0x02BBu, 0x0003u, 1u, nullptr, 0u, kEdges_b63_02BB, sizeof(kEdges_b63_02BB) / sizeof(kEdges_b63_02BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02BD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02BD = {63u, 0xE2BDu, 0x02BDu, 0u, 0u, nullptr, 0u, kEdges_b63_02BD, sizeof(kEdges_b63_02BD) / sizeof(kEdges_b63_02BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02BE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2C1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02BE = {63u, 0xE2BEu, 0x02BEu, 0xE29Eu, 2u, nullptr, 0u, kEdges_b63_02BE, sizeof(kEdges_b63_02BE) / sizeof(kEdges_b63_02BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02C1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02C1 = {63u, 0xE2C1u, 0x02C1u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_02C1, sizeof(kEdges_b63_02C1) / sizeof(kEdges_b63_02C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02C3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02C3 = {63u, 0xE2C3u, 0x02C3u, 0xE2A2u, 2u, nullptr, 0u, kEdges_b63_02C3, sizeof(kEdges_b63_02C3) / sizeof(kEdges_b63_02C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02C6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2C8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02C6 = {63u, 0xE2C6u, 0x02C6u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_02C6, sizeof(kEdges_b63_02C6) / sizeof(kEdges_b63_02C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02C8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2CAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02C8 = {63u, 0xE2C8u, 0x02C8u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_02C8, sizeof(kEdges_b63_02C8) / sizeof(kEdges_b63_02C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02CA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02CA = {63u, 0xE2CAu, 0x02CAu, 0x053Eu, 2u, nullptr, 0u, kEdges_b63_02CA, sizeof(kEdges_b63_02CA) / sizeof(kEdges_b63_02CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02CD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02CD = {63u, 0xE2CDu, 0x02CDu, 0x000Au, 1u, nullptr, 0u, kEdges_b63_02CD, sizeof(kEdges_b63_02CD) / sizeof(kEdges_b63_02CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02CF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02CF = {63u, 0xE2CFu, 0x02CFu, 0x0527u, 2u, nullptr, 0u, kEdges_b63_02CF, sizeof(kEdges_b63_02CF) / sizeof(kEdges_b63_02CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02D2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2D4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02D2 = {63u, 0xE2D2u, 0x02D2u, 0x000Bu, 1u, nullptr, 0u, kEdges_b63_02D2, sizeof(kEdges_b63_02D2) / sizeof(kEdges_b63_02D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02D4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2D6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02D4 = {63u, 0xE2D4u, 0x02D4u, 0x000Au, 1u, nullptr, 0u, kEdges_b63_02D4, sizeof(kEdges_b63_02D4) / sizeof(kEdges_b63_02D4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02D6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02D6 = {63u, 0xE2D6u, 0x02D6u, 0u, 0u, nullptr, 0u, kEdges_b63_02D6, sizeof(kEdges_b63_02D6) / sizeof(kEdges_b63_02D6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02D7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02D7 = {63u, 0xE2D7u, 0x02D7u, 0x0510u, 2u, nullptr, 0u, kEdges_b63_02D7, sizeof(kEdges_b63_02D7) / sizeof(kEdges_b63_02D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02DA = {63u, 0xE2DAu, 0x02DAu, 0u, 0u, nullptr, 0u, kEdges_b63_02DA, sizeof(kEdges_b63_02DA) / sizeof(kEdges_b63_02DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02DB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02DB = {63u, 0xE2DBu, 0x02DBu, 0x000Au, 1u, nullptr, 0u, kEdges_b63_02DB, sizeof(kEdges_b63_02DB) / sizeof(kEdges_b63_02DB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02DD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2DEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02DD = {63u, 0xE2DDu, 0x02DDu, 0u, 0u, nullptr, 0u, kEdges_b63_02DD, sizeof(kEdges_b63_02DD) / sizeof(kEdges_b63_02DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02DE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2E1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02DE = {63u, 0xE2DEu, 0x02DEu, 0x8000u, 2u, nullptr, 0u, kEdges_b63_02DE, sizeof(kEdges_b63_02DE) / sizeof(kEdges_b63_02DE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02E1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02E1 = {63u, 0xE2E1u, 0x02E1u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_02E1, sizeof(kEdges_b63_02E1) / sizeof(kEdges_b63_02E1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02E3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02E3 = {63u, 0xE2E3u, 0x02E3u, 0x8200u, 2u, nullptr, 0u, kEdges_b63_02E3, sizeof(kEdges_b63_02E3) / sizeof(kEdges_b63_02E3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02E6 = {63u, 0xE2E6u, 0x02E6u, 0x000Du, 1u, nullptr, 0u, kEdges_b63_02E6, sizeof(kEdges_b63_02E6) / sizeof(kEdges_b63_02E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02E8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2EAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE2F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02E8 = {63u, 0xE2E8u, 0x02E8u, 0xE2F4u, 1u, nullptr, 0u, kEdges_b63_02E8, sizeof(kEdges_b63_02E8) / sizeof(kEdges_b63_02E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02EA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2EDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02EA = {63u, 0xE2EAu, 0x02EAu, 0x8100u, 2u, nullptr, 0u, kEdges_b63_02EA, sizeof(kEdges_b63_02EA) / sizeof(kEdges_b63_02EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02ED[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2EFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02ED = {63u, 0xE2EDu, 0x02EDu, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_02ED, sizeof(kEdges_b63_02ED) / sizeof(kEdges_b63_02ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02EF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02EF = {63u, 0xE2EFu, 0x02EFu, 0x8300u, 2u, nullptr, 0u, kEdges_b63_02EF, sizeof(kEdges_b63_02EF) / sizeof(kEdges_b63_02EF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02F2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02F2 = {63u, 0xE2F2u, 0x02F2u, 0x000Du, 1u, nullptr, 0u, kEdges_b63_02F2, sizeof(kEdges_b63_02F2) / sizeof(kEdges_b63_02F2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02F4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02F4 = {63u, 0xE2F4u, 0x02F4u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_02F4, sizeof(kEdges_b63_02F4) / sizeof(kEdges_b63_02F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02F6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02F6 = {63u, 0xE2F6u, 0x02F6u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_02F6, sizeof(kEdges_b63_02F6) / sizeof(kEdges_b63_02F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02F8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02F8 = {63u, 0xE2F8u, 0x02F8u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_02F8, sizeof(kEdges_b63_02F8) / sizeof(kEdges_b63_02F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02FA = {63u, 0xE2FAu, 0x02FAu, 0u, 0u, nullptr, 0u, kEdges_b63_02FA, sizeof(kEdges_b63_02FA) / sizeof(kEdges_b63_02FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02FB = {63u, 0xE2FBu, 0x02FBu, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_02FB, sizeof(kEdges_b63_02FB) / sizeof(kEdges_b63_02FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE2FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02FD = {63u, 0xE2FDu, 0x02FDu, 0u, 0u, nullptr, 0u, kEdges_b63_02FD, sizeof(kEdges_b63_02FD) / sizeof(kEdges_b63_02FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_02FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE301u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_02FE = {63u, 0xE2FEu, 0x02FEu, 0x8400u, 2u, nullptr, 0u, kEdges_b63_02FE, sizeof(kEdges_b63_02FE) / sizeof(kEdges_b63_02FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0301[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE303u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0301 = {63u, 0xE301u, 0x0301u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_0301, sizeof(kEdges_b63_0301) / sizeof(kEdges_b63_0301[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0303[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE306u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0303 = {63u, 0xE303u, 0x0303u, 0x8500u, 2u, nullptr, 0u, kEdges_b63_0303, sizeof(kEdges_b63_0303) / sizeof(kEdges_b63_0303[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0306[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE308u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0306 = {63u, 0xE306u, 0x0306u, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_0306, sizeof(kEdges_b63_0306) / sizeof(kEdges_b63_0306[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0308[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE309u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0308 = {63u, 0xE308u, 0x0308u, 0u, 0u, nullptr, 0u, kEdges_b63_0308, sizeof(kEdges_b63_0308) / sizeof(kEdges_b63_0308[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0309[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE30Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0309 = {63u, 0xE309u, 0x0309u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_0309, sizeof(kEdges_b63_0309) / sizeof(kEdges_b63_0309[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_030B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE30Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_030B = {63u, 0xE30Bu, 0x030Bu, 0x0002u, 1u, nullptr, 0u, kEdges_b63_030B, sizeof(kEdges_b63_030B) / sizeof(kEdges_b63_030B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_030D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE30Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_030D = {63u, 0xE30Du, 0x030Du, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_030D, sizeof(kEdges_b63_030D) / sizeof(kEdges_b63_030D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_030F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE311u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_030F = {63u, 0xE30Fu, 0x030Fu, 0x000Du, 1u, nullptr, 0u, kEdges_b63_030F, sizeof(kEdges_b63_030F) / sizeof(kEdges_b63_030F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0311[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE313u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0311 = {63u, 0xE311u, 0x0311u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0311, sizeof(kEdges_b63_0311) / sizeof(kEdges_b63_0311[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0313[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE315u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0313 = {63u, 0xE313u, 0x0313u, 0x000Du, 1u, nullptr, 0u, kEdges_b63_0313, sizeof(kEdges_b63_0313) / sizeof(kEdges_b63_0313[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0315[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE317u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0315 = {63u, 0xE315u, 0x0315u, 0x008Cu, 1u, nullptr, 0u, kEdges_b63_0315, sizeof(kEdges_b63_0315) / sizeof(kEdges_b63_0315[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0317[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE319u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0317 = {63u, 0xE317u, 0x0317u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0317, sizeof(kEdges_b63_0317) / sizeof(kEdges_b63_0317[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0319[] = {
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 63, 0xE31Cu, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 63, 0xE353u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 63, 0xE391u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 63, 0xE3D0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0319 = {63u, 0xE319u, 0x0319u, 0x0008u, 2u, nullptr, 0u, kEdges_b63_0319, sizeof(kEdges_b63_0319) / sizeof(kEdges_b63_0319[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_031C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE31Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_031C = {63u, 0xE31Cu, 0x031Cu, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_031C, sizeof(kEdges_b63_031C) / sizeof(kEdges_b63_031C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_031E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE321u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_031E = {63u, 0xE31Eu, 0x031Eu, 0x0201u, 2u, nullptr, 0u, kEdges_b63_031E, sizeof(kEdges_b63_031E) / sizeof(kEdges_b63_031E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0321[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE323u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0321 = {63u, 0xE321u, 0x0321u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_0321, sizeof(kEdges_b63_0321) / sizeof(kEdges_b63_0321[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0323[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE324u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0323 = {63u, 0xE323u, 0x0323u, 0u, 0u, nullptr, 0u, kEdges_b63_0323, sizeof(kEdges_b63_0323) / sizeof(kEdges_b63_0323[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0324[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE326u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0324 = {63u, 0xE324u, 0x0324u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0324, sizeof(kEdges_b63_0324) / sizeof(kEdges_b63_0324[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0326[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE329u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0326 = {63u, 0xE326u, 0x0326u, 0x0200u, 2u, nullptr, 0u, kEdges_b63_0326, sizeof(kEdges_b63_0326) / sizeof(kEdges_b63_0326[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0329[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE32Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0329 = {63u, 0xE329u, 0x0329u, 0u, 0u, nullptr, 0u, kEdges_b63_0329, sizeof(kEdges_b63_0329) / sizeof(kEdges_b63_0329[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_032A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE32Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_032A = {63u, 0xE32Au, 0x032Au, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_032A, sizeof(kEdges_b63_032A) / sizeof(kEdges_b63_032A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_032C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE32Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_032C = {63u, 0xE32Cu, 0x032Cu, 0u, 0u, nullptr, 0u, kEdges_b63_032C, sizeof(kEdges_b63_032C) / sizeof(kEdges_b63_032C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_032D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE32Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_032D = {63u, 0xE32Du, 0x032Du, 0u, 0u, nullptr, 0u, kEdges_b63_032D, sizeof(kEdges_b63_032D) / sizeof(kEdges_b63_032D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_032E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE32Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_032E = {63u, 0xE32Eu, 0x032Eu, 0u, 0u, nullptr, 0u, kEdges_b63_032E, sizeof(kEdges_b63_032E) / sizeof(kEdges_b63_032E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_032F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE331u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE34Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_032F = {63u, 0xE32Fu, 0x032Fu, 0xE34Bu, 1u, nullptr, 0u, kEdges_b63_032F, sizeof(kEdges_b63_032F) / sizeof(kEdges_b63_032F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0331[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE333u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0331 = {63u, 0xE331u, 0x0331u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_0331, sizeof(kEdges_b63_0331) / sizeof(kEdges_b63_0331[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0333[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE334u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0333 = {63u, 0xE333u, 0x0333u, 0u, 0u, nullptr, 0u, kEdges_b63_0333, sizeof(kEdges_b63_0333) / sizeof(kEdges_b63_0333[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0334[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE336u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0334 = {63u, 0xE334u, 0x0334u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0334, sizeof(kEdges_b63_0334) / sizeof(kEdges_b63_0334[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0336[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE339u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0336 = {63u, 0xE336u, 0x0336u, 0x0203u, 2u, nullptr, 0u, kEdges_b63_0336, sizeof(kEdges_b63_0336) / sizeof(kEdges_b63_0336[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0339[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE33Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0339 = {63u, 0xE339u, 0x0339u, 0u, 0u, nullptr, 0u, kEdges_b63_0339, sizeof(kEdges_b63_0339) / sizeof(kEdges_b63_0339[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_033A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE33Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_033A = {63u, 0xE33Au, 0x033Au, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_033A, sizeof(kEdges_b63_033A) / sizeof(kEdges_b63_033A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_033C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE33Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE34Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_033C = {63u, 0xE33Cu, 0x033Cu, 0xE34Bu, 1u, nullptr, 0u, kEdges_b63_033C, sizeof(kEdges_b63_033C) / sizeof(kEdges_b63_033C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_033E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE340u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_033E = {63u, 0xE33Eu, 0x033Eu, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_033E, sizeof(kEdges_b63_033E) / sizeof(kEdges_b63_033E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0340[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE342u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0340 = {63u, 0xE340u, 0x0340u, 0x008Du, 1u, nullptr, 0u, kEdges_b63_0340, sizeof(kEdges_b63_0340) / sizeof(kEdges_b63_0340[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0342[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE345u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0342 = {63u, 0xE342u, 0x0342u, 0x0202u, 2u, nullptr, 0u, kEdges_b63_0342, sizeof(kEdges_b63_0342) / sizeof(kEdges_b63_0342[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0345[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE346u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0345 = {63u, 0xE345u, 0x0345u, 0u, 0u, nullptr, 0u, kEdges_b63_0345, sizeof(kEdges_b63_0345) / sizeof(kEdges_b63_0345[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0346[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE347u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0346 = {63u, 0xE346u, 0x0346u, 0u, 0u, nullptr, 0u, kEdges_b63_0346, sizeof(kEdges_b63_0346) / sizeof(kEdges_b63_0346[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0347[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE348u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0347 = {63u, 0xE347u, 0x0347u, 0u, 0u, nullptr, 0u, kEdges_b63_0347, sizeof(kEdges_b63_0347) / sizeof(kEdges_b63_0347[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0348[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE349u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0348 = {63u, 0xE348u, 0x0348u, 0u, 0u, nullptr, 0u, kEdges_b63_0348, sizeof(kEdges_b63_0348) / sizeof(kEdges_b63_0348[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0349[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE34Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE350u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0349 = {63u, 0xE349u, 0x0349u, 0xE350u, 1u, nullptr, 0u, kEdges_b63_0349, sizeof(kEdges_b63_0349) / sizeof(kEdges_b63_0349[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_034B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE34Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_034B = {63u, 0xE34Bu, 0x034Bu, 0u, 0u, nullptr, 0u, kEdges_b63_034B, sizeof(kEdges_b63_034B) / sizeof(kEdges_b63_034B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_034C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE34Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_034C = {63u, 0xE34Cu, 0x034Cu, 0x0002u, 1u, nullptr, 0u, kEdges_b63_034C, sizeof(kEdges_b63_034C) / sizeof(kEdges_b63_034C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_034E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE350u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE31Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_034E = {63u, 0xE34Eu, 0x034Eu, 0xE31Cu, 1u, nullptr, 0u, kEdges_b63_034E, sizeof(kEdges_b63_034E) / sizeof(kEdges_b63_034E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0350[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE352u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0350 = {63u, 0xE350u, 0x0350u, 0x008Cu, 1u, nullptr, 0u, kEdges_b63_0350, sizeof(kEdges_b63_0350) / sizeof(kEdges_b63_0350[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0352[] = {
  {"transaction_subroutine_return", MM6EdgeStatus::ProvenRelation, -1, 0u, "E319 fixed-bank render handler returns to fixed-bank caller; outer transaction remains dirty until CBE9", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0352 = {63u, 0xE352u, 0x0352u, 0u, 0u, nullptr, 0u, kEdges_b63_0352, sizeof(kEdges_b63_0352) / sizeof(kEdges_b63_0352[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0353[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE355u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0353 = {63u, 0xE353u, 0x0353u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0353, sizeof(kEdges_b63_0353) / sizeof(kEdges_b63_0353[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0355[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE356u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0355 = {63u, 0xE355u, 0x0355u, 0u, 0u, nullptr, 0u, kEdges_b63_0355, sizeof(kEdges_b63_0355) / sizeof(kEdges_b63_0355[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0356[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE358u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0356 = {63u, 0xE356u, 0x0356u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0356, sizeof(kEdges_b63_0356) / sizeof(kEdges_b63_0356[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0358[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE35Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0358 = {63u, 0xE358u, 0x0358u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0358, sizeof(kEdges_b63_0358) / sizeof(kEdges_b63_0358[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_035A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE35Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE390u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_035A = {63u, 0xE35Au, 0x035Au, 0xE390u, 1u, nullptr, 0u, kEdges_b63_035A, sizeof(kEdges_b63_035A) / sizeof(kEdges_b63_035A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_035C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE35Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_035C = {63u, 0xE35Cu, 0x035Cu, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_035C, sizeof(kEdges_b63_035C) / sizeof(kEdges_b63_035C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_035E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE361u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_035E = {63u, 0xE35Eu, 0x035Eu, 0x0201u, 2u, nullptr, 0u, kEdges_b63_035E, sizeof(kEdges_b63_035E) / sizeof(kEdges_b63_035E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0361[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE363u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0361 = {63u, 0xE361u, 0x0361u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_0361, sizeof(kEdges_b63_0361) / sizeof(kEdges_b63_0361[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0363[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE364u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0363 = {63u, 0xE363u, 0x0363u, 0u, 0u, nullptr, 0u, kEdges_b63_0363, sizeof(kEdges_b63_0363) / sizeof(kEdges_b63_0363[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0364[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE366u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0364 = {63u, 0xE364u, 0x0364u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0364, sizeof(kEdges_b63_0364) / sizeof(kEdges_b63_0364[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0366[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE369u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0366 = {63u, 0xE366u, 0x0366u, 0x0200u, 2u, nullptr, 0u, kEdges_b63_0366, sizeof(kEdges_b63_0366) / sizeof(kEdges_b63_0366[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0369[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE36Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0369 = {63u, 0xE369u, 0x0369u, 0u, 0u, nullptr, 0u, kEdges_b63_0369, sizeof(kEdges_b63_0369) / sizeof(kEdges_b63_0369[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_036A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE36Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_036A = {63u, 0xE36Au, 0x036Au, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_036A, sizeof(kEdges_b63_036A) / sizeof(kEdges_b63_036A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_036C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE36Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_036C = {63u, 0xE36Cu, 0x036Cu, 0u, 0u, nullptr, 0u, kEdges_b63_036C, sizeof(kEdges_b63_036C) / sizeof(kEdges_b63_036C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_036D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE36Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE389u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_036D = {63u, 0xE36Du, 0x036Du, 0xE389u, 1u, nullptr, 0u, kEdges_b63_036D, sizeof(kEdges_b63_036D) / sizeof(kEdges_b63_036D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_036F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE371u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_036F = {63u, 0xE36Fu, 0x036Fu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_036F, sizeof(kEdges_b63_036F) / sizeof(kEdges_b63_036F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0371[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE372u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0371 = {63u, 0xE371u, 0x0371u, 0u, 0u, nullptr, 0u, kEdges_b63_0371, sizeof(kEdges_b63_0371) / sizeof(kEdges_b63_0371[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0372[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE374u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0372 = {63u, 0xE372u, 0x0372u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_0372, sizeof(kEdges_b63_0372) / sizeof(kEdges_b63_0372[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0374[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE377u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0374 = {63u, 0xE374u, 0x0374u, 0x0203u, 2u, nullptr, 0u, kEdges_b63_0374, sizeof(kEdges_b63_0374) / sizeof(kEdges_b63_0374[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0377[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE378u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0377 = {63u, 0xE377u, 0x0377u, 0u, 0u, nullptr, 0u, kEdges_b63_0377, sizeof(kEdges_b63_0377) / sizeof(kEdges_b63_0377[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0378[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE37Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0378 = {63u, 0xE378u, 0x0378u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_0378, sizeof(kEdges_b63_0378) / sizeof(kEdges_b63_0378[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_037A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE37Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE389u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_037A = {63u, 0xE37Au, 0x037Au, 0xE389u, 1u, nullptr, 0u, kEdges_b63_037A, sizeof(kEdges_b63_037A) / sizeof(kEdges_b63_037A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_037C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE37Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_037C = {63u, 0xE37Cu, 0x037Cu, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_037C, sizeof(kEdges_b63_037C) / sizeof(kEdges_b63_037C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_037E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE380u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_037E = {63u, 0xE37Eu, 0x037Eu, 0x008Du, 1u, nullptr, 0u, kEdges_b63_037E, sizeof(kEdges_b63_037E) / sizeof(kEdges_b63_037E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0380[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE383u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0380 = {63u, 0xE380u, 0x0380u, 0x0202u, 2u, nullptr, 0u, kEdges_b63_0380, sizeof(kEdges_b63_0380) / sizeof(kEdges_b63_0380[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0383[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE384u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0383 = {63u, 0xE383u, 0x0383u, 0u, 0u, nullptr, 0u, kEdges_b63_0383, sizeof(kEdges_b63_0383) / sizeof(kEdges_b63_0383[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0384[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE385u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0384 = {63u, 0xE384u, 0x0384u, 0u, 0u, nullptr, 0u, kEdges_b63_0384, sizeof(kEdges_b63_0384) / sizeof(kEdges_b63_0384[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0385[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE386u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0385 = {63u, 0xE385u, 0x0385u, 0u, 0u, nullptr, 0u, kEdges_b63_0385, sizeof(kEdges_b63_0385) / sizeof(kEdges_b63_0385[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0386[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE387u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0386 = {63u, 0xE386u, 0x0386u, 0u, 0u, nullptr, 0u, kEdges_b63_0386, sizeof(kEdges_b63_0386) / sizeof(kEdges_b63_0386[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0387[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE389u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE38Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0387 = {63u, 0xE387u, 0x0387u, 0xE38Eu, 1u, nullptr, 0u, kEdges_b63_0387, sizeof(kEdges_b63_0387) / sizeof(kEdges_b63_0387[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0389[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE38Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0389 = {63u, 0xE389u, 0x0389u, 0u, 0u, nullptr, 0u, kEdges_b63_0389, sizeof(kEdges_b63_0389) / sizeof(kEdges_b63_0389[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_038A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE38Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_038A = {63u, 0xE38Au, 0x038Au, 0x0002u, 1u, nullptr, 0u, kEdges_b63_038A, sizeof(kEdges_b63_038A) / sizeof(kEdges_b63_038A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_038C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE38Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE35Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_038C = {63u, 0xE38Cu, 0x038Cu, 0xE35Cu, 1u, nullptr, 0u, kEdges_b63_038C, sizeof(kEdges_b63_038C) / sizeof(kEdges_b63_038C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_038E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE390u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_038E = {63u, 0xE38Eu, 0x038Eu, 0x008Cu, 1u, nullptr, 0u, kEdges_b63_038E, sizeof(kEdges_b63_038E) / sizeof(kEdges_b63_038E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0390[] = {
  {"transaction_subroutine_return", MM6EdgeStatus::ProvenRelation, -1, 0u, "E319 fixed-bank render handler returns to fixed-bank caller; outer transaction remains dirty until CBE9", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0390 = {63u, 0xE390u, 0x0390u, 0u, 0u, nullptr, 0u, kEdges_b63_0390, sizeof(kEdges_b63_0390) / sizeof(kEdges_b63_0390[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0391[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE393u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0391 = {63u, 0xE391u, 0x0391u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0391, sizeof(kEdges_b63_0391) / sizeof(kEdges_b63_0391[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0393[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE394u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0393 = {63u, 0xE393u, 0x0393u, 0u, 0u, nullptr, 0u, kEdges_b63_0393, sizeof(kEdges_b63_0393) / sizeof(kEdges_b63_0393[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0394[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE396u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0394 = {63u, 0xE394u, 0x0394u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0394, sizeof(kEdges_b63_0394) / sizeof(kEdges_b63_0394[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0396[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE398u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0396 = {63u, 0xE396u, 0x0396u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0396, sizeof(kEdges_b63_0396) / sizeof(kEdges_b63_0396[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0398[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE39Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE3CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0398 = {63u, 0xE398u, 0x0398u, 0xE3CFu, 1u, nullptr, 0u, kEdges_b63_0398, sizeof(kEdges_b63_0398) / sizeof(kEdges_b63_0398[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_039A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE39Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_039A = {63u, 0xE39Au, 0x039Au, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_039A, sizeof(kEdges_b63_039A) / sizeof(kEdges_b63_039A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_039C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE39Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_039C = {63u, 0xE39Cu, 0x039Cu, 0x0201u, 2u, nullptr, 0u, kEdges_b63_039C, sizeof(kEdges_b63_039C) / sizeof(kEdges_b63_039C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_039F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3A1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_039F = {63u, 0xE39Fu, 0x039Fu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_039F, sizeof(kEdges_b63_039F) / sizeof(kEdges_b63_039F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03A1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3A2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03A1 = {63u, 0xE3A1u, 0x03A1u, 0u, 0u, nullptr, 0u, kEdges_b63_03A1, sizeof(kEdges_b63_03A1) / sizeof(kEdges_b63_03A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03A2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03A2 = {63u, 0xE3A2u, 0x03A2u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_03A2, sizeof(kEdges_b63_03A2) / sizeof(kEdges_b63_03A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03A4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03A4 = {63u, 0xE3A4u, 0x03A4u, 0x0200u, 2u, nullptr, 0u, kEdges_b63_03A4, sizeof(kEdges_b63_03A4) / sizeof(kEdges_b63_03A4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03A7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03A7 = {63u, 0xE3A7u, 0x03A7u, 0u, 0u, nullptr, 0u, kEdges_b63_03A7, sizeof(kEdges_b63_03A7) / sizeof(kEdges_b63_03A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03A8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03A8 = {63u, 0xE3A8u, 0x03A8u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_03A8, sizeof(kEdges_b63_03A8) / sizeof(kEdges_b63_03A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03AA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3ABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03AA = {63u, 0xE3AAu, 0x03AAu, 0u, 0u, nullptr, 0u, kEdges_b63_03AA, sizeof(kEdges_b63_03AA) / sizeof(kEdges_b63_03AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03AB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3ACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03AB = {63u, 0xE3ABu, 0x03ABu, 0u, 0u, nullptr, 0u, kEdges_b63_03AB, sizeof(kEdges_b63_03AB) / sizeof(kEdges_b63_03AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03AC[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3AEu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE3C8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03AC = {63u, 0xE3ACu, 0x03ACu, 0xE3C8u, 1u, nullptr, 0u, kEdges_b63_03AC, sizeof(kEdges_b63_03AC) / sizeof(kEdges_b63_03AC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03AE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03AE = {63u, 0xE3AEu, 0x03AEu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_03AE, sizeof(kEdges_b63_03AE) / sizeof(kEdges_b63_03AE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03B0 = {63u, 0xE3B0u, 0x03B0u, 0u, 0u, nullptr, 0u, kEdges_b63_03B0, sizeof(kEdges_b63_03B0) / sizeof(kEdges_b63_03B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03B1 = {63u, 0xE3B1u, 0x03B1u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_03B1, sizeof(kEdges_b63_03B1) / sizeof(kEdges_b63_03B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03B3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03B3 = {63u, 0xE3B3u, 0x03B3u, 0x0203u, 2u, nullptr, 0u, kEdges_b63_03B3, sizeof(kEdges_b63_03B3) / sizeof(kEdges_b63_03B3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3B7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03B6 = {63u, 0xE3B6u, 0x03B6u, 0u, 0u, nullptr, 0u, kEdges_b63_03B6, sizeof(kEdges_b63_03B6) / sizeof(kEdges_b63_03B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03B7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3B9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03B7 = {63u, 0xE3B7u, 0x03B7u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_03B7, sizeof(kEdges_b63_03B7) / sizeof(kEdges_b63_03B7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03B9[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3BBu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE3C8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03B9 = {63u, 0xE3B9u, 0x03B9u, 0xE3C8u, 1u, nullptr, 0u, kEdges_b63_03B9, sizeof(kEdges_b63_03B9) / sizeof(kEdges_b63_03B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03BB = {63u, 0xE3BBu, 0x03BBu, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_03BB, sizeof(kEdges_b63_03BB) / sizeof(kEdges_b63_03BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03BD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3BFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03BD = {63u, 0xE3BDu, 0x03BDu, 0x008Du, 1u, nullptr, 0u, kEdges_b63_03BD, sizeof(kEdges_b63_03BD) / sizeof(kEdges_b63_03BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03BF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03BF = {63u, 0xE3BFu, 0x03BFu, 0x0202u, 2u, nullptr, 0u, kEdges_b63_03BF, sizeof(kEdges_b63_03BF) / sizeof(kEdges_b63_03BF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03C2 = {63u, 0xE3C2u, 0x03C2u, 0u, 0u, nullptr, 0u, kEdges_b63_03C2, sizeof(kEdges_b63_03C2) / sizeof(kEdges_b63_03C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03C3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03C3 = {63u, 0xE3C3u, 0x03C3u, 0u, 0u, nullptr, 0u, kEdges_b63_03C3, sizeof(kEdges_b63_03C3) / sizeof(kEdges_b63_03C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3C5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03C4 = {63u, 0xE3C4u, 0x03C4u, 0u, 0u, nullptr, 0u, kEdges_b63_03C4, sizeof(kEdges_b63_03C4) / sizeof(kEdges_b63_03C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03C5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03C5 = {63u, 0xE3C5u, 0x03C5u, 0u, 0u, nullptr, 0u, kEdges_b63_03C5, sizeof(kEdges_b63_03C5) / sizeof(kEdges_b63_03C5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03C6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3C8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE3CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03C6 = {63u, 0xE3C6u, 0x03C6u, 0xE3CDu, 1u, nullptr, 0u, kEdges_b63_03C6, sizeof(kEdges_b63_03C6) / sizeof(kEdges_b63_03C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03C8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03C8 = {63u, 0xE3C8u, 0x03C8u, 0u, 0u, nullptr, 0u, kEdges_b63_03C8, sizeof(kEdges_b63_03C8) / sizeof(kEdges_b63_03C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03C9 = {63u, 0xE3C9u, 0x03C9u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_03C9, sizeof(kEdges_b63_03C9) / sizeof(kEdges_b63_03C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03CB[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3CDu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE39Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03CB = {63u, 0xE3CBu, 0x03CBu, 0xE39Au, 1u, nullptr, 0u, kEdges_b63_03CB, sizeof(kEdges_b63_03CB) / sizeof(kEdges_b63_03CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03CD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03CD = {63u, 0xE3CDu, 0x03CDu, 0x008Cu, 1u, nullptr, 0u, kEdges_b63_03CD, sizeof(kEdges_b63_03CD) / sizeof(kEdges_b63_03CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03CF[] = {
  {"transaction_subroutine_return", MM6EdgeStatus::ProvenRelation, -1, 0u, "E319 fixed-bank render handler returns to fixed-bank caller; outer transaction remains dirty until CBE9", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03CF = {63u, 0xE3CFu, 0x03CFu, 0u, 0u, nullptr, 0u, kEdges_b63_03CF, sizeof(kEdges_b63_03CF) / sizeof(kEdges_b63_03CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03D0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03D0 = {63u, 0xE3D0u, 0x03D0u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_03D0, sizeof(kEdges_b63_03D0) / sizeof(kEdges_b63_03D0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03D2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03D2 = {63u, 0xE3D2u, 0x03D2u, 0u, 0u, nullptr, 0u, kEdges_b63_03D2, sizeof(kEdges_b63_03D2) / sizeof(kEdges_b63_03D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03D3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03D3 = {63u, 0xE3D3u, 0x03D3u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_03D3, sizeof(kEdges_b63_03D3) / sizeof(kEdges_b63_03D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03D5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03D5 = {63u, 0xE3D5u, 0x03D5u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_03D5, sizeof(kEdges_b63_03D5) / sizeof(kEdges_b63_03D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03D7[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3D9u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE417u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03D7 = {63u, 0xE3D7u, 0x03D7u, 0xE417u, 1u, nullptr, 0u, kEdges_b63_03D7, sizeof(kEdges_b63_03D7) / sizeof(kEdges_b63_03D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03D9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03D9 = {63u, 0xE3D9u, 0x03D9u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_03D9, sizeof(kEdges_b63_03D9) / sizeof(kEdges_b63_03D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03DB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3DCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03DB = {63u, 0xE3DBu, 0x03DBu, 0u, 0u, nullptr, 0u, kEdges_b63_03DB, sizeof(kEdges_b63_03DB) / sizeof(kEdges_b63_03DB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03DC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3DEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03DC = {63u, 0xE3DCu, 0x03DCu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_03DC, sizeof(kEdges_b63_03DC) / sizeof(kEdges_b63_03DC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03DE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3E0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03DE = {63u, 0xE3DEu, 0x03DEu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_03DE, sizeof(kEdges_b63_03DE) / sizeof(kEdges_b63_03DE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03E0[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3E2u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE417u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03E0 = {63u, 0xE3E0u, 0x03E0u, 0xE417u, 1u, nullptr, 0u, kEdges_b63_03E0, sizeof(kEdges_b63_03E0) / sizeof(kEdges_b63_03E0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3E4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03E2 = {63u, 0xE3E2u, 0x03E2u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_03E2, sizeof(kEdges_b63_03E2) / sizeof(kEdges_b63_03E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03E4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3E7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03E4 = {63u, 0xE3E4u, 0x03E4u, 0x0201u, 2u, nullptr, 0u, kEdges_b63_03E4, sizeof(kEdges_b63_03E4) / sizeof(kEdges_b63_03E4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03E7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3E9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03E7 = {63u, 0xE3E7u, 0x03E7u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_03E7, sizeof(kEdges_b63_03E7) / sizeof(kEdges_b63_03E7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03E9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3EAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03E9 = {63u, 0xE3E9u, 0x03E9u, 0u, 0u, nullptr, 0u, kEdges_b63_03E9, sizeof(kEdges_b63_03E9) / sizeof(kEdges_b63_03E9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03EA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3ECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03EA = {63u, 0xE3EAu, 0x03EAu, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_03EA, sizeof(kEdges_b63_03EA) / sizeof(kEdges_b63_03EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03EC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3EFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03EC = {63u, 0xE3ECu, 0x03ECu, 0x0200u, 2u, nullptr, 0u, kEdges_b63_03EC, sizeof(kEdges_b63_03EC) / sizeof(kEdges_b63_03EC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03EF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03EF = {63u, 0xE3EFu, 0x03EFu, 0u, 0u, nullptr, 0u, kEdges_b63_03EF, sizeof(kEdges_b63_03EF) / sizeof(kEdges_b63_03EF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03F0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03F0 = {63u, 0xE3F0u, 0x03F0u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_03F0, sizeof(kEdges_b63_03F0) / sizeof(kEdges_b63_03F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03F2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03F2 = {63u, 0xE3F2u, 0x03F2u, 0u, 0u, nullptr, 0u, kEdges_b63_03F2, sizeof(kEdges_b63_03F2) / sizeof(kEdges_b63_03F2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03F3 = {63u, 0xE3F3u, 0x03F3u, 0u, 0u, nullptr, 0u, kEdges_b63_03F3, sizeof(kEdges_b63_03F3) / sizeof(kEdges_b63_03F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03F4[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3F6u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE410u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03F4 = {63u, 0xE3F4u, 0x03F4u, 0xE410u, 1u, nullptr, 0u, kEdges_b63_03F4, sizeof(kEdges_b63_03F4) / sizeof(kEdges_b63_03F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03F6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03F6 = {63u, 0xE3F6u, 0x03F6u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_03F6, sizeof(kEdges_b63_03F6) / sizeof(kEdges_b63_03F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03F8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03F8 = {63u, 0xE3F8u, 0x03F8u, 0u, 0u, nullptr, 0u, kEdges_b63_03F8, sizeof(kEdges_b63_03F8) / sizeof(kEdges_b63_03F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03F9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03F9 = {63u, 0xE3F9u, 0x03F9u, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_03F9, sizeof(kEdges_b63_03F9) / sizeof(kEdges_b63_03F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03FB = {63u, 0xE3FBu, 0x03FBu, 0x0203u, 2u, nullptr, 0u, kEdges_b63_03FB, sizeof(kEdges_b63_03FB) / sizeof(kEdges_b63_03FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE3FFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03FE = {63u, 0xE3FEu, 0x03FEu, 0u, 0u, nullptr, 0u, kEdges_b63_03FE, sizeof(kEdges_b63_03FE) / sizeof(kEdges_b63_03FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_03FF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE401u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_03FF = {63u, 0xE3FFu, 0x03FFu, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_03FF, sizeof(kEdges_b63_03FF) / sizeof(kEdges_b63_03FF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0401[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE403u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE410u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0401 = {63u, 0xE401u, 0x0401u, 0xE410u, 1u, nullptr, 0u, kEdges_b63_0401, sizeof(kEdges_b63_0401) / sizeof(kEdges_b63_0401[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0403[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE405u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0403 = {63u, 0xE403u, 0x0403u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_0403, sizeof(kEdges_b63_0403) / sizeof(kEdges_b63_0403[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0405[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE407u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0405 = {63u, 0xE405u, 0x0405u, 0x008Du, 1u, nullptr, 0u, kEdges_b63_0405, sizeof(kEdges_b63_0405) / sizeof(kEdges_b63_0405[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0407[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE40Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0407 = {63u, 0xE407u, 0x0407u, 0x0202u, 2u, nullptr, 0u, kEdges_b63_0407, sizeof(kEdges_b63_0407) / sizeof(kEdges_b63_0407[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_040A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE40Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_040A = {63u, 0xE40Au, 0x040Au, 0u, 0u, nullptr, 0u, kEdges_b63_040A, sizeof(kEdges_b63_040A) / sizeof(kEdges_b63_040A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_040B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE40Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_040B = {63u, 0xE40Bu, 0x040Bu, 0u, 0u, nullptr, 0u, kEdges_b63_040B, sizeof(kEdges_b63_040B) / sizeof(kEdges_b63_040B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_040C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE40Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_040C = {63u, 0xE40Cu, 0x040Cu, 0u, 0u, nullptr, 0u, kEdges_b63_040C, sizeof(kEdges_b63_040C) / sizeof(kEdges_b63_040C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_040D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE40Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_040D = {63u, 0xE40Du, 0x040Du, 0u, 0u, nullptr, 0u, kEdges_b63_040D, sizeof(kEdges_b63_040D) / sizeof(kEdges_b63_040D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_040E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE410u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE415u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_040E = {63u, 0xE40Eu, 0x040Eu, 0xE415u, 1u, nullptr, 0u, kEdges_b63_040E, sizeof(kEdges_b63_040E) / sizeof(kEdges_b63_040E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0410[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE411u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0410 = {63u, 0xE410u, 0x0410u, 0u, 0u, nullptr, 0u, kEdges_b63_0410, sizeof(kEdges_b63_0410) / sizeof(kEdges_b63_0410[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0411[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE413u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0411 = {63u, 0xE411u, 0x0411u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_0411, sizeof(kEdges_b63_0411) / sizeof(kEdges_b63_0411[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0413[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE415u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE3E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0413 = {63u, 0xE413u, 0x0413u, 0xE3E2u, 1u, nullptr, 0u, kEdges_b63_0413, sizeof(kEdges_b63_0413) / sizeof(kEdges_b63_0413[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0415[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE417u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0415 = {63u, 0xE415u, 0x0415u, 0x008Cu, 1u, nullptr, 0u, kEdges_b63_0415, sizeof(kEdges_b63_0415) / sizeof(kEdges_b63_0415[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0417[] = {
  {"transaction_subroutine_return", MM6EdgeStatus::ProvenRelation, -1, 0u, "E319 fixed-bank render handler returns to fixed-bank caller; outer transaction remains dirty until CBE9", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0417 = {63u, 0xE417u, 0x0417u, 0u, 0u, nullptr, 0u, kEdges_b63_0417, sizeof(kEdges_b63_0417) / sizeof(kEdges_b63_0417[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_041C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE41Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_041C = {63u, 0xE41Cu, 0x041Cu, 0x0040u, 1u, nullptr, 0u, kEdges_b63_041C, sizeof(kEdges_b63_041C) / sizeof(kEdges_b63_041C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_041E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE420u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_041E = {63u, 0xE41Eu, 0x041Eu, 0x0003u, 1u, nullptr, 0u, kEdges_b63_041E, sizeof(kEdges_b63_041E) / sizeof(kEdges_b63_041E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0420[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE421u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0420 = {63u, 0xE420u, 0x0420u, 0u, 0u, nullptr, 0u, kEdges_b63_0420, sizeof(kEdges_b63_0420) / sizeof(kEdges_b63_0420[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0421[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE424u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0421 = {63u, 0xE421u, 0x0421u, 0xE418u, 2u, nullptr, 0u, kEdges_b63_0421, sizeof(kEdges_b63_0421) / sizeof(kEdges_b63_0421[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0424[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE426u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0424 = {63u, 0xE424u, 0x0424u, 0x0099u, 1u, nullptr, 0u, kEdges_b63_0424, sizeof(kEdges_b63_0424) / sizeof(kEdges_b63_0424[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0426[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE428u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0426 = {63u, 0xE426u, 0x0426u, 0x0042u, 1u, nullptr, 0u, kEdges_b63_0426, sizeof(kEdges_b63_0426) / sizeof(kEdges_b63_0426[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0428[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE42Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0428 = {63u, 0xE428u, 0x0428u, 0x0080u, 1u, nullptr, 0u, kEdges_b63_0428, sizeof(kEdges_b63_0428) / sizeof(kEdges_b63_0428[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_042A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE42Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_042A = {63u, 0xE42Au, 0x042Au, 0x009Au, 1u, nullptr, 0u, kEdges_b63_042A, sizeof(kEdges_b63_042A) / sizeof(kEdges_b63_042A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_042C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE42Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_042C = {63u, 0xE42Cu, 0x042Cu, 0x003Eu, 1u, nullptr, 0u, kEdges_b63_042C, sizeof(kEdges_b63_042C) / sizeof(kEdges_b63_042C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_042E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB91u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE431u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_042E = {63u, 0xE42Eu, 0x042Eu, 0xCB91u, 2u, nullptr, 0u, kEdges_b63_042E, sizeof(kEdges_b63_042E) / sizeof(kEdges_b63_042E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0431[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE432u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0431 = {63u, 0xE431u, 0x0431u, 0u, 0u, nullptr, 0u, kEdges_b63_0431, sizeof(kEdges_b63_0431) / sizeof(kEdges_b63_0431[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0432[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE434u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0432 = {63u, 0xE432u, 0x0432u, 0x0090u, 1u, nullptr, 0u, kEdges_b63_0432, sizeof(kEdges_b63_0432) / sizeof(kEdges_b63_0432[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0434[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE436u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0434 = {63u, 0xE434u, 0x0434u, 0x0016u, 1u, nullptr, 0u, kEdges_b63_0434, sizeof(kEdges_b63_0434) / sizeof(kEdges_b63_0434[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0436[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE438u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0436 = {63u, 0xE436u, 0x0436u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0436, sizeof(kEdges_b63_0436) / sizeof(kEdges_b63_0436[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0438[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE43Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0438 = {63u, 0xE438u, 0x0438u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0438, sizeof(kEdges_b63_0438) / sizeof(kEdges_b63_0438[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_043A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE43Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_043A = {63u, 0xE43Au, 0x043Au, 0x03A0u, 2u, nullptr, 0u, kEdges_b63_043A, sizeof(kEdges_b63_043A) / sizeof(kEdges_b63_043A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_043D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE43Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE47Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_043D = {63u, 0xE43Du, 0x043Du, 0xE47Au, 1u, nullptr, 0u, kEdges_b63_043D, sizeof(kEdges_b63_043D) / sizeof(kEdges_b63_043D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_043F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE442u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_043F = {63u, 0xE43Fu, 0x043Fu, 0x0441u, 2u, nullptr, 0u, kEdges_b63_043F, sizeof(kEdges_b63_043F) / sizeof(kEdges_b63_043F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0442[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE443u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0442 = {63u, 0xE442u, 0x0442u, 0u, 0u, nullptr, 0u, kEdges_b63_0442, sizeof(kEdges_b63_0442) / sizeof(kEdges_b63_0442[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0443[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCBC0u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE446u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0443 = {63u, 0xE443u, 0x0443u, 0xCBC0u, 2u, nullptr, 0u, kEdges_b63_0443, sizeof(kEdges_b63_0443) / sizeof(kEdges_b63_0443[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0446[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE449u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0446 = {63u, 0xE446u, 0x0446u, 0x042Au, 2u, nullptr, 0u, kEdges_b63_0446, sizeof(kEdges_b63_0446) / sizeof(kEdges_b63_0446[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0449[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE44Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0449 = {63u, 0xE449u, 0x0449u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0449, sizeof(kEdges_b63_0449) / sizeof(kEdges_b63_0449[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_044B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE44Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_044B = {63u, 0xE44Bu, 0x044Bu, 0x0413u, 2u, nullptr, 0u, kEdges_b63_044B, sizeof(kEdges_b63_044B) / sizeof(kEdges_b63_044B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_044E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE450u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_044E = {63u, 0xE44Eu, 0x044Eu, 0x0009u, 1u, nullptr, 0u, kEdges_b63_044E, sizeof(kEdges_b63_044E) / sizeof(kEdges_b63_044E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0450[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE482u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE453u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0450 = {63u, 0xE450u, 0x0450u, 0xE482u, 2u, nullptr, 0u, kEdges_b63_0450, sizeof(kEdges_b63_0450) / sizeof(kEdges_b63_0450[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0453[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE477u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0453 = {63u, 0xE453u, 0x0453u, 0xE477u, 2u, nullptr, 0u, kEdges_b63_0453, sizeof(kEdges_b63_0453) / sizeof(kEdges_b63_0453[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0456[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE458u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0456 = {63u, 0xE456u, 0x0456u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0456, sizeof(kEdges_b63_0456) / sizeof(kEdges_b63_0456[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0458[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE45Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0458 = {63u, 0xE458u, 0x0458u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0458, sizeof(kEdges_b63_0458) / sizeof(kEdges_b63_0458[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_045A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE45Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_045A = {63u, 0xE45Au, 0x045Au, 0x03A0u, 2u, nullptr, 0u, kEdges_b63_045A, sizeof(kEdges_b63_045A) / sizeof(kEdges_b63_045A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_045D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE45Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_045D = {63u, 0xE45Du, 0x045Du, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_045D, sizeof(kEdges_b63_045D) / sizeof(kEdges_b63_045D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_045F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE462u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_045F = {63u, 0xE45Fu, 0x045Fu, 0x03FCu, 2u, nullptr, 0u, kEdges_b63_045F, sizeof(kEdges_b63_045F) / sizeof(kEdges_b63_045F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0462[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE465u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0462 = {63u, 0xE462u, 0x0462u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0462, sizeof(kEdges_b63_0462) / sizeof(kEdges_b63_0462[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0465[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE477u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0465 = {63u, 0xE465u, 0x0465u, 0xE477u, 2u, nullptr, 0u, kEdges_b63_0465, sizeof(kEdges_b63_0465) / sizeof(kEdges_b63_0465[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0468[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE46Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0468 = {63u, 0xE468u, 0x0468u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0468, sizeof(kEdges_b63_0468) / sizeof(kEdges_b63_0468[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_046A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE46Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_046A = {63u, 0xE46Au, 0x046Au, 0u, 0u, nullptr, 0u, kEdges_b63_046A, sizeof(kEdges_b63_046A) / sizeof(kEdges_b63_046A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_046B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE46Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_046B = {63u, 0xE46Bu, 0x046Bu, 0u, 0u, nullptr, 0u, kEdges_b63_046B, sizeof(kEdges_b63_046B) / sizeof(kEdges_b63_046B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_046C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE46Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_046C = {63u, 0xE46Cu, 0x046Cu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_046C, sizeof(kEdges_b63_046C) / sizeof(kEdges_b63_046C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_046E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE471u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_046E = {63u, 0xE46Eu, 0x046Eu, 0x042Au, 2u, nullptr, 0u, kEdges_b63_046E, sizeof(kEdges_b63_046E) / sizeof(kEdges_b63_046E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0471[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE472u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0471 = {63u, 0xE471u, 0x0471u, 0u, 0u, nullptr, 0u, kEdges_b63_0471, sizeof(kEdges_b63_0471) / sizeof(kEdges_b63_0471[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0472[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE474u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0472 = {63u, 0xE472u, 0x0472u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0472, sizeof(kEdges_b63_0472) / sizeof(kEdges_b63_0472[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0474[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE477u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0474 = {63u, 0xE474u, 0x0474u, 0x0413u, 2u, nullptr, 0u, kEdges_b63_0474, sizeof(kEdges_b63_0474) / sizeof(kEdges_b63_0474[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0477[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE479u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0477 = {63u, 0xE477u, 0x0477u, 0x0090u, 1u, nullptr, 0u, kEdges_b63_0477, sizeof(kEdges_b63_0477) / sizeof(kEdges_b63_0477[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0479[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE47Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0479 = {63u, 0xE479u, 0x0479u, 0u, 0u, nullptr, 0u, kEdges_b63_0479, sizeof(kEdges_b63_0479) / sizeof(kEdges_b63_0479[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_047A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE47Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_047A = {63u, 0xE47Au, 0x047Au, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_047A, sizeof(kEdges_b63_047A) / sizeof(kEdges_b63_047A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_047C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE47Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE438u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_047C = {63u, 0xE47Cu, 0x047Cu, 0xE438u, 1u, nullptr, 0u, kEdges_b63_047C, sizeof(kEdges_b63_047C) / sizeof(kEdges_b63_047C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_047E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCBE9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE481u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_047E = {63u, 0xE47Eu, 0x047Eu, 0xCBE9u, 2u, nullptr, 0u, kEdges_b63_047E, sizeof(kEdges_b63_047E) / sizeof(kEdges_b63_047E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0481[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0481 = {63u, 0xE481u, 0x0481u, 0u, 0u, nullptr, 0u, kEdges_b63_0481, sizeof(kEdges_b63_0481) / sizeof(kEdges_b63_0481[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0482[] = {
  {"bank57_stage_command_target", MM6EdgeStatus::Resolved, 62, 0xD583u, "", ""},
  {"bank57_stage_command_target", MM6EdgeStatus::Resolved, 62, 0xD60Eu, "", ""},
  {"bank57_stage_command_target", MM6EdgeStatus::Resolved, 62, 0xD53Cu, "", ""},
  {"bank57_stage_command_target", MM6EdgeStatus::Resolved, 62, 0xD5CDu, "", ""},
  {"bank57_stage_command_target", MM6EdgeStatus::Resolved, 62, 0xD64Fu, "", ""},
  {"bank57_stage_command_target", MM6EdgeStatus::Resolved, 62, 0xD6AFu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x849Bu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x84FCu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8551u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x85A1u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x85B4u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x85D8u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8603u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x852Eu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x86C0u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8611u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8733u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8755u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x87A6u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8820u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8833u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8879u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x885Cu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x88C2u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x88F1u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8937u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8942u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8974u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x897Fu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8999u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8A47u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8A55u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8A70u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8A60u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8AA9u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8AC1u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8ADEu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8AF3u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8AFAu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8B0Bu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8B24u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8B8Cu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8B93u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8BB3u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8BC5u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8BD6u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8BE9u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8C1Cu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8E31u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8EE7u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8F95u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8FBCu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8FCFu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8FE4u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x8FF5u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x9236u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x9257u, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 57, 0x926Fu, "", ""},
  {"bank57_stage_script_initial_target", MM6EdgeStatus::Resolved, 63, 0xF946u, "", ""},
  {"behavior_literal_install_target", MM6EdgeStatus::Resolved, 49, 0x8E98u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x8F66u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x8F6Cu, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x8F71u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x8F72u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x8F96u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x9021u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x9027u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x9028u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x9067u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x90A2u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x90D6u, "", ""},
  {"nested_e482_table_target", MM6EdgeStatus::Resolved, 56, 0x9119u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 41, 0x854Fu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 41, 0x8564u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 41, 0x9617u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 41, 0x9ED2u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 48, 0x81E3u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 48, 0x83BBu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 48, 0x9976u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 48, 0x99E3u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 48, 0x99F3u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 48, 0x9A68u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 48, 0x9BB9u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 48, 0x9C3Eu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 48, 0x9F88u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x8316u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x8EF5u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x8F27u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x8F4Fu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9792u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x97F4u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9D8Du, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9DC8u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9DDCu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9DF9u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9E1Au, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9E43u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9E58u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9E89u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9EB5u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 49, 0x9ECEu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 56, 0x8D3Fu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 56, 0x8D95u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 56, 0x8E59u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 56, 0x8E7Fu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 56, 0x8F13u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 56, 0x9B72u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 56, 0x9E86u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 56, 0x9FC0u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8003u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x800Eu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x82D5u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x84A3u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x857Bu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8623u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8632u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8651u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x865Cu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8669u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8765u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8774u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8B3Cu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8B67u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8BFCu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8C2Au, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8C5Du, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8CAEu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8EF3u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8F14u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8F31u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x8F98u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x9003u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x902Eu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x904Au, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x9064u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x9080u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x90BBu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x90DAu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x928Bu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x9551u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x9587u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 57, 0x95B5u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x823Fu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x8DFDu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x8E0Au, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x8E21u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x8E33u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x8E4Cu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x8E74u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x8EB3u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x8FDBu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x900Cu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x95A1u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x962Bu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x965Fu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x96D9u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x973Eu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x9778u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x9793u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x97D8u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x9863u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x98B3u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x98EDu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x993Du, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x9958u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x999Bu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x9A0Cu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 59, 0x9A39u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xEB9Du, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xEB9Du, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xEB9Du, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xEB9Du, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xEB9Du, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xF95Fu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xF974u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xF994u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xF9ADu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xF9DDu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xF9EEu, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xFA36u, "", ""},
  {"object_behavior_reentry_target", MM6EdgeStatus::Resolved, 63, 0xFA4Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8016u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x802Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8041u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x804Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x807Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x80A0u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x80CCu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8156u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x81D5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x81DDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x81EFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8206u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x823Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8261u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x82AAu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x82ECu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x837Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x838Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x838Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8392u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8395u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x83CFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x83FFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8411u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x846Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8482u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x84D0u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8511u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8526u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8540u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x85CCu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x85E1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8606u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8618u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8625u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8646u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8664u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8692u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x86C5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x86E4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8716u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x872Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x874Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x875Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x877Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x87C6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x87F4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8845u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x885Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x887Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x88CBu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x88FDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x891Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8921u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8949u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8954u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x897Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8985u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x89C4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x89F0u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8A0Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8A1Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8A4Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8BD1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8BF6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8C39u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8C5Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8C8Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8CAFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8CD2u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8CEEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8D01u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8D23u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8D32u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8D4Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8D61u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8D83u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8DA0u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8DE0u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8DEFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8E12u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8E34u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8E6Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8ED7u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8EFDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8F1Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8F51u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x8FBAu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x902Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9076u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x908Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x90A7u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x90C3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x90F5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9180u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x91ECu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x921Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9244u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9268u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9281u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x92A5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x92DDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9326u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x935Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x93AEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9444u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9458u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9487u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9499u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x951Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9540u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9575u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9591u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x95A8u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x95BFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x95D1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x95E3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9636u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9652u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x967Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9698u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x96ADu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x96B5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x96DBu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x96EDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9721u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9759u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9821u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9866u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9882u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x98A6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9965u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x99C5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x99FBu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9A60u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9AC2u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9B3Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9B77u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9B89u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9BFDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9C52u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9C8Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9CDBu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9CF0u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9D21u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9D53u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9D63u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9D7Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9DB9u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9DE6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9E2Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9E4Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9E69u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 41, 0x9EAFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8026u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x80B4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x80EFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8106u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8122u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8178u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x824Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x825Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x82AFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x82BCu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x82E8u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x831Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x83DCu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x83E4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x83FBu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8425u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x844Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x845Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x846Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8486u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x84A6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x84C8u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8510u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8547u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x858Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x85C5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8603u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x861Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8636u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x864Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8655u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8662u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8679u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x86FCu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8755u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8791u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x87AAu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8810u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8828u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8869u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x88A3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x88C8u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x88FDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x892Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8957u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x899Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x89CEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8A2Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8AC9u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8B6Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8BD3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8BF0u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8C65u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8CA6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8CC2u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8CD9u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8D03u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8D1Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8D41u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8D6Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8DC1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8DFFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8E2Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8E4Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8E79u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8EAEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8EDEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8EF9u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8F23u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x8F8Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9013u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9040u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9068u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x90AFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x90DCu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x90F1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x914Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x919Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9207u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9393u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x93D7u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x942Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9484u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x94DEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x94F0u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9502u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9556u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9559u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x957Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9580u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x959Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x95A1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x95C3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x95C6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x95EEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x95F1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9641u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9644u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9672u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9675u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9692u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9695u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x976Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9789u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x97A5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x97D1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9815u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9859u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9861u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x98E8u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9916u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9935u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9953u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x99A4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9A2Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9A41u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9A4Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9A85u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9AB5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9AD4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9ADFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9B11u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9B55u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9B81u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9C0Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9C2Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9C61u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9C7Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9C85u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9CB1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9CCAu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9D07u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9D1Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9D5Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9D76u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9D9Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9DBCu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9DE1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9E97u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9EABu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9EC7u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9EE3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9EEEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9EF6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9F03u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9F2Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9F30u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9F58u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9F74u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9FAAu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 48, 0x9FBFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x800Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x806Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x80BBu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x80CAu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x80D8u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8160u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x817Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x818Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x81B6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x81E5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x81FEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x821Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x82C6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x82DDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8359u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8371u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x838Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x840Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8464u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8496u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x84CAu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x84E3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x84F3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8570u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x862Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x868Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8698u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x874Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8758u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8782u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x881Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8893u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x88DFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8930u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8969u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x89CEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8A06u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8A20u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8A74u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8AA2u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8AEFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8AFCu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8B15u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8B4Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8BAFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8BC1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8BEFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8C02u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8C0Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8C33u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8C51u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8C72u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8C9Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8CC6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8D0Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8D55u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8DC6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8DFDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8E15u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8E3Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8E81u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8EA9u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8EB9u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x8FEAu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9056u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x90A3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x914Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x915Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x920Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9264u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9293u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x92B4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x92C6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9300u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9333u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x934Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9367u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9395u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x93DDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x93EAu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x946Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x949Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x94BFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x94E4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x94F1u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9513u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9520u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9550u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x955Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9598u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x95BEu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x95EFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9614u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x962Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9696u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9704u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9728u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x97C0u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9849u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9975u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9B3Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9D66u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9EE7u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9F68u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 49, 0x9F8Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x8055u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x808Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x80AFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x810Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x816Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x81B5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x81EAu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x8247u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x82B2u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x83DFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x83ECu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x8473u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x8493u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x84A5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x8516u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x8CB3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x8D88u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9B10u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9B54u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9C12u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9C1Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9C6Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9C8Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9D00u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9D89u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9DF4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9E04u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9E4Fu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9F43u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 56, 0x9F65u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x8043u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x8074u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x80B7u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x80E5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x8199u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x81F5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x92E2u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9330u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x93ABu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9481u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x949Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x94C6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x94E8u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9662u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x96B8u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9716u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x97C9u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x98ADu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x992Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9BCDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9BE2u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9C3Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9C50u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9CA6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9CD6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9CE7u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9D4Du, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9D5Au, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9E12u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 57, 0x9E45u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8029u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8051u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8108u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x82F6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8313u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8336u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8378u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x837Bu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x83A3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x83A6u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x83C4u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x83C7u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x83E9u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x83ECu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8414u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8417u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8464u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8467u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8495u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8498u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x84B5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x84B8u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x858Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x85FDu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8657u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8679u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x86C3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8725u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8741u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x874Eu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8DDFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8F57u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8F6Cu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x8FA3u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x9034u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x9069u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x90A5u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x90DFu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x9234u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x93CBu, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x93F8u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x9424u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x9459u, "", ""},
  {"object_behavior_tailcaller_target", MM6EdgeStatus::Resolved, 59, 0x9481u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9CB4u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9DAEu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9DD6u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8006u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x80FFu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x821Bu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x81C7u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8286u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x836Au, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8462u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8D95u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x86FAu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x85A3u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8672u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x873Bu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x865Au, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8814u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8870u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x88C2u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8918u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x89B7u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x89D2u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8B59u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8479u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8FDFu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x91D8u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8B46u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9E9Fu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9CABu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8C7Fu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8CC5u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8DBBu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8E2Eu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8722u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8E42u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x8FB4u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9060u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9129u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9514u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9630u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x91FAu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9296u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x92BBu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x941Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9644u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x968Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9700u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9844u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9928u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9BEDu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9C4Cu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x940Cu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9E12u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9811u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 41, 0x9EBDu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8006u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x80C8u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8234u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8312u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x849Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x812Bu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x81C7u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8611u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8747u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x86F1u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8851u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8983u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8A17u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8B4Eu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8B38u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8705u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x871Bu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8731u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8C73u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8C49u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8CEFu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8D0Fu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8D83u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8DCFu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8ED6u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8FEFu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x93AEu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x953Bu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9332u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8F3Bu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9455u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x97B7u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9827u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9739u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x98D1u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9968u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9999u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x99CEu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9A1Au, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9A57u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9988u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x83CCu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9B3Cu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9B42u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9B6Eu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9BA2u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9BC7u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9C38u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9C4Cu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9CBFu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8412u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9D33u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9E8Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9EA5u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9F16u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9F4Au, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9F69u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x952Fu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x83B0u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x8C36u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9F9Fu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 48, 0x9F82u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x8FD1u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x9DB0u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x9F2Au, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x8006u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x8288u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x82FEu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x98AAu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x9958u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x8324u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x85D4u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x89B7u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x870Eu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x8A9Cu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x8D46u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x8D76u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x9050u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x92F3u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x9311u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x938Cu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x9586u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x95B1u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x95D0u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x978Cu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x8A5Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x97E4u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x9D7Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 49, 0x9D53u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x802Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x8E61u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x8E56u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x8C9Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x8CBCu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x8CD0u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x8D28u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9EB8u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x8D13u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x8CFEu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9AC1u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9B22u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9B8Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9C28u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9D08u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9DB1u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9E26u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9E52u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9EB8u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9D58u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x9C07u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x8C76u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 56, 0x8C6Au, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x824Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x8000u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x8024u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x8006u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x8000u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x98DFu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x8189u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x81A2u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x92B6u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x9288u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x936Eu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x942Fu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x954Au, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x95EBu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x954Eu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x978Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x9861u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x9AFEu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x9E07u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x9E1Bu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 57, 0x9E89u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9981u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8E52u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8DE2u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8E0Du, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8E29u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x870Au, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x93BDu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9416u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9226u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x93EAu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9647u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x99FCu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x944Bu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9473u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9685u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x97CDu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9822u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x98A1u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x967Cu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9620u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8358u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9539u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9608u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9614u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8006u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x81D1u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x855Cu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x82DCu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8FCEu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9A1Au, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8F15u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8F90u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x901Fu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8E85u, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x8DAFu, "", ""},
  {"object_behavior_target", MM6EdgeStatus::Resolved, 59, 0x9090u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0482 = {63u, 0xE482u, 0x0482u, 0x0008u, 2u, nullptr, 0u, kEdges_b63_0482, sizeof(kEdges_b63_0482) / sizeof(kEdges_b63_0482[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0485[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE488u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0485 = {63u, 0xE485u, 0x0485u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0485, sizeof(kEdges_b63_0485) / sizeof(kEdges_b63_0485[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0488[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE48Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0488 = {63u, 0xE488u, 0x0488u, 0x00F8u, 1u, nullptr, 0u, kEdges_b63_0488, sizeof(kEdges_b63_0488) / sizeof(kEdges_b63_0488[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_048A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE48Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE4A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_048A = {63u, 0xE48Au, 0x048Au, 0xE4A5u, 1u, nullptr, 0u, kEdges_b63_048A, sizeof(kEdges_b63_048A) / sizeof(kEdges_b63_048A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_048C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE48Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_048C = {63u, 0xE48Cu, 0x048Cu, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_048C, sizeof(kEdges_b63_048C) / sizeof(kEdges_b63_048C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_048F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE491u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE4A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_048F = {63u, 0xE48Fu, 0x048Fu, 0xE4A5u, 1u, nullptr, 0u, kEdges_b63_048F, sizeof(kEdges_b63_048F) / sizeof(kEdges_b63_048F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0491[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE494u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0491 = {63u, 0xE491u, 0x0491u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_0491, sizeof(kEdges_b63_0491) / sizeof(kEdges_b63_0491[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0494[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE495u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0494 = {63u, 0xE494u, 0x0494u, 0u, 0u, nullptr, 0u, kEdges_b63_0494, sizeof(kEdges_b63_0494) / sizeof(kEdges_b63_0494[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0495[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE497u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0495 = {63u, 0xE495u, 0x0495u, 0x0056u, 1u, nullptr, 0u, kEdges_b63_0495, sizeof(kEdges_b63_0495) / sizeof(kEdges_b63_0495[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0497[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE498u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0497 = {63u, 0xE497u, 0x0497u, 0u, 0u, nullptr, 0u, kEdges_b63_0497, sizeof(kEdges_b63_0497) / sizeof(kEdges_b63_0497[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0498[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE49Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0498 = {63u, 0xE498u, 0x0498u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_0498, sizeof(kEdges_b63_0498) / sizeof(kEdges_b63_0498[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_049B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE49Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_049B = {63u, 0xE49Bu, 0x049Bu, 0x0057u, 1u, nullptr, 0u, kEdges_b63_049B, sizeof(kEdges_b63_049B) / sizeof(kEdges_b63_049B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_049D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE49Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE4A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_049D = {63u, 0xE49Du, 0x049Du, 0xE4A5u, 1u, nullptr, 0u, kEdges_b63_049D, sizeof(kEdges_b63_049D) / sizeof(kEdges_b63_049D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_049F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4A1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_049F = {63u, 0xE49Fu, 0x049Fu, 0x0004u, 1u, nullptr, 0u, kEdges_b63_049F, sizeof(kEdges_b63_049F) / sizeof(kEdges_b63_049F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04A1[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4A3u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE4A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04A1 = {63u, 0xE4A1u, 0x04A1u, 0xE4A5u, 1u, nullptr, 0u, kEdges_b63_04A1, sizeof(kEdges_b63_04A1) / sizeof(kEdges_b63_04A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04A3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04A3 = {63u, 0xE4A3u, 0x04A3u, 0u, 0u, nullptr, 0u, kEdges_b63_04A3, sizeof(kEdges_b63_04A3) / sizeof(kEdges_b63_04A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04A4[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04A4 = {63u, 0xE4A4u, 0x04A4u, 0u, 0u, nullptr, 0u, kEdges_b63_04A4, sizeof(kEdges_b63_04A4) / sizeof(kEdges_b63_04A4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04A5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04A5 = {63u, 0xE4A5u, 0x04A5u, 0u, 0u, nullptr, 0u, kEdges_b63_04A5, sizeof(kEdges_b63_04A5) / sizeof(kEdges_b63_04A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04A6[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04A6 = {63u, 0xE4A6u, 0x04A6u, 0u, 0u, nullptr, 0u, kEdges_b63_04A6, sizeof(kEdges_b63_04A6) / sizeof(kEdges_b63_04A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04A7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04A7 = {63u, 0xE4A7u, 0x04A7u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_04A7, sizeof(kEdges_b63_04A7) / sizeof(kEdges_b63_04A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04A9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4ACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04A9 = {63u, 0xE4A9u, 0x04A9u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_04A9, sizeof(kEdges_b63_04A9) / sizeof(kEdges_b63_04A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04AC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04AC = {63u, 0xE4ACu, 0x04ACu, 0xE4B9u, 2u, nullptr, 0u, kEdges_b63_04AC, sizeof(kEdges_b63_04AC) / sizeof(kEdges_b63_04AC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04AF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04AF = {63u, 0xE4AFu, 0x04AFu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_04AF, sizeof(kEdges_b63_04AF) / sizeof(kEdges_b63_04AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04B2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04B2 = {63u, 0xE4B2u, 0x04B2u, 0xE4C2u, 2u, nullptr, 0u, kEdges_b63_04B2, sizeof(kEdges_b63_04B2) / sizeof(kEdges_b63_04B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04B5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04B5 = {63u, 0xE4B5u, 0x04B5u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_04B5, sizeof(kEdges_b63_04B5) / sizeof(kEdges_b63_04B5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04B8[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04B8 = {63u, 0xE4B8u, 0x04B8u, 0u, 0u, nullptr, 0u, kEdges_b63_04B8, sizeof(kEdges_b63_04B8) / sizeof(kEdges_b63_04B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04CB = {63u, 0xE4CBu, 0x04CBu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_04CB, sizeof(kEdges_b63_04CB) / sizeof(kEdges_b63_04CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04CD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04CD = {63u, 0xE4CDu, 0x04CDu, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_04CD, sizeof(kEdges_b63_04CD) / sizeof(kEdges_b63_04CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04CF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04CF = {63u, 0xE4CFu, 0x04CFu, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_04CF, sizeof(kEdges_b63_04CF) / sizeof(kEdges_b63_04CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04D1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04D1 = {63u, 0xE4D1u, 0x04D1u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_04D1, sizeof(kEdges_b63_04D1) / sizeof(kEdges_b63_04D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04D3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04D3 = {63u, 0xE4D3u, 0x04D3u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_04D3, sizeof(kEdges_b63_04D3) / sizeof(kEdges_b63_04D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04D5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4D6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04D5 = {63u, 0xE4D5u, 0x04D5u, 0u, 0u, nullptr, 0u, kEdges_b63_04D5, sizeof(kEdges_b63_04D5) / sizeof(kEdges_b63_04D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04D6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4D9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04D6 = {63u, 0xE4D6u, 0x04D6u, 0x049Du, 2u, nullptr, 0u, kEdges_b63_04D6, sizeof(kEdges_b63_04D6) / sizeof(kEdges_b63_04D6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04D9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4DCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04D9 = {63u, 0xE4D9u, 0x04D9u, 0x049Du, 2u, nullptr, 0u, kEdges_b63_04D9, sizeof(kEdges_b63_04D9) / sizeof(kEdges_b63_04D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04DC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4DEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04DC = {63u, 0xE4DCu, 0x04DCu, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_04DC, sizeof(kEdges_b63_04DC) / sizeof(kEdges_b63_04DC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04DE[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4E0u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE4E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04DE = {63u, 0xE4DEu, 0x04DEu, 0xE4E3u, 1u, nullptr, 0u, kEdges_b63_04DE, sizeof(kEdges_b63_04DE) / sizeof(kEdges_b63_04DE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04E0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04E0 = {63u, 0xE4E0u, 0x04E0u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_04E0, sizeof(kEdges_b63_04E0) / sizeof(kEdges_b63_04E0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04E3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04E3 = {63u, 0xE4E3u, 0x04E3u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_04E3, sizeof(kEdges_b63_04E3) / sizeof(kEdges_b63_04E3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4E9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04E6 = {63u, 0xE4E6u, 0x04E6u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_04E6, sizeof(kEdges_b63_04E6) / sizeof(kEdges_b63_04E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04E9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4ECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04E9 = {63u, 0xE4E9u, 0x04E9u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_04E9, sizeof(kEdges_b63_04E9) / sizeof(kEdges_b63_04E9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04EC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4EEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04EC = {63u, 0xE4ECu, 0x04ECu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_04EC, sizeof(kEdges_b63_04EC) / sizeof(kEdges_b63_04EC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04EE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04EE = {63u, 0xE4EEu, 0x04EEu, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_04EE, sizeof(kEdges_b63_04EE) / sizeof(kEdges_b63_04EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04F1 = {63u, 0xE4F1u, 0x04F1u, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_04F1, sizeof(kEdges_b63_04F1) / sizeof(kEdges_b63_04F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04F3 = {63u, 0xE4F3u, 0x04F3u, 0u, 0u, nullptr, 0u, kEdges_b63_04F3, sizeof(kEdges_b63_04F3) / sizeof(kEdges_b63_04F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04F4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04F4 = {63u, 0xE4F4u, 0x04F4u, 0x04E2u, 2u, nullptr, 0u, kEdges_b63_04F4, sizeof(kEdges_b63_04F4) / sizeof(kEdges_b63_04F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04F7 = {63u, 0xE4F7u, 0x04F7u, 0x04E2u, 2u, nullptr, 0u, kEdges_b63_04F7, sizeof(kEdges_b63_04F7) / sizeof(kEdges_b63_04F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04FA = {63u, 0xE4FAu, 0x04FAu, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_04FA, sizeof(kEdges_b63_04FA) / sizeof(kEdges_b63_04FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04FC[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE4FEu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE501u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04FC = {63u, 0xE4FCu, 0x04FCu, 0xE501u, 1u, nullptr, 0u, kEdges_b63_04FC, sizeof(kEdges_b63_04FC) / sizeof(kEdges_b63_04FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_04FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE501u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_04FE = {63u, 0xE4FEu, 0x04FEu, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_04FE, sizeof(kEdges_b63_04FE) / sizeof(kEdges_b63_04FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0501[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE504u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0501 = {63u, 0xE501u, 0x0501u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0501, sizeof(kEdges_b63_0501) / sizeof(kEdges_b63_0501[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0504[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE507u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0504 = {63u, 0xE504u, 0x0504u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0504, sizeof(kEdges_b63_0504) / sizeof(kEdges_b63_0504[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0507[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE50Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0507 = {63u, 0xE507u, 0x0507u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_0507, sizeof(kEdges_b63_0507) / sizeof(kEdges_b63_0507[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_050A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE50Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_050A = {63u, 0xE50Au, 0x050Au, 0x0000u, 1u, nullptr, 0u, kEdges_b63_050A, sizeof(kEdges_b63_050A) / sizeof(kEdges_b63_050A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_050C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE50Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_050C = {63u, 0xE50Cu, 0x050Cu, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_050C, sizeof(kEdges_b63_050C) / sizeof(kEdges_b63_050C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_050F[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_050F = {63u, 0xE50Fu, 0x050Fu, 0u, 0u, nullptr, 0u, kEdges_b63_050F, sizeof(kEdges_b63_050F) / sizeof(kEdges_b63_050F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0510[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE512u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0510 = {63u, 0xE510u, 0x0510u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_0510, sizeof(kEdges_b63_0510) / sizeof(kEdges_b63_0510[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0512[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE515u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0512 = {63u, 0xE512u, 0x0512u, 0x03A0u, 2u, nullptr, 0u, kEdges_b63_0512, sizeof(kEdges_b63_0512) / sizeof(kEdges_b63_0512[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0515[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE517u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE51Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0515 = {63u, 0xE515u, 0x0515u, 0xE51Cu, 1u, nullptr, 0u, kEdges_b63_0515, sizeof(kEdges_b63_0515) / sizeof(kEdges_b63_0515[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0517[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE518u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0517 = {63u, 0xE517u, 0x0517u, 0u, 0u, nullptr, 0u, kEdges_b63_0517, sizeof(kEdges_b63_0517) / sizeof(kEdges_b63_0517[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0518[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE51Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE512u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0518 = {63u, 0xE518u, 0x0518u, 0xE512u, 1u, nullptr, 0u, kEdges_b63_0518, sizeof(kEdges_b63_0518) / sizeof(kEdges_b63_0518[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_051A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE51Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_051A = {63u, 0xE51Au, 0x051Au, 0u, 0u, nullptr, 0u, kEdges_b63_051A, sizeof(kEdges_b63_051A) / sizeof(kEdges_b63_051A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_051B[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_051B = {63u, 0xE51Bu, 0x051Bu, 0u, 0u, nullptr, 0u, kEdges_b63_051B, sizeof(kEdges_b63_051B) / sizeof(kEdges_b63_051B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_051C[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xE520u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_051C = {63u, 0xE51Cu, 0x051Cu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_051C, sizeof(kEdges_b63_051C) / sizeof(kEdges_b63_051C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0520[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE521u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0520 = {63u, 0xE520u, 0x0520u, 0u, 0u, nullptr, 0u, kEdges_b63_0520, sizeof(kEdges_b63_0520) / sizeof(kEdges_b63_0520[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0521[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0521 = {63u, 0xE521u, 0x0521u, 0u, 0u, nullptr, 0u, kEdges_b63_0521, sizeof(kEdges_b63_0521) / sizeof(kEdges_b63_0521[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0522[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE524u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0522 = {63u, 0xE522u, 0x0522u, 0x00FEu, 1u, nullptr, 0u, kEdges_b63_0522, sizeof(kEdges_b63_0522) / sizeof(kEdges_b63_0522[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0524[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE527u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0524 = {63u, 0xE524u, 0x0524u, 0x0510u, 2u, nullptr, 0u, kEdges_b63_0524, sizeof(kEdges_b63_0524) / sizeof(kEdges_b63_0524[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0527[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE52Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0527 = {63u, 0xE527u, 0x0527u, 0x0458u, 2u, nullptr, 0u, kEdges_b63_0527, sizeof(kEdges_b63_0527) / sizeof(kEdges_b63_0527[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_052A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB91u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE52Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_052A = {63u, 0xE52Au, 0x052Au, 0xCB91u, 2u, nullptr, 0u, kEdges_b63_052A, sizeof(kEdges_b63_052A) / sizeof(kEdges_b63_052A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_052D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE52Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_052D = {63u, 0xE52Du, 0x052Du, 0u, 0u, nullptr, 0u, kEdges_b63_052D, sizeof(kEdges_b63_052D) / sizeof(kEdges_b63_052D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_052E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE530u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_052E = {63u, 0xE52Eu, 0x052Eu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_052E, sizeof(kEdges_b63_052E) / sizeof(kEdges_b63_052E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0530[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCBDAu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE533u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0530 = {63u, 0xE530u, 0x0530u, 0xCBDAu, 2u, nullptr, 0u, kEdges_b63_0530, sizeof(kEdges_b63_0530) / sizeof(kEdges_b63_0530[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0533[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE536u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0533 = {63u, 0xE533u, 0x0533u, 0x8600u, 2u, nullptr, 0u, kEdges_b63_0533, sizeof(kEdges_b63_0533) / sizeof(kEdges_b63_0533[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0536[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE539u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0536 = {63u, 0xE536u, 0x0536u, 0x053Eu, 2u, nullptr, 0u, kEdges_b63_0536, sizeof(kEdges_b63_0536) / sizeof(kEdges_b63_0536[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0539[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE53Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0539 = {63u, 0xE539u, 0x0539u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0539, sizeof(kEdges_b63_0539) / sizeof(kEdges_b63_0539[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_053B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE53Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_053B = {63u, 0xE53Bu, 0x053Bu, 0x8700u, 2u, nullptr, 0u, kEdges_b63_053B, sizeof(kEdges_b63_053B) / sizeof(kEdges_b63_053B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_053E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE541u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_053E = {63u, 0xE53Eu, 0x053Eu, 0x0527u, 2u, nullptr, 0u, kEdges_b63_053E, sizeof(kEdges_b63_053E) / sizeof(kEdges_b63_053E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0541[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE543u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0541 = {63u, 0xE541u, 0x0541u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0541, sizeof(kEdges_b63_0541) / sizeof(kEdges_b63_0541[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0543[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE545u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0543 = {63u, 0xE543u, 0x0543u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0543, sizeof(kEdges_b63_0543) / sizeof(kEdges_b63_0543[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0545[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE548u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0545 = {63u, 0xE545u, 0x0545u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0545, sizeof(kEdges_b63_0545) / sizeof(kEdges_b63_0545[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0548[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE54Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0548 = {63u, 0xE548u, 0x0548u, 0x00FEu, 1u, nullptr, 0u, kEdges_b63_0548, sizeof(kEdges_b63_0548) / sizeof(kEdges_b63_0548[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_054A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE54Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_054A = {63u, 0xE54Au, 0x054Au, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_054A, sizeof(kEdges_b63_054A) / sizeof(kEdges_b63_054A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_054D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE54Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_054D = {63u, 0xE54Du, 0x054Du, 0x0008u, 1u, nullptr, 0u, kEdges_b63_054D, sizeof(kEdges_b63_054D) / sizeof(kEdges_b63_054D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_054F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE551u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_054F = {63u, 0xE54Fu, 0x054Fu, 0x007Fu, 1u, nullptr, 0u, kEdges_b63_054F, sizeof(kEdges_b63_054F) / sizeof(kEdges_b63_054F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0551[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE554u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0551 = {63u, 0xE551u, 0x0551u, 0x04F9u, 2u, nullptr, 0u, kEdges_b63_0551, sizeof(kEdges_b63_0551) / sizeof(kEdges_b63_0551[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0554[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE556u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0554 = {63u, 0xE554u, 0x0554u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0554, sizeof(kEdges_b63_0554) / sizeof(kEdges_b63_0554[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0556[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE559u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0556 = {63u, 0xE556u, 0x0556u, 0x0555u, 2u, nullptr, 0u, kEdges_b63_0556, sizeof(kEdges_b63_0556) / sizeof(kEdges_b63_0556[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0559[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCBE9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE55Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0559 = {63u, 0xE559u, 0x0559u, 0xCBE9u, 2u, nullptr, 0u, kEdges_b63_0559, sizeof(kEdges_b63_0559) / sizeof(kEdges_b63_0559[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_055C[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_055C = {63u, 0xE55Cu, 0x055Cu, 0u, 0u, nullptr, 0u, kEdges_b63_055C, sizeof(kEdges_b63_055C) / sizeof(kEdges_b63_055C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_055D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE560u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_055D = {63u, 0xE55Du, 0x055Du, 0x0458u, 2u, nullptr, 0u, kEdges_b63_055D, sizeof(kEdges_b63_055D) / sizeof(kEdges_b63_055D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0560[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB91u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE563u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0560 = {63u, 0xE560u, 0x0560u, 0xCB91u, 2u, nullptr, 0u, kEdges_b63_0560, sizeof(kEdges_b63_0560) / sizeof(kEdges_b63_0560[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0563[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE564u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0563 = {63u, 0xE563u, 0x0563u, 0u, 0u, nullptr, 0u, kEdges_b63_0563, sizeof(kEdges_b63_0563) / sizeof(kEdges_b63_0563[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0564[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE566u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0564 = {63u, 0xE564u, 0x0564u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0564, sizeof(kEdges_b63_0564) / sizeof(kEdges_b63_0564[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0566[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCBDAu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE569u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0566 = {63u, 0xE566u, 0x0566u, 0xCBDAu, 2u, nullptr, 0u, kEdges_b63_0566, sizeof(kEdges_b63_0566) / sizeof(kEdges_b63_0566[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0569[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE56Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0569 = {63u, 0xE569u, 0x0569u, 0x8600u, 2u, nullptr, 0u, kEdges_b63_0569, sizeof(kEdges_b63_0569) / sizeof(kEdges_b63_0569[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_056C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE56Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_056C = {63u, 0xE56Cu, 0x056Cu, 0x053Eu, 2u, nullptr, 0u, kEdges_b63_056C, sizeof(kEdges_b63_056C) / sizeof(kEdges_b63_056C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_056F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE571u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_056F = {63u, 0xE56Fu, 0x056Fu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_056F, sizeof(kEdges_b63_056F) / sizeof(kEdges_b63_056F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0571[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE574u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0571 = {63u, 0xE571u, 0x0571u, 0x8700u, 2u, nullptr, 0u, kEdges_b63_0571, sizeof(kEdges_b63_0571) / sizeof(kEdges_b63_0571[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0574[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE577u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0574 = {63u, 0xE574u, 0x0574u, 0x0527u, 2u, nullptr, 0u, kEdges_b63_0574, sizeof(kEdges_b63_0574) / sizeof(kEdges_b63_0574[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0577[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE579u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0577 = {63u, 0xE577u, 0x0577u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0577, sizeof(kEdges_b63_0577) / sizeof(kEdges_b63_0577[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0579[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE57Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0579 = {63u, 0xE579u, 0x0579u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0579, sizeof(kEdges_b63_0579) / sizeof(kEdges_b63_0579[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_057B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE57Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_057B = {63u, 0xE57Bu, 0x057Bu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_057B, sizeof(kEdges_b63_057B) / sizeof(kEdges_b63_057B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_057D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE57Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_057D = {63u, 0xE57Du, 0x057Du, 0x007Fu, 1u, nullptr, 0u, kEdges_b63_057D, sizeof(kEdges_b63_057D) / sizeof(kEdges_b63_057D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_057F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE582u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_057F = {63u, 0xE57Fu, 0x057Fu, 0x04F9u, 2u, nullptr, 0u, kEdges_b63_057F, sizeof(kEdges_b63_057F) / sizeof(kEdges_b63_057F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0582[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE585u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0582 = {63u, 0xE582u, 0x0582u, 0x04F9u, 2u, nullptr, 0u, kEdges_b63_0582, sizeof(kEdges_b63_0582) / sizeof(kEdges_b63_0582[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0585[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE587u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE58Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0585 = {63u, 0xE585u, 0x0585u, 0xE58Cu, 1u, nullptr, 0u, kEdges_b63_0585, sizeof(kEdges_b63_0585) / sizeof(kEdges_b63_0585[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0587[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE589u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0587 = {63u, 0xE587u, 0x0587u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0587, sizeof(kEdges_b63_0587) / sizeof(kEdges_b63_0587[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0589[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE58Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0589 = {63u, 0xE589u, 0x0589u, 0x0555u, 2u, nullptr, 0u, kEdges_b63_0589, sizeof(kEdges_b63_0589) / sizeof(kEdges_b63_0589[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_058C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCBE9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE58Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_058C = {63u, 0xE58Cu, 0x058Cu, 0xCBE9u, 2u, nullptr, 0u, kEdges_b63_058C, sizeof(kEdges_b63_058C) / sizeof(kEdges_b63_058C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_058F[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_058F = {63u, 0xE58Fu, 0x058Fu, 0u, 0u, nullptr, 0u, kEdges_b63_058F, sizeof(kEdges_b63_058F) / sizeof(kEdges_b63_058F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0590[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE592u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0590 = {63u, 0xE590u, 0x0590u, 0x000Du, 1u, nullptr, 0u, kEdges_b63_0590, sizeof(kEdges_b63_0590) / sizeof(kEdges_b63_0590[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0592[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE593u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0592 = {63u, 0xE592u, 0x0592u, 0u, 0u, nullptr, 0u, kEdges_b63_0592, sizeof(kEdges_b63_0592) / sizeof(kEdges_b63_0592[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0593[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE596u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0593 = {63u, 0xE593u, 0x0593u, 0x0404u, 2u, nullptr, 0u, kEdges_b63_0593, sizeof(kEdges_b63_0593) / sizeof(kEdges_b63_0593[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0596[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE598u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE5A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0596 = {63u, 0xE596u, 0x0596u, 0xE5A7u, 1u, nullptr, 0u, kEdges_b63_0596, sizeof(kEdges_b63_0596) / sizeof(kEdges_b63_0596[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0598[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE599u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0598 = {63u, 0xE598u, 0x0598u, 0u, 0u, nullptr, 0u, kEdges_b63_0598, sizeof(kEdges_b63_0598) / sizeof(kEdges_b63_0598[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0599[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE59Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE593u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0599 = {63u, 0xE599u, 0x0599u, 0xE593u, 1u, nullptr, 0u, kEdges_b63_0599, sizeof(kEdges_b63_0599) / sizeof(kEdges_b63_0599[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_059B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE59Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_059B = {63u, 0xE59Bu, 0x059Bu, 0x0015u, 1u, nullptr, 0u, kEdges_b63_059B, sizeof(kEdges_b63_059B) / sizeof(kEdges_b63_059B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_059D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5A0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_059D = {63u, 0xE59Du, 0x059Du, 0x03A0u, 2u, nullptr, 0u, kEdges_b63_059D, sizeof(kEdges_b63_059D) / sizeof(kEdges_b63_059D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05A0[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5A2u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE5A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05A0 = {63u, 0xE5A0u, 0x05A0u, 0xE5A9u, 1u, nullptr, 0u, kEdges_b63_05A0, sizeof(kEdges_b63_05A0) / sizeof(kEdges_b63_05A0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05A2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5A3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05A2 = {63u, 0xE5A2u, 0x05A2u, 0u, 0u, nullptr, 0u, kEdges_b63_05A2, sizeof(kEdges_b63_05A2) / sizeof(kEdges_b63_05A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05A3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05A3 = {63u, 0xE5A3u, 0x05A3u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_05A3, sizeof(kEdges_b63_05A3) / sizeof(kEdges_b63_05A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05A5[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5A7u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE59Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05A5 = {63u, 0xE5A5u, 0x05A5u, 0xE59Du, 1u, nullptr, 0u, kEdges_b63_05A5, sizeof(kEdges_b63_05A5) / sizeof(kEdges_b63_05A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05A7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05A7 = {63u, 0xE5A7u, 0x05A7u, 0u, 0u, nullptr, 0u, kEdges_b63_05A7, sizeof(kEdges_b63_05A7) / sizeof(kEdges_b63_05A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05A8[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05A8 = {63u, 0xE5A8u, 0x05A8u, 0u, 0u, nullptr, 0u, kEdges_b63_05A8, sizeof(kEdges_b63_05A8) / sizeof(kEdges_b63_05A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05A9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05A9 = {63u, 0xE5A9u, 0x05A9u, 0u, 0u, nullptr, 0u, kEdges_b63_05A9, sizeof(kEdges_b63_05A9) / sizeof(kEdges_b63_05A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05AA[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05AA = {63u, 0xE5AAu, 0x05AAu, 0u, 0u, nullptr, 0u, kEdges_b63_05AA, sizeof(kEdges_b63_05AA) / sizeof(kEdges_b63_05AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05AB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE59Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE5AEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05AB = {63u, 0xE5ABu, 0x05ABu, 0xE59Bu, 2u, nullptr, 0u, kEdges_b63_05AB, sizeof(kEdges_b63_05AB) / sizeof(kEdges_b63_05AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05AE[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5B0u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE5B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05AE = {63u, 0xE5AEu, 0x05AEu, 0xE5B5u, 1u, nullptr, 0u, kEdges_b63_05AE, sizeof(kEdges_b63_05AE) / sizeof(kEdges_b63_05AE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05B0[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xE5B4u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05B0 = {63u, 0xE5B0u, 0x05B0u, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_05B0, sizeof(kEdges_b63_05B0) / sizeof(kEdges_b63_05B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05B4 = {63u, 0xE5B4u, 0x05B4u, 0u, 0u, nullptr, 0u, kEdges_b63_05B4, sizeof(kEdges_b63_05B4) / sizeof(kEdges_b63_05B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05B5[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05B5 = {63u, 0xE5B5u, 0x05B5u, 0u, 0u, nullptr, 0u, kEdges_b63_05B5, sizeof(kEdges_b63_05B5) / sizeof(kEdges_b63_05B5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05B6 = {63u, 0xE5B6u, 0x05B6u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_05B6, sizeof(kEdges_b63_05B6) / sizeof(kEdges_b63_05B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05B8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5BAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05B8 = {63u, 0xE5B8u, 0x05B8u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_05B8, sizeof(kEdges_b63_05B8) / sizeof(kEdges_b63_05B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05BA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5BCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05BA = {63u, 0xE5BAu, 0x05BAu, 0x0011u, 1u, nullptr, 0u, kEdges_b63_05BA, sizeof(kEdges_b63_05BA) / sizeof(kEdges_b63_05BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05BC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5BFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05BC = {63u, 0xE5BCu, 0x05BCu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_05BC, sizeof(kEdges_b63_05BC) / sizeof(kEdges_b63_05BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05BF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05BF = {63u, 0xE5BFu, 0x05BFu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_05BF, sizeof(kEdges_b63_05BF) / sizeof(kEdges_b63_05BF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5C5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05C2 = {63u, 0xE5C2u, 0x05C2u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_05C2, sizeof(kEdges_b63_05C2) / sizeof(kEdges_b63_05C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05C5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5C8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05C5 = {63u, 0xE5C5u, 0x05C5u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_05C5, sizeof(kEdges_b63_05C5) / sizeof(kEdges_b63_05C5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05C8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5CAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE5CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05C8 = {63u, 0xE5C8u, 0x05C8u, 0xE5CEu, 1u, nullptr, 0u, kEdges_b63_05C8, sizeof(kEdges_b63_05C8) / sizeof(kEdges_b63_05C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05CA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5CCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05CA = {63u, 0xE5CAu, 0x05CAu, 0x0004u, 1u, nullptr, 0u, kEdges_b63_05CA, sizeof(kEdges_b63_05CA) / sizeof(kEdges_b63_05CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05CC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05CC = {63u, 0xE5CCu, 0x05CCu, 0x0011u, 1u, nullptr, 0u, kEdges_b63_05CC, sizeof(kEdges_b63_05CC) / sizeof(kEdges_b63_05CC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05CE[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05CE = {63u, 0xE5CEu, 0x05CEu, 0u, 0u, nullptr, 0u, kEdges_b63_05CE, sizeof(kEdges_b63_05CE) / sizeof(kEdges_b63_05CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05DF = {63u, 0xE5DFu, 0x05DFu, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_05DF, sizeof(kEdges_b63_05DF) / sizeof(kEdges_b63_05DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05E2 = {63u, 0xE5E2u, 0x05E2u, 0u, 0u, nullptr, 0u, kEdges_b63_05E2, sizeof(kEdges_b63_05E2) / sizeof(kEdges_b63_05E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05E3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05E3 = {63u, 0xE5E3u, 0x05E3u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_05E3, sizeof(kEdges_b63_05E3) / sizeof(kEdges_b63_05E3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05E6 = {63u, 0xE5E6u, 0x05E6u, 0x003Fu, 1u, nullptr, 0u, kEdges_b63_05E6, sizeof(kEdges_b63_05E6) / sizeof(kEdges_b63_05E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05E8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05E8 = {63u, 0xE5E8u, 0x05E8u, 0xE5CFu, 2u, nullptr, 0u, kEdges_b63_05E8, sizeof(kEdges_b63_05E8) / sizeof(kEdges_b63_05E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05EB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5EEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05EB = {63u, 0xE5EBu, 0x05EBu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_05EB, sizeof(kEdges_b63_05EB) / sizeof(kEdges_b63_05EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05EE[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05EE = {63u, 0xE5EEu, 0x05EEu, 0u, 0u, nullptr, 0u, kEdges_b63_05EE, sizeof(kEdges_b63_05EE) / sizeof(kEdges_b63_05EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05EF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05EF = {63u, 0xE5EFu, 0x05EFu, 0u, 0u, nullptr, 0u, kEdges_b63_05EF, sizeof(kEdges_b63_05EF) / sizeof(kEdges_b63_05EF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05F0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05F0 = {63u, 0xE5F0u, 0x05F0u, 0u, 0u, nullptr, 0u, kEdges_b63_05F0, sizeof(kEdges_b63_05F0) / sizeof(kEdges_b63_05F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05F1 = {63u, 0xE5F1u, 0x05F1u, 0u, 0u, nullptr, 0u, kEdges_b63_05F1, sizeof(kEdges_b63_05F1) / sizeof(kEdges_b63_05F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05F2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05F2 = {63u, 0xE5F2u, 0x05F2u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_05F2, sizeof(kEdges_b63_05F2) / sizeof(kEdges_b63_05F2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05F4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05F4 = {63u, 0xE5F4u, 0x05F4u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_05F4, sizeof(kEdges_b63_05F4) / sizeof(kEdges_b63_05F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05F7 = {63u, 0xE5F7u, 0x05F7u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_05F7, sizeof(kEdges_b63_05F7) / sizeof(kEdges_b63_05F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05F9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05F9 = {63u, 0xE5F9u, 0x05F9u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_05F9, sizeof(kEdges_b63_05F9) / sizeof(kEdges_b63_05F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05FB = {63u, 0xE5FBu, 0x05FBu, 0u, 0u, nullptr, 0u, kEdges_b63_05FB, sizeof(kEdges_b63_05FB) / sizeof(kEdges_b63_05FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05FC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE5FFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05FC = {63u, 0xE5FCu, 0x05FCu, 0xE603u, 2u, nullptr, 0u, kEdges_b63_05FC, sizeof(kEdges_b63_05FC) / sizeof(kEdges_b63_05FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_05FF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE600u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_05FF = {63u, 0xE5FFu, 0x05FFu, 0u, 0u, nullptr, 0u, kEdges_b63_05FF, sizeof(kEdges_b63_05FF) / sizeof(kEdges_b63_05FF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0600[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0600 = {63u, 0xE600u, 0x0600u, 0xE522u, 2u, nullptr, 0u, kEdges_b63_0600, sizeof(kEdges_b63_0600) / sizeof(kEdges_b63_0600[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_060E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE61Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE611u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_060E = {63u, 0xE60Eu, 0x060Eu, 0xE61Au, 2u, nullptr, 0u, kEdges_b63_060E, sizeof(kEdges_b63_060E) / sizeof(kEdges_b63_060E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0611[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE4D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0611 = {63u, 0xE611u, 0x0611u, 0xE4D3u, 2u, nullptr, 0u, kEdges_b63_0611, sizeof(kEdges_b63_0611) / sizeof(kEdges_b63_0611[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0614[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE61Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE617u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0614 = {63u, 0xE614u, 0x0614u, 0xE61Au, 2u, nullptr, 0u, kEdges_b63_0614, sizeof(kEdges_b63_0614) / sizeof(kEdges_b63_0614[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0617[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xEC11u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0617 = {63u, 0xE617u, 0x0617u, 0xEC11u, 2u, nullptr, 0u, kEdges_b63_0617, sizeof(kEdges_b63_0617) / sizeof(kEdges_b63_0617[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_061A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE61Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_061A = {63u, 0xE61Au, 0x061Au, 0xE646u, 2u, nullptr, 0u, kEdges_b63_061A, sizeof(kEdges_b63_061A) / sizeof(kEdges_b63_061A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_061D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE61Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_061D = {63u, 0xE61Du, 0x061Du, 0x0001u, 1u, nullptr, 0u, kEdges_b63_061D, sizeof(kEdges_b63_061D) / sizeof(kEdges_b63_061D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_061F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE622u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_061F = {63u, 0xE61Fu, 0x061Fu, 0xE655u, 2u, nullptr, 0u, kEdges_b63_061F, sizeof(kEdges_b63_061F) / sizeof(kEdges_b63_061F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0622[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE624u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0622 = {63u, 0xE622u, 0x0622u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_0622, sizeof(kEdges_b63_0622) / sizeof(kEdges_b63_0622[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0624[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE627u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0624 = {63u, 0xE624u, 0x0624u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0624, sizeof(kEdges_b63_0624) / sizeof(kEdges_b63_0624[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0627[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE628u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0627 = {63u, 0xE627u, 0x0627u, 0u, 0u, nullptr, 0u, kEdges_b63_0627, sizeof(kEdges_b63_0627) / sizeof(kEdges_b63_0627[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0628[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE62Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0628 = {63u, 0xE628u, 0x0628u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0628, sizeof(kEdges_b63_0628) / sizeof(kEdges_b63_0628[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_062A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE62Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_062A = {63u, 0xE62Au, 0x062Au, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_062A, sizeof(kEdges_b63_062A) / sizeof(kEdges_b63_062A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_062C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE62Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_062C = {63u, 0xE62Cu, 0x062Cu, 0u, 0u, nullptr, 0u, kEdges_b63_062C, sizeof(kEdges_b63_062C) / sizeof(kEdges_b63_062C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_062D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE62Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_062D = {63u, 0xE62Du, 0x062Du, 0u, 0u, nullptr, 0u, kEdges_b63_062D, sizeof(kEdges_b63_062D) / sizeof(kEdges_b63_062D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_062E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE62Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_062E = {63u, 0xE62Eu, 0x062Eu, 0u, 0u, nullptr, 0u, kEdges_b63_062E, sizeof(kEdges_b63_062E) / sizeof(kEdges_b63_062E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_062F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE630u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_062F = {63u, 0xE62Fu, 0x062Fu, 0u, 0u, nullptr, 0u, kEdges_b63_062F, sizeof(kEdges_b63_062F) / sizeof(kEdges_b63_062F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0630[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE632u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0630 = {63u, 0xE630u, 0x0630u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0630, sizeof(kEdges_b63_0630) / sizeof(kEdges_b63_0630[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0632[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE634u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0632 = {63u, 0xE632u, 0x0632u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0632, sizeof(kEdges_b63_0632) / sizeof(kEdges_b63_0632[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0634[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE635u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0634 = {63u, 0xE634u, 0x0634u, 0u, 0u, nullptr, 0u, kEdges_b63_0634, sizeof(kEdges_b63_0634) / sizeof(kEdges_b63_0634[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0635[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE636u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0635 = {63u, 0xE635u, 0x0635u, 0u, 0u, nullptr, 0u, kEdges_b63_0635, sizeof(kEdges_b63_0635) / sizeof(kEdges_b63_0635[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0636[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE638u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0636 = {63u, 0xE636u, 0x0636u, 0x0010u, 1u, nullptr, 0u, kEdges_b63_0636, sizeof(kEdges_b63_0636) / sizeof(kEdges_b63_0636[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0638[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE639u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0638 = {63u, 0xE638u, 0x0638u, 0u, 0u, nullptr, 0u, kEdges_b63_0638, sizeof(kEdges_b63_0638) / sizeof(kEdges_b63_0638[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0639[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE63Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0639 = {63u, 0xE639u, 0x0639u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0639, sizeof(kEdges_b63_0639) / sizeof(kEdges_b63_0639[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_063B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE63Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_063B = {63u, 0xE63Bu, 0x063Bu, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_063B, sizeof(kEdges_b63_063B) / sizeof(kEdges_b63_063B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_063D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE63Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_063D = {63u, 0xE63Du, 0x063Du, 0u, 0u, nullptr, 0u, kEdges_b63_063D, sizeof(kEdges_b63_063D) / sizeof(kEdges_b63_063D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_063E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE63Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_063E = {63u, 0xE63Eu, 0x063Eu, 0u, 0u, nullptr, 0u, kEdges_b63_063E, sizeof(kEdges_b63_063E) / sizeof(kEdges_b63_063E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_063F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE640u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_063F = {63u, 0xE63Fu, 0x063Fu, 0u, 0u, nullptr, 0u, kEdges_b63_063F, sizeof(kEdges_b63_063F) / sizeof(kEdges_b63_063F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0640[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE641u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0640 = {63u, 0xE640u, 0x0640u, 0u, 0u, nullptr, 0u, kEdges_b63_0640, sizeof(kEdges_b63_0640) / sizeof(kEdges_b63_0640[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0641[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE643u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0641 = {63u, 0xE641u, 0x0641u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0641, sizeof(kEdges_b63_0641) / sizeof(kEdges_b63_0641[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0643[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE645u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0643 = {63u, 0xE643u, 0x0643u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0643, sizeof(kEdges_b63_0643) / sizeof(kEdges_b63_0643[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0645[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0645 = {63u, 0xE645u, 0x0645u, 0u, 0u, nullptr, 0u, kEdges_b63_0645, sizeof(kEdges_b63_0645) / sizeof(kEdges_b63_0645[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08BC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08BC = {63u, 0xE8BCu, 0x08BCu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_08BC, sizeof(kEdges_b63_08BC) / sizeof(kEdges_b63_08BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08BE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE927u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE8C1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08BE = {63u, 0xE8BEu, 0x08BEu, 0xE927u, 2u, nullptr, 0u, kEdges_b63_08BE, sizeof(kEdges_b63_08BE) / sizeof(kEdges_b63_08BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08C1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08C1 = {63u, 0xE8C1u, 0x08C1u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_08C1, sizeof(kEdges_b63_08C1) / sizeof(kEdges_b63_08C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08C3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08C3 = {63u, 0xE8C3u, 0x08C3u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_08C3, sizeof(kEdges_b63_08C3) / sizeof(kEdges_b63_08C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08C6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8C8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08C6 = {63u, 0xE8C6u, 0x08C6u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_08C6, sizeof(kEdges_b63_08C6) / sizeof(kEdges_b63_08C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08C8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8CAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE904u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08C8 = {63u, 0xE8C8u, 0x08C8u, 0xE904u, 1u, nullptr, 0u, kEdges_b63_08C8, sizeof(kEdges_b63_08C8) / sizeof(kEdges_b63_08C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08CA[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8CCu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE8DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08CA = {63u, 0xE8CAu, 0x08CAu, 0xE8DAu, 1u, nullptr, 0u, kEdges_b63_08CA, sizeof(kEdges_b63_08CA) / sizeof(kEdges_b63_08CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08CC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08CC = {63u, 0xE8CCu, 0x08CCu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_08CC, sizeof(kEdges_b63_08CC) / sizeof(kEdges_b63_08CC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08CE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE927u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE8D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08CE = {63u, 0xE8CEu, 0x08CEu, 0xE927u, 2u, nullptr, 0u, kEdges_b63_08CE, sizeof(kEdges_b63_08CE) / sizeof(kEdges_b63_08CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08D1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08D1 = {63u, 0xE8D1u, 0x08D1u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_08D1, sizeof(kEdges_b63_08D1) / sizeof(kEdges_b63_08D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08D3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8D6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08D3 = {63u, 0xE8D3u, 0x08D3u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_08D3, sizeof(kEdges_b63_08D3) / sizeof(kEdges_b63_08D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08D6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08D6 = {63u, 0xE8D6u, 0x08D6u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_08D6, sizeof(kEdges_b63_08D6) / sizeof(kEdges_b63_08D6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08D8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8DAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE904u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08D8 = {63u, 0xE8D8u, 0x08D8u, 0xE904u, 1u, nullptr, 0u, kEdges_b63_08D8, sizeof(kEdges_b63_08D8) / sizeof(kEdges_b63_08D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8DCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08DA = {63u, 0xE8DAu, 0x08DAu, 0x0003u, 1u, nullptr, 0u, kEdges_b63_08DA, sizeof(kEdges_b63_08DA) / sizeof(kEdges_b63_08DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08DC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08DC = {63u, 0xE8DCu, 0x08DCu, 0u, 0u, nullptr, 0u, kEdges_b63_08DC, sizeof(kEdges_b63_08DC) / sizeof(kEdges_b63_08DC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08DD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8E0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08DD = {63u, 0xE8DDu, 0x08DDu, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_08DD, sizeof(kEdges_b63_08DD) / sizeof(kEdges_b63_08DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08E0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08E0 = {63u, 0xE8E0u, 0x08E0u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_08E0, sizeof(kEdges_b63_08E0) / sizeof(kEdges_b63_08E0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08E3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08E3 = {63u, 0xE8E3u, 0x08E3u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_08E3, sizeof(kEdges_b63_08E3) / sizeof(kEdges_b63_08E3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08E5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08E5 = {63u, 0xE8E5u, 0x08E5u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_08E5, sizeof(kEdges_b63_08E5) / sizeof(kEdges_b63_08E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08E8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08E8 = {63u, 0xE8E8u, 0x08E8u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_08E8, sizeof(kEdges_b63_08E8) / sizeof(kEdges_b63_08E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08EB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8EEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08EB = {63u, 0xE8EBu, 0x08EBu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_08EB, sizeof(kEdges_b63_08EB) / sizeof(kEdges_b63_08EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08EE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8EFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08EE = {63u, 0xE8EEu, 0x08EEu, 0u, 0u, nullptr, 0u, kEdges_b63_08EE, sizeof(kEdges_b63_08EE) / sizeof(kEdges_b63_08EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08EF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08EF = {63u, 0xE8EFu, 0x08EFu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_08EF, sizeof(kEdges_b63_08EF) / sizeof(kEdges_b63_08EF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08F1 = {63u, 0xE8F1u, 0x08F1u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_08F1, sizeof(kEdges_b63_08F1) / sizeof(kEdges_b63_08F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08F4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08F4 = {63u, 0xE8F4u, 0x08F4u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_08F4, sizeof(kEdges_b63_08F4) / sizeof(kEdges_b63_08F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08F7 = {63u, 0xE8F7u, 0x08F7u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_08F7, sizeof(kEdges_b63_08F7) / sizeof(kEdges_b63_08F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08F9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08F9 = {63u, 0xE8F9u, 0x08F9u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_08F9, sizeof(kEdges_b63_08F9) / sizeof(kEdges_b63_08F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08FC[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08FC = {63u, 0xE8FCu, 0x08FCu, 0u, 0u, nullptr, 0u, kEdges_b63_08FC, sizeof(kEdges_b63_08FC) / sizeof(kEdges_b63_08FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE8FFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08FD = {63u, 0xE8FDu, 0x08FDu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_08FD, sizeof(kEdges_b63_08FD) / sizeof(kEdges_b63_08FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_08FF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE927u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE902u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_08FF = {63u, 0xE8FFu, 0x08FFu, 0xE927u, 2u, nullptr, 0u, kEdges_b63_08FF, sizeof(kEdges_b63_08FF) / sizeof(kEdges_b63_08FF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0902[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE904u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0902 = {63u, 0xE902u, 0x0902u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0902, sizeof(kEdges_b63_0902) / sizeof(kEdges_b63_0902[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0904[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE906u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0904 = {63u, 0xE904u, 0x0904u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_0904, sizeof(kEdges_b63_0904) / sizeof(kEdges_b63_0904[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0906[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE907u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0906 = {63u, 0xE906u, 0x0906u, 0u, 0u, nullptr, 0u, kEdges_b63_0906, sizeof(kEdges_b63_0906) / sizeof(kEdges_b63_0906[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0907[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE90Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0907 = {63u, 0xE907u, 0x0907u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0907, sizeof(kEdges_b63_0907) / sizeof(kEdges_b63_0907[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_090A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE90Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_090A = {63u, 0xE90Au, 0x090Au, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_090A, sizeof(kEdges_b63_090A) / sizeof(kEdges_b63_090A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_090D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE90Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_090D = {63u, 0xE90Du, 0x090Du, 0x0004u, 1u, nullptr, 0u, kEdges_b63_090D, sizeof(kEdges_b63_090D) / sizeof(kEdges_b63_090D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_090F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE912u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_090F = {63u, 0xE90Fu, 0x090Fu, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_090F, sizeof(kEdges_b63_090F) / sizeof(kEdges_b63_090F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0912[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE915u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0912 = {63u, 0xE912u, 0x0912u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_0912, sizeof(kEdges_b63_0912) / sizeof(kEdges_b63_0912[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0915[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE916u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0915 = {63u, 0xE915u, 0x0915u, 0u, 0u, nullptr, 0u, kEdges_b63_0915, sizeof(kEdges_b63_0915) / sizeof(kEdges_b63_0915[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0916[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE919u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0916 = {63u, 0xE916u, 0x0916u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_0916, sizeof(kEdges_b63_0916) / sizeof(kEdges_b63_0916[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0919[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE91Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0919 = {63u, 0xE919u, 0x0919u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0919, sizeof(kEdges_b63_0919) / sizeof(kEdges_b63_0919[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_091B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE91Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_091B = {63u, 0xE91Bu, 0x091Bu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_091B, sizeof(kEdges_b63_091B) / sizeof(kEdges_b63_091B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_091E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE921u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_091E = {63u, 0xE91Eu, 0x091Eu, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_091E, sizeof(kEdges_b63_091E) / sizeof(kEdges_b63_091E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0921[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE923u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0921 = {63u, 0xE921u, 0x0921u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_0921, sizeof(kEdges_b63_0921) / sizeof(kEdges_b63_0921[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0923[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE926u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0923 = {63u, 0xE923u, 0x0923u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_0923, sizeof(kEdges_b63_0923) / sizeof(kEdges_b63_0923[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0926[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0926 = {63u, 0xE926u, 0x0926u, 0u, 0u, nullptr, 0u, kEdges_b63_0926, sizeof(kEdges_b63_0926) / sizeof(kEdges_b63_0926[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0927[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE928u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0927 = {63u, 0xE927u, 0x0927u, 0u, 0u, nullptr, 0u, kEdges_b63_0927, sizeof(kEdges_b63_0927) / sizeof(kEdges_b63_0927[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0928[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE929u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0928 = {63u, 0xE928u, 0x0928u, 0u, 0u, nullptr, 0u, kEdges_b63_0928, sizeof(kEdges_b63_0928) / sizeof(kEdges_b63_0928[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0929[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE92Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0929 = {63u, 0xE929u, 0x0929u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0929, sizeof(kEdges_b63_0929) / sizeof(kEdges_b63_0929[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_092B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE92Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_092B = {63u, 0xE92Bu, 0x092Bu, 0x0002u, 1u, nullptr, 0u, kEdges_b63_092B, sizeof(kEdges_b63_092B) / sizeof(kEdges_b63_092B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_092D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE92Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_092D = {63u, 0xE92Du, 0x092Du, 0x0004u, 1u, nullptr, 0u, kEdges_b63_092D, sizeof(kEdges_b63_092D) / sizeof(kEdges_b63_092D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_092F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE932u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_092F = {63u, 0xE92Fu, 0x092Fu, 0xE943u, 2u, nullptr, 0u, kEdges_b63_092F, sizeof(kEdges_b63_092F) / sizeof(kEdges_b63_092F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0932[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE934u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0932 = {63u, 0xE932u, 0x0932u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0932, sizeof(kEdges_b63_0932) / sizeof(kEdges_b63_0932[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0934[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE936u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE938u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0934 = {63u, 0xE934u, 0x0934u, 0xE938u, 1u, nullptr, 0u, kEdges_b63_0934, sizeof(kEdges_b63_0934) / sizeof(kEdges_b63_0934[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0936[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE938u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0936 = {63u, 0xE936u, 0x0936u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_0936, sizeof(kEdges_b63_0936) / sizeof(kEdges_b63_0936[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0938[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE939u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0938 = {63u, 0xE938u, 0x0938u, 0u, 0u, nullptr, 0u, kEdges_b63_0938, sizeof(kEdges_b63_0938) / sizeof(kEdges_b63_0938[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0939[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE93Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0939 = {63u, 0xE939u, 0x0939u, 0xE943u, 2u, nullptr, 0u, kEdges_b63_0939, sizeof(kEdges_b63_0939) / sizeof(kEdges_b63_0939[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_093C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE93Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_093C = {63u, 0xE93Cu, 0x093Cu, 0x0003u, 1u, nullptr, 0u, kEdges_b63_093C, sizeof(kEdges_b63_093C) / sizeof(kEdges_b63_093C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_093E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE940u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xE942u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_093E = {63u, 0xE93Eu, 0x093Eu, 0xE942u, 1u, nullptr, 0u, kEdges_b63_093E, sizeof(kEdges_b63_093E) / sizeof(kEdges_b63_093E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0940[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE942u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0940 = {63u, 0xE940u, 0x0940u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_0940, sizeof(kEdges_b63_0940) / sizeof(kEdges_b63_0940[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0942[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0942 = {63u, 0xE942u, 0x0942u, 0u, 0u, nullptr, 0u, kEdges_b63_0942, sizeof(kEdges_b63_0942) / sizeof(kEdges_b63_0942[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09D3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09D3 = {63u, 0xE9D3u, 0x09D3u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_09D3, sizeof(kEdges_b63_09D3) / sizeof(kEdges_b63_09D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09D5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09D5 = {63u, 0xE9D5u, 0x09D5u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_09D5, sizeof(kEdges_b63_09D5) / sizeof(kEdges_b63_09D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09D8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09D8 = {63u, 0xE9D8u, 0x09D8u, 0x00FEu, 1u, nullptr, 0u, kEdges_b63_09D8, sizeof(kEdges_b63_09D8) / sizeof(kEdges_b63_09D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09DA = {63u, 0xE9DAu, 0x09DAu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_09DA, sizeof(kEdges_b63_09DA) / sizeof(kEdges_b63_09DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09DD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE485u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE9E0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09DD = {63u, 0xE9DDu, 0x09DDu, 0xE485u, 2u, nullptr, 0u, kEdges_b63_09DD, sizeof(kEdges_b63_09DD) / sizeof(kEdges_b63_09DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09E0[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9E2u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEA19u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09E0 = {63u, 0xE9E0u, 0x09E0u, 0xEA19u, 1u, nullptr, 0u, kEdges_b63_09E0, sizeof(kEdges_b63_09E0) / sizeof(kEdges_b63_09E0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09E2 = {63u, 0xE9E2u, 0x09E2u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_09E2, sizeof(kEdges_b63_09E2) / sizeof(kEdges_b63_09E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09E5[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9E7u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEA16u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09E5 = {63u, 0xE9E5u, 0x09E5u, 0xEA16u, 1u, nullptr, 0u, kEdges_b63_09E5, sizeof(kEdges_b63_09E5) / sizeof(kEdges_b63_09E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09E7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9EAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09E7 = {63u, 0xE9E7u, 0x09E7u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_09E7, sizeof(kEdges_b63_09E7) / sizeof(kEdges_b63_09E7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09EA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9ECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09EA = {63u, 0xE9EAu, 0x09EAu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_09EA, sizeof(kEdges_b63_09EA) / sizeof(kEdges_b63_09EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09EC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9EFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09EC = {63u, 0xE9ECu, 0x09ECu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_09EC, sizeof(kEdges_b63_09EC) / sizeof(kEdges_b63_09EC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09EF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEB72u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xE9F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09EF = {63u, 0xE9EFu, 0x09EFu, 0xEB72u, 2u, nullptr, 0u, kEdges_b63_09EF, sizeof(kEdges_b63_09EF) / sizeof(kEdges_b63_09EF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09F2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9F5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09F2 = {63u, 0xE9F2u, 0x09F2u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_09F2, sizeof(kEdges_b63_09F2) / sizeof(kEdges_b63_09F2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09F5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09F5 = {63u, 0xE9F5u, 0x09F5u, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_09F5, sizeof(kEdges_b63_09F5) / sizeof(kEdges_b63_09F5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09F7 = {63u, 0xE9F7u, 0x09F7u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_09F7, sizeof(kEdges_b63_09F7) / sizeof(kEdges_b63_09F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09F9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09F9 = {63u, 0xE9F9u, 0x09F9u, 0x0035u, 1u, nullptr, 0u, kEdges_b63_09F9, sizeof(kEdges_b63_09F9) / sizeof(kEdges_b63_09F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09FB = {63u, 0xE9FBu, 0x09FBu, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_09FB, sizeof(kEdges_b63_09FB) / sizeof(kEdges_b63_09FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xE9FFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09FD = {63u, 0xE9FDu, 0x09FDu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_09FD, sizeof(kEdges_b63_09FD) / sizeof(kEdges_b63_09FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_09FF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA02u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_09FF = {63u, 0xE9FFu, 0x09FFu, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_09FF, sizeof(kEdges_b63_09FF) / sizeof(kEdges_b63_09FF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A02[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA05u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A02 = {63u, 0xEA02u, 0x0A02u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0A02, sizeof(kEdges_b63_0A02) / sizeof(kEdges_b63_0A02[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A05[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA06u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A05 = {63u, 0xEA05u, 0x0A05u, 0u, 0u, nullptr, 0u, kEdges_b63_0A05, sizeof(kEdges_b63_0A05) / sizeof(kEdges_b63_0A05[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A06[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA08u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A06 = {63u, 0xEA06u, 0x0A06u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0A06, sizeof(kEdges_b63_0A06) / sizeof(kEdges_b63_0A06[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A08[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA0Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A08 = {63u, 0xEA08u, 0x0A08u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0A08, sizeof(kEdges_b63_0A08) / sizeof(kEdges_b63_0A08[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A0B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA0Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEA16u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A0B = {63u, 0xEA0Bu, 0x0A0Bu, 0xEA16u, 1u, nullptr, 0u, kEdges_b63_0A0B, sizeof(kEdges_b63_0A0B) / sizeof(kEdges_b63_0A0B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A0D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA0Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A0D = {63u, 0xEA0Du, 0x0A0Du, 0x0017u, 1u, nullptr, 0u, kEdges_b63_0A0D, sizeof(kEdges_b63_0A0D) / sizeof(kEdges_b63_0A0D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A0F[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xEA13u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A0F = {63u, 0xEA0Fu, 0x0A0Fu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_0A0F, sizeof(kEdges_b63_0A0F) / sizeof(kEdges_b63_0A0F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A13[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE477u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A13 = {63u, 0xEA13u, 0x0A13u, 0xE477u, 2u, nullptr, 0u, kEdges_b63_0A13, sizeof(kEdges_b63_0A13) / sizeof(kEdges_b63_0A13[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A16[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A16 = {63u, 0xEA16u, 0x0A16u, 0xE468u, 2u, nullptr, 0u, kEdges_b63_0A16, sizeof(kEdges_b63_0A16) / sizeof(kEdges_b63_0A16[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A19[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A19 = {63u, 0xEA19u, 0x0A19u, 0xE456u, 2u, nullptr, 0u, kEdges_b63_0A19, sizeof(kEdges_b63_0A19) / sizeof(kEdges_b63_0A19[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A1C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA1Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A1C = {63u, 0xEA1Cu, 0x0A1Cu, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0A1C, sizeof(kEdges_b63_0A1C) / sizeof(kEdges_b63_0A1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A1E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA21u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A1E = {63u, 0xEA1Eu, 0x0A1Eu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0A1E, sizeof(kEdges_b63_0A1E) / sizeof(kEdges_b63_0A1E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A21[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA23u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A21 = {63u, 0xEA21u, 0x0A21u, 0x00FEu, 1u, nullptr, 0u, kEdges_b63_0A21, sizeof(kEdges_b63_0A21) / sizeof(kEdges_b63_0A21[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A23[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA26u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A23 = {63u, 0xEA23u, 0x0A23u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0A23, sizeof(kEdges_b63_0A23) / sizeof(kEdges_b63_0A23[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A26[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE485u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEA29u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A26 = {63u, 0xEA26u, 0x0A26u, 0xE485u, 2u, nullptr, 0u, kEdges_b63_0A26, sizeof(kEdges_b63_0A26) / sizeof(kEdges_b63_0A26[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A29[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA2Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEA67u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A29 = {63u, 0xEA29u, 0x0A29u, 0xEA67u, 1u, nullptr, 0u, kEdges_b63_0A29, sizeof(kEdges_b63_0A29) / sizeof(kEdges_b63_0A29[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A2B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA2Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A2B = {63u, 0xEA2Bu, 0x0A2Bu, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0A2B, sizeof(kEdges_b63_0A2B) / sizeof(kEdges_b63_0A2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A2E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA30u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEA64u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A2E = {63u, 0xEA2Eu, 0x0A2Eu, 0xEA64u, 1u, nullptr, 0u, kEdges_b63_0A2E, sizeof(kEdges_b63_0A2E) / sizeof(kEdges_b63_0A2E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A30[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEB72u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEA33u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A30 = {63u, 0xEA30u, 0x0A30u, 0xEB72u, 2u, nullptr, 0u, kEdges_b63_0A30, sizeof(kEdges_b63_0A30) / sizeof(kEdges_b63_0A30[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A33[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA36u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A33 = {63u, 0xEA33u, 0x0A33u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0A33, sizeof(kEdges_b63_0A33) / sizeof(kEdges_b63_0A33[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A36[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA38u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A36 = {63u, 0xEA36u, 0x0A36u, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_0A36, sizeof(kEdges_b63_0A36) / sizeof(kEdges_b63_0A36[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A38[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA3Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A38 = {63u, 0xEA38u, 0x0A38u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0A38, sizeof(kEdges_b63_0A38) / sizeof(kEdges_b63_0A38[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A3A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA3Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A3A = {63u, 0xEA3Au, 0x0A3Au, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0A3A, sizeof(kEdges_b63_0A3A) / sizeof(kEdges_b63_0A3A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A3D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA3Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A3D = {63u, 0xEA3Du, 0x0A3Du, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0A3D, sizeof(kEdges_b63_0A3D) / sizeof(kEdges_b63_0A3D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A3F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA42u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A3F = {63u, 0xEA3Fu, 0x0A3Fu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0A3F, sizeof(kEdges_b63_0A3F) / sizeof(kEdges_b63_0A3F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A42[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA44u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A42 = {63u, 0xEA42u, 0x0A42u, 0x0035u, 1u, nullptr, 0u, kEdges_b63_0A42, sizeof(kEdges_b63_0A42) / sizeof(kEdges_b63_0A42[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A44[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA46u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A44 = {63u, 0xEA44u, 0x0A44u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_0A44, sizeof(kEdges_b63_0A44) / sizeof(kEdges_b63_0A44[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A46[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA48u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A46 = {63u, 0xEA46u, 0x0A46u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0A46, sizeof(kEdges_b63_0A46) / sizeof(kEdges_b63_0A46[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A48[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA4Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A48 = {63u, 0xEA48u, 0x0A48u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0A48, sizeof(kEdges_b63_0A48) / sizeof(kEdges_b63_0A48[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A4B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA4Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A4B = {63u, 0xEA4Bu, 0x0A4Bu, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0A4B, sizeof(kEdges_b63_0A4B) / sizeof(kEdges_b63_0A4B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A4E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA4Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A4E = {63u, 0xEA4Eu, 0x0A4Eu, 0u, 0u, nullptr, 0u, kEdges_b63_0A4E, sizeof(kEdges_b63_0A4E) / sizeof(kEdges_b63_0A4E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A4F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA51u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A4F = {63u, 0xEA4Fu, 0x0A4Fu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0A4F, sizeof(kEdges_b63_0A4F) / sizeof(kEdges_b63_0A4F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A51[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA54u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A51 = {63u, 0xEA51u, 0x0A51u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0A51, sizeof(kEdges_b63_0A51) / sizeof(kEdges_b63_0A51[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A54[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA56u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEA64u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A54 = {63u, 0xEA54u, 0x0A54u, 0xEA64u, 1u, nullptr, 0u, kEdges_b63_0A54, sizeof(kEdges_b63_0A54) / sizeof(kEdges_b63_0A54[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A56[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA58u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A56 = {63u, 0xEA56u, 0x0A56u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0A56, sizeof(kEdges_b63_0A56) / sizeof(kEdges_b63_0A56[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A58[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA5Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A58 = {63u, 0xEA58u, 0x0A58u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0A58, sizeof(kEdges_b63_0A58) / sizeof(kEdges_b63_0A58[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A5B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA5Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A5B = {63u, 0xEA5Bu, 0x0A5Bu, 0x0025u, 1u, nullptr, 0u, kEdges_b63_0A5B, sizeof(kEdges_b63_0A5B) / sizeof(kEdges_b63_0A5B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A5D[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xEA61u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A5D = {63u, 0xEA5Du, 0x0A5Du, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_0A5D, sizeof(kEdges_b63_0A5D) / sizeof(kEdges_b63_0A5D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A61[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE477u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A61 = {63u, 0xEA61u, 0x0A61u, 0xE477u, 2u, nullptr, 0u, kEdges_b63_0A61, sizeof(kEdges_b63_0A61) / sizeof(kEdges_b63_0A61[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A64[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A64 = {63u, 0xEA64u, 0x0A64u, 0xE468u, 2u, nullptr, 0u, kEdges_b63_0A64, sizeof(kEdges_b63_0A64) / sizeof(kEdges_b63_0A64[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A67[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A67 = {63u, 0xEA67u, 0x0A67u, 0xE456u, 2u, nullptr, 0u, kEdges_b63_0A67, sizeof(kEdges_b63_0A67) / sizeof(kEdges_b63_0A67[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A6A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA6Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A6A = {63u, 0xEA6Au, 0x0A6Au, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0A6A, sizeof(kEdges_b63_0A6A) / sizeof(kEdges_b63_0A6A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A6C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA6Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A6C = {63u, 0xEA6Cu, 0x0A6Cu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0A6C, sizeof(kEdges_b63_0A6C) / sizeof(kEdges_b63_0A6C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A6E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA71u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A6E = {63u, 0xEA6Eu, 0x0A6Eu, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0A6E, sizeof(kEdges_b63_0A6E) / sizeof(kEdges_b63_0A6E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A71[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE485u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEA74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A71 = {63u, 0xEA71u, 0x0A71u, 0xE485u, 2u, nullptr, 0u, kEdges_b63_0A71, sizeof(kEdges_b63_0A71) / sizeof(kEdges_b63_0A71[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A74[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA76u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEA79u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A74 = {63u, 0xEA74u, 0x0A74u, 0xEA79u, 1u, nullptr, 0u, kEdges_b63_0A74, sizeof(kEdges_b63_0A74) / sizeof(kEdges_b63_0A74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A76[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A76 = {63u, 0xEA76u, 0x0A76u, 0xE468u, 2u, nullptr, 0u, kEdges_b63_0A76, sizeof(kEdges_b63_0A76) / sizeof(kEdges_b63_0A76[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A79[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A79 = {63u, 0xEA79u, 0x0A79u, 0xE456u, 2u, nullptr, 0u, kEdges_b63_0A79, sizeof(kEdges_b63_0A79) / sizeof(kEdges_b63_0A79[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A7C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA7Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A7C = {63u, 0xEA7Cu, 0x0A7Cu, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0A7C, sizeof(kEdges_b63_0A7C) / sizeof(kEdges_b63_0A7C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A7E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA80u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A7E = {63u, 0xEA7Eu, 0x0A7Eu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0A7E, sizeof(kEdges_b63_0A7E) / sizeof(kEdges_b63_0A7E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A80[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA83u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A80 = {63u, 0xEA80u, 0x0A80u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0A80, sizeof(kEdges_b63_0A80) / sizeof(kEdges_b63_0A80[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A83[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA86u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A83 = {63u, 0xEA83u, 0x0A83u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_0A83, sizeof(kEdges_b63_0A83) / sizeof(kEdges_b63_0A83[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A86[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA88u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A86 = {63u, 0xEA86u, 0x0A86u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0A86, sizeof(kEdges_b63_0A86) / sizeof(kEdges_b63_0A86[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A88[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA8Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEA8Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A88 = {63u, 0xEA88u, 0x0A88u, 0xEA8Fu, 1u, nullptr, 0u, kEdges_b63_0A88, sizeof(kEdges_b63_0A88) / sizeof(kEdges_b63_0A88[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A8A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE485u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEA8Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A8A = {63u, 0xEA8Au, 0x0A8Au, 0xE485u, 2u, nullptr, 0u, kEdges_b63_0A8A, sizeof(kEdges_b63_0A8A) / sizeof(kEdges_b63_0A8A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A8D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA8Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEA92u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A8D = {63u, 0xEA8Du, 0x0A8Du, 0xEA92u, 1u, nullptr, 0u, kEdges_b63_0A8D, sizeof(kEdges_b63_0A8D) / sizeof(kEdges_b63_0A8D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A8F[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A8F = {63u, 0xEA8Fu, 0x0A8Fu, 0xE468u, 2u, nullptr, 0u, kEdges_b63_0A8F, sizeof(kEdges_b63_0A8F) / sizeof(kEdges_b63_0A8F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A92[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A92 = {63u, 0xEA92u, 0x0A92u, 0xE456u, 2u, nullptr, 0u, kEdges_b63_0A92, sizeof(kEdges_b63_0A92) / sizeof(kEdges_b63_0A92[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A95[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA97u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A95 = {63u, 0xEA95u, 0x0A95u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0A95, sizeof(kEdges_b63_0A95) / sizeof(kEdges_b63_0A95[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A97[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA9Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A97 = {63u, 0xEA97u, 0x0A97u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0A97, sizeof(kEdges_b63_0A97) / sizeof(kEdges_b63_0A97[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A9A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA9Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEAA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A9A = {63u, 0xEA9Au, 0x0A9Au, 0xEAA3u, 1u, nullptr, 0u, kEdges_b63_0A9A, sizeof(kEdges_b63_0A9A) / sizeof(kEdges_b63_0A9A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A9C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEA9Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A9C = {63u, 0xEA9Cu, 0x0A9Cu, 0x0014u, 1u, nullptr, 0u, kEdges_b63_0A9C, sizeof(kEdges_b63_0A9C) / sizeof(kEdges_b63_0A9C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0A9E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAA0u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEAA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0A9E = {63u, 0xEA9Eu, 0x0A9Eu, 0xEAA3u, 1u, nullptr, 0u, kEdges_b63_0A9E, sizeof(kEdges_b63_0A9E) / sizeof(kEdges_b63_0A9E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AA0[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE9D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AA0 = {63u, 0xEAA0u, 0x0AA0u, 0xE9D3u, 2u, nullptr, 0u, kEdges_b63_0AA0, sizeof(kEdges_b63_0AA0) / sizeof(kEdges_b63_0AA0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AA3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE485u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEAA6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AA3 = {63u, 0xEAA3u, 0x0AA3u, 0xE485u, 2u, nullptr, 0u, kEdges_b63_0AA3, sizeof(kEdges_b63_0AA3) / sizeof(kEdges_b63_0AA3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AA6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAA8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEAB0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AA6 = {63u, 0xEAA6u, 0x0AA6u, 0xEAB0u, 1u, nullptr, 0u, kEdges_b63_0AA6, sizeof(kEdges_b63_0AA6) / sizeof(kEdges_b63_0AA6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AA8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAAAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AA8 = {63u, 0xEAA8u, 0x0AA8u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0AA8, sizeof(kEdges_b63_0AA8) / sizeof(kEdges_b63_0AA8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AAA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AAA = {63u, 0xEAAAu, 0x0AAAu, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0AAA, sizeof(kEdges_b63_0AAA) / sizeof(kEdges_b63_0AAA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AAD[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AAD = {63u, 0xEAADu, 0x0AADu, 0xE468u, 2u, nullptr, 0u, kEdges_b63_0AAD, sizeof(kEdges_b63_0AAD) / sizeof(kEdges_b63_0AAD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AB0[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AB0 = {63u, 0xEAB0u, 0x0AB0u, 0xE456u, 2u, nullptr, 0u, kEdges_b63_0AB0, sizeof(kEdges_b63_0AB0) / sizeof(kEdges_b63_0AB0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AB3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAB4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AB3 = {63u, 0xEAB3u, 0x0AB3u, 0u, 0u, nullptr, 0u, kEdges_b63_0AB3, sizeof(kEdges_b63_0AB3) / sizeof(kEdges_b63_0AB3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AB4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAB6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AB4 = {63u, 0xEAB4u, 0x0AB4u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0AB4, sizeof(kEdges_b63_0AB4) / sizeof(kEdges_b63_0AB4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AB6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAB9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AB6 = {63u, 0xEAB6u, 0x0AB6u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0AB6, sizeof(kEdges_b63_0AB6) / sizeof(kEdges_b63_0AB6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AB9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEABBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AB9 = {63u, 0xEAB9u, 0x0AB9u, 0x00FEu, 1u, nullptr, 0u, kEdges_b63_0AB9, sizeof(kEdges_b63_0AB9) / sizeof(kEdges_b63_0AB9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ABB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEABEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ABB = {63u, 0xEABBu, 0x0ABBu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0ABB, sizeof(kEdges_b63_0ABB) / sizeof(kEdges_b63_0ABB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ABE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE485u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEAC1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ABE = {63u, 0xEABEu, 0x0ABEu, 0xE485u, 2u, nullptr, 0u, kEdges_b63_0ABE, sizeof(kEdges_b63_0ABE) / sizeof(kEdges_b63_0ABE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AC1[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAC3u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEB38u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AC1 = {63u, 0xEAC1u, 0x0AC1u, 0xEB38u, 1u, nullptr, 0u, kEdges_b63_0AC1, sizeof(kEdges_b63_0AC1) / sizeof(kEdges_b63_0AC1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AC3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAC4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AC3 = {63u, 0xEAC3u, 0x0AC3u, 0u, 0u, nullptr, 0u, kEdges_b63_0AC3, sizeof(kEdges_b63_0AC3) / sizeof(kEdges_b63_0AC3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AC4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAC5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AC4 = {63u, 0xEAC4u, 0x0AC4u, 0u, 0u, nullptr, 0u, kEdges_b63_0AC4, sizeof(kEdges_b63_0AC4) / sizeof(kEdges_b63_0AC4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AC5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AC5 = {63u, 0xEAC5u, 0x0AC5u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0AC5, sizeof(kEdges_b63_0AC5) / sizeof(kEdges_b63_0AC5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AC8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEACAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEB30u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AC8 = {63u, 0xEAC8u, 0x0AC8u, 0xEB30u, 1u, nullptr, 0u, kEdges_b63_0AC8, sizeof(kEdges_b63_0AC8) / sizeof(kEdges_b63_0AC8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ACA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEACCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ACA = {63u, 0xEACAu, 0x0ACAu, 0x0030u, 1u, nullptr, 0u, kEdges_b63_0ACA, sizeof(kEdges_b63_0ACA) / sizeof(kEdges_b63_0ACA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ACC[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEACEu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEB30u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ACC = {63u, 0xEACCu, 0x0ACCu, 0xEB30u, 1u, nullptr, 0u, kEdges_b63_0ACC, sizeof(kEdges_b63_0ACC) / sizeof(kEdges_b63_0ACC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ACE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAD1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ACE = {63u, 0xEACEu, 0x0ACEu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0ACE, sizeof(kEdges_b63_0ACE) / sizeof(kEdges_b63_0ACE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AD1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAD3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AD1 = {63u, 0xEAD1u, 0x0AD1u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0AD1, sizeof(kEdges_b63_0AD1) / sizeof(kEdges_b63_0AD1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AD3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAD6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AD3 = {63u, 0xEAD3u, 0x0AD3u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0AD3, sizeof(kEdges_b63_0AD3) / sizeof(kEdges_b63_0AD3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AD6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAD9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AD6 = {63u, 0xEAD6u, 0x0AD6u, 0xEB3Cu, 2u, nullptr, 0u, kEdges_b63_0AD6, sizeof(kEdges_b63_0AD6) / sizeof(kEdges_b63_0AD6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AD9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEADBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AD9 = {63u, 0xEAD9u, 0x0AD9u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0AD9, sizeof(kEdges_b63_0AD9) / sizeof(kEdges_b63_0AD9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ADB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEADEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ADB = {63u, 0xEADBu, 0x0ADBu, 0xEB3Fu, 2u, nullptr, 0u, kEdges_b63_0ADB, sizeof(kEdges_b63_0ADB) / sizeof(kEdges_b63_0ADB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ADE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAE0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ADE = {63u, 0xEADEu, 0x0ADEu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0ADE, sizeof(kEdges_b63_0ADE) / sizeof(kEdges_b63_0ADE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AE0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAE2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AE0 = {63u, 0xEAE0u, 0x0AE0u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0AE0, sizeof(kEdges_b63_0AE0) / sizeof(kEdges_b63_0AE0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AE2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAE4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEAFAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AE2 = {63u, 0xEAE2u, 0x0AE2u, 0xEAFAu, 1u, nullptr, 0u, kEdges_b63_0AE2, sizeof(kEdges_b63_0AE2) / sizeof(kEdges_b63_0AE2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AE4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEB72u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEAE7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AE4 = {63u, 0xEAE4u, 0x0AE4u, 0xEB72u, 2u, nullptr, 0u, kEdges_b63_0AE4, sizeof(kEdges_b63_0AE4) / sizeof(kEdges_b63_0AE4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AE7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAEAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AE7 = {63u, 0xEAE7u, 0x0AE7u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0AE7, sizeof(kEdges_b63_0AE7) / sizeof(kEdges_b63_0AE7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AEA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AEA = {63u, 0xEAEAu, 0x0AEAu, 0x00F0u, 1u, nullptr, 0u, kEdges_b63_0AEA, sizeof(kEdges_b63_0AEA) / sizeof(kEdges_b63_0AEA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AEC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAEEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AEC = {63u, 0xEAECu, 0x0AECu, 0x0010u, 1u, nullptr, 0u, kEdges_b63_0AEC, sizeof(kEdges_b63_0AEC) / sizeof(kEdges_b63_0AEC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AEE[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAF0u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEAFAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AEE = {63u, 0xEAEEu, 0x0AEEu, 0xEAFAu, 1u, nullptr, 0u, kEdges_b63_0AEE, sizeof(kEdges_b63_0AEE) / sizeof(kEdges_b63_0AEE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AF0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAF3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AF0 = {63u, 0xEAF0u, 0x0AF0u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0AF0, sizeof(kEdges_b63_0AF0) / sizeof(kEdges_b63_0AF0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AF3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAF5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AF3 = {63u, 0xEAF3u, 0x0AF3u, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_0AF3, sizeof(kEdges_b63_0AF3) / sizeof(kEdges_b63_0AF3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AF5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAF7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AF5 = {63u, 0xEAF5u, 0x0AF5u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0AF5, sizeof(kEdges_b63_0AF5) / sizeof(kEdges_b63_0AF5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AF7[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xEB0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AF7 = {63u, 0xEAF7u, 0x0AF7u, 0xEB0Au, 2u, nullptr, 0u, kEdges_b63_0AF7, sizeof(kEdges_b63_0AF7) / sizeof(kEdges_b63_0AF7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AFA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAFDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AFA = {63u, 0xEAFAu, 0x0AFAu, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0AFA, sizeof(kEdges_b63_0AFA) / sizeof(kEdges_b63_0AFA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AFD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAFEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AFD = {63u, 0xEAFDu, 0x0AFDu, 0u, 0u, nullptr, 0u, kEdges_b63_0AFD, sizeof(kEdges_b63_0AFD) / sizeof(kEdges_b63_0AFD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AFE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEAFFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AFE = {63u, 0xEAFEu, 0x0AFEu, 0u, 0u, nullptr, 0u, kEdges_b63_0AFE, sizeof(kEdges_b63_0AFE) / sizeof(kEdges_b63_0AFE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0AFF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB00u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0AFF = {63u, 0xEAFFu, 0x0AFFu, 0u, 0u, nullptr, 0u, kEdges_b63_0AFF, sizeof(kEdges_b63_0AFF) / sizeof(kEdges_b63_0AFF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B00[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB01u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B00 = {63u, 0xEB00u, 0x0B00u, 0u, 0u, nullptr, 0u, kEdges_b63_0B00, sizeof(kEdges_b63_0B00) / sizeof(kEdges_b63_0B00[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B01[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB02u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B01 = {63u, 0xEB01u, 0x0B01u, 0u, 0u, nullptr, 0u, kEdges_b63_0B01, sizeof(kEdges_b63_0B01) / sizeof(kEdges_b63_0B01[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B02[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB04u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B02 = {63u, 0xEB02u, 0x0B02u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0B02, sizeof(kEdges_b63_0B02) / sizeof(kEdges_b63_0B02[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B04[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB06u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEB30u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B04 = {63u, 0xEB04u, 0x0B04u, 0xEB30u, 1u, nullptr, 0u, kEdges_b63_0B04, sizeof(kEdges_b63_0B04) / sizeof(kEdges_b63_0B04[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B06[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB08u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEB1Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B06 = {63u, 0xEB06u, 0x0B06u, 0xEB1Eu, 1u, nullptr, 0u, kEdges_b63_0B06, sizeof(kEdges_b63_0B06) / sizeof(kEdges_b63_0B06[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B08[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B08 = {63u, 0xEB08u, 0x0B08u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0B08, sizeof(kEdges_b63_0B08) / sizeof(kEdges_b63_0B08[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B0A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB0Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B0A = {63u, 0xEB0Au, 0x0B0Au, 0x0035u, 1u, nullptr, 0u, kEdges_b63_0B0A, sizeof(kEdges_b63_0B0A) / sizeof(kEdges_b63_0B0A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B0C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB0Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B0C = {63u, 0xEB0Cu, 0x0B0Cu, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_0B0C, sizeof(kEdges_b63_0B0C) / sizeof(kEdges_b63_0B0C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B0E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB10u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B0E = {63u, 0xEB0Eu, 0x0B0Eu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0B0E, sizeof(kEdges_b63_0B0E) / sizeof(kEdges_b63_0B0E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B10[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB13u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B10 = {63u, 0xEB10u, 0x0B10u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0B10, sizeof(kEdges_b63_0B10) / sizeof(kEdges_b63_0B10[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B13[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB16u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B13 = {63u, 0xEB13u, 0x0B13u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0B13, sizeof(kEdges_b63_0B13) / sizeof(kEdges_b63_0B13[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B16[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB17u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B16 = {63u, 0xEB16u, 0x0B16u, 0u, 0u, nullptr, 0u, kEdges_b63_0B16, sizeof(kEdges_b63_0B16) / sizeof(kEdges_b63_0B16[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B17[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB19u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B17 = {63u, 0xEB17u, 0x0B17u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0B17, sizeof(kEdges_b63_0B17) / sizeof(kEdges_b63_0B17[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B19[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB1Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B19 = {63u, 0xEB19u, 0x0B19u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0B19, sizeof(kEdges_b63_0B19) / sizeof(kEdges_b63_0B19[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B1C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB1Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEB30u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B1C = {63u, 0xEB1Cu, 0x0B1Cu, 0xEB30u, 1u, nullptr, 0u, kEdges_b63_0B1C, sizeof(kEdges_b63_0B1C) / sizeof(kEdges_b63_0B1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B1E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB20u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B1E = {63u, 0xEB1Eu, 0x0B1Eu, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0B1E, sizeof(kEdges_b63_0B1E) / sizeof(kEdges_b63_0B1E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B20[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB23u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B20 = {63u, 0xEB20u, 0x0B20u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0B20, sizeof(kEdges_b63_0B20) / sizeof(kEdges_b63_0B20[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B23[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB25u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B23 = {63u, 0xEB23u, 0x0B23u, 0x0035u, 1u, nullptr, 0u, kEdges_b63_0B23, sizeof(kEdges_b63_0B23) / sizeof(kEdges_b63_0B23[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B25[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB27u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B25 = {63u, 0xEB25u, 0x0B25u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_0B25, sizeof(kEdges_b63_0B25) / sizeof(kEdges_b63_0B25[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B27[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB29u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B27 = {63u, 0xEB27u, 0x0B27u, 0x0017u, 1u, nullptr, 0u, kEdges_b63_0B27, sizeof(kEdges_b63_0B27) / sizeof(kEdges_b63_0B27[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B29[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xEB2Du, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B29 = {63u, 0xEB29u, 0x0B29u, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_0B29, sizeof(kEdges_b63_0B29) / sizeof(kEdges_b63_0B29[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B2D[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE477u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B2D = {63u, 0xEB2Du, 0x0B2Du, 0xE477u, 2u, nullptr, 0u, kEdges_b63_0B2D, sizeof(kEdges_b63_0B2D) / sizeof(kEdges_b63_0B2D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B30[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB32u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B30 = {63u, 0xEB30u, 0x0B30u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0B30, sizeof(kEdges_b63_0B30) / sizeof(kEdges_b63_0B30[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B32[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB35u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B32 = {63u, 0xEB32u, 0x0B32u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0B32, sizeof(kEdges_b63_0B32) / sizeof(kEdges_b63_0B32[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B35[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B35 = {63u, 0xEB35u, 0x0B35u, 0xE468u, 2u, nullptr, 0u, kEdges_b63_0B35, sizeof(kEdges_b63_0B35) / sizeof(kEdges_b63_0B35[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B38[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB39u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B38 = {63u, 0xEB38u, 0x0B38u, 0u, 0u, nullptr, 0u, kEdges_b63_0B38, sizeof(kEdges_b63_0B38) / sizeof(kEdges_b63_0B38[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B39[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B39 = {63u, 0xEB39u, 0x0B39u, 0xE456u, 2u, nullptr, 0u, kEdges_b63_0B39, sizeof(kEdges_b63_0B39) / sizeof(kEdges_b63_0B39[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B72[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB75u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B72 = {63u, 0xEB72u, 0x0B72u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0B72, sizeof(kEdges_b63_0B72) / sizeof(kEdges_b63_0B72[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B75[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB76u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B75 = {63u, 0xEB75u, 0x0B75u, 0u, 0u, nullptr, 0u, kEdges_b63_0B75, sizeof(kEdges_b63_0B75) / sizeof(kEdges_b63_0B75[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B76[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB77u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B76 = {63u, 0xEB76u, 0x0B76u, 0u, 0u, nullptr, 0u, kEdges_b63_0B76, sizeof(kEdges_b63_0B76) / sizeof(kEdges_b63_0B76[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B77[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB78u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B77 = {63u, 0xEB77u, 0x0B77u, 0u, 0u, nullptr, 0u, kEdges_b63_0B77, sizeof(kEdges_b63_0B77) / sizeof(kEdges_b63_0B77[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B78[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB79u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B78 = {63u, 0xEB78u, 0x0B78u, 0u, 0u, nullptr, 0u, kEdges_b63_0B78, sizeof(kEdges_b63_0B78) / sizeof(kEdges_b63_0B78[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B79[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB7Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B79 = {63u, 0xEB79u, 0x0B79u, 0u, 0u, nullptr, 0u, kEdges_b63_0B79, sizeof(kEdges_b63_0B79) / sizeof(kEdges_b63_0B79[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B7A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB7Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B7A = {63u, 0xEB7Au, 0x0B7Au, 0xEBB1u, 2u, nullptr, 0u, kEdges_b63_0B7A, sizeof(kEdges_b63_0B7A) / sizeof(kEdges_b63_0B7A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B7D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB7Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B7D = {63u, 0xEB7Du, 0x0B7Du, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0B7D, sizeof(kEdges_b63_0B7D) / sizeof(kEdges_b63_0B7D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B7F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB82u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B7F = {63u, 0xEB7Fu, 0x0B7Fu, 0xEBC1u, 2u, nullptr, 0u, kEdges_b63_0B7F, sizeof(kEdges_b63_0B7F) / sizeof(kEdges_b63_0B7F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B82[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B82 = {63u, 0xEB82u, 0x0B82u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0B82, sizeof(kEdges_b63_0B82) / sizeof(kEdges_b63_0B82[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B84[] = {
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 63, 0xEB87u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 63, 0xEBB0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B84 = {63u, 0xEB84u, 0x0B84u, 0x0008u, 2u, nullptr, 0u, kEdges_b63_0B84, sizeof(kEdges_b63_0B84) / sizeof(kEdges_b63_0B84[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B87[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB8Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B87 = {63u, 0xEB87u, 0x0B87u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0B87, sizeof(kEdges_b63_0B87) / sizeof(kEdges_b63_0B87[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B8A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB8Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B8A = {63u, 0xEB8Au, 0x0B8Au, 0x00FEu, 1u, nullptr, 0u, kEdges_b63_0B8A, sizeof(kEdges_b63_0B8A) / sizeof(kEdges_b63_0B8A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B8C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB8Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B8C = {63u, 0xEB8Cu, 0x0B8Cu, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0B8C, sizeof(kEdges_b63_0B8C) / sizeof(kEdges_b63_0B8C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B8F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB92u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B8F = {63u, 0xEB8Fu, 0x0B8Fu, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0B8F, sizeof(kEdges_b63_0B8F) / sizeof(kEdges_b63_0B8F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B92[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB93u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B92 = {63u, 0xEB92u, 0x0B92u, 0u, 0u, nullptr, 0u, kEdges_b63_0B92, sizeof(kEdges_b63_0B92) / sizeof(kEdges_b63_0B92[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B93[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB95u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B93 = {63u, 0xEB93u, 0x0B93u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_0B93, sizeof(kEdges_b63_0B93) / sizeof(kEdges_b63_0B93[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B95[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB97u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEBB0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B95 = {63u, 0xEB95u, 0x0B95u, 0xEBB0u, 1u, nullptr, 0u, kEdges_b63_0B95, sizeof(kEdges_b63_0B95) / sizeof(kEdges_b63_0B95[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B97[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB9Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B97 = {63u, 0xEB97u, 0x0B97u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0B97, sizeof(kEdges_b63_0B97) / sizeof(kEdges_b63_0B97[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B9A[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 63, 0xEB9Du, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B9A = {63u, 0xEB9Au, 0x0B9Au, 0xE468u, 2u, nullptr, 0u, kEdges_b63_0B9A, sizeof(kEdges_b63_0B9A) / sizeof(kEdges_b63_0B9A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B9D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEB9Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B9D = {63u, 0xEB9Du, 0x0B9Du, 0x00FCu, 1u, nullptr, 0u, kEdges_b63_0B9D, sizeof(kEdges_b63_0B9D) / sizeof(kEdges_b63_0B9D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0B9F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0B9F = {63u, 0xEB9Fu, 0x0B9Fu, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0B9F, sizeof(kEdges_b63_0B9F) / sizeof(kEdges_b63_0B9F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BA1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BA1 = {63u, 0xEBA1u, 0x0BA1u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0BA1, sizeof(kEdges_b63_0BA1) / sizeof(kEdges_b63_0BA1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BA3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBA5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BA3 = {63u, 0xEBA3u, 0x0BA3u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0BA3, sizeof(kEdges_b63_0BA3) / sizeof(kEdges_b63_0BA3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BA5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE4CBu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEBA8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BA5 = {63u, 0xEBA5u, 0x0BA5u, 0xE4CBu, 2u, nullptr, 0u, kEdges_b63_0BA5, sizeof(kEdges_b63_0BA5) / sizeof(kEdges_b63_0BA5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BA8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE485u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEBABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BA8 = {63u, 0xEBA8u, 0x0BA8u, 0xE485u, 2u, nullptr, 0u, kEdges_b63_0BA8, sizeof(kEdges_b63_0BA8) / sizeof(kEdges_b63_0BA8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BAB[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBADu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEB97u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BAB = {63u, 0xEBABu, 0x0BABu, 0xEB97u, 1u, nullptr, 0u, kEdges_b63_0BAB, sizeof(kEdges_b63_0BAB) / sizeof(kEdges_b63_0BAB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BAD[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BAD = {63u, 0xEBADu, 0x0BADu, 0xE456u, 2u, nullptr, 0u, kEdges_b63_0BAD, sizeof(kEdges_b63_0BAD) / sizeof(kEdges_b63_0BAD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BB0[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BB0 = {63u, 0xEBB0u, 0x0BB0u, 0u, 0u, nullptr, 0u, kEdges_b63_0BB0, sizeof(kEdges_b63_0BB0) / sizeof(kEdges_b63_0BB0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BD1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBD2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BD1 = {63u, 0xEBD1u, 0x0BD1u, 0u, 0u, nullptr, 0u, kEdges_b63_0BD1, sizeof(kEdges_b63_0BD1) / sizeof(kEdges_b63_0BD1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BD2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBD4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BD2 = {63u, 0xEBD2u, 0x0BD2u, 0x000Au, 1u, nullptr, 0u, kEdges_b63_0BD2, sizeof(kEdges_b63_0BD2) / sizeof(kEdges_b63_0BD2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BD4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBD5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BD4 = {63u, 0xEBD4u, 0x0BD4u, 0u, 0u, nullptr, 0u, kEdges_b63_0BD4, sizeof(kEdges_b63_0BD4) / sizeof(kEdges_b63_0BD4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BD5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBD7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BD5 = {63u, 0xEBD5u, 0x0BD5u, 0x000Bu, 1u, nullptr, 0u, kEdges_b63_0BD5, sizeof(kEdges_b63_0BD5) / sizeof(kEdges_b63_0BD5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BD7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBD8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BD7 = {63u, 0xEBD7u, 0x0BD7u, 0u, 0u, nullptr, 0u, kEdges_b63_0BD7, sizeof(kEdges_b63_0BD7) / sizeof(kEdges_b63_0BD7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BD8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBDAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BD8 = {63u, 0xEBD8u, 0x0BD8u, 0x000Au, 1u, nullptr, 0u, kEdges_b63_0BD8, sizeof(kEdges_b63_0BD8) / sizeof(kEdges_b63_0BD8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BDA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBDBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BDA = {63u, 0xEBDAu, 0x0BDAu, 0u, 0u, nullptr, 0u, kEdges_b63_0BDA, sizeof(kEdges_b63_0BDA) / sizeof(kEdges_b63_0BDA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BDB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBDDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BDB = {63u, 0xEBDBu, 0x0BDBu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0BDB, sizeof(kEdges_b63_0BDB) / sizeof(kEdges_b63_0BDB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BDD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBE0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BDD = {63u, 0xEBDDu, 0x0BDDu, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0BDD, sizeof(kEdges_b63_0BDD) / sizeof(kEdges_b63_0BDD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BE0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBE2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BE0 = {63u, 0xEBE0u, 0x0BE0u, 0x00FDu, 1u, nullptr, 0u, kEdges_b63_0BE0, sizeof(kEdges_b63_0BE0) / sizeof(kEdges_b63_0BE0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BE2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBE4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BE2 = {63u, 0xEBE2u, 0x0BE2u, 0x000Bu, 1u, nullptr, 0u, kEdges_b63_0BE2, sizeof(kEdges_b63_0BE2) / sizeof(kEdges_b63_0BE2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BE4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBE6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BE4 = {63u, 0xEBE4u, 0x0BE4u, 0x000Au, 1u, nullptr, 0u, kEdges_b63_0BE4, sizeof(kEdges_b63_0BE4) / sizeof(kEdges_b63_0BE4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BE6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBE9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BE6 = {63u, 0xEBE6u, 0x0BE6u, 0x0583u, 2u, nullptr, 0u, kEdges_b63_0BE6, sizeof(kEdges_b63_0BE6) / sizeof(kEdges_b63_0BE6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BE9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBEAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BE9 = {63u, 0xEBE9u, 0x0BE9u, 0u, 0u, nullptr, 0u, kEdges_b63_0BE9, sizeof(kEdges_b63_0BE9) / sizeof(kEdges_b63_0BE9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BEA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BEA = {63u, 0xEBEAu, 0x0BEAu, 0x000Au, 1u, nullptr, 0u, kEdges_b63_0BEA, sizeof(kEdges_b63_0BEA) / sizeof(kEdges_b63_0BEA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BEC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBEFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BEC = {63u, 0xEBECu, 0x0BECu, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0BEC, sizeof(kEdges_b63_0BEC) / sizeof(kEdges_b63_0BEC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BEF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBF0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BEF = {63u, 0xEBEFu, 0x0BEFu, 0u, 0u, nullptr, 0u, kEdges_b63_0BEF, sizeof(kEdges_b63_0BEF) / sizeof(kEdges_b63_0BEF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BF0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBF2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BF0 = {63u, 0xEBF0u, 0x0BF0u, 0x000Au, 1u, nullptr, 0u, kEdges_b63_0BF0, sizeof(kEdges_b63_0BF0) / sizeof(kEdges_b63_0BF0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BF2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBF5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BF2 = {63u, 0xEBF2u, 0x0BF2u, 0x059Au, 2u, nullptr, 0u, kEdges_b63_0BF2, sizeof(kEdges_b63_0BF2) / sizeof(kEdges_b63_0BF2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BF5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBF6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BF5 = {63u, 0xEBF5u, 0x0BF5u, 0u, 0u, nullptr, 0u, kEdges_b63_0BF5, sizeof(kEdges_b63_0BF5) / sizeof(kEdges_b63_0BF5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BF6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBF7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BF6 = {63u, 0xEBF6u, 0x0BF6u, 0u, 0u, nullptr, 0u, kEdges_b63_0BF6, sizeof(kEdges_b63_0BF6) / sizeof(kEdges_b63_0BF6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BF7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBF9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BF7 = {63u, 0xEBF7u, 0x0BF7u, 0x000Au, 1u, nullptr, 0u, kEdges_b63_0BF7, sizeof(kEdges_b63_0BF7) / sizeof(kEdges_b63_0BF7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BF9[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBFBu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEBFEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BF9 = {63u, 0xEBF9u, 0x0BF9u, 0xEBFEu, 1u, nullptr, 0u, kEdges_b63_0BF9, sizeof(kEdges_b63_0BF9) / sizeof(kEdges_b63_0BF9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BFB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEBFEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BFB = {63u, 0xEBFBu, 0x0BFBu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_0BFB, sizeof(kEdges_b63_0BFB) / sizeof(kEdges_b63_0BFB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BFE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEBFFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BFE = {63u, 0xEBFEu, 0x0BFEu, 0u, 0u, nullptr, 0u, kEdges_b63_0BFE, sizeof(kEdges_b63_0BFE) / sizeof(kEdges_b63_0BFE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0BFF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC01u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0BFF = {63u, 0xEBFFu, 0x0BFFu, 0x000Au, 1u, nullptr, 0u, kEdges_b63_0BFF, sizeof(kEdges_b63_0BFF) / sizeof(kEdges_b63_0BFF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C01[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC02u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C01 = {63u, 0xEC01u, 0x0C01u, 0u, 0u, nullptr, 0u, kEdges_b63_0C01, sizeof(kEdges_b63_0C01) / sizeof(kEdges_b63_0C01[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C02[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEC05u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C02 = {63u, 0xEC02u, 0x0C02u, 0xE522u, 2u, nullptr, 0u, kEdges_b63_0C02, sizeof(kEdges_b63_0C02) / sizeof(kEdges_b63_0C02[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C05[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C05 = {63u, 0xEC05u, 0x0C05u, 0u, 0u, nullptr, 0u, kEdges_b63_0C05, sizeof(kEdges_b63_0C05) / sizeof(kEdges_b63_0C05[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C06[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC08u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C06 = {63u, 0xEC06u, 0x0C06u, 0x0040u, 1u, nullptr, 0u, kEdges_b63_0C06, sizeof(kEdges_b63_0C06) / sizeof(kEdges_b63_0C06[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C08[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEC0Cu, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 63, 0xEC0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C08 = {63u, 0xEC08u, 0x0C08u, 0xEC0Cu, 1u, nullptr, 0u, kEdges_b63_0C08, sizeof(kEdges_b63_0C08) / sizeof(kEdges_b63_0C08[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C0A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC0Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C0A = {63u, 0xEC0Au, 0x0C0Au, 0x002Au, 1u, nullptr, 0u, kEdges_b63_0C0A, sizeof(kEdges_b63_0C0A) / sizeof(kEdges_b63_0C0A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C0C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC0Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C0C = {63u, 0xEC0Cu, 0x0C0Cu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0C0C, sizeof(kEdges_b63_0C0C) / sizeof(kEdges_b63_0C0C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C0E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xECA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEC11u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C0E = {63u, 0xEC0Eu, 0x0C0Eu, 0xECA4u, 2u, nullptr, 0u, kEdges_b63_0C0E, sizeof(kEdges_b63_0C0E) / sizeof(kEdges_b63_0C0E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C11[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE4D1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEC14u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C11 = {63u, 0xEC11u, 0x0C11u, 0xE4D1u, 2u, nullptr, 0u, kEdges_b63_0C11, sizeof(kEdges_b63_0C11) / sizeof(kEdges_b63_0C11[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C14[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC16u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C14 = {63u, 0xEC14u, 0x0C14u, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0C14, sizeof(kEdges_b63_0C14) / sizeof(kEdges_b63_0C14[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C16[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C16 = {63u, 0xEC16u, 0x0C16u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_0C16, sizeof(kEdges_b63_0C16) / sizeof(kEdges_b63_0C16[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C18[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC1Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C18 = {63u, 0xEC18u, 0x0C18u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0C18, sizeof(kEdges_b63_0C18) / sizeof(kEdges_b63_0C18[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C1A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC1Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C1A = {63u, 0xEC1Au, 0x0C1Au, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0C1A, sizeof(kEdges_b63_0C1A) / sizeof(kEdges_b63_0C1A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C1C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC1Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C1C = {63u, 0xEC1Cu, 0x0C1Cu, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0C1C, sizeof(kEdges_b63_0C1C) / sizeof(kEdges_b63_0C1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C1E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC20u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C1E = {63u, 0xEC1Eu, 0x0C1Eu, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0C1E, sizeof(kEdges_b63_0C1E) / sizeof(kEdges_b63_0C1E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C20[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC22u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEC26u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C20 = {63u, 0xEC20u, 0x0C20u, 0xEC26u, 1u, nullptr, 0u, kEdges_b63_0C20, sizeof(kEdges_b63_0C20) / sizeof(kEdges_b63_0C20[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C22[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC24u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C22 = {63u, 0xEC22u, 0x0C22u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_0C22, sizeof(kEdges_b63_0C22) / sizeof(kEdges_b63_0C22[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C24[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC26u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C24 = {63u, 0xEC24u, 0x0C24u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0C24, sizeof(kEdges_b63_0C24) / sizeof(kEdges_b63_0C24[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C26[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C26 = {63u, 0xEC26u, 0x0C26u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0C26, sizeof(kEdges_b63_0C26) / sizeof(kEdges_b63_0C26[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C28[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC2Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C28 = {63u, 0xEC28u, 0x0C28u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0C28, sizeof(kEdges_b63_0C28) / sizeof(kEdges_b63_0C28[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C2A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C2A = {63u, 0xEC2Au, 0x0C2Au, 0u, 0u, nullptr, 0u, kEdges_b63_0C2A, sizeof(kEdges_b63_0C2A) / sizeof(kEdges_b63_0C2A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C2B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC2Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C2B = {63u, 0xEC2Bu, 0x0C2Bu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0C2B, sizeof(kEdges_b63_0C2B) / sizeof(kEdges_b63_0C2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C2D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC2Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C2D = {63u, 0xEC2Du, 0x0C2Du, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0C2D, sizeof(kEdges_b63_0C2D) / sizeof(kEdges_b63_0C2D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C2F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC30u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C2F = {63u, 0xEC2Fu, 0x0C2Fu, 0u, 0u, nullptr, 0u, kEdges_b63_0C2F, sizeof(kEdges_b63_0C2F) / sizeof(kEdges_b63_0C2F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C30[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC32u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C30 = {63u, 0xEC30u, 0x0C30u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0C30, sizeof(kEdges_b63_0C30) / sizeof(kEdges_b63_0C30[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C32[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD9CDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEC35u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C32 = {63u, 0xEC32u, 0x0C32u, 0xD9CDu, 2u, nullptr, 0u, kEdges_b63_0C32, sizeof(kEdges_b63_0C32) / sizeof(kEdges_b63_0C32[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C35[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC37u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C35 = {63u, 0xEC35u, 0x0C35u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0C35, sizeof(kEdges_b63_0C35) / sizeof(kEdges_b63_0C35[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C37[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC39u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C37 = {63u, 0xEC37u, 0x0C37u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0C37, sizeof(kEdges_b63_0C37) / sizeof(kEdges_b63_0C37[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C39[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC3Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C39 = {63u, 0xEC39u, 0x0C39u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0C39, sizeof(kEdges_b63_0C39) / sizeof(kEdges_b63_0C39[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C3B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC3Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C3B = {63u, 0xEC3Bu, 0x0C3Bu, 0u, 0u, nullptr, 0u, kEdges_b63_0C3B, sizeof(kEdges_b63_0C3B) / sizeof(kEdges_b63_0C3B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C3C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC3Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C3C = {63u, 0xEC3Cu, 0x0C3Cu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0C3C, sizeof(kEdges_b63_0C3C) / sizeof(kEdges_b63_0C3C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C3E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC40u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C3E = {63u, 0xEC3Eu, 0x0C3Eu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0C3E, sizeof(kEdges_b63_0C3E) / sizeof(kEdges_b63_0C3E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C40[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD9CDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEC43u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C40 = {63u, 0xEC40u, 0x0C40u, 0xD9CDu, 2u, nullptr, 0u, kEdges_b63_0C40, sizeof(kEdges_b63_0C40) / sizeof(kEdges_b63_0C40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C43[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC45u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C43 = {63u, 0xEC43u, 0x0C43u, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0C43, sizeof(kEdges_b63_0C43) / sizeof(kEdges_b63_0C43[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C45[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC47u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C45 = {63u, 0xEC45u, 0x0C45u, 0x0012u, 1u, nullptr, 0u, kEdges_b63_0C45, sizeof(kEdges_b63_0C45) / sizeof(kEdges_b63_0C45[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C47[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC49u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEC55u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C47 = {63u, 0xEC47u, 0x0C47u, 0xEC55u, 1u, nullptr, 0u, kEdges_b63_0C47, sizeof(kEdges_b63_0C47) / sizeof(kEdges_b63_0C47[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C49[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC4Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C49 = {63u, 0xEC49u, 0x0C49u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0C49, sizeof(kEdges_b63_0C49) / sizeof(kEdges_b63_0C49[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C4B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC4Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEC55u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C4B = {63u, 0xEC4Bu, 0x0C4Bu, 0xEC55u, 1u, nullptr, 0u, kEdges_b63_0C4B, sizeof(kEdges_b63_0C4B) / sizeof(kEdges_b63_0C4B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C4D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB4Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEC50u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C4D = {63u, 0xEC4Du, 0x0C4Du, 0xDB4Fu, 2u, nullptr, 0u, kEdges_b63_0C4D, sizeof(kEdges_b63_0C4D) / sizeof(kEdges_b63_0C4D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C50[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC52u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C50 = {63u, 0xEC50u, 0x0C50u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0C50, sizeof(kEdges_b63_0C50) / sizeof(kEdges_b63_0C50[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C52[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE4CBu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEC55u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C52 = {63u, 0xEC52u, 0x0C52u, 0xE4CBu, 2u, nullptr, 0u, kEdges_b63_0C52, sizeof(kEdges_b63_0C52) / sizeof(kEdges_b63_0C52[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C55[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC57u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C55 = {63u, 0xEC55u, 0x0C55u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0C55, sizeof(kEdges_b63_0C55) / sizeof(kEdges_b63_0C55[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C57[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC59u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C57 = {63u, 0xEC57u, 0x0C57u, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0C57, sizeof(kEdges_b63_0C57) / sizeof(kEdges_b63_0C57[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C59[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC5Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C59 = {63u, 0xEC59u, 0x0C59u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0C59, sizeof(kEdges_b63_0C59) / sizeof(kEdges_b63_0C59[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C5B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC5Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C5B = {63u, 0xEC5Bu, 0x0C5Bu, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0C5B, sizeof(kEdges_b63_0C5B) / sizeof(kEdges_b63_0C5B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C5D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC5Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C5D = {63u, 0xEC5Du, 0x0C5Du, 0x0006u, 1u, nullptr, 0u, kEdges_b63_0C5D, sizeof(kEdges_b63_0C5D) / sizeof(kEdges_b63_0C5D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C5F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC61u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEC65u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C5F = {63u, 0xEC5Fu, 0x0C5Fu, 0xEC65u, 1u, nullptr, 0u, kEdges_b63_0C5F, sizeof(kEdges_b63_0C5F) / sizeof(kEdges_b63_0C5F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C61[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC63u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C61 = {63u, 0xEC61u, 0x0C61u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_0C61, sizeof(kEdges_b63_0C61) / sizeof(kEdges_b63_0C61[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C63[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC65u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C63 = {63u, 0xEC63u, 0x0C63u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0C63, sizeof(kEdges_b63_0C63) / sizeof(kEdges_b63_0C63[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C65[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC67u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C65 = {63u, 0xEC65u, 0x0C65u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0C65, sizeof(kEdges_b63_0C65) / sizeof(kEdges_b63_0C65[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C67[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC69u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C67 = {63u, 0xEC67u, 0x0C67u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0C67, sizeof(kEdges_b63_0C67) / sizeof(kEdges_b63_0C67[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C69[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC6Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C69 = {63u, 0xEC69u, 0x0C69u, 0u, 0u, nullptr, 0u, kEdges_b63_0C69, sizeof(kEdges_b63_0C69) / sizeof(kEdges_b63_0C69[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C6A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC6Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C6A = {63u, 0xEC6Au, 0x0C6Au, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0C6A, sizeof(kEdges_b63_0C6A) / sizeof(kEdges_b63_0C6A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C6C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC6Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C6C = {63u, 0xEC6Cu, 0x0C6Cu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0C6C, sizeof(kEdges_b63_0C6C) / sizeof(kEdges_b63_0C6C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C6E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC6Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C6E = {63u, 0xEC6Eu, 0x0C6Eu, 0u, 0u, nullptr, 0u, kEdges_b63_0C6E, sizeof(kEdges_b63_0C6E) / sizeof(kEdges_b63_0C6E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C6F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC71u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C6F = {63u, 0xEC6Fu, 0x0C6Fu, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0C6F, sizeof(kEdges_b63_0C6F) / sizeof(kEdges_b63_0C6F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C71[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD9CDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEC74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C71 = {63u, 0xEC71u, 0x0C71u, 0xD9CDu, 2u, nullptr, 0u, kEdges_b63_0C71, sizeof(kEdges_b63_0C71) / sizeof(kEdges_b63_0C71[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C74[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC76u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C74 = {63u, 0xEC74u, 0x0C74u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0C74, sizeof(kEdges_b63_0C74) / sizeof(kEdges_b63_0C74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C76[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC78u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C76 = {63u, 0xEC76u, 0x0C76u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0C76, sizeof(kEdges_b63_0C76) / sizeof(kEdges_b63_0C76[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C78[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC7Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C78 = {63u, 0xEC78u, 0x0C78u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0C78, sizeof(kEdges_b63_0C78) / sizeof(kEdges_b63_0C78[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C7A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC7Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C7A = {63u, 0xEC7Au, 0x0C7Au, 0u, 0u, nullptr, 0u, kEdges_b63_0C7A, sizeof(kEdges_b63_0C7A) / sizeof(kEdges_b63_0C7A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C7B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC7Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C7B = {63u, 0xEC7Bu, 0x0C7Bu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0C7B, sizeof(kEdges_b63_0C7B) / sizeof(kEdges_b63_0C7B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C7D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC7Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C7D = {63u, 0xEC7Du, 0x0C7Du, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0C7D, sizeof(kEdges_b63_0C7D) / sizeof(kEdges_b63_0C7D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C7F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD9CDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEC82u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C7F = {63u, 0xEC7Fu, 0x0C7Fu, 0xD9CDu, 2u, nullptr, 0u, kEdges_b63_0C7F, sizeof(kEdges_b63_0C7F) / sizeof(kEdges_b63_0C7F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C82[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C82 = {63u, 0xEC82u, 0x0C82u, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0C82, sizeof(kEdges_b63_0C82) / sizeof(kEdges_b63_0C82[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C84[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC86u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xECA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C84 = {63u, 0xEC84u, 0x0C84u, 0xECA1u, 1u, nullptr, 0u, kEdges_b63_0C84, sizeof(kEdges_b63_0C84) / sizeof(kEdges_b63_0C84[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C86[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC88u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C86 = {63u, 0xEC86u, 0x0C86u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0C86, sizeof(kEdges_b63_0C86) / sizeof(kEdges_b63_0C86[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C88[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC8Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xECA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C88 = {63u, 0xEC88u, 0x0C88u, 0xECA1u, 1u, nullptr, 0u, kEdges_b63_0C88, sizeof(kEdges_b63_0C88) / sizeof(kEdges_b63_0C88[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C8A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB6Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEC8Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C8A = {63u, 0xEC8Au, 0x0C8Au, 0xDB6Du, 2u, nullptr, 0u, kEdges_b63_0C8A, sizeof(kEdges_b63_0C8A) / sizeof(kEdges_b63_0C8A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C8D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC8Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C8D = {63u, 0xEC8Du, 0x0C8Du, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0C8D, sizeof(kEdges_b63_0C8D) / sizeof(kEdges_b63_0C8D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C8F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC92u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C8F = {63u, 0xEC8Fu, 0x0C8Fu, 0x05F6u, 2u, nullptr, 0u, kEdges_b63_0C8F, sizeof(kEdges_b63_0C8F) / sizeof(kEdges_b63_0C8F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C92[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC94u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEC99u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C92 = {63u, 0xEC92u, 0x0C92u, 0xEC99u, 1u, nullptr, 0u, kEdges_b63_0C92, sizeof(kEdges_b63_0C92) / sizeof(kEdges_b63_0C92[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C94[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC96u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C94 = {63u, 0xEC94u, 0x0C94u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0C94, sizeof(kEdges_b63_0C94) / sizeof(kEdges_b63_0C94[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C96[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC99u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C96 = {63u, 0xEC96u, 0x0C96u, 0x05DFu, 2u, nullptr, 0u, kEdges_b63_0C96, sizeof(kEdges_b63_0C96) / sizeof(kEdges_b63_0C96[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C99[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC9Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C99 = {63u, 0xEC99u, 0x0C99u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0C99, sizeof(kEdges_b63_0C99) / sizeof(kEdges_b63_0C99[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C9B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEC9Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C9B = {63u, 0xEC9Bu, 0x0C9Bu, 0x05F6u, 2u, nullptr, 0u, kEdges_b63_0C9B, sizeof(kEdges_b63_0C9B) / sizeof(kEdges_b63_0C9B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0C9E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE4CBu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xECA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0C9E = {63u, 0xEC9Eu, 0x0C9Eu, 0xE4CBu, 2u, nullptr, 0u, kEdges_b63_0C9E, sizeof(kEdges_b63_0C9E) / sizeof(kEdges_b63_0C9E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CA1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CA1 = {63u, 0xECA1u, 0x0CA1u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_0CA1, sizeof(kEdges_b63_0CA1) / sizeof(kEdges_b63_0CA1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CA3[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CA3 = {63u, 0xECA3u, 0x0CA3u, 0u, 0u, nullptr, 0u, kEdges_b63_0CA3, sizeof(kEdges_b63_0CA3) / sizeof(kEdges_b63_0CA3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CA4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECA7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CA4 = {63u, 0xECA4u, 0x0CA4u, 0x05DFu, 2u, nullptr, 0u, kEdges_b63_0CA4, sizeof(kEdges_b63_0CA4) / sizeof(kEdges_b63_0CA4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CA7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECA9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CA7 = {63u, 0xECA7u, 0x0CA7u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0CA7, sizeof(kEdges_b63_0CA7) / sizeof(kEdges_b63_0CA7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CA9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECAAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CA9 = {63u, 0xECA9u, 0x0CA9u, 0u, 0u, nullptr, 0u, kEdges_b63_0CA9, sizeof(kEdges_b63_0CA9) / sizeof(kEdges_b63_0CA9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CAA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CAA = {63u, 0xECAAu, 0x0CAAu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0CAA, sizeof(kEdges_b63_0CAA) / sizeof(kEdges_b63_0CAA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CAC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECAFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CAC = {63u, 0xECACu, 0x0CACu, 0x05DFu, 2u, nullptr, 0u, kEdges_b63_0CAC, sizeof(kEdges_b63_0CAC) / sizeof(kEdges_b63_0CAC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CAF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECB1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CAF = {63u, 0xECAFu, 0x0CAFu, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_0CAF, sizeof(kEdges_b63_0CAF) / sizeof(kEdges_b63_0CAF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CB1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECB3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CB1 = {63u, 0xECB1u, 0x0CB1u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0CB1, sizeof(kEdges_b63_0CB1) / sizeof(kEdges_b63_0CB1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CB3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECB6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CB3 = {63u, 0xECB3u, 0x0CB3u, 0x05F6u, 2u, nullptr, 0u, kEdges_b63_0CB3, sizeof(kEdges_b63_0CB3) / sizeof(kEdges_b63_0CB3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CB6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECB8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xECBEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CB6 = {63u, 0xECB6u, 0x0CB6u, 0xECBEu, 1u, nullptr, 0u, kEdges_b63_0CB6, sizeof(kEdges_b63_0CB6) / sizeof(kEdges_b63_0CB6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CB8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECBAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CB8 = {63u, 0xECB8u, 0x0CB8u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0CB8, sizeof(kEdges_b63_0CB8) / sizeof(kEdges_b63_0CB8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CBA[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECBCu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xECBEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CBA = {63u, 0xECBAu, 0x0CBAu, 0xECBEu, 1u, nullptr, 0u, kEdges_b63_0CBA, sizeof(kEdges_b63_0CBA) / sizeof(kEdges_b63_0CBA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CBC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECBEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CBC = {63u, 0xECBCu, 0x0CBCu, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0CBC, sizeof(kEdges_b63_0CBC) / sizeof(kEdges_b63_0CBC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CBE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECC1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CBE = {63u, 0xECBEu, 0x0CBEu, 0x05F6u, 2u, nullptr, 0u, kEdges_b63_0CBE, sizeof(kEdges_b63_0CBE) / sizeof(kEdges_b63_0CBE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CC1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CC1 = {63u, 0xECC1u, 0x0CC1u, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0CC1, sizeof(kEdges_b63_0CC1) / sizeof(kEdges_b63_0CC1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CC3[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CC3 = {63u, 0xECC3u, 0x0CC3u, 0u, 0u, nullptr, 0u, kEdges_b63_0CC3, sizeof(kEdges_b63_0CC3) / sizeof(kEdges_b63_0CC3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CC4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECC7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CC4 = {63u, 0xECC4u, 0x0CC4u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0CC4, sizeof(kEdges_b63_0CC4) / sizeof(kEdges_b63_0CC4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CC7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECC9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CC7 = {63u, 0xECC7u, 0x0CC7u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_0CC7, sizeof(kEdges_b63_0CC7) / sizeof(kEdges_b63_0CC7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CC9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECCCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CC9 = {63u, 0xECC9u, 0x0CC9u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_0CC9, sizeof(kEdges_b63_0CC9) / sizeof(kEdges_b63_0CC9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CCC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECCEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CCC = {63u, 0xECCCu, 0x0CCCu, 0x0003u, 1u, nullptr, 0u, kEdges_b63_0CCC, sizeof(kEdges_b63_0CCC) / sizeof(kEdges_b63_0CCC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CCE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECD1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CCE = {63u, 0xECCEu, 0x0CCEu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_0CCE, sizeof(kEdges_b63_0CCE) / sizeof(kEdges_b63_0CCE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CD1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECD3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CD1 = {63u, 0xECD1u, 0x0CD1u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0CD1, sizeof(kEdges_b63_0CD1) / sizeof(kEdges_b63_0CD1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CD3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECD6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CD3 = {63u, 0xECD3u, 0x0CD3u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_0CD3, sizeof(kEdges_b63_0CD3) / sizeof(kEdges_b63_0CD3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CD6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECD8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CD6 = {63u, 0xECD6u, 0x0CD6u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0CD6, sizeof(kEdges_b63_0CD6) / sizeof(kEdges_b63_0CD6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CD8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECDAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CD8 = {63u, 0xECD8u, 0x0CD8u, 0x0015u, 1u, nullptr, 0u, kEdges_b63_0CD8, sizeof(kEdges_b63_0CD8) / sizeof(kEdges_b63_0CD8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CDA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECDDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CDA = {63u, 0xECDAu, 0x0CDAu, 0x03A0u, 2u, nullptr, 0u, kEdges_b63_0CDA, sizeof(kEdges_b63_0CDA) / sizeof(kEdges_b63_0CDA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CDD[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECDFu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xECF5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CDD = {63u, 0xECDDu, 0x0CDDu, 0xECF5u, 1u, nullptr, 0u, kEdges_b63_0CDD, sizeof(kEdges_b63_0CDD) / sizeof(kEdges_b63_0CDD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CDF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECE2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CDF = {63u, 0xECDFu, 0x0CDFu, 0x059Au, 2u, nullptr, 0u, kEdges_b63_0CDF, sizeof(kEdges_b63_0CDF) / sizeof(kEdges_b63_0CDF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CE2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECE4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CE2 = {63u, 0xECE2u, 0x0CE2u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0CE2, sizeof(kEdges_b63_0CE2) / sizeof(kEdges_b63_0CE2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CE4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECE7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CE4 = {63u, 0xECE4u, 0x0CE4u, 0x059Au, 2u, nullptr, 0u, kEdges_b63_0CE4, sizeof(kEdges_b63_0CE4) / sizeof(kEdges_b63_0CE4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CE7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECE9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CE7 = {63u, 0xECE7u, 0x0CE7u, 0x000Au, 1u, nullptr, 0u, kEdges_b63_0CE7, sizeof(kEdges_b63_0CE7) / sizeof(kEdges_b63_0CE7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CE9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF726u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xECECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CE9 = {63u, 0xECE9u, 0x0CE9u, 0xF726u, 2u, nullptr, 0u, kEdges_b63_0CE9, sizeof(kEdges_b63_0CE9) / sizeof(kEdges_b63_0CE9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CEC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECEEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CEC = {63u, 0xECECu, 0x0CECu, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0CEC, sizeof(kEdges_b63_0CEC) / sizeof(kEdges_b63_0CEC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CEE[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECF0u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xECF5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CEE = {63u, 0xECEEu, 0x0CEEu, 0xECF5u, 1u, nullptr, 0u, kEdges_b63_0CEE, sizeof(kEdges_b63_0CEE) / sizeof(kEdges_b63_0CEE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CF0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECF3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CF0 = {63u, 0xECF0u, 0x0CF0u, 0x0583u, 2u, nullptr, 0u, kEdges_b63_0CF0, sizeof(kEdges_b63_0CF0) / sizeof(kEdges_b63_0CF0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CF3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECF4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CF3 = {63u, 0xECF3u, 0x0CF3u, 0u, 0u, nullptr, 0u, kEdges_b63_0CF3, sizeof(kEdges_b63_0CF3) / sizeof(kEdges_b63_0CF3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CF4[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CF4 = {63u, 0xECF4u, 0x0CF4u, 0u, 0u, nullptr, 0u, kEdges_b63_0CF4, sizeof(kEdges_b63_0CF4) / sizeof(kEdges_b63_0CF4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CF5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECF6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CF5 = {63u, 0xECF5u, 0x0CF5u, 0u, 0u, nullptr, 0u, kEdges_b63_0CF5, sizeof(kEdges_b63_0CF5) / sizeof(kEdges_b63_0CF5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CF6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECF8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CF6 = {63u, 0xECF6u, 0x0CF6u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0CF6, sizeof(kEdges_b63_0CF6) / sizeof(kEdges_b63_0CF6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CF8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECFAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xECDAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CF8 = {63u, 0xECF8u, 0x0CF8u, 0xECDAu, 1u, nullptr, 0u, kEdges_b63_0CF8, sizeof(kEdges_b63_0CF8) / sizeof(kEdges_b63_0CF8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CFA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECFBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CFA = {63u, 0xECFAu, 0x0CFAu, 0u, 0u, nullptr, 0u, kEdges_b63_0CFA, sizeof(kEdges_b63_0CFA) / sizeof(kEdges_b63_0CFA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CFB[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CFB = {63u, 0xECFBu, 0x0CFBu, 0u, 0u, nullptr, 0u, kEdges_b63_0CFB, sizeof(kEdges_b63_0CFB) / sizeof(kEdges_b63_0CFB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CFC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xECFEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CFC = {63u, 0xECFCu, 0x0CFCu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0CFC, sizeof(kEdges_b63_0CFC) / sizeof(kEdges_b63_0CFC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0CFE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF8AEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xED01u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0CFE = {63u, 0xECFEu, 0x0CFEu, 0xF8AEu, 2u, nullptr, 0u, kEdges_b63_0CFE, sizeof(kEdges_b63_0CFE) / sizeof(kEdges_b63_0CFE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D01[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED03u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D01 = {63u, 0xED01u, 0x0D01u, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0D01, sizeof(kEdges_b63_0D01) / sizeof(kEdges_b63_0D01[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D03[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED04u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D03 = {63u, 0xED03u, 0x0D03u, 0u, 0u, nullptr, 0u, kEdges_b63_0D03, sizeof(kEdges_b63_0D03) / sizeof(kEdges_b63_0D03[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D04[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED07u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D04 = {63u, 0xED04u, 0x0D04u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0D04, sizeof(kEdges_b63_0D04) / sizeof(kEdges_b63_0D04[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D07[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED09u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D07 = {63u, 0xED07u, 0x0D07u, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_0D07, sizeof(kEdges_b63_0D07) / sizeof(kEdges_b63_0D07[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D09[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED0Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xED18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D09 = {63u, 0xED09u, 0x0D09u, 0xED18u, 1u, nullptr, 0u, kEdges_b63_0D09, sizeof(kEdges_b63_0D09) / sizeof(kEdges_b63_0D09[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D0B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED0Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D0B = {63u, 0xED0Bu, 0x0D0Bu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0D0B, sizeof(kEdges_b63_0D0B) / sizeof(kEdges_b63_0D0B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D0D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED0Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xED15u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D0D = {63u, 0xED0Du, 0x0D0Du, 0xED15u, 1u, nullptr, 0u, kEdges_b63_0D0D, sizeof(kEdges_b63_0D0D) / sizeof(kEdges_b63_0D0D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D0F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED12u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D0F = {63u, 0xED0Fu, 0x0D0Fu, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0D0F, sizeof(kEdges_b63_0D0F) / sizeof(kEdges_b63_0D0F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D12[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED15u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D12 = {63u, 0xED12u, 0x0D12u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0D12, sizeof(kEdges_b63_0D12) / sizeof(kEdges_b63_0D12[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D15[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D15 = {63u, 0xED15u, 0x0D15u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0D15, sizeof(kEdges_b63_0D15) / sizeof(kEdges_b63_0D15[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D18[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED1Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D18 = {63u, 0xED18u, 0x0D18u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0D18, sizeof(kEdges_b63_0D18) / sizeof(kEdges_b63_0D18[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D1B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED1Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D1B = {63u, 0xED1Bu, 0x0D1Bu, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_0D1B, sizeof(kEdges_b63_0D1B) / sizeof(kEdges_b63_0D1B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D1D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED20u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D1D = {63u, 0xED1Du, 0x0D1Du, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0D1D, sizeof(kEdges_b63_0D1D) / sizeof(kEdges_b63_0D1D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D20[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D20 = {63u, 0xED20u, 0x0D20u, 0u, 0u, nullptr, 0u, kEdges_b63_0D20, sizeof(kEdges_b63_0D20) / sizeof(kEdges_b63_0D20[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D21[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED24u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D21 = {63u, 0xED21u, 0x0D21u, 0x03FCu, 2u, nullptr, 0u, kEdges_b63_0D21, sizeof(kEdges_b63_0D21) / sizeof(kEdges_b63_0D21[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D24[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED26u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xED3Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D24 = {63u, 0xED24u, 0x0D24u, 0xED3Du, 1u, nullptr, 0u, kEdges_b63_0D24, sizeof(kEdges_b63_0D24) / sizeof(kEdges_b63_0D24[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D26[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D26 = {63u, 0xED26u, 0x0D26u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0D26, sizeof(kEdges_b63_0D26) / sizeof(kEdges_b63_0D26[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D28[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED29u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D28 = {63u, 0xED28u, 0x0D28u, 0u, 0u, nullptr, 0u, kEdges_b63_0D28, sizeof(kEdges_b63_0D28) / sizeof(kEdges_b63_0D28[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D29[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED2Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D29 = {63u, 0xED29u, 0x0D29u, 0xDFB1u, 2u, nullptr, 0u, kEdges_b63_0D29, sizeof(kEdges_b63_0D29) / sizeof(kEdges_b63_0D29[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D2C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED2Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D2C = {63u, 0xED2Cu, 0x0D2Cu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0D2C, sizeof(kEdges_b63_0D2C) / sizeof(kEdges_b63_0D2C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D2E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED31u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D2E = {63u, 0xED2Eu, 0x0D2Eu, 0x03FCu, 2u, nullptr, 0u, kEdges_b63_0D2E, sizeof(kEdges_b63_0D2E) / sizeof(kEdges_b63_0D2E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D31[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED32u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D31 = {63u, 0xED31u, 0x0D31u, 0u, 0u, nullptr, 0u, kEdges_b63_0D31, sizeof(kEdges_b63_0D31) / sizeof(kEdges_b63_0D31[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D32[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED33u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D32 = {63u, 0xED32u, 0x0D32u, 0u, 0u, nullptr, 0u, kEdges_b63_0D32, sizeof(kEdges_b63_0D32) / sizeof(kEdges_b63_0D32[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D33[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED34u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D33 = {63u, 0xED33u, 0x0D33u, 0u, 0u, nullptr, 0u, kEdges_b63_0D33, sizeof(kEdges_b63_0D33) / sizeof(kEdges_b63_0D33[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D34[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED35u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D34 = {63u, 0xED34u, 0x0D34u, 0u, 0u, nullptr, 0u, kEdges_b63_0D34, sizeof(kEdges_b63_0D34) / sizeof(kEdges_b63_0D34[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D35[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED38u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D35 = {63u, 0xED35u, 0x0D35u, 0x0650u, 2u, nullptr, 0u, kEdges_b63_0D35, sizeof(kEdges_b63_0D35) / sizeof(kEdges_b63_0D35[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D38[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED3Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D38 = {63u, 0xED38u, 0x0D38u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0D38, sizeof(kEdges_b63_0D38) / sizeof(kEdges_b63_0D38[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D3A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED3Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D3A = {63u, 0xED3Au, 0x0D3Au, 0x0650u, 2u, nullptr, 0u, kEdges_b63_0D3A, sizeof(kEdges_b63_0D3A) / sizeof(kEdges_b63_0D3A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D3D[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D3D = {63u, 0xED3Du, 0x0D3Du, 0u, 0u, nullptr, 0u, kEdges_b63_0D3D, sizeof(kEdges_b63_0D3D) / sizeof(kEdges_b63_0D3D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D3E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED40u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D3E = {63u, 0xED3Eu, 0x0D3Eu, 0x00F0u, 1u, nullptr, 0u, kEdges_b63_0D3E, sizeof(kEdges_b63_0D3E) / sizeof(kEdges_b63_0D3E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D40[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED42u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D40 = {63u, 0xED40u, 0x0D40u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_0D40, sizeof(kEdges_b63_0D40) / sizeof(kEdges_b63_0D40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D42[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xED45u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D42 = {63u, 0xED42u, 0x0D42u, 0xC62Bu, 2u, nullptr, 0u, kEdges_b63_0D42, sizeof(kEdges_b63_0D42) / sizeof(kEdges_b63_0D42[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D45[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED47u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D45 = {63u, 0xED45u, 0x0D45u, 0x0026u, 1u, nullptr, 0u, kEdges_b63_0D45, sizeof(kEdges_b63_0D45) / sizeof(kEdges_b63_0D45[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D47[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED49u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D47 = {63u, 0xED47u, 0x0D47u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_0D47, sizeof(kEdges_b63_0D47) / sizeof(kEdges_b63_0D47[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D49[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xED4Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D49 = {63u, 0xED49u, 0x0D49u, 0xC62Bu, 2u, nullptr, 0u, kEdges_b63_0D49, sizeof(kEdges_b63_0D49) / sizeof(kEdges_b63_0D49[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D4C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED4Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D4C = {63u, 0xED4Cu, 0x0D4Cu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_0D4C, sizeof(kEdges_b63_0D4C) / sizeof(kEdges_b63_0D4C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D4F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED51u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D4F = {63u, 0xED4Fu, 0x0D4Fu, 0x0006u, 1u, nullptr, 0u, kEdges_b63_0D4F, sizeof(kEdges_b63_0D4F) / sizeof(kEdges_b63_0D4F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D51[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED54u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D51 = {63u, 0xED51u, 0x0D51u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0D51, sizeof(kEdges_b63_0D51) / sizeof(kEdges_b63_0D51[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D54[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED56u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D54 = {63u, 0xED54u, 0x0D54u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0D54, sizeof(kEdges_b63_0D54) / sizeof(kEdges_b63_0D54[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D56[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED58u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D56 = {63u, 0xED56u, 0x0D56u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_0D56, sizeof(kEdges_b63_0D56) / sizeof(kEdges_b63_0D56[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D58[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED5Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D58 = {63u, 0xED58u, 0x0D58u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_0D58, sizeof(kEdges_b63_0D58) / sizeof(kEdges_b63_0D58[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D5A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED5Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D5A = {63u, 0xED5Au, 0x0D5Au, 0x0015u, 1u, nullptr, 0u, kEdges_b63_0D5A, sizeof(kEdges_b63_0D5A) / sizeof(kEdges_b63_0D5A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D5C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xED69u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xED5Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D5C = {63u, 0xED5Cu, 0x0D5Cu, 0xED69u, 2u, nullptr, 0u, kEdges_b63_0D5C, sizeof(kEdges_b63_0D5C) / sizeof(kEdges_b63_0D5C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D5F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED61u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xED68u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D5F = {63u, 0xED5Fu, 0x0D5Fu, 0xED68u, 1u, nullptr, 0u, kEdges_b63_0D5F, sizeof(kEdges_b63_0D5F) / sizeof(kEdges_b63_0D5F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D61[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED63u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D61 = {63u, 0xED61u, 0x0D61u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0D61, sizeof(kEdges_b63_0D61) / sizeof(kEdges_b63_0D61[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D63[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED65u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D63 = {63u, 0xED63u, 0x0D63u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_0D63, sizeof(kEdges_b63_0D63) / sizeof(kEdges_b63_0D63[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D65[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xED69u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xED68u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D65 = {63u, 0xED65u, 0x0D65u, 0xED69u, 2u, nullptr, 0u, kEdges_b63_0D65, sizeof(kEdges_b63_0D65) / sizeof(kEdges_b63_0D65[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D68[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D68 = {63u, 0xED68u, 0x0D68u, 0u, 0u, nullptr, 0u, kEdges_b63_0D68, sizeof(kEdges_b63_0D68) / sizeof(kEdges_b63_0D68[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D69[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED6Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D69 = {63u, 0xED69u, 0x0D69u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0D69, sizeof(kEdges_b63_0D69) / sizeof(kEdges_b63_0D69[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D6B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED6Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D6B = {63u, 0xED6Bu, 0x0D6Bu, 0x0004u, 1u, nullptr, 0u, kEdges_b63_0D6B, sizeof(kEdges_b63_0D6B) / sizeof(kEdges_b63_0D6B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D6D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED70u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D6D = {63u, 0xED6Du, 0x0D6Du, 0x03A0u, 2u, nullptr, 0u, kEdges_b63_0D6D, sizeof(kEdges_b63_0D6D) / sizeof(kEdges_b63_0D6D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D70[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED72u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEDA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D70 = {63u, 0xED70u, 0x0D70u, 0xEDA1u, 1u, nullptr, 0u, kEdges_b63_0D70, sizeof(kEdges_b63_0D70) / sizeof(kEdges_b63_0D70[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D72[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D72 = {63u, 0xED72u, 0x0D72u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0D72, sizeof(kEdges_b63_0D72) / sizeof(kEdges_b63_0D72[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D74[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xED78u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D74 = {63u, 0xED74u, 0x0D74u, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_0D74, sizeof(kEdges_b63_0D74) / sizeof(kEdges_b63_0D74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D78[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED7Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D78 = {63u, 0xED78u, 0x0D78u, 0x00F3u, 1u, nullptr, 0u, kEdges_b63_0D78, sizeof(kEdges_b63_0D78) / sizeof(kEdges_b63_0D78[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D7A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED7Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D7A = {63u, 0xED7Au, 0x0D7Au, 0x05DFu, 2u, nullptr, 0u, kEdges_b63_0D7A, sizeof(kEdges_b63_0D7A) / sizeof(kEdges_b63_0D7A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D7D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED7Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D7D = {63u, 0xED7Du, 0x0D7Du, 0x0005u, 1u, nullptr, 0u, kEdges_b63_0D7D, sizeof(kEdges_b63_0D7D) / sizeof(kEdges_b63_0D7D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D7F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED82u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D7F = {63u, 0xED7Fu, 0x0D7Fu, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_0D7F, sizeof(kEdges_b63_0D7F) / sizeof(kEdges_b63_0D7F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D82[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D82 = {63u, 0xED82u, 0x0D82u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_0D82, sizeof(kEdges_b63_0D82) / sizeof(kEdges_b63_0D82[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D84[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED85u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D84 = {63u, 0xED84u, 0x0D84u, 0u, 0u, nullptr, 0u, kEdges_b63_0D84, sizeof(kEdges_b63_0D84) / sizeof(kEdges_b63_0D84[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D85[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED88u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D85 = {63u, 0xED85u, 0x0D85u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0D85, sizeof(kEdges_b63_0D85) / sizeof(kEdges_b63_0D85[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D88[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED8Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D88 = {63u, 0xED88u, 0x0D88u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_0D88, sizeof(kEdges_b63_0D88) / sizeof(kEdges_b63_0D88[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D8A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED8Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D8A = {63u, 0xED8Au, 0x0D8Au, 0x0486u, 2u, nullptr, 0u, kEdges_b63_0D8A, sizeof(kEdges_b63_0D8A) / sizeof(kEdges_b63_0D8A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D8D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED8Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D8D = {63u, 0xED8Du, 0x0D8Du, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0D8D, sizeof(kEdges_b63_0D8D) / sizeof(kEdges_b63_0D8D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D8F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED92u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D8F = {63u, 0xED8Fu, 0x0D8Fu, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0D8F, sizeof(kEdges_b63_0D8F) / sizeof(kEdges_b63_0D8F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D92[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED94u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D92 = {63u, 0xED92u, 0x0D92u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0D92, sizeof(kEdges_b63_0D92) / sizeof(kEdges_b63_0D92[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D94[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED97u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D94 = {63u, 0xED94u, 0x0D94u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_0D94, sizeof(kEdges_b63_0D94) / sizeof(kEdges_b63_0D94[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D97[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED9Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D97 = {63u, 0xED97u, 0x0D97u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_0D97, sizeof(kEdges_b63_0D97) / sizeof(kEdges_b63_0D97[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D9A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED9Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D9A = {63u, 0xED9Au, 0x0D9Au, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_0D9A, sizeof(kEdges_b63_0D9A) / sizeof(kEdges_b63_0D9A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D9D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xED9Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D9D = {63u, 0xED9Du, 0x0D9Du, 0x0004u, 1u, nullptr, 0u, kEdges_b63_0D9D, sizeof(kEdges_b63_0D9D) / sizeof(kEdges_b63_0D9D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0D9F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDA1u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEDA6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0D9F = {63u, 0xED9Fu, 0x0D9Fu, 0xEDA6u, 1u, nullptr, 0u, kEdges_b63_0D9F, sizeof(kEdges_b63_0D9F) / sizeof(kEdges_b63_0D9F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DA1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDA2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DA1 = {63u, 0xEDA1u, 0x0DA1u, 0u, 0u, nullptr, 0u, kEdges_b63_0DA1, sizeof(kEdges_b63_0DA1) / sizeof(kEdges_b63_0DA1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DA2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDA4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xED6Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DA2 = {63u, 0xEDA2u, 0x0DA2u, 0xED6Du, 1u, nullptr, 0u, kEdges_b63_0DA2, sizeof(kEdges_b63_0DA2) / sizeof(kEdges_b63_0DA2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DA4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDA5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DA4 = {63u, 0xEDA4u, 0x0DA4u, 0u, 0u, nullptr, 0u, kEdges_b63_0DA4, sizeof(kEdges_b63_0DA4) / sizeof(kEdges_b63_0DA4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DA5[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DA5 = {63u, 0xEDA5u, 0x0DA5u, 0u, 0u, nullptr, 0u, kEdges_b63_0DA5, sizeof(kEdges_b63_0DA5) / sizeof(kEdges_b63_0DA5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DA6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDA7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DA6 = {63u, 0xEDA6u, 0x0DA6u, 0u, 0u, nullptr, 0u, kEdges_b63_0DA6, sizeof(kEdges_b63_0DA6) / sizeof(kEdges_b63_0DA6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DA7[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DA7 = {63u, 0xEDA7u, 0x0DA7u, 0u, 0u, nullptr, 0u, kEdges_b63_0DA7, sizeof(kEdges_b63_0DA7) / sizeof(kEdges_b63_0DA7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DA8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDAAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DA8 = {63u, 0xEDA8u, 0x0DA8u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0DA8, sizeof(kEdges_b63_0DA8) / sizeof(kEdges_b63_0DA8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DAA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DAA = {63u, 0xEDAAu, 0x0DAAu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0DAA, sizeof(kEdges_b63_0DAA) / sizeof(kEdges_b63_0DAA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DAC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDAEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DAC = {63u, 0xEDACu, 0x0DACu, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0DAC, sizeof(kEdges_b63_0DAC) / sizeof(kEdges_b63_0DAC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DAE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDB0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DAE = {63u, 0xEDAEu, 0x0DAEu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0DAE, sizeof(kEdges_b63_0DAE) / sizeof(kEdges_b63_0DAE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DB0[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDB2u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEDE1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DB0 = {63u, 0xEDB0u, 0x0DB0u, 0xEDE1u, 1u, nullptr, 0u, kEdges_b63_0DB0, sizeof(kEdges_b63_0DB0) / sizeof(kEdges_b63_0DB0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DB2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDB5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DB2 = {63u, 0xEDB2u, 0x0DB2u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_0DB2, sizeof(kEdges_b63_0DB2) / sizeof(kEdges_b63_0DB2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DB5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDB6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DB5 = {63u, 0xEDB5u, 0x0DB5u, 0u, 0u, nullptr, 0u, kEdges_b63_0DB5, sizeof(kEdges_b63_0DB5) / sizeof(kEdges_b63_0DB5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DB6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDB9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DB6 = {63u, 0xEDB6u, 0x0DB6u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_0DB6, sizeof(kEdges_b63_0DB6) / sizeof(kEdges_b63_0DB6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DB9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDBBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DB9 = {63u, 0xEDB9u, 0x0DB9u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0DB9, sizeof(kEdges_b63_0DB9) / sizeof(kEdges_b63_0DB9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DBB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDBEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DBB = {63u, 0xEDBBu, 0x0DBBu, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_0DBB, sizeof(kEdges_b63_0DBB) / sizeof(kEdges_b63_0DBB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DBE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDC1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DBE = {63u, 0xEDBEu, 0x0DBEu, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_0DBE, sizeof(kEdges_b63_0DBE) / sizeof(kEdges_b63_0DBE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DC1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DC1 = {63u, 0xEDC1u, 0x0DC1u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0DC1, sizeof(kEdges_b63_0DC1) / sizeof(kEdges_b63_0DC1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DC3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDC5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEDD5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DC3 = {63u, 0xEDC3u, 0x0DC3u, 0xEDD5u, 1u, nullptr, 0u, kEdges_b63_0DC3, sizeof(kEdges_b63_0DC3) / sizeof(kEdges_b63_0DC3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DC5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDC7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DC5 = {63u, 0xEDC5u, 0x0DC5u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0DC5, sizeof(kEdges_b63_0DC5) / sizeof(kEdges_b63_0DC5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DC7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDC9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DC7 = {63u, 0xEDC7u, 0x0DC7u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0DC7, sizeof(kEdges_b63_0DC7) / sizeof(kEdges_b63_0DC7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DC9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDCBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DC9 = {63u, 0xEDC9u, 0x0DC9u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0DC9, sizeof(kEdges_b63_0DC9) / sizeof(kEdges_b63_0DC9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DCB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDCDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DCB = {63u, 0xEDCBu, 0x0DCBu, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0DCB, sizeof(kEdges_b63_0DCB) / sizeof(kEdges_b63_0DCB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DCD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDCFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DCD = {63u, 0xEDCDu, 0x0DCDu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0DCD, sizeof(kEdges_b63_0DCD) / sizeof(kEdges_b63_0DCD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DCF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDD1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DCF = {63u, 0xEDCFu, 0x0DCFu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0DCF, sizeof(kEdges_b63_0DCF) / sizeof(kEdges_b63_0DCF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DD1[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDD3u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEDD5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DD1 = {63u, 0xEDD1u, 0x0DD1u, 0xEDD5u, 1u, nullptr, 0u, kEdges_b63_0DD1, sizeof(kEdges_b63_0DD1) / sizeof(kEdges_b63_0DD1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DD3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDD5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DD3 = {63u, 0xEDD3u, 0x0DD3u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0DD3, sizeof(kEdges_b63_0DD3) / sizeof(kEdges_b63_0DD3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DD5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDD7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DD5 = {63u, 0xEDD5u, 0x0DD5u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0DD5, sizeof(kEdges_b63_0DD5) / sizeof(kEdges_b63_0DD5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DD7[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDD9u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DD7 = {63u, 0xEDD7u, 0x0DD7u, 0xEE18u, 1u, nullptr, 0u, kEdges_b63_0DD7, sizeof(kEdges_b63_0DD7) / sizeof(kEdges_b63_0DD7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DD9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDDBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DD9 = {63u, 0xEDD9u, 0x0DD9u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0DD9, sizeof(kEdges_b63_0DD9) / sizeof(kEdges_b63_0DD9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DDB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDDDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DDB = {63u, 0xEDDBu, 0x0DDBu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0DDB, sizeof(kEdges_b63_0DDB) / sizeof(kEdges_b63_0DDB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DDD[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDDFu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEDE1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DDD = {63u, 0xEDDDu, 0x0DDDu, 0xEDE1u, 1u, nullptr, 0u, kEdges_b63_0DDD, sizeof(kEdges_b63_0DDD) / sizeof(kEdges_b63_0DDD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DDF[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDE1u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DDF = {63u, 0xEDDFu, 0x0DDFu, 0xEE18u, 1u, nullptr, 0u, kEdges_b63_0DDF, sizeof(kEdges_b63_0DDF) / sizeof(kEdges_b63_0DDF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DE1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDE3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DE1 = {63u, 0xEDE1u, 0x0DE1u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0DE1, sizeof(kEdges_b63_0DE1) / sizeof(kEdges_b63_0DE1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DE3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDE5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE14u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DE3 = {63u, 0xEDE3u, 0x0DE3u, 0xEE14u, 1u, nullptr, 0u, kEdges_b63_0DE3, sizeof(kEdges_b63_0DE3) / sizeof(kEdges_b63_0DE3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DE5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDE8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DE5 = {63u, 0xEDE5u, 0x0DE5u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0DE5, sizeof(kEdges_b63_0DE5) / sizeof(kEdges_b63_0DE5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DE8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDE9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DE8 = {63u, 0xEDE8u, 0x0DE8u, 0u, 0u, nullptr, 0u, kEdges_b63_0DE8, sizeof(kEdges_b63_0DE8) / sizeof(kEdges_b63_0DE8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DE9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DE9 = {63u, 0xEDE9u, 0x0DE9u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_0DE9, sizeof(kEdges_b63_0DE9) / sizeof(kEdges_b63_0DE9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DEC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDEEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DEC = {63u, 0xEDECu, 0x0DECu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0DEC, sizeof(kEdges_b63_0DEC) / sizeof(kEdges_b63_0DEC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DEE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDF1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DEE = {63u, 0xEDEEu, 0x0DEEu, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_0DEE, sizeof(kEdges_b63_0DEE) / sizeof(kEdges_b63_0DEE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DF1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDF4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DF1 = {63u, 0xEDF1u, 0x0DF1u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_0DF1, sizeof(kEdges_b63_0DF1) / sizeof(kEdges_b63_0DF1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DF4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDF6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DF4 = {63u, 0xEDF4u, 0x0DF4u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0DF4, sizeof(kEdges_b63_0DF4) / sizeof(kEdges_b63_0DF4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DF6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDF8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE08u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DF6 = {63u, 0xEDF6u, 0x0DF6u, 0xEE08u, 1u, nullptr, 0u, kEdges_b63_0DF6, sizeof(kEdges_b63_0DF6) / sizeof(kEdges_b63_0DF6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DF8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDFAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DF8 = {63u, 0xEDF8u, 0x0DF8u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0DF8, sizeof(kEdges_b63_0DF8) / sizeof(kEdges_b63_0DF8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DFA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDFCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DFA = {63u, 0xEDFAu, 0x0DFAu, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0DFA, sizeof(kEdges_b63_0DFA) / sizeof(kEdges_b63_0DFA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DFC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEDFEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DFC = {63u, 0xEDFCu, 0x0DFCu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0DFC, sizeof(kEdges_b63_0DFC) / sizeof(kEdges_b63_0DFC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0DFE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE00u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0DFE = {63u, 0xEDFEu, 0x0DFEu, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0DFE, sizeof(kEdges_b63_0DFE) / sizeof(kEdges_b63_0DFE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E00[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE02u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E00 = {63u, 0xEE00u, 0x0E00u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0E00, sizeof(kEdges_b63_0E00) / sizeof(kEdges_b63_0E00[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E02[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE04u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E02 = {63u, 0xEE02u, 0x0E02u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0E02, sizeof(kEdges_b63_0E02) / sizeof(kEdges_b63_0E02[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E04[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE06u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE08u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E04 = {63u, 0xEE04u, 0x0E04u, 0xEE08u, 1u, nullptr, 0u, kEdges_b63_0E04, sizeof(kEdges_b63_0E04) / sizeof(kEdges_b63_0E04[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E06[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE08u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E06 = {63u, 0xEE06u, 0x0E06u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0E06, sizeof(kEdges_b63_0E06) / sizeof(kEdges_b63_0E06[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E08[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E08 = {63u, 0xEE08u, 0x0E08u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_0E08, sizeof(kEdges_b63_0E08) / sizeof(kEdges_b63_0E08[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E0A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE0Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E0A = {63u, 0xEE0Au, 0x0E0Au, 0xEE18u, 1u, nullptr, 0u, kEdges_b63_0E0A, sizeof(kEdges_b63_0E0A) / sizeof(kEdges_b63_0E0A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E0C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE0Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E0C = {63u, 0xEE0Cu, 0x0E0Cu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0E0C, sizeof(kEdges_b63_0E0C) / sizeof(kEdges_b63_0E0C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E0E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE10u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E0E = {63u, 0xEE0Eu, 0x0E0Eu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0E0E, sizeof(kEdges_b63_0E0E) / sizeof(kEdges_b63_0E0E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E10[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE12u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE14u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E10 = {63u, 0xEE10u, 0x0E10u, 0xEE14u, 1u, nullptr, 0u, kEdges_b63_0E10, sizeof(kEdges_b63_0E10) / sizeof(kEdges_b63_0E10[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E12[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE14u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E12 = {63u, 0xEE12u, 0x0E12u, 0xEE18u, 1u, nullptr, 0u, kEdges_b63_0E12, sizeof(kEdges_b63_0E12) / sizeof(kEdges_b63_0E12[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E14[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE16u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E14 = {63u, 0xEE14u, 0x0E14u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0E14, sizeof(kEdges_b63_0E14) / sizeof(kEdges_b63_0E14[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E16[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E16 = {63u, 0xEE16u, 0x0E16u, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0E16, sizeof(kEdges_b63_0E16) / sizeof(kEdges_b63_0E16[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E18[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E18 = {63u, 0xEE18u, 0x0E18u, 0u, 0u, nullptr, 0u, kEdges_b63_0E18, sizeof(kEdges_b63_0E18) / sizeof(kEdges_b63_0E18[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E19[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE1Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E19 = {63u, 0xEE19u, 0x0E19u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0E19, sizeof(kEdges_b63_0E19) / sizeof(kEdges_b63_0E19[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E1B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE1Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E1B = {63u, 0xEE1Bu, 0x0E1Bu, 0u, 0u, nullptr, 0u, kEdges_b63_0E1B, sizeof(kEdges_b63_0E1B) / sizeof(kEdges_b63_0E1B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E1C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE1Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E1C = {63u, 0xEE1Cu, 0x0E1Cu, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_0E1C, sizeof(kEdges_b63_0E1C) / sizeof(kEdges_b63_0E1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E1F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE22u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E1F = {63u, 0xEE1Fu, 0x0E1Fu, 0xEEF8u, 2u, nullptr, 0u, kEdges_b63_0E1F, sizeof(kEdges_b63_0E1F) / sizeof(kEdges_b63_0E1F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E22[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE25u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E22 = {63u, 0xEE22u, 0x0E22u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_0E22, sizeof(kEdges_b63_0E22) / sizeof(kEdges_b63_0E22[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E25[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE27u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E25 = {63u, 0xEE25u, 0x0E25u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0E25, sizeof(kEdges_b63_0E25) / sizeof(kEdges_b63_0E25[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E27[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE2Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E27 = {63u, 0xEE27u, 0x0E27u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_0E27, sizeof(kEdges_b63_0E27) / sizeof(kEdges_b63_0E27[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E2A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE2Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E2A = {63u, 0xEE2Au, 0x0E2Au, 0xEF02u, 2u, nullptr, 0u, kEdges_b63_0E2A, sizeof(kEdges_b63_0E2A) / sizeof(kEdges_b63_0E2A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E2D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE30u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E2D = {63u, 0xEE2Du, 0x0E2Du, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_0E2D, sizeof(kEdges_b63_0E2D) / sizeof(kEdges_b63_0E2D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E30[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE32u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E30 = {63u, 0xEE30u, 0x0E30u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0E30, sizeof(kEdges_b63_0E30) / sizeof(kEdges_b63_0E30[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E32[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE34u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E32 = {63u, 0xEE32u, 0x0E32u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0E32, sizeof(kEdges_b63_0E32) / sizeof(kEdges_b63_0E32[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E34[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE36u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E34 = {63u, 0xEE34u, 0x0E34u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0E34, sizeof(kEdges_b63_0E34) / sizeof(kEdges_b63_0E34[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E36[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE38u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE49u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E36 = {63u, 0xEE36u, 0x0E36u, 0xEE49u, 1u, nullptr, 0u, kEdges_b63_0E36, sizeof(kEdges_b63_0E36) / sizeof(kEdges_b63_0E36[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E38[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE3Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E38 = {63u, 0xEE38u, 0x0E38u, 0xEE63u, 2u, nullptr, 0u, kEdges_b63_0E38, sizeof(kEdges_b63_0E38) / sizeof(kEdges_b63_0E38[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E3B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE3Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE49u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E3B = {63u, 0xEE3Bu, 0x0E3Bu, 0xEE49u, 1u, nullptr, 0u, kEdges_b63_0E3B, sizeof(kEdges_b63_0E3B) / sizeof(kEdges_b63_0E3B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E3D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE40u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E3D = {63u, 0xEE3Du, 0x0E3Du, 0xEE66u, 2u, nullptr, 0u, kEdges_b63_0E3D, sizeof(kEdges_b63_0E3D) / sizeof(kEdges_b63_0E3D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E40[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE42u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E40 = {63u, 0xEE40u, 0x0E40u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0E40, sizeof(kEdges_b63_0E40) / sizeof(kEdges_b63_0E40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E42[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE44u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE49u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E42 = {63u, 0xEE42u, 0x0E42u, 0xEE49u, 1u, nullptr, 0u, kEdges_b63_0E42, sizeof(kEdges_b63_0E42) / sizeof(kEdges_b63_0E42[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E44[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE47u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E44 = {63u, 0xEE44u, 0x0E44u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_0E44, sizeof(kEdges_b63_0E44) / sizeof(kEdges_b63_0E44[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E47[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE49u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E47 = {63u, 0xEE47u, 0x0E47u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0E47, sizeof(kEdges_b63_0E47) / sizeof(kEdges_b63_0E47[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E49[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE4Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E49 = {63u, 0xEE49u, 0x0E49u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0E49, sizeof(kEdges_b63_0E49) / sizeof(kEdges_b63_0E49[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E4C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE4Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E4C = {63u, 0xEE4Cu, 0x0E4Cu, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_0E4C, sizeof(kEdges_b63_0E4C) / sizeof(kEdges_b63_0E4C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E4E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE50u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE62u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E4E = {63u, 0xEE4Eu, 0x0E4Eu, 0xEE62u, 1u, nullptr, 0u, kEdges_b63_0E4E, sizeof(kEdges_b63_0E4E) / sizeof(kEdges_b63_0E4E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E50[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE52u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E50 = {63u, 0xEE50u, 0x0E50u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0E50, sizeof(kEdges_b63_0E50) / sizeof(kEdges_b63_0E50[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E52[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE54u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E52 = {63u, 0xEE52u, 0x0E52u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0E52, sizeof(kEdges_b63_0E52) / sizeof(kEdges_b63_0E52[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E54[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE56u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E54 = {63u, 0xEE54u, 0x0E54u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0E54, sizeof(kEdges_b63_0E54) / sizeof(kEdges_b63_0E54[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E56[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE58u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E56 = {63u, 0xEE56u, 0x0E56u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0E56, sizeof(kEdges_b63_0E56) / sizeof(kEdges_b63_0E56[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E58[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE5Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E58 = {63u, 0xEE58u, 0x0E58u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0E58, sizeof(kEdges_b63_0E58) / sizeof(kEdges_b63_0E58[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E5A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE5Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E5A = {63u, 0xEE5Au, 0x0E5Au, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0E5A, sizeof(kEdges_b63_0E5A) / sizeof(kEdges_b63_0E5A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E5C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE5Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E5C = {63u, 0xEE5Cu, 0x0E5Cu, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0E5C, sizeof(kEdges_b63_0E5C) / sizeof(kEdges_b63_0E5C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E5E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE60u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEE62u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E5E = {63u, 0xEE5Eu, 0x0E5Eu, 0xEE62u, 1u, nullptr, 0u, kEdges_b63_0E5E, sizeof(kEdges_b63_0E5E) / sizeof(kEdges_b63_0E5E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E60[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE62u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E60 = {63u, 0xEE60u, 0x0E60u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0E60, sizeof(kEdges_b63_0E60) / sizeof(kEdges_b63_0E60[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E62[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E62 = {63u, 0xEE62u, 0x0E62u, 0u, 0u, nullptr, 0u, kEdges_b63_0E62, sizeof(kEdges_b63_0E62) / sizeof(kEdges_b63_0E62[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E69[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE6Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E69 = {63u, 0xEE69u, 0x0E69u, 0u, 0u, nullptr, 0u, kEdges_b63_0E69, sizeof(kEdges_b63_0E69) / sizeof(kEdges_b63_0E69[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E6A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE6Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E6A = {63u, 0xEE6Au, 0x0E6Au, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_0E6A, sizeof(kEdges_b63_0E6A) / sizeof(kEdges_b63_0E6A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E6D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE70u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E6D = {63u, 0xEE6Du, 0x0E6Du, 0xEEF8u, 2u, nullptr, 0u, kEdges_b63_0E6D, sizeof(kEdges_b63_0E6D) / sizeof(kEdges_b63_0E6D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E70[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE73u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E70 = {63u, 0xEE70u, 0x0E70u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_0E70, sizeof(kEdges_b63_0E70) / sizeof(kEdges_b63_0E70[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E73[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE75u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E73 = {63u, 0xEE73u, 0x0E73u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0E73, sizeof(kEdges_b63_0E73) / sizeof(kEdges_b63_0E73[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E75[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE78u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E75 = {63u, 0xEE75u, 0x0E75u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_0E75, sizeof(kEdges_b63_0E75) / sizeof(kEdges_b63_0E75[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E78[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE7Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E78 = {63u, 0xEE78u, 0x0E78u, 0xEF02u, 2u, nullptr, 0u, kEdges_b63_0E78, sizeof(kEdges_b63_0E78) / sizeof(kEdges_b63_0E78[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E7B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE7Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E7B = {63u, 0xEE7Bu, 0x0E7Bu, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_0E7B, sizeof(kEdges_b63_0E7B) / sizeof(kEdges_b63_0E7B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E7E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE80u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E7E = {63u, 0xEE7Eu, 0x0E7Eu, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0E7E, sizeof(kEdges_b63_0E7E) / sizeof(kEdges_b63_0E7E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E80[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE83u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E80 = {63u, 0xEE80u, 0x0E80u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0E80, sizeof(kEdges_b63_0E80) / sizeof(kEdges_b63_0E80[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E83[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE85u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E83 = {63u, 0xEE83u, 0x0E83u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_0E83, sizeof(kEdges_b63_0E83) / sizeof(kEdges_b63_0E83[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E85[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE87u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEEC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E85 = {63u, 0xEE85u, 0x0E85u, 0xEEC8u, 1u, nullptr, 0u, kEdges_b63_0E85, sizeof(kEdges_b63_0E85) / sizeof(kEdges_b63_0E85[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E87[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE89u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E87 = {63u, 0xEE87u, 0x0E87u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0E87, sizeof(kEdges_b63_0E87) / sizeof(kEdges_b63_0E87[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E89[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE8Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E89 = {63u, 0xEE89u, 0x0E89u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0E89, sizeof(kEdges_b63_0E89) / sizeof(kEdges_b63_0E89[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E8B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE8Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E8B = {63u, 0xEE8Bu, 0x0E8Bu, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0E8B, sizeof(kEdges_b63_0E8B) / sizeof(kEdges_b63_0E8B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E8D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE8Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E8D = {63u, 0xEE8Du, 0x0E8Du, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0E8D, sizeof(kEdges_b63_0E8D) / sizeof(kEdges_b63_0E8D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E8F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE91u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E8F = {63u, 0xEE8Fu, 0x0E8Fu, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0E8F, sizeof(kEdges_b63_0E8F) / sizeof(kEdges_b63_0E8F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E91[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE93u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E91 = {63u, 0xEE91u, 0x0E91u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0E91, sizeof(kEdges_b63_0E91) / sizeof(kEdges_b63_0E91[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E93[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE95u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E93 = {63u, 0xEE93u, 0x0E93u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_0E93, sizeof(kEdges_b63_0E93) / sizeof(kEdges_b63_0E93[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E95[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE97u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEEC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E95 = {63u, 0xEE95u, 0x0E95u, 0xEEC8u, 1u, nullptr, 0u, kEdges_b63_0E95, sizeof(kEdges_b63_0E95) / sizeof(kEdges_b63_0E95[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E97[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE99u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E97 = {63u, 0xEE97u, 0x0E97u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_0E97, sizeof(kEdges_b63_0E97) / sizeof(kEdges_b63_0E97[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E99[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E99 = {63u, 0xEE99u, 0x0E99u, 0u, 0u, nullptr, 0u, kEdges_b63_0E99, sizeof(kEdges_b63_0E99) / sizeof(kEdges_b63_0E99[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E9A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE9Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E9A = {63u, 0xEE9Au, 0x0E9Au, 0u, 0u, nullptr, 0u, kEdges_b63_0E9A, sizeof(kEdges_b63_0E9A) / sizeof(kEdges_b63_0E9A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E9B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEE9Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E9B = {63u, 0xEE9Bu, 0x0E9Bu, 0x060Du, 2u, nullptr, 0u, kEdges_b63_0E9B, sizeof(kEdges_b63_0E9B) / sizeof(kEdges_b63_0E9B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0E9E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0E9E = {63u, 0xEE9Eu, 0x0E9Eu, 0xEEF8u, 2u, nullptr, 0u, kEdges_b63_0E9E, sizeof(kEdges_b63_0E9E) / sizeof(kEdges_b63_0E9E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EA1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEA4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EA1 = {63u, 0xEEA1u, 0x0EA1u, 0x060Du, 2u, nullptr, 0u, kEdges_b63_0EA1, sizeof(kEdges_b63_0EA1) / sizeof(kEdges_b63_0EA1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EA4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEA6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EA4 = {63u, 0xEEA4u, 0x0EA4u, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_0EA4, sizeof(kEdges_b63_0EA4) / sizeof(kEdges_b63_0EA4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EA6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEA9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EA6 = {63u, 0xEEA6u, 0x0EA6u, 0x0624u, 2u, nullptr, 0u, kEdges_b63_0EA6, sizeof(kEdges_b63_0EA6) / sizeof(kEdges_b63_0EA6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EA9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EA9 = {63u, 0xEEA9u, 0x0EA9u, 0xEF02u, 2u, nullptr, 0u, kEdges_b63_0EA9, sizeof(kEdges_b63_0EA9) / sizeof(kEdges_b63_0EA9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EAC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEAFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EAC = {63u, 0xEEACu, 0x0EACu, 0x0624u, 2u, nullptr, 0u, kEdges_b63_0EAC, sizeof(kEdges_b63_0EAC) / sizeof(kEdges_b63_0EAC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EAF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEB1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EAF = {63u, 0xEEAFu, 0x0EAFu, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0EAF, sizeof(kEdges_b63_0EAF) / sizeof(kEdges_b63_0EAF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EB1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEB4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EB1 = {63u, 0xEEB1u, 0x0EB1u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0EB1, sizeof(kEdges_b63_0EB1) / sizeof(kEdges_b63_0EB1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EB4[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEB6u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEEC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EB4 = {63u, 0xEEB4u, 0x0EB4u, 0xEEC8u, 1u, nullptr, 0u, kEdges_b63_0EB4, sizeof(kEdges_b63_0EB4) / sizeof(kEdges_b63_0EB4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EB6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEB8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EB6 = {63u, 0xEEB6u, 0x0EB6u, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_0EB6, sizeof(kEdges_b63_0EB6) / sizeof(kEdges_b63_0EB6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EB8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEBAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EB8 = {63u, 0xEEB8u, 0x0EB8u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0EB8, sizeof(kEdges_b63_0EB8) / sizeof(kEdges_b63_0EB8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EBA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEBCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EBA = {63u, 0xEEBAu, 0x0EBAu, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_0EBA, sizeof(kEdges_b63_0EBA) / sizeof(kEdges_b63_0EBA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EBC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEBEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EBC = {63u, 0xEEBCu, 0x0EBCu, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0EBC, sizeof(kEdges_b63_0EBC) / sizeof(kEdges_b63_0EBC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EBE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEC0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EBE = {63u, 0xEEBEu, 0x0EBEu, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0EBE, sizeof(kEdges_b63_0EBE) / sizeof(kEdges_b63_0EBE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EC0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEC2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EC0 = {63u, 0xEEC0u, 0x0EC0u, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0EC0, sizeof(kEdges_b63_0EC0) / sizeof(kEdges_b63_0EC0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EC2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEC4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EC2 = {63u, 0xEEC2u, 0x0EC2u, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_0EC2, sizeof(kEdges_b63_0EC2) / sizeof(kEdges_b63_0EC2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EC4[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEC6u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEEC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EC4 = {63u, 0xEEC4u, 0x0EC4u, 0xEEC8u, 1u, nullptr, 0u, kEdges_b63_0EC4, sizeof(kEdges_b63_0EC4) / sizeof(kEdges_b63_0EC4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EC6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EC6 = {63u, 0xEEC6u, 0x0EC6u, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0EC6, sizeof(kEdges_b63_0EC6) / sizeof(kEdges_b63_0EC6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EC8[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EC8 = {63u, 0xEEC8u, 0x0EC8u, 0u, 0u, nullptr, 0u, kEdges_b63_0EC8, sizeof(kEdges_b63_0EC8) / sizeof(kEdges_b63_0EC8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EC9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEECAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EC9 = {63u, 0xEEC9u, 0x0EC9u, 0u, 0u, nullptr, 0u, kEdges_b63_0EC9, sizeof(kEdges_b63_0EC9) / sizeof(kEdges_b63_0EC9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ECA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEECDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ECA = {63u, 0xEECAu, 0x0ECAu, 0x060Du, 2u, nullptr, 0u, kEdges_b63_0ECA, sizeof(kEdges_b63_0ECA) / sizeof(kEdges_b63_0ECA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ECD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEED0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ECD = {63u, 0xEECDu, 0x0ECDu, 0xEEF8u, 2u, nullptr, 0u, kEdges_b63_0ECD, sizeof(kEdges_b63_0ECD) / sizeof(kEdges_b63_0ECD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ED0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEED3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ED0 = {63u, 0xEED0u, 0x0ED0u, 0x060Du, 2u, nullptr, 0u, kEdges_b63_0ED0, sizeof(kEdges_b63_0ED0) / sizeof(kEdges_b63_0ED0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ED3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEED5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ED3 = {63u, 0xEED3u, 0x0ED3u, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_0ED3, sizeof(kEdges_b63_0ED3) / sizeof(kEdges_b63_0ED3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ED5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEED8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ED5 = {63u, 0xEED5u, 0x0ED5u, 0x0624u, 2u, nullptr, 0u, kEdges_b63_0ED5, sizeof(kEdges_b63_0ED5) / sizeof(kEdges_b63_0ED5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0ED8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEDBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0ED8 = {63u, 0xEED8u, 0x0ED8u, 0xEF02u, 2u, nullptr, 0u, kEdges_b63_0ED8, sizeof(kEdges_b63_0ED8) / sizeof(kEdges_b63_0ED8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EDB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEDEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EDB = {63u, 0xEEDBu, 0x0EDBu, 0x0624u, 2u, nullptr, 0u, kEdges_b63_0EDB, sizeof(kEdges_b63_0EDB) / sizeof(kEdges_b63_0EDB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EDE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEE0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EDE = {63u, 0xEEDEu, 0x0EDEu, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0EDE, sizeof(kEdges_b63_0EDE) / sizeof(kEdges_b63_0EDE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EE0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEE3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EE0 = {63u, 0xEEE0u, 0x0EE0u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0EE0, sizeof(kEdges_b63_0EE0) / sizeof(kEdges_b63_0EE0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EE3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEE5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEEC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EE3 = {63u, 0xEEE3u, 0x0EE3u, 0xEEC8u, 1u, nullptr, 0u, kEdges_b63_0EE3, sizeof(kEdges_b63_0EE3) / sizeof(kEdges_b63_0EE3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EE5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEE7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EE5 = {63u, 0xEEE5u, 0x0EE5u, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_0EE5, sizeof(kEdges_b63_0EE5) / sizeof(kEdges_b63_0EE5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EE7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEE9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EE7 = {63u, 0xEEE7u, 0x0EE7u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0EE7, sizeof(kEdges_b63_0EE7) / sizeof(kEdges_b63_0EE7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EE9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEEBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EE9 = {63u, 0xEEE9u, 0x0EE9u, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_0EE9, sizeof(kEdges_b63_0EE9) / sizeof(kEdges_b63_0EE9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EEB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEEDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EEB = {63u, 0xEEEBu, 0x0EEBu, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0EEB, sizeof(kEdges_b63_0EEB) / sizeof(kEdges_b63_0EEB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EED[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEEFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EED = {63u, 0xEEEDu, 0x0EEDu, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0EED, sizeof(kEdges_b63_0EED) / sizeof(kEdges_b63_0EED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EEF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEF1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EEF = {63u, 0xEEEFu, 0x0EEFu, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0EEF, sizeof(kEdges_b63_0EEF) / sizeof(kEdges_b63_0EEF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EF1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEF3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EF1 = {63u, 0xEEF1u, 0x0EF1u, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_0EF1, sizeof(kEdges_b63_0EF1) / sizeof(kEdges_b63_0EF1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EF3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEF5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEEC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EF3 = {63u, 0xEEF3u, 0x0EF3u, 0xEEC8u, 1u, nullptr, 0u, kEdges_b63_0EF3, sizeof(kEdges_b63_0EF3) / sizeof(kEdges_b63_0EF3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EF5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEEF7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EF5 = {63u, 0xEEF5u, 0x0EF5u, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_0EF5, sizeof(kEdges_b63_0EF5) / sizeof(kEdges_b63_0EF5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0EF7[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0EF7 = {63u, 0xEEF7u, 0x0EF7u, 0u, 0u, nullptr, 0u, kEdges_b63_0EF7, sizeof(kEdges_b63_0EF7) / sizeof(kEdges_b63_0EF7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F0C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5B6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEF0Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F0C = {63u, 0xEF0Cu, 0x0F0Cu, 0xE5B6u, 2u, nullptr, 0u, kEdges_b63_0F0C, sizeof(kEdges_b63_0F0C) / sizeof(kEdges_b63_0F0C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F0F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF11u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F0F = {63u, 0xEF0Fu, 0x0F0Fu, 0x0011u, 1u, nullptr, 0u, kEdges_b63_0F0F, sizeof(kEdges_b63_0F0F) / sizeof(kEdges_b63_0F0F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F11[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF14u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F11 = {63u, 0xEF11u, 0x0F11u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0F11, sizeof(kEdges_b63_0F11) / sizeof(kEdges_b63_0F11[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F14[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5DFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEF17u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F14 = {63u, 0xEF14u, 0x0F14u, 0xE5DFu, 2u, nullptr, 0u, kEdges_b63_0F14, sizeof(kEdges_b63_0F14) / sizeof(kEdges_b63_0F14[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F17[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F17 = {63u, 0xEF17u, 0x0F17u, 0u, 0u, nullptr, 0u, kEdges_b63_0F17, sizeof(kEdges_b63_0F17) / sizeof(kEdges_b63_0F17[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F18[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF1Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F18 = {63u, 0xEF18u, 0x0F18u, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0F18, sizeof(kEdges_b63_0F18) / sizeof(kEdges_b63_0F18[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F1B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF1Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F1B = {63u, 0xEF1Bu, 0x0F1Bu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0F1B, sizeof(kEdges_b63_0F1B) / sizeof(kEdges_b63_0F1B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F1D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF20u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F1D = {63u, 0xEF1Du, 0x0F1Du, 0x03CEu, 2u, nullptr, 0u, kEdges_b63_0F1D, sizeof(kEdges_b63_0F1D) / sizeof(kEdges_b63_0F1D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F20[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF23u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F20 = {63u, 0xEF20u, 0x0F20u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0F20, sizeof(kEdges_b63_0F20) / sizeof(kEdges_b63_0F20[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F23[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF25u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F23 = {63u, 0xEF23u, 0x0F23u, 0x0040u, 1u, nullptr, 0u, kEdges_b63_0F23, sizeof(kEdges_b63_0F23) / sizeof(kEdges_b63_0F23[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F25[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F25 = {63u, 0xEF25u, 0x0F25u, 0x03B7u, 2u, nullptr, 0u, kEdges_b63_0F25, sizeof(kEdges_b63_0F25) / sizeof(kEdges_b63_0F25[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F28[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F28 = {63u, 0xEF28u, 0x0F28u, 0u, 0u, nullptr, 0u, kEdges_b63_0F28, sizeof(kEdges_b63_0F28) / sizeof(kEdges_b63_0F28[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F29[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F29 = {63u, 0xEF29u, 0x0F29u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_0F29, sizeof(kEdges_b63_0F29) / sizeof(kEdges_b63_0F29[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F2B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF2Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F2B = {63u, 0xEF2Bu, 0x0F2Bu, 0x0642u, 2u, nullptr, 0u, kEdges_b63_0F2B, sizeof(kEdges_b63_0F2B) / sizeof(kEdges_b63_0F2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F2E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF30u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F2E = {63u, 0xEF2Eu, 0x0F2Eu, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_0F2E, sizeof(kEdges_b63_0F2E) / sizeof(kEdges_b63_0F2E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F30[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF33u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F30 = {63u, 0xEF30u, 0x0F30u, 0x03EDu, 2u, nullptr, 0u, kEdges_b63_0F30, sizeof(kEdges_b63_0F30) / sizeof(kEdges_b63_0F30[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F33[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF35u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F33 = {63u, 0xEF33u, 0x0F33u, 0x00F1u, 1u, nullptr, 0u, kEdges_b63_0F33, sizeof(kEdges_b63_0F33) / sizeof(kEdges_b63_0F33[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F35[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF37u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F35 = {63u, 0xEF35u, 0x0F35u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_0F35, sizeof(kEdges_b63_0F35) / sizeof(kEdges_b63_0F35[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F37[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEF3Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F37 = {63u, 0xEF37u, 0x0F37u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b63_0F37, sizeof(kEdges_b63_0F37) / sizeof(kEdges_b63_0F37[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F3A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCF4Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEF3Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F3A = {63u, 0xEF3Au, 0x0F3Au, 0xCF4Au, 2u, nullptr, 0u, kEdges_b63_0F3A, sizeof(kEdges_b63_0F3A) / sizeof(kEdges_b63_0F3A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F3D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF3Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F3D = {63u, 0xEF3Du, 0x0F3Du, 0x0004u, 1u, nullptr, 0u, kEdges_b63_0F3D, sizeof(kEdges_b63_0F3D) / sizeof(kEdges_b63_0F3D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F3F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEF42u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F3F = {63u, 0xEF3Fu, 0x0F3Fu, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_0F3F, sizeof(kEdges_b63_0F3F) / sizeof(kEdges_b63_0F3F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F42[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF44u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F42 = {63u, 0xEF42u, 0x0F42u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0F42, sizeof(kEdges_b63_0F42) / sizeof(kEdges_b63_0F42[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F44[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF46u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F44 = {63u, 0xEF44u, 0x0F44u, 0x0031u, 1u, nullptr, 0u, kEdges_b63_0F44, sizeof(kEdges_b63_0F44) / sizeof(kEdges_b63_0F44[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F46[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF48u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F46 = {63u, 0xEF46u, 0x0F46u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_0F46, sizeof(kEdges_b63_0F46) / sizeof(kEdges_b63_0F46[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F48[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF4Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F48 = {63u, 0xEF48u, 0x0F48u, 0x03EDu, 2u, nullptr, 0u, kEdges_b63_0F48, sizeof(kEdges_b63_0F48) / sizeof(kEdges_b63_0F48[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F4B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF4Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F4B = {63u, 0xEF4Bu, 0x0F4Bu, 0x03EDu, 2u, nullptr, 0u, kEdges_b63_0F4B, sizeof(kEdges_b63_0F4B) / sizeof(kEdges_b63_0F4B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F4E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF50u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F4E = {63u, 0xEF4Eu, 0x0F4Eu, 0x001Bu, 1u, nullptr, 0u, kEdges_b63_0F4E, sizeof(kEdges_b63_0F4E) / sizeof(kEdges_b63_0F4E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F50[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF52u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEF37u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F50 = {63u, 0xEF50u, 0x0F50u, 0xEF37u, 1u, nullptr, 0u, kEdges_b63_0F50, sizeof(kEdges_b63_0F50) / sizeof(kEdges_b63_0F50[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F52[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F52 = {63u, 0xEF52u, 0x0F52u, 0u, 0u, nullptr, 0u, kEdges_b63_0F52, sizeof(kEdges_b63_0F52) / sizeof(kEdges_b63_0F52[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F5B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF5Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F5B = {63u, 0xEF5Bu, 0x0F5Bu, 0x005Au, 1u, nullptr, 0u, kEdges_b63_0F5B, sizeof(kEdges_b63_0F5B) / sizeof(kEdges_b63_0F5B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F5D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F5D = {63u, 0xEF5Du, 0x0F5Du, 0x062Cu, 2u, nullptr, 0u, kEdges_b63_0F5D, sizeof(kEdges_b63_0F5D) / sizeof(kEdges_b63_0F5D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F60[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF62u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F60 = {63u, 0xEF60u, 0x0F60u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0F60, sizeof(kEdges_b63_0F60) / sizeof(kEdges_b63_0F60[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F62[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF65u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F62 = {63u, 0xEF62u, 0x0F62u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0F62, sizeof(kEdges_b63_0F62) / sizeof(kEdges_b63_0F62[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F65[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF67u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEFC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F65 = {63u, 0xEF65u, 0x0F65u, 0xEFC3u, 1u, nullptr, 0u, kEdges_b63_0F65, sizeof(kEdges_b63_0F65) / sizeof(kEdges_b63_0F65[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F67[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF69u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F67 = {63u, 0xEF67u, 0x0F67u, 0x0051u, 1u, nullptr, 0u, kEdges_b63_0F67, sizeof(kEdges_b63_0F67) / sizeof(kEdges_b63_0F67[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F69[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF6Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F69 = {63u, 0xEF69u, 0x0F69u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0F69, sizeof(kEdges_b63_0F69) / sizeof(kEdges_b63_0F69[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F6B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF6Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEF84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F6B = {63u, 0xEF6Bu, 0x0F6Bu, 0xEF84u, 1u, nullptr, 0u, kEdges_b63_0F6B, sizeof(kEdges_b63_0F6B) / sizeof(kEdges_b63_0F6B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F6D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF6Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F6D = {63u, 0xEF6Du, 0x0F6Du, 0x00F0u, 1u, nullptr, 0u, kEdges_b63_0F6D, sizeof(kEdges_b63_0F6D) / sizeof(kEdges_b63_0F6D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F6F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF71u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F6F = {63u, 0xEF6Fu, 0x0F6Fu, 0x0010u, 1u, nullptr, 0u, kEdges_b63_0F6F, sizeof(kEdges_b63_0F6F) / sizeof(kEdges_b63_0F6F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F71[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF73u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEF84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F71 = {63u, 0xEF71u, 0x0F71u, 0xEF84u, 1u, nullptr, 0u, kEdges_b63_0F71, sizeof(kEdges_b63_0F71) / sizeof(kEdges_b63_0F71[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F73[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F73 = {63u, 0xEF73u, 0x0F73u, 0u, 0u, nullptr, 0u, kEdges_b63_0F73, sizeof(kEdges_b63_0F73) / sizeof(kEdges_b63_0F73[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F74[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF76u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F74 = {63u, 0xEF74u, 0x0F74u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0F74, sizeof(kEdges_b63_0F74) / sizeof(kEdges_b63_0F74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F76[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF78u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F76 = {63u, 0xEF76u, 0x0F76u, 0x0051u, 1u, nullptr, 0u, kEdges_b63_0F76, sizeof(kEdges_b63_0F76) / sizeof(kEdges_b63_0F76[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F78[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF79u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F78 = {63u, 0xEF78u, 0x0F78u, 0u, 0u, nullptr, 0u, kEdges_b63_0F78, sizeof(kEdges_b63_0F78) / sizeof(kEdges_b63_0F78[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F79[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF7Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F79 = {63u, 0xEF79u, 0x0F79u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_0F79, sizeof(kEdges_b63_0F79) / sizeof(kEdges_b63_0F79[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F7B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF7Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F7B = {63u, 0xEF7Bu, 0x0F7Bu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0F7B, sizeof(kEdges_b63_0F7B) / sizeof(kEdges_b63_0F7B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F7D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF7Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F7D = {63u, 0xEF7Du, 0x0F7Du, 0u, 0u, nullptr, 0u, kEdges_b63_0F7D, sizeof(kEdges_b63_0F7D) / sizeof(kEdges_b63_0F7D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F7E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF81u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F7E = {63u, 0xEF7Eu, 0x0F7Eu, 0xEFE0u, 2u, nullptr, 0u, kEdges_b63_0F7E, sizeof(kEdges_b63_0F7E) / sizeof(kEdges_b63_0F7E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F81[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xEF87u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F81 = {63u, 0xEF81u, 0x0F81u, 0xEF87u, 2u, nullptr, 0u, kEdges_b63_0F81, sizeof(kEdges_b63_0F81) / sizeof(kEdges_b63_0F81[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F84[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF87u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F84 = {63u, 0xEF84u, 0x0F84u, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0F84, sizeof(kEdges_b63_0F84) / sizeof(kEdges_b63_0F84[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F87[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF89u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F87 = {63u, 0xEF87u, 0x0F87u, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_0F87, sizeof(kEdges_b63_0F87) / sizeof(kEdges_b63_0F87[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F89[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF8Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F89 = {63u, 0xEF89u, 0x0F89u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0F89, sizeof(kEdges_b63_0F89) / sizeof(kEdges_b63_0F89[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F8B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF8Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F8B = {63u, 0xEF8Bu, 0x0F8Bu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0F8B, sizeof(kEdges_b63_0F8B) / sizeof(kEdges_b63_0F8B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F8D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF90u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F8D = {63u, 0xEF8Du, 0x0F8Du, 0x056Cu, 2u, nullptr, 0u, kEdges_b63_0F8D, sizeof(kEdges_b63_0F8D) / sizeof(kEdges_b63_0F8D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F90[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF93u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F90 = {63u, 0xEF90u, 0x0F90u, 0x05DFu, 2u, nullptr, 0u, kEdges_b63_0F90, sizeof(kEdges_b63_0F90) / sizeof(kEdges_b63_0F90[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F93[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF95u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEFC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F93 = {63u, 0xEF93u, 0x0F93u, 0xEFC3u, 1u, nullptr, 0u, kEdges_b63_0F93, sizeof(kEdges_b63_0F93) / sizeof(kEdges_b63_0F93[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F95[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF97u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F95 = {63u, 0xEF95u, 0x0F95u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0F95, sizeof(kEdges_b63_0F95) / sizeof(kEdges_b63_0F95[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F97[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF99u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEFC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F97 = {63u, 0xEF97u, 0x0F97u, 0xEFC3u, 1u, nullptr, 0u, kEdges_b63_0F97, sizeof(kEdges_b63_0F97) / sizeof(kEdges_b63_0F97[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F99[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF9Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F99 = {63u, 0xEF99u, 0x0F99u, 0x0035u, 1u, nullptr, 0u, kEdges_b63_0F99, sizeof(kEdges_b63_0F99) / sizeof(kEdges_b63_0F99[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F9B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEF9Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F9B = {63u, 0xEF9Bu, 0x0F9Bu, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_0F9B, sizeof(kEdges_b63_0F9B) / sizeof(kEdges_b63_0F9B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0F9D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFA0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0F9D = {63u, 0xEF9Du, 0x0F9Du, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0F9D, sizeof(kEdges_b63_0F9D) / sizeof(kEdges_b63_0F9D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FA0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FA0 = {63u, 0xEFA0u, 0x0FA0u, 0u, 0u, nullptr, 0u, kEdges_b63_0FA0, sizeof(kEdges_b63_0FA0) / sizeof(kEdges_b63_0FA0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FA1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FA1 = {63u, 0xEFA1u, 0x0FA1u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0FA1, sizeof(kEdges_b63_0FA1) / sizeof(kEdges_b63_0FA1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FA3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFA6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FA3 = {63u, 0xEFA3u, 0x0FA3u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_0FA3, sizeof(kEdges_b63_0FA3) / sizeof(kEdges_b63_0FA3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FA6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFA8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEFB9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FA6 = {63u, 0xEFA6u, 0x0FA6u, 0xEFB9u, 1u, nullptr, 0u, kEdges_b63_0FA6, sizeof(kEdges_b63_0FA6) / sizeof(kEdges_b63_0FA6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FA8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FA8 = {63u, 0xEFA8u, 0x0FA8u, 0x0624u, 2u, nullptr, 0u, kEdges_b63_0FA8, sizeof(kEdges_b63_0FA8) / sizeof(kEdges_b63_0FA8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FAB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEFAEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FAB = {63u, 0xEFABu, 0x0FABu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_0FAB, sizeof(kEdges_b63_0FAB) / sizeof(kEdges_b63_0FAB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FAE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD6F1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEFB1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FAE = {63u, 0xEFAEu, 0x0FAEu, 0xD6F1u, 2u, nullptr, 0u, kEdges_b63_0FAE, sizeof(kEdges_b63_0FAE) / sizeof(kEdges_b63_0FAE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FB1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFB3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FB1 = {63u, 0xEFB1u, 0x0FB1u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_0FB1, sizeof(kEdges_b63_0FB1) / sizeof(kEdges_b63_0FB1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FB3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFB6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FB3 = {63u, 0xEFB3u, 0x0FB3u, 0x05C7u, 2u, nullptr, 0u, kEdges_b63_0FB3, sizeof(kEdges_b63_0FB3) / sizeof(kEdges_b63_0FB3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FB6[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FB6 = {63u, 0xEFB6u, 0x0FB6u, 0xE456u, 2u, nullptr, 0u, kEdges_b63_0FB6, sizeof(kEdges_b63_0FB6) / sizeof(kEdges_b63_0FB6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FB9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFBBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FB9 = {63u, 0xEFB9u, 0x0FB9u, 0x00BBu, 1u, nullptr, 0u, kEdges_b63_0FB9, sizeof(kEdges_b63_0FB9) / sizeof(kEdges_b63_0FB9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FBB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEFBEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FBB = {63u, 0xEFBBu, 0x0FBBu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_0FBB, sizeof(kEdges_b63_0FBB) / sizeof(kEdges_b63_0FBB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FBE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFC0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FBE = {63u, 0xEFBEu, 0x0FBEu, 0x0020u, 1u, nullptr, 0u, kEdges_b63_0FBE, sizeof(kEdges_b63_0FBE) / sizeof(kEdges_b63_0FBE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FC0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FC0 = {63u, 0xEFC0u, 0x0FC0u, 0x05DFu, 2u, nullptr, 0u, kEdges_b63_0FC0, sizeof(kEdges_b63_0FC0) / sizeof(kEdges_b63_0FC0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FC3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFC6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FC3 = {63u, 0xEFC3u, 0x0FC3u, 0x05DFu, 2u, nullptr, 0u, kEdges_b63_0FC3, sizeof(kEdges_b63_0FC3) / sizeof(kEdges_b63_0FC3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FC6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFC8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEFDDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FC6 = {63u, 0xEFC6u, 0x0FC6u, 0xEFDDu, 1u, nullptr, 0u, kEdges_b63_0FC6, sizeof(kEdges_b63_0FC6) / sizeof(kEdges_b63_0FC6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FC8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFCAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FC8 = {63u, 0xEFC8u, 0x0FC8u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_0FC8, sizeof(kEdges_b63_0FC8) / sizeof(kEdges_b63_0FC8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FCA[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFCCu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEFD0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FCA = {63u, 0xEFCAu, 0x0FCAu, 0xEFD0u, 1u, nullptr, 0u, kEdges_b63_0FCA, sizeof(kEdges_b63_0FCA) / sizeof(kEdges_b63_0FCA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FCC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFCEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FCC = {63u, 0xEFCCu, 0x0FCCu, 0x00BBu, 1u, nullptr, 0u, kEdges_b63_0FCC, sizeof(kEdges_b63_0FCC) / sizeof(kEdges_b63_0FCC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FCE[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEFD7u, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 63, 0xEFD0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FCE = {63u, 0xEFCEu, 0x0FCEu, 0xEFD7u, 1u, nullptr, 0u, kEdges_b63_0FCE, sizeof(kEdges_b63_0FCE) / sizeof(kEdges_b63_0FCE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FD0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFD2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FD0 = {63u, 0xEFD0u, 0x0FD0u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_0FD0, sizeof(kEdges_b63_0FD0) / sizeof(kEdges_b63_0FD0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FD2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFD4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xEFDAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FD2 = {63u, 0xEFD2u, 0x0FD2u, 0xEFDAu, 1u, nullptr, 0u, kEdges_b63_0FD2, sizeof(kEdges_b63_0FD2) / sizeof(kEdges_b63_0FD2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FD4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFD7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FD4 = {63u, 0xEFD4u, 0x0FD4u, 0x0624u, 2u, nullptr, 0u, kEdges_b63_0FD4, sizeof(kEdges_b63_0FD4) / sizeof(kEdges_b63_0FD4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FD7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xEFDAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FD7 = {63u, 0xEFD7u, 0x0FD7u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_0FD7, sizeof(kEdges_b63_0FD7) / sizeof(kEdges_b63_0FD7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FDA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xEFDDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FDA = {63u, 0xEFDAu, 0x0FDAu, 0x05DFu, 2u, nullptr, 0u, kEdges_b63_0FDA, sizeof(kEdges_b63_0FDA) / sizeof(kEdges_b63_0FDA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_0FDD[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_0FDD = {63u, 0xEFDDu, 0x0FDDu, 0xE468u, 2u, nullptr, 0u, kEdges_b63_0FDD, sizeof(kEdges_b63_0FDD) / sizeof(kEdges_b63_0FDD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_105E[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF062u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_105E = {63u, 0xF05Eu, 0x105Eu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_105E, sizeof(kEdges_b63_105E) / sizeof(kEdges_b63_105E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1062[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9BFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF065u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1062 = {63u, 0xF062u, 0x1062u, 0xC9BFu, 2u, nullptr, 0u, kEdges_b63_1062, sizeof(kEdges_b63_1062) / sizeof(kEdges_b63_1062[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1065[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF067u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1065 = {63u, 0xF065u, 0x1065u, 0x0025u, 1u, nullptr, 0u, kEdges_b63_1065, sizeof(kEdges_b63_1065) / sizeof(kEdges_b63_1065[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1067[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF06Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1067 = {63u, 0xF067u, 0x1067u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_1067, sizeof(kEdges_b63_1067) / sizeof(kEdges_b63_1067[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_106A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF06Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_106A = {63u, 0xF06Au, 0x106Au, 0x0012u, 1u, nullptr, 0u, kEdges_b63_106A, sizeof(kEdges_b63_106A) / sizeof(kEdges_b63_106A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_106C[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF070u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_106C = {63u, 0xF06Cu, 0x106Cu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_106C, sizeof(kEdges_b63_106C) / sizeof(kEdges_b63_106C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1070[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF072u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1070 = {63u, 0xF070u, 0x1070u, 0x008Au, 1u, nullptr, 0u, kEdges_b63_1070, sizeof(kEdges_b63_1070) / sizeof(kEdges_b63_1070[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1072[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF075u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1072 = {63u, 0xF072u, 0x1072u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b63_1072, sizeof(kEdges_b63_1072) / sizeof(kEdges_b63_1072[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1075[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF077u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1075 = {63u, 0xF075u, 0x1075u, 0x001Du, 1u, nullptr, 0u, kEdges_b63_1075, sizeof(kEdges_b63_1075) / sizeof(kEdges_b63_1075[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1077[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF07Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1077 = {63u, 0xF077u, 0x1077u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b63_1077, sizeof(kEdges_b63_1077) / sizeof(kEdges_b63_1077[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_107A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF07Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_107A = {63u, 0xF07Au, 0x107Au, 0x0079u, 1u, nullptr, 0u, kEdges_b63_107A, sizeof(kEdges_b63_107A) / sizeof(kEdges_b63_107A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_107C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF07Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_107C = {63u, 0xF07Cu, 0x107Cu, 0xCAA4u, 2u, nullptr, 0u, kEdges_b63_107C, sizeof(kEdges_b63_107C) / sizeof(kEdges_b63_107C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_107F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF081u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_107F = {63u, 0xF07Fu, 0x107Fu, 0x007Au, 1u, nullptr, 0u, kEdges_b63_107F, sizeof(kEdges_b63_107F) / sizeof(kEdges_b63_107F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1081[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF084u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1081 = {63u, 0xF081u, 0x1081u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b63_1081, sizeof(kEdges_b63_1081) / sizeof(kEdges_b63_1081[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1084[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF086u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1084 = {63u, 0xF084u, 0x1084u, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_1084, sizeof(kEdges_b63_1084) / sizeof(kEdges_b63_1084[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1086[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF088u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1086 = {63u, 0xF086u, 0x1086u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_1086, sizeof(kEdges_b63_1086) / sizeof(kEdges_b63_1086[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1088[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF08Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1088 = {63u, 0xF088u, 0x1088u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1088, sizeof(kEdges_b63_1088) / sizeof(kEdges_b63_1088[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_108A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF08Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_108A = {63u, 0xF08Au, 0x108Au, 0x00F7u, 1u, nullptr, 0u, kEdges_b63_108A, sizeof(kEdges_b63_108A) / sizeof(kEdges_b63_108A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_108C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF08Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_108C = {63u, 0xF08Cu, 0x108Cu, 0x00F9u, 1u, nullptr, 0u, kEdges_b63_108C, sizeof(kEdges_b63_108C) / sizeof(kEdges_b63_108C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_108E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF090u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_108E = {63u, 0xF08Eu, 0x108Eu, 0x00FAu, 1u, nullptr, 0u, kEdges_b63_108E, sizeof(kEdges_b63_108E) / sizeof(kEdges_b63_108E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1090[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF092u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1090 = {63u, 0xF090u, 0x1090u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_1090, sizeof(kEdges_b63_1090) / sizeof(kEdges_b63_1090[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1092[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF096u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1092 = {63u, 0xF092u, 0x1092u, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_1092, sizeof(kEdges_b63_1092) / sizeof(kEdges_b63_1092[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1096[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF098u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1096 = {63u, 0xF096u, 0x1096u, 0x0099u, 1u, nullptr, 0u, kEdges_b63_1096, sizeof(kEdges_b63_1096) / sizeof(kEdges_b63_1096[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1098[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF09Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1098 = {63u, 0xF098u, 0x1098u, 0xE522u, 2u, nullptr, 0u, kEdges_b63_1098, sizeof(kEdges_b63_1098) / sizeof(kEdges_b63_1098[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_109B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF09Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_109B = {63u, 0xF09Bu, 0x109Bu, 0x008Eu, 1u, nullptr, 0u, kEdges_b63_109B, sizeof(kEdges_b63_109B) / sizeof(kEdges_b63_109B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_109D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF09Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_109D = {63u, 0xF09Du, 0x109Du, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_109D, sizeof(kEdges_b63_109D) / sizeof(kEdges_b63_109D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_109F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0A1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_109F = {63u, 0xF09Fu, 0x109Fu, 0x00F2u, 1u, nullptr, 0u, kEdges_b63_109F, sizeof(kEdges_b63_109F) / sizeof(kEdges_b63_109F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10A1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0A3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10A1 = {63u, 0xF0A1u, 0x10A1u, 0x000Du, 1u, nullptr, 0u, kEdges_b63_10A1, sizeof(kEdges_b63_10A1) / sizeof(kEdges_b63_10A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10A3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF258u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF0A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10A3 = {63u, 0xF0A3u, 0x10A3u, 0xF258u, 2u, nullptr, 0u, kEdges_b63_10A3, sizeof(kEdges_b63_10A3) / sizeof(kEdges_b63_10A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10A6 = {63u, 0xF0A6u, 0x10A6u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_10A6, sizeof(kEdges_b63_10A6) / sizeof(kEdges_b63_10A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10A8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10A8 = {63u, 0xF0A8u, 0x10A8u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_10A8, sizeof(kEdges_b63_10A8) / sizeof(kEdges_b63_10A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10AA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0ACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10AA = {63u, 0xF0AAu, 0x10AAu, 0x0005u, 1u, nullptr, 0u, kEdges_b63_10AA, sizeof(kEdges_b63_10AA) / sizeof(kEdges_b63_10AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10AC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0AEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10AC = {63u, 0xF0ACu, 0x10ACu, 0x0080u, 1u, nullptr, 0u, kEdges_b63_10AC, sizeof(kEdges_b63_10AC) / sizeof(kEdges_b63_10AC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10AE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10AE = {63u, 0xF0AEu, 0x10AEu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_10AE, sizeof(kEdges_b63_10AE) / sizeof(kEdges_b63_10AE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10B1 = {63u, 0xF0B1u, 0x10B1u, 0x006Fu, 1u, nullptr, 0u, kEdges_b63_10B1, sizeof(kEdges_b63_10B1) / sizeof(kEdges_b63_10B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10B3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10B3 = {63u, 0xF0B3u, 0x10B3u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_10B3, sizeof(kEdges_b63_10B3) / sizeof(kEdges_b63_10B3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10B6 = {63u, 0xF0B6u, 0x10B6u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_10B6, sizeof(kEdges_b63_10B6) / sizeof(kEdges_b63_10B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10B8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10B8 = {63u, 0xF0B8u, 0x10B8u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_10B8, sizeof(kEdges_b63_10B8) / sizeof(kEdges_b63_10B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10BB = {63u, 0xF0BBu, 0x10BBu, 0x0007u, 1u, nullptr, 0u, kEdges_b63_10BB, sizeof(kEdges_b63_10BB) / sizeof(kEdges_b63_10BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10BD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10BD = {63u, 0xF0BDu, 0x10BDu, 0x06A9u, 2u, nullptr, 0u, kEdges_b63_10BD, sizeof(kEdges_b63_10BD) / sizeof(kEdges_b63_10BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10C0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10C0 = {63u, 0xF0C0u, 0x10C0u, 0x06A9u, 2u, nullptr, 0u, kEdges_b63_10C0, sizeof(kEdges_b63_10C0) / sizeof(kEdges_b63_10C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10C3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF52Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF0C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10C3 = {63u, 0xF0C3u, 0x10C3u, 0xF52Fu, 2u, nullptr, 0u, kEdges_b63_10C3, sizeof(kEdges_b63_10C3) / sizeof(kEdges_b63_10C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10C6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0C8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF0EDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10C6 = {63u, 0xF0C6u, 0x10C6u, 0xF0EDu, 1u, nullptr, 0u, kEdges_b63_10C6, sizeof(kEdges_b63_10C6) / sizeof(kEdges_b63_10C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10C8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10C8 = {63u, 0xF0C8u, 0x10C8u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_10C8, sizeof(kEdges_b63_10C8) / sizeof(kEdges_b63_10C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10CB = {63u, 0xF0CBu, 0x10CBu, 0x0016u, 1u, nullptr, 0u, kEdges_b63_10CB, sizeof(kEdges_b63_10CB) / sizeof(kEdges_b63_10CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10CD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10CD = {63u, 0xF0CDu, 0x10CDu, 0u, 0u, nullptr, 0u, kEdges_b63_10CD, sizeof(kEdges_b63_10CD) / sizeof(kEdges_b63_10CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10CE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10CE = {63u, 0xF0CEu, 0x10CEu, 0x06A9u, 2u, nullptr, 0u, kEdges_b63_10CE, sizeof(kEdges_b63_10CE) / sizeof(kEdges_b63_10CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10D1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10D1 = {63u, 0xF0D1u, 0x10D1u, 0u, 0u, nullptr, 0u, kEdges_b63_10D1, sizeof(kEdges_b63_10D1) / sizeof(kEdges_b63_10D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10D2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF51Cu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF0D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10D2 = {63u, 0xF0D2u, 0x10D2u, 0xF51Cu, 2u, nullptr, 0u, kEdges_b63_10D2, sizeof(kEdges_b63_10D2) / sizeof(kEdges_b63_10D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10D5[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0D7u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF0DCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10D5 = {63u, 0xF0D5u, 0x10D5u, 0xF0DCu, 1u, nullptr, 0u, kEdges_b63_10D5, sizeof(kEdges_b63_10D5) / sizeof(kEdges_b63_10D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10D7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0D9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10D7 = {63u, 0xF0D7u, 0x10D7u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_10D7, sizeof(kEdges_b63_10D7) / sizeof(kEdges_b63_10D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10D9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0DCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10D9 = {63u, 0xF0D9u, 0x10D9u, 0x03A0u, 2u, nullptr, 0u, kEdges_b63_10D9, sizeof(kEdges_b63_10D9) / sizeof(kEdges_b63_10D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10DC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10DC = {63u, 0xF0DCu, 0x10DCu, 0xF056u, 2u, nullptr, 0u, kEdges_b63_10DC, sizeof(kEdges_b63_10DC) / sizeof(kEdges_b63_10DC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0E0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10DF = {63u, 0xF0DFu, 0x10DFu, 0u, 0u, nullptr, 0u, kEdges_b63_10DF, sizeof(kEdges_b63_10DF) / sizeof(kEdges_b63_10DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10E0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF0E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10E0 = {63u, 0xF0E0u, 0x10E0u, 0xE522u, 2u, nullptr, 0u, kEdges_b63_10E0, sizeof(kEdges_b63_10E0) / sizeof(kEdges_b63_10E0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10E3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10E3 = {63u, 0xF0E3u, 0x10E3u, 0x06A9u, 2u, nullptr, 0u, kEdges_b63_10E3, sizeof(kEdges_b63_10E3) / sizeof(kEdges_b63_10E3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0E9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10E6 = {63u, 0xF0E6u, 0x10E6u, 0xF6C7u, 2u, nullptr, 0u, kEdges_b63_10E6, sizeof(kEdges_b63_10E6) / sizeof(kEdges_b63_10E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10E9[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF0EDu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10E9 = {63u, 0xF0E9u, 0x10E9u, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_10E9, sizeof(kEdges_b63_10E9) / sizeof(kEdges_b63_10E9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10ED[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10ED = {63u, 0xF0EDu, 0x10EDu, 0x06A9u, 2u, nullptr, 0u, kEdges_b63_10ED, sizeof(kEdges_b63_10ED) / sizeof(kEdges_b63_10ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10F0[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0F2u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF0C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10F0 = {63u, 0xF0F0u, 0x10F0u, 0xF0C0u, 1u, nullptr, 0u, kEdges_b63_10F0, sizeof(kEdges_b63_10F0) / sizeof(kEdges_b63_10F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10F2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0F5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10F2 = {63u, 0xF0F2u, 0x10F2u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_10F2, sizeof(kEdges_b63_10F2) / sizeof(kEdges_b63_10F2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10F5[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0F7u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF100u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10F5 = {63u, 0xF0F5u, 0x10F5u, 0xF100u, 1u, nullptr, 0u, kEdges_b63_10F5, sizeof(kEdges_b63_10F5) / sizeof(kEdges_b63_10F5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10F7 = {63u, 0xF0F7u, 0x10F7u, 0x0051u, 1u, nullptr, 0u, kEdges_b63_10F7, sizeof(kEdges_b63_10F7) / sizeof(kEdges_b63_10F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10F9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10F9 = {63u, 0xF0F9u, 0x10F9u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_10F9, sizeof(kEdges_b63_10F9) / sizeof(kEdges_b63_10F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10FB[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF0FDu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF100u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10FB = {63u, 0xF0FBu, 0x10FBu, 0xF100u, 1u, nullptr, 0u, kEdges_b63_10FB, sizeof(kEdges_b63_10FB) / sizeof(kEdges_b63_10FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_10FD[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF193u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_10FD = {63u, 0xF0FDu, 0x10FDu, 0xF193u, 2u, nullptr, 0u, kEdges_b63_10FD, sizeof(kEdges_b63_10FD) / sizeof(kEdges_b63_10FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1100[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF103u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1100 = {63u, 0xF100u, 0x1100u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b63_1100, sizeof(kEdges_b63_1100) / sizeof(kEdges_b63_1100[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1103[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA89u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF106u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1103 = {63u, 0xF103u, 0x1103u, 0xCA89u, 2u, nullptr, 0u, kEdges_b63_1103, sizeof(kEdges_b63_1103) / sizeof(kEdges_b63_1103[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1106[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF109u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1106 = {63u, 0xF106u, 0x1106u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_1106, sizeof(kEdges_b63_1106) / sizeof(kEdges_b63_1106[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1109[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF10Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF124u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1109 = {63u, 0xF109u, 0x1109u, 0xF124u, 1u, nullptr, 0u, kEdges_b63_1109, sizeof(kEdges_b63_1109) / sizeof(kEdges_b63_1109[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_110B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF6D9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF10Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_110B = {63u, 0xF10Bu, 0x110Bu, 0xF6D9u, 2u, nullptr, 0u, kEdges_b63_110B, sizeof(kEdges_b63_110B) / sizeof(kEdges_b63_110B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_110E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF6D9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF111u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_110E = {63u, 0xF10Eu, 0x110Eu, 0xF6D9u, 2u, nullptr, 0u, kEdges_b63_110E, sizeof(kEdges_b63_110E) / sizeof(kEdges_b63_110E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1111[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF113u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1111 = {63u, 0xF111u, 0x1111u, 0x00E0u, 1u, nullptr, 0u, kEdges_b63_1111, sizeof(kEdges_b63_1111) / sizeof(kEdges_b63_1111[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1113[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF116u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1113 = {63u, 0xF113u, 0x1113u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_1113, sizeof(kEdges_b63_1113) / sizeof(kEdges_b63_1113[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1116[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF118u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1116 = {63u, 0xF116u, 0x1116u, 0x0045u, 1u, nullptr, 0u, kEdges_b63_1116, sizeof(kEdges_b63_1116) / sizeof(kEdges_b63_1116[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1118[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF11Cu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1118 = {63u, 0xF118u, 0x1118u, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_1118, sizeof(kEdges_b63_1118) / sizeof(kEdges_b63_1118[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_111C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF11Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_111C = {63u, 0xF11Cu, 0x111Cu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_111C, sizeof(kEdges_b63_111C) / sizeof(kEdges_b63_111C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_111E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF121u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_111E = {63u, 0xF11Eu, 0x111Eu, 0x03AEu, 2u, nullptr, 0u, kEdges_b63_111E, sizeof(kEdges_b63_111E) / sizeof(kEdges_b63_111E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1121[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF124u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1121 = {63u, 0xF121u, 0x1121u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b63_1121, sizeof(kEdges_b63_1121) / sizeof(kEdges_b63_1121[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1124[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF126u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1124 = {63u, 0xF124u, 0x1124u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_1124, sizeof(kEdges_b63_1124) / sizeof(kEdges_b63_1124[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1126[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF129u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1126 = {63u, 0xF126u, 0x1126u, 0xF21Cu, 2u, nullptr, 0u, kEdges_b63_1126, sizeof(kEdges_b63_1126) / sizeof(kEdges_b63_1126[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1129[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF12Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1129 = {63u, 0xF129u, 0x1129u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_1129, sizeof(kEdges_b63_1129) / sizeof(kEdges_b63_1129[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_112C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF12Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_112C = {63u, 0xF12Cu, 0x112Cu, 0x0005u, 1u, nullptr, 0u, kEdges_b63_112C, sizeof(kEdges_b63_112C) / sizeof(kEdges_b63_112C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_112E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF131u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_112E = {63u, 0xF12Eu, 0x112Eu, 0xF21Fu, 2u, nullptr, 0u, kEdges_b63_112E, sizeof(kEdges_b63_112E) / sizeof(kEdges_b63_112E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1131[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF134u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1131 = {63u, 0xF131u, 0x1131u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_1131, sizeof(kEdges_b63_1131) / sizeof(kEdges_b63_1131[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1134[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF137u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1134 = {63u, 0xF134u, 0x1134u, 0xC62Bu, 2u, nullptr, 0u, kEdges_b63_1134, sizeof(kEdges_b63_1134) / sizeof(kEdges_b63_1134[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1137[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF13Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1137 = {63u, 0xF137u, 0x1137u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b63_1137, sizeof(kEdges_b63_1137) / sizeof(kEdges_b63_1137[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_113A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF13Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_113A = {63u, 0xF13Au, 0x113Au, 0x0042u, 1u, nullptr, 0u, kEdges_b63_113A, sizeof(kEdges_b63_113A) / sizeof(kEdges_b63_113A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_113C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF13Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_113C = {63u, 0xF13Cu, 0x113Cu, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_113C, sizeof(kEdges_b63_113C) / sizeof(kEdges_b63_113C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_113E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF140u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF16Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_113E = {63u, 0xF13Eu, 0x113Eu, 0xF16Du, 1u, nullptr, 0u, kEdges_b63_113E, sizeof(kEdges_b63_113E) / sizeof(kEdges_b63_113E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1140[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF142u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1140 = {63u, 0xF140u, 0x1140u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_1140, sizeof(kEdges_b63_1140) / sizeof(kEdges_b63_1140[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1142[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF143u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1142 = {63u, 0xF142u, 0x1142u, 0u, 0u, nullptr, 0u, kEdges_b63_1142, sizeof(kEdges_b63_1142) / sizeof(kEdges_b63_1142[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1143[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF146u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1143 = {63u, 0xF143u, 0x1143u, 0xF22Au, 2u, nullptr, 0u, kEdges_b63_1143, sizeof(kEdges_b63_1143) / sizeof(kEdges_b63_1143[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1146[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF147u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1146 = {63u, 0xF146u, 0x1146u, 0u, 0u, nullptr, 0u, kEdges_b63_1146, sizeof(kEdges_b63_1146) / sizeof(kEdges_b63_1146[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1147[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF149u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1147 = {63u, 0xF147u, 0x1147u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_1147, sizeof(kEdges_b63_1147) / sizeof(kEdges_b63_1147[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1149[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF14Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1149 = {63u, 0xF149u, 0x1149u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_1149, sizeof(kEdges_b63_1149) / sizeof(kEdges_b63_1149[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_114B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF14Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_114B = {63u, 0xF14Bu, 0x114Bu, 0u, 0u, nullptr, 0u, kEdges_b63_114B, sizeof(kEdges_b63_114B) / sizeof(kEdges_b63_114B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_114C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF14Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_114C = {63u, 0xF14Cu, 0x114Cu, 0xF222u, 2u, nullptr, 0u, kEdges_b63_114C, sizeof(kEdges_b63_114C) / sizeof(kEdges_b63_114C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_114F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF151u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_114F = {63u, 0xF14Fu, 0x114Fu, 0x0004u, 1u, nullptr, 0u, kEdges_b63_114F, sizeof(kEdges_b63_114F) / sizeof(kEdges_b63_114F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1151[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF153u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1151 = {63u, 0xF151u, 0x1151u, 0x0042u, 1u, nullptr, 0u, kEdges_b63_1151, sizeof(kEdges_b63_1151) / sizeof(kEdges_b63_1151[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1153[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF155u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1153 = {63u, 0xF153u, 0x1153u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_1153, sizeof(kEdges_b63_1153) / sizeof(kEdges_b63_1153[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1155[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF156u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1155 = {63u, 0xF155u, 0x1155u, 0u, 0u, nullptr, 0u, kEdges_b63_1155, sizeof(kEdges_b63_1155) / sizeof(kEdges_b63_1155[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1156[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF157u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1156 = {63u, 0xF156u, 0x1156u, 0u, 0u, nullptr, 0u, kEdges_b63_1156, sizeof(kEdges_b63_1156) / sizeof(kEdges_b63_1156[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1157[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF158u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1157 = {63u, 0xF157u, 0x1157u, 0u, 0u, nullptr, 0u, kEdges_b63_1157, sizeof(kEdges_b63_1157) / sizeof(kEdges_b63_1157[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1158[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF15Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1158 = {63u, 0xF158u, 0x1158u, 0xF22Au, 2u, nullptr, 0u, kEdges_b63_1158, sizeof(kEdges_b63_1158) / sizeof(kEdges_b63_1158[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_115B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF15Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_115B = {63u, 0xF15Bu, 0x115Bu, 0u, 0u, nullptr, 0u, kEdges_b63_115B, sizeof(kEdges_b63_115B) / sizeof(kEdges_b63_115B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_115C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF15Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_115C = {63u, 0xF15Cu, 0x115Cu, 0x0005u, 1u, nullptr, 0u, kEdges_b63_115C, sizeof(kEdges_b63_115C) / sizeof(kEdges_b63_115C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_115E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF160u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_115E = {63u, 0xF15Eu, 0x115Eu, 0x0007u, 1u, nullptr, 0u, kEdges_b63_115E, sizeof(kEdges_b63_115E) / sizeof(kEdges_b63_115E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1160[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF161u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1160 = {63u, 0xF160u, 0x1160u, 0u, 0u, nullptr, 0u, kEdges_b63_1160, sizeof(kEdges_b63_1160) / sizeof(kEdges_b63_1160[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1161[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF164u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1161 = {63u, 0xF161u, 0x1161u, 0xF222u, 2u, nullptr, 0u, kEdges_b63_1161, sizeof(kEdges_b63_1161) / sizeof(kEdges_b63_1161[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1164[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF166u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1164 = {63u, 0xF164u, 0x1164u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_1164, sizeof(kEdges_b63_1164) / sizeof(kEdges_b63_1164[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1166[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF168u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1166 = {63u, 0xF166u, 0x1166u, 0x0032u, 1u, nullptr, 0u, kEdges_b63_1166, sizeof(kEdges_b63_1166) / sizeof(kEdges_b63_1166[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1168[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF16Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1168 = {63u, 0xF168u, 0x1168u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_1168, sizeof(kEdges_b63_1168) / sizeof(kEdges_b63_1168[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_116A[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF124u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_116A = {63u, 0xF16Au, 0x116Au, 0xF124u, 2u, nullptr, 0u, kEdges_b63_116A, sizeof(kEdges_b63_116A) / sizeof(kEdges_b63_116A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_116D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF16Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_116D = {63u, 0xF16Du, 0x116Du, 0x0042u, 1u, nullptr, 0u, kEdges_b63_116D, sizeof(kEdges_b63_116D) / sizeof(kEdges_b63_116D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_116F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF171u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_116F = {63u, 0xF16Fu, 0x116Fu, 0x0090u, 1u, nullptr, 0u, kEdges_b63_116F, sizeof(kEdges_b63_116F) / sizeof(kEdges_b63_116F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1171[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF173u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF134u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1171 = {63u, 0xF171u, 0x1171u, 0xF134u, 1u, nullptr, 0u, kEdges_b63_1171, sizeof(kEdges_b63_1171) / sizeof(kEdges_b63_1171[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1173[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF175u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1173 = {63u, 0xF173u, 0x1173u, 0x0038u, 1u, nullptr, 0u, kEdges_b63_1173, sizeof(kEdges_b63_1173) / sizeof(kEdges_b63_1173[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1175[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF177u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1175 = {63u, 0xF175u, 0x1175u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_1175, sizeof(kEdges_b63_1175) / sizeof(kEdges_b63_1175[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1177[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF179u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1177 = {63u, 0xF177u, 0x1177u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_1177, sizeof(kEdges_b63_1177) / sizeof(kEdges_b63_1177[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1179[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF17Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1179 = {63u, 0xF179u, 0x1179u, 0u, 0u, nullptr, 0u, kEdges_b63_1179, sizeof(kEdges_b63_1179) / sizeof(kEdges_b63_1179[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_117A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF17Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_117A = {63u, 0xF17Au, 0x117Au, 0u, 0u, nullptr, 0u, kEdges_b63_117A, sizeof(kEdges_b63_117A) / sizeof(kEdges_b63_117A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_117B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF17Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_117B = {63u, 0xF17Bu, 0x117Bu, 0x0004u, 1u, nullptr, 0u, kEdges_b63_117B, sizeof(kEdges_b63_117B) / sizeof(kEdges_b63_117B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_117D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF17Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_117D = {63u, 0xF17Du, 0x117Du, 0u, 0u, nullptr, 0u, kEdges_b63_117D, sizeof(kEdges_b63_117D) / sizeof(kEdges_b63_117D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_117E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF181u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_117E = {63u, 0xF17Eu, 0x117Eu, 0xF22Eu, 2u, nullptr, 0u, kEdges_b63_117E, sizeof(kEdges_b63_117E) / sizeof(kEdges_b63_117E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1181[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF183u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF18Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1181 = {63u, 0xF181u, 0x1181u, 0xF18Au, 1u, nullptr, 0u, kEdges_b63_1181, sizeof(kEdges_b63_1181) / sizeof(kEdges_b63_1181[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1183[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF186u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1183 = {63u, 0xF183u, 0x1183u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_1183, sizeof(kEdges_b63_1183) / sizeof(kEdges_b63_1183[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1186[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF188u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF134u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1186 = {63u, 0xF186u, 0x1186u, 0xF134u, 1u, nullptr, 0u, kEdges_b63_1186, sizeof(kEdges_b63_1186) / sizeof(kEdges_b63_1186[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1188[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF18Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1188 = {63u, 0xF188u, 0x1188u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_1188, sizeof(kEdges_b63_1188) / sizeof(kEdges_b63_1188[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_118A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF18Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_118A = {63u, 0xF18Au, 0x118Au, 0x0051u, 1u, nullptr, 0u, kEdges_b63_118A, sizeof(kEdges_b63_118A) / sizeof(kEdges_b63_118A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_118C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF18Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_118C = {63u, 0xF18Cu, 0x118Cu, 0x0033u, 1u, nullptr, 0u, kEdges_b63_118C, sizeof(kEdges_b63_118C) / sizeof(kEdges_b63_118C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_118E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF190u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_118E = {63u, 0xF18Eu, 0x118Eu, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_118E, sizeof(kEdges_b63_118E) / sizeof(kEdges_b63_118E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1190[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA3Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF193u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1190 = {63u, 0xF190u, 0x1190u, 0xCA3Du, 2u, nullptr, 0u, kEdges_b63_1190, sizeof(kEdges_b63_1190) / sizeof(kEdges_b63_1190[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1193[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF195u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1193 = {63u, 0xF193u, 0x1193u, 0x0051u, 1u, nullptr, 0u, kEdges_b63_1193, sizeof(kEdges_b63_1193) / sizeof(kEdges_b63_1193[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1195[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF198u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1195 = {63u, 0xF195u, 0x1195u, 0xFF5Cu, 2u, nullptr, 0u, kEdges_b63_1195, sizeof(kEdges_b63_1195) / sizeof(kEdges_b63_1195[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1198[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF19Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF1A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1198 = {63u, 0xF198u, 0x1198u, 0xF1A8u, 1u, nullptr, 0u, kEdges_b63_1198, sizeof(kEdges_b63_1198) / sizeof(kEdges_b63_1198[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_119A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF19Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_119A = {63u, 0xF19Au, 0x119Au, 0x0004u, 1u, nullptr, 0u, kEdges_b63_119A, sizeof(kEdges_b63_119A) / sizeof(kEdges_b63_119A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_119C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF19Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF1A1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_119C = {63u, 0xF19Cu, 0x119Cu, 0xF1A1u, 1u, nullptr, 0u, kEdges_b63_119C, sizeof(kEdges_b63_119C) / sizeof(kEdges_b63_119C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_119E[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF6CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_119E = {63u, 0xF19Eu, 0x119Eu, 0xF6CFu, 2u, nullptr, 0u, kEdges_b63_119E, sizeof(kEdges_b63_119E) / sizeof(kEdges_b63_119E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11A1[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF6D4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11A1 = {63u, 0xF1A1u, 0x11A1u, 0xF6D4u, 2u, nullptr, 0u, kEdges_b63_11A1, sizeof(kEdges_b63_11A1) / sizeof(kEdges_b63_11A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11A8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9BFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1ABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11A8 = {63u, 0xF1A8u, 0x11A8u, 0xC9BFu, 2u, nullptr, 0u, kEdges_b63_11A8, sizeof(kEdges_b63_11A8) / sizeof(kEdges_b63_11A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11AB[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF1AFu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11AB = {63u, 0xF1ABu, 0x11ABu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_11AB, sizeof(kEdges_b63_11AB) / sizeof(kEdges_b63_11AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11AF[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11AF = {63u, 0xF1AFu, 0x11AFu, 0u, 0u, nullptr, 0u, kEdges_b63_11AF, sizeof(kEdges_b63_11AF) / sizeof(kEdges_b63_11AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11B0 = {63u, 0xF1B0u, 0x11B0u, 0x003Au, 1u, nullptr, 0u, kEdges_b63_11B0, sizeof(kEdges_b63_11B0) / sizeof(kEdges_b63_11B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11B2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11B2 = {63u, 0xF1B2u, 0x11B2u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_11B2, sizeof(kEdges_b63_11B2) / sizeof(kEdges_b63_11B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11B5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1B7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11B5 = {63u, 0xF1B5u, 0x11B5u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_11B5, sizeof(kEdges_b63_11B5) / sizeof(kEdges_b63_11B5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11B7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1BAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11B7 = {63u, 0xF1B7u, 0x11B7u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_11B7, sizeof(kEdges_b63_11B7) / sizeof(kEdges_b63_11B7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11BA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1BCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11BA = {63u, 0xF1BAu, 0x11BAu, 0x003Bu, 1u, nullptr, 0u, kEdges_b63_11BA, sizeof(kEdges_b63_11BA) / sizeof(kEdges_b63_11BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11BC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1BFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11BC = {63u, 0xF1BCu, 0x11BCu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_11BC, sizeof(kEdges_b63_11BC) / sizeof(kEdges_b63_11BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11BF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1C1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11BF = {63u, 0xF1BFu, 0x11BFu, 0x0003u, 1u, nullptr, 0u, kEdges_b63_11BF, sizeof(kEdges_b63_11BF) / sizeof(kEdges_b63_11BF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11C1[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11C1 = {63u, 0xF1C1u, 0x11C1u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_11C1, sizeof(kEdges_b63_11C1) / sizeof(kEdges_b63_11C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11C4 = {63u, 0xF1C4u, 0x11C4u, 0x005Fu, 1u, nullptr, 0u, kEdges_b63_11C4, sizeof(kEdges_b63_11C4) / sizeof(kEdges_b63_11C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11C6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11C6 = {63u, 0xF1C6u, 0x11C6u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_11C6, sizeof(kEdges_b63_11C6) / sizeof(kEdges_b63_11C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11C9 = {63u, 0xF1C9u, 0x11C9u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_11C9, sizeof(kEdges_b63_11C9) / sizeof(kEdges_b63_11C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11CB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11CB = {63u, 0xF1CBu, 0x11CBu, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_11CB, sizeof(kEdges_b63_11CB) / sizeof(kEdges_b63_11CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11CE[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF1B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11CE = {63u, 0xF1CEu, 0x11CEu, 0xF1B0u, 2u, nullptr, 0u, kEdges_b63_11CE, sizeof(kEdges_b63_11CE) / sizeof(kEdges_b63_11CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11D1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11D1 = {63u, 0xF1D1u, 0x11D1u, 0x0060u, 1u, nullptr, 0u, kEdges_b63_11D1, sizeof(kEdges_b63_11D1) / sizeof(kEdges_b63_11D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11D3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1D6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11D3 = {63u, 0xF1D3u, 0x11D3u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_11D3, sizeof(kEdges_b63_11D3) / sizeof(kEdges_b63_11D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11D6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11D6 = {63u, 0xF1D6u, 0x11D6u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_11D6, sizeof(kEdges_b63_11D6) / sizeof(kEdges_b63_11D6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11D8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11D8 = {63u, 0xF1D8u, 0x11D8u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_11D8, sizeof(kEdges_b63_11D8) / sizeof(kEdges_b63_11D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11DB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11DB = {63u, 0xF1DBu, 0x11DBu, 0x0061u, 1u, nullptr, 0u, kEdges_b63_11DB, sizeof(kEdges_b63_11DB) / sizeof(kEdges_b63_11DB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11DD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1E0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11DD = {63u, 0xF1DDu, 0x11DDu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_11DD, sizeof(kEdges_b63_11DD) / sizeof(kEdges_b63_11DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11E0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11E0 = {63u, 0xF1E0u, 0x11E0u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_11E0, sizeof(kEdges_b63_11E0) / sizeof(kEdges_b63_11E0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11E2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11E2 = {63u, 0xF1E2u, 0x11E2u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_11E2, sizeof(kEdges_b63_11E2) / sizeof(kEdges_b63_11E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11E5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1E7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11E5 = {63u, 0xF1E5u, 0x11E5u, 0x0062u, 1u, nullptr, 0u, kEdges_b63_11E5, sizeof(kEdges_b63_11E5) / sizeof(kEdges_b63_11E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11E7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1EAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11E7 = {63u, 0xF1E7u, 0x11E7u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_11E7, sizeof(kEdges_b63_11E7) / sizeof(kEdges_b63_11E7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11EA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1ECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11EA = {63u, 0xF1EAu, 0x11EAu, 0x0005u, 1u, nullptr, 0u, kEdges_b63_11EA, sizeof(kEdges_b63_11EA) / sizeof(kEdges_b63_11EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11EC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1EFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11EC = {63u, 0xF1ECu, 0x11ECu, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_11EC, sizeof(kEdges_b63_11EC) / sizeof(kEdges_b63_11EC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11EF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11EF = {63u, 0xF1EFu, 0x11EFu, 0x0063u, 1u, nullptr, 0u, kEdges_b63_11EF, sizeof(kEdges_b63_11EF) / sizeof(kEdges_b63_11EF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11F1[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11F1 = {63u, 0xF1F1u, 0x11F1u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b63_11F1, sizeof(kEdges_b63_11F1) / sizeof(kEdges_b63_11F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11F4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF1F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11F4 = {63u, 0xF1F4u, 0x11F4u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_11F4, sizeof(kEdges_b63_11F4) / sizeof(kEdges_b63_11F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11F6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF1F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11F6 = {63u, 0xF1F6u, 0x11F6u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_11F6, sizeof(kEdges_b63_11F6) / sizeof(kEdges_b63_11F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_11F9[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF1D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_11F9 = {63u, 0xF1F9u, 0x11F9u, 0xF1D1u, 2u, nullptr, 0u, kEdges_b63_11F9, sizeof(kEdges_b63_11F9) / sizeof(kEdges_b63_11F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_124A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF24Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_124A = {63u, 0xF24Au, 0x124Au, 0xC62Bu, 2u, nullptr, 0u, kEdges_b63_124A, sizeof(kEdges_b63_124A) / sizeof(kEdges_b63_124A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_124D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF24Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_124D = {63u, 0xF24Du, 0x124Du, 0x0042u, 1u, nullptr, 0u, kEdges_b63_124D, sizeof(kEdges_b63_124D) / sizeof(kEdges_b63_124D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_124F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF251u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_124F = {63u, 0xF24Fu, 0x124Fu, 0x0090u, 1u, nullptr, 0u, kEdges_b63_124F, sizeof(kEdges_b63_124F) / sizeof(kEdges_b63_124F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1251[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF253u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF24Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1251 = {63u, 0xF251u, 0x1251u, 0xF24Au, 1u, nullptr, 0u, kEdges_b63_1251, sizeof(kEdges_b63_1251) / sizeof(kEdges_b63_1251[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1253[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1253 = {63u, 0xF253u, 0x1253u, 0u, 0u, nullptr, 0u, kEdges_b63_1253, sizeof(kEdges_b63_1253) / sizeof(kEdges_b63_1253[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1254[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF256u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1254 = {63u, 0xF254u, 0x1254u, 0x0060u, 1u, nullptr, 0u, kEdges_b63_1254, sizeof(kEdges_b63_1254) / sizeof(kEdges_b63_1254[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1256[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF25Au, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 63, 0xF258u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1256 = {63u, 0xF256u, 0x1256u, 0xF25Au, 1u, nullptr, 0u, kEdges_b63_1256, sizeof(kEdges_b63_1256) / sizeof(kEdges_b63_1256[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1258[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF25Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1258 = {63u, 0xF258u, 0x1258u, 0x0090u, 1u, nullptr, 0u, kEdges_b63_1258, sizeof(kEdges_b63_1258) / sizeof(kEdges_b63_1258[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_125A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF25Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_125A = {63u, 0xF25Au, 0x125Au, 0x0007u, 1u, nullptr, 0u, kEdges_b63_125A, sizeof(kEdges_b63_125A) / sizeof(kEdges_b63_125A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_125C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF25Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_125C = {63u, 0xF25Cu, 0x125Cu, 0x0016u, 1u, nullptr, 0u, kEdges_b63_125C, sizeof(kEdges_b63_125C) / sizeof(kEdges_b63_125C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_125E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF260u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_125E = {63u, 0xF25Eu, 0x125Eu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_125E, sizeof(kEdges_b63_125E) / sizeof(kEdges_b63_125E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1260[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF262u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1260 = {63u, 0xF260u, 0x1260u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_1260, sizeof(kEdges_b63_1260) / sizeof(kEdges_b63_1260[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1262[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF265u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1262 = {63u, 0xF262u, 0x1262u, 0x03A0u, 2u, nullptr, 0u, kEdges_b63_1262, sizeof(kEdges_b63_1262) / sizeof(kEdges_b63_1262[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1265[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF267u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF28Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1265 = {63u, 0xF265u, 0x1265u, 0xF28Au, 1u, nullptr, 0u, kEdges_b63_1265, sizeof(kEdges_b63_1265) / sizeof(kEdges_b63_1265[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1267[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF269u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1267 = {63u, 0xF267u, 0x1267u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_1267, sizeof(kEdges_b63_1267) / sizeof(kEdges_b63_1267[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1269[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF26Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1269 = {63u, 0xF269u, 0x1269u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_1269, sizeof(kEdges_b63_1269) / sizeof(kEdges_b63_1269[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_126B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF26Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF28Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_126B = {63u, 0xF26Bu, 0x126Bu, 0xF28Du, 1u, nullptr, 0u, kEdges_b63_126B, sizeof(kEdges_b63_126B) / sizeof(kEdges_b63_126B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_126D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF26Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_126D = {63u, 0xF26Du, 0x126Du, 0x0007u, 1u, nullptr, 0u, kEdges_b63_126D, sizeof(kEdges_b63_126D) / sizeof(kEdges_b63_126D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_126F[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF273u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_126F = {63u, 0xF26Fu, 0x126Fu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_126F, sizeof(kEdges_b63_126F) / sizeof(kEdges_b63_126F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1273[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF275u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1273 = {63u, 0xF273u, 0x1273u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_1273, sizeof(kEdges_b63_1273) / sizeof(kEdges_b63_1273[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1275[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF277u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1275 = {63u, 0xF275u, 0x1275u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_1275, sizeof(kEdges_b63_1275) / sizeof(kEdges_b63_1275[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1277[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF278u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1277 = {63u, 0xF277u, 0x1277u, 0u, 0u, nullptr, 0u, kEdges_b63_1277, sizeof(kEdges_b63_1277) / sizeof(kEdges_b63_1277[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1278[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF27Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1278 = {63u, 0xF278u, 0x1278u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_1278, sizeof(kEdges_b63_1278) / sizeof(kEdges_b63_1278[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_127B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF27Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_127B = {63u, 0xF27Bu, 0x127Bu, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_127B, sizeof(kEdges_b63_127B) / sizeof(kEdges_b63_127B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_127D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF280u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_127D = {63u, 0xF27Du, 0x127Du, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_127D, sizeof(kEdges_b63_127D) / sizeof(kEdges_b63_127D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1280[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF281u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1280 = {63u, 0xF280u, 0x1280u, 0u, 0u, nullptr, 0u, kEdges_b63_1280, sizeof(kEdges_b63_1280) / sizeof(kEdges_b63_1280[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1281[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF283u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1281 = {63u, 0xF281u, 0x1281u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_1281, sizeof(kEdges_b63_1281) / sizeof(kEdges_b63_1281[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1283[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF284u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1283 = {63u, 0xF283u, 0x1283u, 0u, 0u, nullptr, 0u, kEdges_b63_1283, sizeof(kEdges_b63_1283) / sizeof(kEdges_b63_1283[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1284[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF286u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1284 = {63u, 0xF284u, 0x1284u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_1284, sizeof(kEdges_b63_1284) / sizeof(kEdges_b63_1284[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1286[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF287u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1286 = {63u, 0xF286u, 0x1286u, 0u, 0u, nullptr, 0u, kEdges_b63_1286, sizeof(kEdges_b63_1286) / sizeof(kEdges_b63_1286[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1287[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF28Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1287 = {63u, 0xF287u, 0x1287u, 0xE522u, 2u, nullptr, 0u, kEdges_b63_1287, sizeof(kEdges_b63_1287) / sizeof(kEdges_b63_1287[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_128A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF28Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_128A = {63u, 0xF28Au, 0x128Au, 0u, 0u, nullptr, 0u, kEdges_b63_128A, sizeof(kEdges_b63_128A) / sizeof(kEdges_b63_128A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_128B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF28Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF262u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_128B = {63u, 0xF28Bu, 0x128Bu, 0xF262u, 1u, nullptr, 0u, kEdges_b63_128B, sizeof(kEdges_b63_128B) / sizeof(kEdges_b63_128B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_128D[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_128D = {63u, 0xF28Du, 0x128Du, 0u, 0u, nullptr, 0u, kEdges_b63_128D, sizeof(kEdges_b63_128D) / sizeof(kEdges_b63_128D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12AA[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12AA = {63u, 0xF2AAu, 0x12AAu, 0u, 0u, nullptr, 0u, kEdges_b63_12AA, sizeof(kEdges_b63_12AA) / sizeof(kEdges_b63_12AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12AB[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF2AFu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12AB = {63u, 0xF2ABu, 0x12ABu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_12AB, sizeof(kEdges_b63_12AB) / sizeof(kEdges_b63_12AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12AF[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF2B3u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12AF = {63u, 0xF2AFu, 0x12AFu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_12AF, sizeof(kEdges_b63_12AF) / sizeof(kEdges_b63_12AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12B3[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12B3 = {63u, 0xF2B3u, 0x12B3u, 0u, 0u, nullptr, 0u, kEdges_b63_12B3, sizeof(kEdges_b63_12B3) / sizeof(kEdges_b63_12B3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12B4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF2ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF2B7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12B4 = {63u, 0xF2B4u, 0x12B4u, 0xF2ABu, 2u, nullptr, 0u, kEdges_b63_12B4, sizeof(kEdges_b63_12B4) / sizeof(kEdges_b63_12B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12B7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF473u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF2BAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12B7 = {63u, 0xF2B7u, 0x12B7u, 0xF473u, 2u, nullptr, 0u, kEdges_b63_12B7, sizeof(kEdges_b63_12B7) / sizeof(kEdges_b63_12B7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12BA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF2BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12BA = {63u, 0xF2BAu, 0x12BAu, 0xE1DDu, 2u, nullptr, 0u, kEdges_b63_12BA, sizeof(kEdges_b63_12BA) / sizeof(kEdges_b63_12BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12BD[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF2C1u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12BD = {63u, 0xF2BDu, 0x12BDu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_12BD, sizeof(kEdges_b63_12BD) / sizeof(kEdges_b63_12BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12C1[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12C1 = {63u, 0xF2C1u, 0x12C1u, 0u, 0u, nullptr, 0u, kEdges_b63_12C1, sizeof(kEdges_b63_12C1) / sizeof(kEdges_b63_12C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12C2 = {63u, 0xF2C2u, 0x12C2u, 0x0015u, 1u, nullptr, 0u, kEdges_b63_12C2, sizeof(kEdges_b63_12C2) / sizeof(kEdges_b63_12C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12C4 = {63u, 0xF2C4u, 0x12C4u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_12C4, sizeof(kEdges_b63_12C4) / sizeof(kEdges_b63_12C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12C6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF2ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF2C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12C6 = {63u, 0xF2C6u, 0x12C6u, 0xF2ABu, 2u, nullptr, 0u, kEdges_b63_12C6, sizeof(kEdges_b63_12C6) / sizeof(kEdges_b63_12C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12C9 = {63u, 0xF2C9u, 0x12C9u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_12C9, sizeof(kEdges_b63_12C9) / sizeof(kEdges_b63_12C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12CB = {63u, 0xF2CBu, 0x12CBu, 0x0050u, 1u, nullptr, 0u, kEdges_b63_12CB, sizeof(kEdges_b63_12CB) / sizeof(kEdges_b63_12CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12CD[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF2D1u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12CD = {63u, 0xF2CDu, 0x12CDu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_12CD, sizeof(kEdges_b63_12CD) / sizeof(kEdges_b63_12CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12D1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12D1 = {63u, 0xF2D1u, 0x12D1u, 0u, 0u, nullptr, 0u, kEdges_b63_12D1, sizeof(kEdges_b63_12D1) / sizeof(kEdges_b63_12D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12D2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12D2 = {63u, 0xF2D2u, 0x12D2u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_12D2, sizeof(kEdges_b63_12D2) / sizeof(kEdges_b63_12D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12D5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12D5 = {63u, 0xF2D5u, 0x12D5u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_12D5, sizeof(kEdges_b63_12D5) / sizeof(kEdges_b63_12D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12D8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12D8 = {63u, 0xF2D8u, 0x12D8u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_12D8, sizeof(kEdges_b63_12D8) / sizeof(kEdges_b63_12D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2DCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12DA = {63u, 0xF2DAu, 0x12DAu, 0x00A7u, 1u, nullptr, 0u, kEdges_b63_12DA, sizeof(kEdges_b63_12DA) / sizeof(kEdges_b63_12DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12DC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF2DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12DC = {63u, 0xF2DCu, 0x12DCu, 0xE522u, 2u, nullptr, 0u, kEdges_b63_12DC, sizeof(kEdges_b63_12DC) / sizeof(kEdges_b63_12DC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12DF = {63u, 0xF2DFu, 0x12DFu, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_12DF, sizeof(kEdges_b63_12DF) / sizeof(kEdges_b63_12DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12E2 = {63u, 0xF2E2u, 0x12E2u, 0xF563u, 2u, nullptr, 0u, kEdges_b63_12E2, sizeof(kEdges_b63_12E2) / sizeof(kEdges_b63_12E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12E5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12E5 = {63u, 0xF2E5u, 0x12E5u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_12E5, sizeof(kEdges_b63_12E5) / sizeof(kEdges_b63_12E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12E8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12E8 = {63u, 0xF2E8u, 0x12E8u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_12E8, sizeof(kEdges_b63_12E8) / sizeof(kEdges_b63_12E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12EB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2EEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12EB = {63u, 0xF2EBu, 0x12EBu, 0xF569u, 2u, nullptr, 0u, kEdges_b63_12EB, sizeof(kEdges_b63_12EB) / sizeof(kEdges_b63_12EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12EE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12EE = {63u, 0xF2EEu, 0x12EEu, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_12EE, sizeof(kEdges_b63_12EE) / sizeof(kEdges_b63_12EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12F1[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF2F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12F1 = {63u, 0xF2F1u, 0x12F1u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b63_12F1, sizeof(kEdges_b63_12F1) / sizeof(kEdges_b63_12F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12F4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF2F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12F4 = {63u, 0xF2F4u, 0x12F4u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b63_12F4, sizeof(kEdges_b63_12F4) / sizeof(kEdges_b63_12F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12F7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF2FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12F7 = {63u, 0xF2F7u, 0x12F7u, 0xC62Bu, 2u, nullptr, 0u, kEdges_b63_12F7, sizeof(kEdges_b63_12F7) / sizeof(kEdges_b63_12F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12FA = {63u, 0xF2FAu, 0x12FAu, 0x0042u, 1u, nullptr, 0u, kEdges_b63_12FA, sizeof(kEdges_b63_12FA) / sizeof(kEdges_b63_12FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12FC[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF2FEu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF2F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12FC = {63u, 0xF2FCu, 0x12FCu, 0xF2F4u, 1u, nullptr, 0u, kEdges_b63_12FC, sizeof(kEdges_b63_12FC) / sizeof(kEdges_b63_12FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_12FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF301u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_12FE = {63u, 0xF2FEu, 0x12FEu, 0xFF5Bu, 2u, nullptr, 0u, kEdges_b63_12FE, sizeof(kEdges_b63_12FE) / sizeof(kEdges_b63_12FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1301[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF303u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF37Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1301 = {63u, 0xF301u, 0x1301u, 0xF37Au, 1u, nullptr, 0u, kEdges_b63_1301, sizeof(kEdges_b63_1301) / sizeof(kEdges_b63_1301[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1303[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF306u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1303 = {63u, 0xF303u, 0x1303u, 0xFF58u, 2u, nullptr, 0u, kEdges_b63_1303, sizeof(kEdges_b63_1303) / sizeof(kEdges_b63_1303[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1306[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF308u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF348u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1306 = {63u, 0xF306u, 0x1306u, 0xF348u, 1u, nullptr, 0u, kEdges_b63_1306, sizeof(kEdges_b63_1306) / sizeof(kEdges_b63_1306[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1308[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF3ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF30Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1308 = {63u, 0xF308u, 0x1308u, 0xF3ABu, 2u, nullptr, 0u, kEdges_b63_1308, sizeof(kEdges_b63_1308) / sizeof(kEdges_b63_1308[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_130B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF30Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_130B = {63u, 0xF30Bu, 0x130Bu, 0x0300u, 2u, nullptr, 0u, kEdges_b63_130B, sizeof(kEdges_b63_130B) / sizeof(kEdges_b63_130B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_130E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF310u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF320u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_130E = {63u, 0xF30Eu, 0x130Eu, 0xF320u, 1u, nullptr, 0u, kEdges_b63_130E, sizeof(kEdges_b63_130E) / sizeof(kEdges_b63_130E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1310[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF312u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1310 = {63u, 0xF310u, 0x1310u, 0x007Fu, 1u, nullptr, 0u, kEdges_b63_1310, sizeof(kEdges_b63_1310) / sizeof(kEdges_b63_1310[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1312[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF313u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1312 = {63u, 0xF312u, 0x1312u, 0u, 0u, nullptr, 0u, kEdges_b63_1312, sizeof(kEdges_b63_1312) / sizeof(kEdges_b63_1312[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1313[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF315u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1313 = {63u, 0xF313u, 0x1313u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1313, sizeof(kEdges_b63_1313) / sizeof(kEdges_b63_1313[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1315[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF318u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1315 = {63u, 0xF315u, 0x1315u, 0x0300u, 2u, nullptr, 0u, kEdges_b63_1315, sizeof(kEdges_b63_1315) / sizeof(kEdges_b63_1315[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1318[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF31Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1318 = {63u, 0xF318u, 0x1318u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1318, sizeof(kEdges_b63_1318) / sizeof(kEdges_b63_1318[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_131A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF31Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_131A = {63u, 0xF31Au, 0x131Au, 0x03A0u, 2u, nullptr, 0u, kEdges_b63_131A, sizeof(kEdges_b63_131A) / sizeof(kEdges_b63_131A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_131D[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF2D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_131D = {63u, 0xF31Du, 0x131Du, 0xF2D8u, 2u, nullptr, 0u, kEdges_b63_131D, sizeof(kEdges_b63_131D) / sizeof(kEdges_b63_131D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1320[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF322u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1320 = {63u, 0xF320u, 0x1320u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_1320, sizeof(kEdges_b63_1320) / sizeof(kEdges_b63_1320[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1322[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF325u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1322 = {63u, 0xF322u, 0x1322u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b63_1322, sizeof(kEdges_b63_1322) / sizeof(kEdges_b63_1322[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1325[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF327u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF2D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1325 = {63u, 0xF325u, 0x1325u, 0xF2D8u, 1u, nullptr, 0u, kEdges_b63_1325, sizeof(kEdges_b63_1325) / sizeof(kEdges_b63_1325[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1327[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF329u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1327 = {63u, 0xF327u, 0x1327u, 0x0010u, 1u, nullptr, 0u, kEdges_b63_1327, sizeof(kEdges_b63_1327) / sizeof(kEdges_b63_1327[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1329[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF32Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF318u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1329 = {63u, 0xF329u, 0x1329u, 0xF318u, 1u, nullptr, 0u, kEdges_b63_1329, sizeof(kEdges_b63_1329) / sizeof(kEdges_b63_1329[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_132B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF32Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_132B = {63u, 0xF32Bu, 0x132Bu, 0x009Du, 1u, nullptr, 0u, kEdges_b63_132B, sizeof(kEdges_b63_132B) / sizeof(kEdges_b63_132B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_132D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF330u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_132D = {63u, 0xF32Du, 0x132Du, 0xE522u, 2u, nullptr, 0u, kEdges_b63_132D, sizeof(kEdges_b63_132D) / sizeof(kEdges_b63_132D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1330[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF333u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1330 = {63u, 0xF330u, 0x1330u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_1330, sizeof(kEdges_b63_1330) / sizeof(kEdges_b63_1330[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1333[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF336u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1333 = {63u, 0xF333u, 0x1333u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_1333, sizeof(kEdges_b63_1333) / sizeof(kEdges_b63_1333[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1336[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF339u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1336 = {63u, 0xF336u, 0x1336u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_1336, sizeof(kEdges_b63_1336) / sizeof(kEdges_b63_1336[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1339[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF33Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1339 = {63u, 0xF339u, 0x1339u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_1339, sizeof(kEdges_b63_1339) / sizeof(kEdges_b63_1339[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_133C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF3ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF33Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_133C = {63u, 0xF33Cu, 0x133Cu, 0xF3ABu, 2u, nullptr, 0u, kEdges_b63_133C, sizeof(kEdges_b63_133C) / sizeof(kEdges_b63_133C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_133F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF340u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_133F = {63u, 0xF33Fu, 0x133Fu, 0u, 0u, nullptr, 0u, kEdges_b63_133F, sizeof(kEdges_b63_133F) / sizeof(kEdges_b63_133F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1340[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF342u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1340 = {63u, 0xF340u, 0x1340u, 0x0080u, 1u, nullptr, 0u, kEdges_b63_1340, sizeof(kEdges_b63_1340) / sizeof(kEdges_b63_1340[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1342[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF345u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1342 = {63u, 0xF342u, 0x1342u, 0x0300u, 2u, nullptr, 0u, kEdges_b63_1342, sizeof(kEdges_b63_1342) / sizeof(kEdges_b63_1342[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1345[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF2D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1345 = {63u, 0xF345u, 0x1345u, 0xF2D8u, 2u, nullptr, 0u, kEdges_b63_1345, sizeof(kEdges_b63_1345) / sizeof(kEdges_b63_1345[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1348[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF34Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1348 = {63u, 0xF348u, 0x1348u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_1348, sizeof(kEdges_b63_1348) / sizeof(kEdges_b63_1348[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_134A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF34Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_134A = {63u, 0xF34Au, 0x134Au, 0u, 0u, nullptr, 0u, kEdges_b63_134A, sizeof(kEdges_b63_134A) / sizeof(kEdges_b63_134A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_134B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF34Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_134B = {63u, 0xF34Bu, 0x134Bu, 0xF22Au, 2u, nullptr, 0u, kEdges_b63_134B, sizeof(kEdges_b63_134B) / sizeof(kEdges_b63_134B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_134E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF34Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_134E = {63u, 0xF34Eu, 0x134Eu, 0u, 0u, nullptr, 0u, kEdges_b63_134E, sizeof(kEdges_b63_134E) / sizeof(kEdges_b63_134E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_134F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF352u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_134F = {63u, 0xF34Fu, 0x134Fu, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_134F, sizeof(kEdges_b63_134F) / sizeof(kEdges_b63_134F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1352[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF354u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1352 = {63u, 0xF352u, 0x1352u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_1352, sizeof(kEdges_b63_1352) / sizeof(kEdges_b63_1352[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1354[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF355u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1354 = {63u, 0xF354u, 0x1354u, 0u, 0u, nullptr, 0u, kEdges_b63_1354, sizeof(kEdges_b63_1354) / sizeof(kEdges_b63_1354[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1355[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF358u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1355 = {63u, 0xF355u, 0x1355u, 0xF54Du, 2u, nullptr, 0u, kEdges_b63_1355, sizeof(kEdges_b63_1355) / sizeof(kEdges_b63_1355[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1358[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF35Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1358 = {63u, 0xF358u, 0x1358u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_1358, sizeof(kEdges_b63_1358) / sizeof(kEdges_b63_1358[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_135A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF35Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF37Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_135A = {63u, 0xF35Au, 0x135Au, 0xF37Au, 1u, nullptr, 0u, kEdges_b63_135A, sizeof(kEdges_b63_135A) / sizeof(kEdges_b63_135A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_135C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF35Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_135C = {63u, 0xF35Cu, 0x135Cu, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_135C, sizeof(kEdges_b63_135C) / sizeof(kEdges_b63_135C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_135F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF361u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_135F = {63u, 0xF35Fu, 0x135Fu, 0x0042u, 1u, nullptr, 0u, kEdges_b63_135F, sizeof(kEdges_b63_135F) / sizeof(kEdges_b63_135F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1361[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF363u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1361 = {63u, 0xF361u, 0x1361u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_1361, sizeof(kEdges_b63_1361) / sizeof(kEdges_b63_1361[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1363[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF364u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1363 = {63u, 0xF363u, 0x1363u, 0u, 0u, nullptr, 0u, kEdges_b63_1363, sizeof(kEdges_b63_1363) / sizeof(kEdges_b63_1363[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1364[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF365u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1364 = {63u, 0xF364u, 0x1364u, 0u, 0u, nullptr, 0u, kEdges_b63_1364, sizeof(kEdges_b63_1364) / sizeof(kEdges_b63_1364[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1365[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF366u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1365 = {63u, 0xF365u, 0x1365u, 0u, 0u, nullptr, 0u, kEdges_b63_1365, sizeof(kEdges_b63_1365) / sizeof(kEdges_b63_1365[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1366[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF369u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1366 = {63u, 0xF366u, 0x1366u, 0xF22Au, 2u, nullptr, 0u, kEdges_b63_1366, sizeof(kEdges_b63_1366) / sizeof(kEdges_b63_1366[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1369[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF36Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1369 = {63u, 0xF369u, 0x1369u, 0u, 0u, nullptr, 0u, kEdges_b63_1369, sizeof(kEdges_b63_1369) / sizeof(kEdges_b63_1369[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_136A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF36Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_136A = {63u, 0xF36Au, 0x136Au, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_136A, sizeof(kEdges_b63_136A) / sizeof(kEdges_b63_136A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_136D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF36Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_136D = {63u, 0xF36Du, 0x136Du, 0x0007u, 1u, nullptr, 0u, kEdges_b63_136D, sizeof(kEdges_b63_136D) / sizeof(kEdges_b63_136D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_136F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF370u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_136F = {63u, 0xF36Fu, 0x136Fu, 0u, 0u, nullptr, 0u, kEdges_b63_136F, sizeof(kEdges_b63_136F) / sizeof(kEdges_b63_136F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1370[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF373u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1370 = {63u, 0xF370u, 0x1370u, 0xF555u, 2u, nullptr, 0u, kEdges_b63_1370, sizeof(kEdges_b63_1370) / sizeof(kEdges_b63_1370[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1373[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF376u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1373 = {63u, 0xF373u, 0x1373u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_1373, sizeof(kEdges_b63_1373) / sizeof(kEdges_b63_1373[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1376[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF2D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1376 = {63u, 0xF376u, 0x1376u, 0xF2D8u, 2u, nullptr, 0u, kEdges_b63_1376, sizeof(kEdges_b63_1376) / sizeof(kEdges_b63_1376[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1379[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1379 = {63u, 0xF379u, 0x1379u, 0u, 0u, nullptr, 0u, kEdges_b63_1379, sizeof(kEdges_b63_1379) / sizeof(kEdges_b63_1379[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_137A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF37Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_137A = {63u, 0xF37Au, 0x137Au, 0x005Bu, 1u, nullptr, 0u, kEdges_b63_137A, sizeof(kEdges_b63_137A) / sizeof(kEdges_b63_137A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_137C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF37Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_137C = {63u, 0xF37Cu, 0x137Cu, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_137C, sizeof(kEdges_b63_137C) / sizeof(kEdges_b63_137C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_137F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF381u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_137F = {63u, 0xF37Fu, 0x137Fu, 0x00D4u, 1u, nullptr, 0u, kEdges_b63_137F, sizeof(kEdges_b63_137F) / sizeof(kEdges_b63_137F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1381[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF384u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1381 = {63u, 0xF381u, 0x1381u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_1381, sizeof(kEdges_b63_1381) / sizeof(kEdges_b63_1381[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1384[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF386u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1384 = {63u, 0xF384u, 0x1384u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1384, sizeof(kEdges_b63_1384) / sizeof(kEdges_b63_1384[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1386[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF388u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1386 = {63u, 0xF386u, 0x1386u, 0x00A8u, 1u, nullptr, 0u, kEdges_b63_1386, sizeof(kEdges_b63_1386) / sizeof(kEdges_b63_1386[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1388[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF38Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1388 = {63u, 0xF388u, 0x1388u, 0xE522u, 2u, nullptr, 0u, kEdges_b63_1388, sizeof(kEdges_b63_1388) / sizeof(kEdges_b63_1388[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_138B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF38Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_138B = {63u, 0xF38Bu, 0x138Bu, 0xE1DDu, 2u, nullptr, 0u, kEdges_b63_138B, sizeof(kEdges_b63_138B) / sizeof(kEdges_b63_138B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_138E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF391u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_138E = {63u, 0xF38Eu, 0x138Eu, 0xC62Bu, 2u, nullptr, 0u, kEdges_b63_138E, sizeof(kEdges_b63_138E) / sizeof(kEdges_b63_138E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1391[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF393u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1391 = {63u, 0xF391u, 0x1391u, 0x0042u, 1u, nullptr, 0u, kEdges_b63_1391, sizeof(kEdges_b63_1391) / sizeof(kEdges_b63_1391[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1393[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF395u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1393 = {63u, 0xF393u, 0x1393u, 0x0090u, 1u, nullptr, 0u, kEdges_b63_1393, sizeof(kEdges_b63_1393) / sizeof(kEdges_b63_1393[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1395[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF397u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF3CCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1395 = {63u, 0xF395u, 0x1395u, 0xF3CCu, 1u, nullptr, 0u, kEdges_b63_1395, sizeof(kEdges_b63_1395) / sizeof(kEdges_b63_1395[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1397[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF399u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1397 = {63u, 0xF397u, 0x1397u, 0x0042u, 1u, nullptr, 0u, kEdges_b63_1397, sizeof(kEdges_b63_1397) / sizeof(kEdges_b63_1397[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1399[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF39Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1399 = {63u, 0xF399u, 0x1399u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_1399, sizeof(kEdges_b63_1399) / sizeof(kEdges_b63_1399[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_139B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF39Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF38Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_139B = {63u, 0xF39Bu, 0x139Bu, 0xF38Bu, 1u, nullptr, 0u, kEdges_b63_139B, sizeof(kEdges_b63_139B) / sizeof(kEdges_b63_139B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_139D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF39Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_139D = {63u, 0xF39Du, 0x139Du, 0x0000u, 1u, nullptr, 0u, kEdges_b63_139D, sizeof(kEdges_b63_139D) / sizeof(kEdges_b63_139D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_139F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3A1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_139F = {63u, 0xF39Fu, 0x139Fu, 0x0002u, 1u, nullptr, 0u, kEdges_b63_139F, sizeof(kEdges_b63_139F) / sizeof(kEdges_b63_139F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13A1[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3A3u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF3A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13A1 = {63u, 0xF3A1u, 0x13A1u, 0xF3A5u, 1u, nullptr, 0u, kEdges_b63_13A1, sizeof(kEdges_b63_13A1) / sizeof(kEdges_b63_13A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13A3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13A3 = {63u, 0xF3A3u, 0x13A3u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_13A3, sizeof(kEdges_b63_13A3) / sizeof(kEdges_b63_13A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13A5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13A5 = {63u, 0xF3A5u, 0x13A5u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_13A5, sizeof(kEdges_b63_13A5) / sizeof(kEdges_b63_13A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13A8[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF2D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13A8 = {63u, 0xF3A8u, 0x13A8u, 0xF2D8u, 2u, nullptr, 0u, kEdges_b63_13A8, sizeof(kEdges_b63_13A8) / sizeof(kEdges_b63_13A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13AB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3AEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13AB = {63u, 0xF3ABu, 0x13ABu, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_13AB, sizeof(kEdges_b63_13AB) / sizeof(kEdges_b63_13AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13AE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13AE = {63u, 0xF3AEu, 0x13AEu, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_13AE, sizeof(kEdges_b63_13AE) / sizeof(kEdges_b63_13AE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13B1 = {63u, 0xF3B1u, 0x13B1u, 0u, 0u, nullptr, 0u, kEdges_b63_13B1, sizeof(kEdges_b63_13B1) / sizeof(kEdges_b63_13B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13B2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13B2 = {63u, 0xF3B2u, 0x13B2u, 0xF55Du, 2u, nullptr, 0u, kEdges_b63_13B2, sizeof(kEdges_b63_13B2) / sizeof(kEdges_b63_13B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13B5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13B5 = {63u, 0xF3B5u, 0x13B5u, 0u, 0u, nullptr, 0u, kEdges_b63_13B5, sizeof(kEdges_b63_13B5) / sizeof(kEdges_b63_13B5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13B6[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13B6 = {63u, 0xF3B6u, 0x13B6u, 0u, 0u, nullptr, 0u, kEdges_b63_13B6, sizeof(kEdges_b63_13B6) / sizeof(kEdges_b63_13B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13B7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3B9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13B7 = {63u, 0xF3B7u, 0x13B7u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_13B7, sizeof(kEdges_b63_13B7) / sizeof(kEdges_b63_13B7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13B9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3BCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13B9 = {63u, 0xF3B9u, 0x13B9u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_13B9, sizeof(kEdges_b63_13B9) / sizeof(kEdges_b63_13B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13BC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13BC = {63u, 0xF3BCu, 0x13BCu, 0u, 0u, nullptr, 0u, kEdges_b63_13BC, sizeof(kEdges_b63_13BC) / sizeof(kEdges_b63_13BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13BD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3BFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13BD = {63u, 0xF3BDu, 0x13BDu, 0x0006u, 1u, nullptr, 0u, kEdges_b63_13BD, sizeof(kEdges_b63_13BD) / sizeof(kEdges_b63_13BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13BF[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3C1u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF3C8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13BF = {63u, 0xF3BFu, 0x13BFu, 0xF3C8u, 1u, nullptr, 0u, kEdges_b63_13BF, sizeof(kEdges_b63_13BF) / sizeof(kEdges_b63_13BF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13C1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13C1 = {63u, 0xF3C1u, 0x13C1u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_13C1, sizeof(kEdges_b63_13C1) / sizeof(kEdges_b63_13C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13C4 = {63u, 0xF3C4u, 0x13C4u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_13C4, sizeof(kEdges_b63_13C4) / sizeof(kEdges_b63_13C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13C6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3C8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF3BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13C6 = {63u, 0xF3C6u, 0x13C6u, 0xF3BDu, 1u, nullptr, 0u, kEdges_b63_13C6, sizeof(kEdges_b63_13C6) / sizeof(kEdges_b63_13C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13C8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13C8 = {63u, 0xF3C8u, 0x13C8u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_13C8, sizeof(kEdges_b63_13C8) / sizeof(kEdges_b63_13C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13CB[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13CB = {63u, 0xF3CBu, 0x13CBu, 0u, 0u, nullptr, 0u, kEdges_b63_13CB, sizeof(kEdges_b63_13CB) / sizeof(kEdges_b63_13CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13CC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13CC = {63u, 0xF3CCu, 0x13CCu, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_13CC, sizeof(kEdges_b63_13CC) / sizeof(kEdges_b63_13CC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13CE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13CE = {63u, 0xF3CEu, 0x13CEu, 0x0692u, 2u, nullptr, 0u, kEdges_b63_13CE, sizeof(kEdges_b63_13CE) / sizeof(kEdges_b63_13CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13D1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3D4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13D1 = {63u, 0xF3D1u, 0x13D1u, 0x0693u, 2u, nullptr, 0u, kEdges_b63_13D1, sizeof(kEdges_b63_13D1) / sizeof(kEdges_b63_13D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13D4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13D4 = {63u, 0xF3D4u, 0x13D4u, 0x0694u, 2u, nullptr, 0u, kEdges_b63_13D4, sizeof(kEdges_b63_13D4) / sizeof(kEdges_b63_13D4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13D7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13D7 = {63u, 0xF3D7u, 0x13D7u, 0x0695u, 2u, nullptr, 0u, kEdges_b63_13D7, sizeof(kEdges_b63_13D7) / sizeof(kEdges_b63_13D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3DCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13DA = {63u, 0xF3DAu, 0x13DAu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_13DA, sizeof(kEdges_b63_13DA) / sizeof(kEdges_b63_13DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13DC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3DEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13DC = {63u, 0xF3DCu, 0x13DCu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_13DC, sizeof(kEdges_b63_13DC) / sizeof(kEdges_b63_13DC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13DE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3E1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13DE = {63u, 0xF3DEu, 0x13DEu, 0x0696u, 2u, nullptr, 0u, kEdges_b63_13DE, sizeof(kEdges_b63_13DE) / sizeof(kEdges_b63_13DE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13E1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3E4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13E1 = {63u, 0xF3E1u, 0x13E1u, 0x031Cu, 2u, nullptr, 0u, kEdges_b63_13E1, sizeof(kEdges_b63_13E1) / sizeof(kEdges_b63_13E1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13E4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13E4 = {63u, 0xF3E4u, 0x13E4u, 0u, 0u, nullptr, 0u, kEdges_b63_13E4, sizeof(kEdges_b63_13E4) / sizeof(kEdges_b63_13E4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13E5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3E7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13E5 = {63u, 0xF3E5u, 0x13E5u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_13E5, sizeof(kEdges_b63_13E5) / sizeof(kEdges_b63_13E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13E7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3EAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13E7 = {63u, 0xF3E7u, 0x13E7u, 0x031Du, 2u, nullptr, 0u, kEdges_b63_13E7, sizeof(kEdges_b63_13E7) / sizeof(kEdges_b63_13E7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13EA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13EA = {63u, 0xF3EAu, 0x13EAu, 0u, 0u, nullptr, 0u, kEdges_b63_13EA, sizeof(kEdges_b63_13EA) / sizeof(kEdges_b63_13EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13EB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3EDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13EB = {63u, 0xF3EBu, 0x13EBu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_13EB, sizeof(kEdges_b63_13EB) / sizeof(kEdges_b63_13EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13ED[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13ED = {63u, 0xF3EDu, 0x13EDu, 0x0322u, 2u, nullptr, 0u, kEdges_b63_13ED, sizeof(kEdges_b63_13ED) / sizeof(kEdges_b63_13ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13F0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13F0 = {63u, 0xF3F0u, 0x13F0u, 0u, 0u, nullptr, 0u, kEdges_b63_13F0, sizeof(kEdges_b63_13F0) / sizeof(kEdges_b63_13F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13F1 = {63u, 0xF3F1u, 0x13F1u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_13F1, sizeof(kEdges_b63_13F1) / sizeof(kEdges_b63_13F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13F3 = {63u, 0xF3F3u, 0x13F3u, 0x0323u, 2u, nullptr, 0u, kEdges_b63_13F3, sizeof(kEdges_b63_13F3) / sizeof(kEdges_b63_13F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13F6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13F6 = {63u, 0xF3F6u, 0x13F6u, 0u, 0u, nullptr, 0u, kEdges_b63_13F6, sizeof(kEdges_b63_13F6) / sizeof(kEdges_b63_13F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13F7 = {63u, 0xF3F7u, 0x13F7u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_13F7, sizeof(kEdges_b63_13F7) / sizeof(kEdges_b63_13F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13F9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13F9 = {63u, 0xF3F9u, 0x13F9u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_13F9, sizeof(kEdges_b63_13F9) / sizeof(kEdges_b63_13F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF3FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13FB = {63u, 0xF3FBu, 0x13FBu, 0xF56Fu, 2u, nullptr, 0u, kEdges_b63_13FB, sizeof(kEdges_b63_13FB) / sizeof(kEdges_b63_13FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_13FE[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF400u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF45Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_13FE = {63u, 0xF3FEu, 0x13FEu, 0xF45Du, 1u, nullptr, 0u, kEdges_b63_13FE, sizeof(kEdges_b63_13FE) / sizeof(kEdges_b63_13FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1400[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF401u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1400 = {63u, 0xF400u, 0x1400u, 0u, 0u, nullptr, 0u, kEdges_b63_1400, sizeof(kEdges_b63_1400) / sizeof(kEdges_b63_1400[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1401[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF404u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1401 = {63u, 0xF401u, 0x1401u, 0xF583u, 2u, nullptr, 0u, kEdges_b63_1401, sizeof(kEdges_b63_1401) / sizeof(kEdges_b63_1401[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1404[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF407u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1404 = {63u, 0xF404u, 0x1404u, 0x0696u, 2u, nullptr, 0u, kEdges_b63_1404, sizeof(kEdges_b63_1404) / sizeof(kEdges_b63_1404[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1407[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF40Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1407 = {63u, 0xF407u, 0x1407u, 0xF57Fu, 2u, nullptr, 0u, kEdges_b63_1407, sizeof(kEdges_b63_1407) / sizeof(kEdges_b63_1407[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_140A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF40Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_140A = {63u, 0xF40Au, 0x140Au, 0u, 0u, nullptr, 0u, kEdges_b63_140A, sizeof(kEdges_b63_140A) / sizeof(kEdges_b63_140A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_140B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF40Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_140B = {63u, 0xF40Bu, 0x140Bu, 0u, 0u, nullptr, 0u, kEdges_b63_140B, sizeof(kEdges_b63_140B) / sizeof(kEdges_b63_140B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_140C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF40Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_140C = {63u, 0xF40Cu, 0x140Cu, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_140C, sizeof(kEdges_b63_140C) / sizeof(kEdges_b63_140C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_140E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF410u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_140E = {63u, 0xF40Eu, 0x140Eu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_140E, sizeof(kEdges_b63_140E) / sizeof(kEdges_b63_140E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1410[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF412u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1410 = {63u, 0xF410u, 0x1410u, 0x00F5u, 1u, nullptr, 0u, kEdges_b63_1410, sizeof(kEdges_b63_1410) / sizeof(kEdges_b63_1410[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1412[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF414u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1412 = {63u, 0xF412u, 0x1412u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1412, sizeof(kEdges_b63_1412) / sizeof(kEdges_b63_1412[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1414[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF416u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1414 = {63u, 0xF414u, 0x1414u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_1414, sizeof(kEdges_b63_1414) / sizeof(kEdges_b63_1414[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1416[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF417u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1416 = {63u, 0xF416u, 0x1416u, 0u, 0u, nullptr, 0u, kEdges_b63_1416, sizeof(kEdges_b63_1416) / sizeof(kEdges_b63_1416[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1417[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF418u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1417 = {63u, 0xF417u, 0x1417u, 0u, 0u, nullptr, 0u, kEdges_b63_1417, sizeof(kEdges_b63_1417) / sizeof(kEdges_b63_1417[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1418[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF41Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1418 = {63u, 0xF418u, 0x1418u, 0x001Fu, 1u, nullptr, 0u, kEdges_b63_1418, sizeof(kEdges_b63_1418) / sizeof(kEdges_b63_1418[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_141A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF41Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_141A = {63u, 0xF41Au, 0x141Au, 0x000Au, 1u, nullptr, 0u, kEdges_b63_141A, sizeof(kEdges_b63_141A) / sizeof(kEdges_b63_141A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_141C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF41Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_141C = {63u, 0xF41Cu, 0x141Cu, 0x00F6u, 1u, nullptr, 0u, kEdges_b63_141C, sizeof(kEdges_b63_141C) / sizeof(kEdges_b63_141C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_141E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF420u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_141E = {63u, 0xF41Eu, 0x141Eu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_141E, sizeof(kEdges_b63_141E) / sizeof(kEdges_b63_141E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1420[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF422u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1420 = {63u, 0xF420u, 0x1420u, 0x000Bu, 1u, nullptr, 0u, kEdges_b63_1420, sizeof(kEdges_b63_1420) / sizeof(kEdges_b63_1420[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1422[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF424u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1422 = {63u, 0xF422u, 0x1422u, 0x0023u, 1u, nullptr, 0u, kEdges_b63_1422, sizeof(kEdges_b63_1422) / sizeof(kEdges_b63_1422[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1424[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF427u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1424 = {63u, 0xF424u, 0x1424u, 0x0300u, 2u, nullptr, 0u, kEdges_b63_1424, sizeof(kEdges_b63_1424) / sizeof(kEdges_b63_1424[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1427[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF429u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF438u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1427 = {63u, 0xF427u, 0x1427u, 0xF438u, 1u, nullptr, 0u, kEdges_b63_1427, sizeof(kEdges_b63_1427) / sizeof(kEdges_b63_1427[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1429[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF42Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1429 = {63u, 0xF429u, 0x1429u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_1429, sizeof(kEdges_b63_1429) / sizeof(kEdges_b63_1429[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_142B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF42Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF438u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_142B = {63u, 0xF42Bu, 0x142Bu, 0xF438u, 1u, nullptr, 0u, kEdges_b63_142B, sizeof(kEdges_b63_142B) / sizeof(kEdges_b63_142B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_142D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF42Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_142D = {63u, 0xF42Du, 0x142Du, 0u, 0u, nullptr, 0u, kEdges_b63_142D, sizeof(kEdges_b63_142D) / sizeof(kEdges_b63_142D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_142E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF431u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_142E = {63u, 0xF42Eu, 0x142Eu, 0x0692u, 2u, nullptr, 0u, kEdges_b63_142E, sizeof(kEdges_b63_142E) / sizeof(kEdges_b63_142E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1431[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF433u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF45Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1431 = {63u, 0xF431u, 0x1431u, 0xF45Du, 1u, nullptr, 0u, kEdges_b63_1431, sizeof(kEdges_b63_1431) / sizeof(kEdges_b63_1431[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1433[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF435u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1433 = {63u, 0xF433u, 0x1433u, 0x000Au, 1u, nullptr, 0u, kEdges_b63_1433, sizeof(kEdges_b63_1433) / sizeof(kEdges_b63_1433[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1435[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF438u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1435 = {63u, 0xF435u, 0x1435u, 0x0692u, 2u, nullptr, 0u, kEdges_b63_1435, sizeof(kEdges_b63_1435) / sizeof(kEdges_b63_1435[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1438[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF439u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1438 = {63u, 0xF438u, 0x1438u, 0u, 0u, nullptr, 0u, kEdges_b63_1438, sizeof(kEdges_b63_1438) / sizeof(kEdges_b63_1438[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1439[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF43Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF424u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1439 = {63u, 0xF439u, 0x1439u, 0xF424u, 1u, nullptr, 0u, kEdges_b63_1439, sizeof(kEdges_b63_1439) / sizeof(kEdges_b63_1439[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_143B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF43Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_143B = {63u, 0xF43Bu, 0x143Bu, 0x0692u, 2u, nullptr, 0u, kEdges_b63_143B, sizeof(kEdges_b63_143B) / sizeof(kEdges_b63_143B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_143E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF441u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_143E = {63u, 0xF43Eu, 0x143Eu, 0x0693u, 2u, nullptr, 0u, kEdges_b63_143E, sizeof(kEdges_b63_143E) / sizeof(kEdges_b63_143E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1441[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF444u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1441 = {63u, 0xF441u, 0x1441u, 0x0694u, 2u, nullptr, 0u, kEdges_b63_1441, sizeof(kEdges_b63_1441) / sizeof(kEdges_b63_1441[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1444[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF447u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1444 = {63u, 0xF444u, 0x1444u, 0x0695u, 2u, nullptr, 0u, kEdges_b63_1444, sizeof(kEdges_b63_1444) / sizeof(kEdges_b63_1444[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1447[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF449u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF45Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1447 = {63u, 0xF447u, 0x1447u, 0xF45Du, 1u, nullptr, 0u, kEdges_b63_1447, sizeof(kEdges_b63_1447) / sizeof(kEdges_b63_1447[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1449[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF44Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1449 = {63u, 0xF449u, 0x1449u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_1449, sizeof(kEdges_b63_1449) / sizeof(kEdges_b63_1449[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_144B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF44Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_144B = {63u, 0xF44Bu, 0x144Bu, 0x0692u, 2u, nullptr, 0u, kEdges_b63_144B, sizeof(kEdges_b63_144B) / sizeof(kEdges_b63_144B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_144E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF450u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_144E = {63u, 0xF44Eu, 0x144Eu, 0x0004u, 1u, nullptr, 0u, kEdges_b63_144E, sizeof(kEdges_b63_144E) / sizeof(kEdges_b63_144E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1450[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF451u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1450 = {63u, 0xF450u, 0x1450u, 0u, 0u, nullptr, 0u, kEdges_b63_1450, sizeof(kEdges_b63_1450) / sizeof(kEdges_b63_1450[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1451[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF454u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1451 = {63u, 0xF451u, 0x1451u, 0x0692u, 2u, nullptr, 0u, kEdges_b63_1451, sizeof(kEdges_b63_1451) / sizeof(kEdges_b63_1451[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1454[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF457u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1454 = {63u, 0xF454u, 0x1454u, 0x0692u, 2u, nullptr, 0u, kEdges_b63_1454, sizeof(kEdges_b63_1454) / sizeof(kEdges_b63_1454[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1457[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF458u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1457 = {63u, 0xF457u, 0x1457u, 0u, 0u, nullptr, 0u, kEdges_b63_1457, sizeof(kEdges_b63_1457) / sizeof(kEdges_b63_1457[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1458[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF45Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF44Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1458 = {63u, 0xF458u, 0x1458u, 0xF44Bu, 1u, nullptr, 0u, kEdges_b63_1458, sizeof(kEdges_b63_1458) / sizeof(kEdges_b63_1458[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_145A[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF379u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_145A = {63u, 0xF45Au, 0x145Au, 0xF379u, 2u, nullptr, 0u, kEdges_b63_145A, sizeof(kEdges_b63_145A) / sizeof(kEdges_b63_145A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_145D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF45Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_145D = {63u, 0xF45Du, 0x145Du, 0x0038u, 1u, nullptr, 0u, kEdges_b63_145D, sizeof(kEdges_b63_145D) / sizeof(kEdges_b63_145D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_145F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF461u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_145F = {63u, 0xF45Fu, 0x145Fu, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_145F, sizeof(kEdges_b63_145F) / sizeof(kEdges_b63_145F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1461[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF463u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1461 = {63u, 0xF461u, 0x1461u, 0x0016u, 1u, nullptr, 0u, kEdges_b63_1461, sizeof(kEdges_b63_1461) / sizeof(kEdges_b63_1461[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1463[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF467u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1463 = {63u, 0xF463u, 0x1463u, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_1463, sizeof(kEdges_b63_1463) / sizeof(kEdges_b63_1463[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1467[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF24Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF46Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1467 = {63u, 0xF467u, 0x1467u, 0xF24Au, 2u, nullptr, 0u, kEdges_b63_1467, sizeof(kEdges_b63_1467) / sizeof(kEdges_b63_1467[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_146A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF46Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_146A = {63u, 0xF46Au, 0x146Au, 0x0017u, 1u, nullptr, 0u, kEdges_b63_146A, sizeof(kEdges_b63_146A) / sizeof(kEdges_b63_146A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_146C[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF470u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_146C = {63u, 0xF46Cu, 0x146Cu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_146C, sizeof(kEdges_b63_146C) / sizeof(kEdges_b63_146C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1470[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF37Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1470 = {63u, 0xF470u, 0x1470u, 0xF37Au, 2u, nullptr, 0u, kEdges_b63_1470, sizeof(kEdges_b63_1470) / sizeof(kEdges_b63_1470[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1473[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF475u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1473 = {63u, 0xF473u, 0x1473u, 0x00F3u, 1u, nullptr, 0u, kEdges_b63_1473, sizeof(kEdges_b63_1473) / sizeof(kEdges_b63_1473[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1475[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF477u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1475 = {63u, 0xF475u, 0x1475u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_1475, sizeof(kEdges_b63_1475) / sizeof(kEdges_b63_1475[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1477[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF47Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1477 = {63u, 0xF477u, 0x1477u, 0x0696u, 2u, nullptr, 0u, kEdges_b63_1477, sizeof(kEdges_b63_1477) / sizeof(kEdges_b63_1477[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_147A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF47Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_147A = {63u, 0xF47Au, 0x147Au, 0u, 0u, nullptr, 0u, kEdges_b63_147A, sizeof(kEdges_b63_147A) / sizeof(kEdges_b63_147A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_147B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF47Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_147B = {63u, 0xF47Bu, 0x147Bu, 0u, 0u, nullptr, 0u, kEdges_b63_147B, sizeof(kEdges_b63_147B) / sizeof(kEdges_b63_147B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_147C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF47Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_147C = {63u, 0xF47Cu, 0x147Cu, 0xF57Fu, 2u, nullptr, 0u, kEdges_b63_147C, sizeof(kEdges_b63_147C) / sizeof(kEdges_b63_147C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_147F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF480u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_147F = {63u, 0xF47Fu, 0x147Fu, 0u, 0u, nullptr, 0u, kEdges_b63_147F, sizeof(kEdges_b63_147F) / sizeof(kEdges_b63_147F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1480[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF481u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1480 = {63u, 0xF480u, 0x1480u, 0u, 0u, nullptr, 0u, kEdges_b63_1480, sizeof(kEdges_b63_1480) / sizeof(kEdges_b63_1480[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1481[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF483u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1481 = {63u, 0xF481u, 0x1481u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_1481, sizeof(kEdges_b63_1481) / sizeof(kEdges_b63_1481[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1483[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF485u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1483 = {63u, 0xF483u, 0x1483u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_1483, sizeof(kEdges_b63_1483) / sizeof(kEdges_b63_1483[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1485[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF487u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1485 = {63u, 0xF485u, 0x1485u, 0x00F5u, 1u, nullptr, 0u, kEdges_b63_1485, sizeof(kEdges_b63_1485) / sizeof(kEdges_b63_1485[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1487[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF489u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1487 = {63u, 0xF487u, 0x1487u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1487, sizeof(kEdges_b63_1487) / sizeof(kEdges_b63_1487[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1489[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF48Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1489 = {63u, 0xF489u, 0x1489u, 0x000Du, 1u, nullptr, 0u, kEdges_b63_1489, sizeof(kEdges_b63_1489) / sizeof(kEdges_b63_1489[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_148B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF48Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_148B = {63u, 0xF48Bu, 0x148Bu, 0u, 0u, nullptr, 0u, kEdges_b63_148B, sizeof(kEdges_b63_148B) / sizeof(kEdges_b63_148B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_148C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF48Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_148C = {63u, 0xF48Cu, 0x148Cu, 0u, 0u, nullptr, 0u, kEdges_b63_148C, sizeof(kEdges_b63_148C) / sizeof(kEdges_b63_148C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_148D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF48Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_148D = {63u, 0xF48Du, 0x148Du, 0x001Fu, 1u, nullptr, 0u, kEdges_b63_148D, sizeof(kEdges_b63_148D) / sizeof(kEdges_b63_148D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_148F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF491u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_148F = {63u, 0xF48Fu, 0x148Fu, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_148F, sizeof(kEdges_b63_148F) / sizeof(kEdges_b63_148F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1491[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF493u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1491 = {63u, 0xF491u, 0x1491u, 0x00F6u, 1u, nullptr, 0u, kEdges_b63_1491, sizeof(kEdges_b63_1491) / sizeof(kEdges_b63_1491[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1493[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF495u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1493 = {63u, 0xF493u, 0x1493u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1493, sizeof(kEdges_b63_1493) / sizeof(kEdges_b63_1493[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1495[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF497u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1495 = {63u, 0xF495u, 0x1495u, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_1495, sizeof(kEdges_b63_1495) / sizeof(kEdges_b63_1495[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1497[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF499u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1497 = {63u, 0xF497u, 0x1497u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_1497, sizeof(kEdges_b63_1497) / sizeof(kEdges_b63_1497[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1499[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF49Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1499 = {63u, 0xF499u, 0x1499u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b63_1499, sizeof(kEdges_b63_1499) / sizeof(kEdges_b63_1499[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_149C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF49Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_149C = {63u, 0xF49Cu, 0x149Cu, 0x009Du, 1u, nullptr, 0u, kEdges_b63_149C, sizeof(kEdges_b63_149C) / sizeof(kEdges_b63_149C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_149E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF4A1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_149E = {63u, 0xF49Eu, 0x149Eu, 0xE522u, 2u, nullptr, 0u, kEdges_b63_149E, sizeof(kEdges_b63_149E) / sizeof(kEdges_b63_149E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14A1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4A2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14A1 = {63u, 0xF4A1u, 0x14A1u, 0u, 0u, nullptr, 0u, kEdges_b63_14A1, sizeof(kEdges_b63_14A1) / sizeof(kEdges_b63_14A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14A2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4A3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14A2 = {63u, 0xF4A2u, 0x14A2u, 0u, 0u, nullptr, 0u, kEdges_b63_14A2, sizeof(kEdges_b63_14A2) / sizeof(kEdges_b63_14A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14A3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14A3 = {63u, 0xF4A3u, 0x14A3u, 0xF587u, 2u, nullptr, 0u, kEdges_b63_14A3, sizeof(kEdges_b63_14A3) / sizeof(kEdges_b63_14A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14A6 = {63u, 0xF4A6u, 0x14A6u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_14A6, sizeof(kEdges_b63_14A6) / sizeof(kEdges_b63_14A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14A9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4ACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14A9 = {63u, 0xF4A9u, 0x14A9u, 0xF58Bu, 2u, nullptr, 0u, kEdges_b63_14A9, sizeof(kEdges_b63_14A9) / sizeof(kEdges_b63_14A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14AC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14AC = {63u, 0xF4ACu, 0x14ACu, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_14AC, sizeof(kEdges_b63_14AC) / sizeof(kEdges_b63_14AC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14AF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14AF = {63u, 0xF4AFu, 0x14AFu, 0x0003u, 1u, nullptr, 0u, kEdges_b63_14AF, sizeof(kEdges_b63_14AF) / sizeof(kEdges_b63_14AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14B1 = {63u, 0xF4B1u, 0x14B1u, 0x0024u, 1u, nullptr, 0u, kEdges_b63_14B1, sizeof(kEdges_b63_14B1) / sizeof(kEdges_b63_14B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14B3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14B3 = {63u, 0xF4B3u, 0x14B3u, 0u, 0u, nullptr, 0u, kEdges_b63_14B3, sizeof(kEdges_b63_14B3) / sizeof(kEdges_b63_14B3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14B4 = {63u, 0xF4B4u, 0x14B4u, 0u, 0u, nullptr, 0u, kEdges_b63_14B4, sizeof(kEdges_b63_14B4) / sizeof(kEdges_b63_14B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14B5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4B7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14B5 = {63u, 0xF4B5u, 0x14B5u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_14B5, sizeof(kEdges_b63_14B5) / sizeof(kEdges_b63_14B5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14B7[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4B9u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF4B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14B7 = {63u, 0xF4B7u, 0x14B7u, 0xF4B4u, 1u, nullptr, 0u, kEdges_b63_14B7, sizeof(kEdges_b63_14B7) / sizeof(kEdges_b63_14B7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14B9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4BCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14B9 = {63u, 0xF4B9u, 0x14B9u, 0x0692u, 2u, nullptr, 0u, kEdges_b63_14B9, sizeof(kEdges_b63_14B9) / sizeof(kEdges_b63_14B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14BC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14BC = {63u, 0xF4BCu, 0x14BCu, 0x000Eu, 1u, nullptr, 0u, kEdges_b63_14BC, sizeof(kEdges_b63_14BC) / sizeof(kEdges_b63_14BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14BE[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4C0u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF4B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14BE = {63u, 0xF4BEu, 0x14BEu, 0xF4B3u, 1u, nullptr, 0u, kEdges_b63_14BE, sizeof(kEdges_b63_14BE) / sizeof(kEdges_b63_14BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14C0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF3B7u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF4C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14C0 = {63u, 0xF4C0u, 0x14C0u, 0xF3B7u, 2u, nullptr, 0u, kEdges_b63_14C0, sizeof(kEdges_b63_14C0) / sizeof(kEdges_b63_14C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14C3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14C3 = {63u, 0xF4C3u, 0x14C3u, 0u, 0u, nullptr, 0u, kEdges_b63_14C3, sizeof(kEdges_b63_14C3) / sizeof(kEdges_b63_14C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4C5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14C4 = {63u, 0xF4C4u, 0x14C4u, 0u, 0u, nullptr, 0u, kEdges_b63_14C4, sizeof(kEdges_b63_14C4) / sizeof(kEdges_b63_14C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14C5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14C5 = {63u, 0xF4C5u, 0x14C5u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_14C5, sizeof(kEdges_b63_14C5) / sizeof(kEdges_b63_14C5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14C7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF4CAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14C7 = {63u, 0xF4C7u, 0x14C7u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b63_14C7, sizeof(kEdges_b63_14C7) / sizeof(kEdges_b63_14C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14CA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4CCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14CA = {63u, 0xF4CAu, 0x14CAu, 0x009Du, 1u, nullptr, 0u, kEdges_b63_14CA, sizeof(kEdges_b63_14CA) / sizeof(kEdges_b63_14CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14CC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF4CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14CC = {63u, 0xF4CCu, 0x14CCu, 0xE522u, 2u, nullptr, 0u, kEdges_b63_14CC, sizeof(kEdges_b63_14CC) / sizeof(kEdges_b63_14CC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14CF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14CF = {63u, 0xF4CFu, 0x14CFu, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_14CF, sizeof(kEdges_b63_14CF) / sizeof(kEdges_b63_14CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14D2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14D2 = {63u, 0xF4D2u, 0x14D2u, 0xF563u, 2u, nullptr, 0u, kEdges_b63_14D2, sizeof(kEdges_b63_14D2) / sizeof(kEdges_b63_14D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14D5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14D5 = {63u, 0xF4D5u, 0x14D5u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_14D5, sizeof(kEdges_b63_14D5) / sizeof(kEdges_b63_14D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14D8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14D8 = {63u, 0xF4D8u, 0x14D8u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_14D8, sizeof(kEdges_b63_14D8) / sizeof(kEdges_b63_14D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14DB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4DEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14DB = {63u, 0xF4DBu, 0x14DBu, 0xF569u, 2u, nullptr, 0u, kEdges_b63_14DB, sizeof(kEdges_b63_14DB) / sizeof(kEdges_b63_14DB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14DE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4E1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14DE = {63u, 0xF4DEu, 0x14DEu, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_14DE, sizeof(kEdges_b63_14DE) / sizeof(kEdges_b63_14DE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14E1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14E1 = {63u, 0xF4E1u, 0x14E1u, 0u, 0u, nullptr, 0u, kEdges_b63_14E1, sizeof(kEdges_b63_14E1) / sizeof(kEdges_b63_14E1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14E2 = {63u, 0xF4E2u, 0x14E2u, 0u, 0u, nullptr, 0u, kEdges_b63_14E2, sizeof(kEdges_b63_14E2) / sizeof(kEdges_b63_14E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14E3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4E4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14E3 = {63u, 0xF4E3u, 0x14E3u, 0u, 0u, nullptr, 0u, kEdges_b63_14E3, sizeof(kEdges_b63_14E3) / sizeof(kEdges_b63_14E3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14E4[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4E6u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF4B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14E4 = {63u, 0xF4E4u, 0x14E4u, 0xF4B1u, 1u, nullptr, 0u, kEdges_b63_14E4, sizeof(kEdges_b63_14E4) / sizeof(kEdges_b63_14E4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14E6[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14E6 = {63u, 0xF4E6u, 0x14E6u, 0u, 0u, nullptr, 0u, kEdges_b63_14E6, sizeof(kEdges_b63_14E6) / sizeof(kEdges_b63_14E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14E7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4E9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14E7 = {63u, 0xF4E7u, 0x14E7u, 0x0051u, 1u, nullptr, 0u, kEdges_b63_14E7, sizeof(kEdges_b63_14E7) / sizeof(kEdges_b63_14E7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14E9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14E9 = {63u, 0xF4E9u, 0x14E9u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_14E9, sizeof(kEdges_b63_14E9) / sizeof(kEdges_b63_14E9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14EB[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4EDu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF513u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14EB = {63u, 0xF4EBu, 0x14EBu, 0xF513u, 1u, nullptr, 0u, kEdges_b63_14EB, sizeof(kEdges_b63_14EB) / sizeof(kEdges_b63_14EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14ED[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14ED = {63u, 0xF4EDu, 0x14EDu, 0xF6AFu, 2u, nullptr, 0u, kEdges_b63_14ED, sizeof(kEdges_b63_14ED) / sizeof(kEdges_b63_14ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14F0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14F0 = {63u, 0xF4F0u, 0x14F0u, 0u, 0u, nullptr, 0u, kEdges_b63_14F0, sizeof(kEdges_b63_14F0) / sizeof(kEdges_b63_14F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14F1 = {63u, 0xF4F1u, 0x14F1u, 0x0057u, 1u, nullptr, 0u, kEdges_b63_14F1, sizeof(kEdges_b63_14F1) / sizeof(kEdges_b63_14F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14F3 = {63u, 0xF4F3u, 0x14F3u, 0xF514u, 2u, nullptr, 0u, kEdges_b63_14F3, sizeof(kEdges_b63_14F3) / sizeof(kEdges_b63_14F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14F6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4F8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF505u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14F6 = {63u, 0xF4F6u, 0x14F6u, 0xF505u, 1u, nullptr, 0u, kEdges_b63_14F6, sizeof(kEdges_b63_14F6) / sizeof(kEdges_b63_14F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14F8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14F8 = {63u, 0xF4F8u, 0x14F8u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_14F8, sizeof(kEdges_b63_14F8) / sizeof(kEdges_b63_14F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF4FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14FA = {63u, 0xF4FAu, 0x14FAu, 0x06A5u, 2u, nullptr, 0u, kEdges_b63_14FA, sizeof(kEdges_b63_14FA) / sizeof(kEdges_b63_14FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_14FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF500u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_14FD = {63u, 0xF4FDu, 0x14FDu, 0xF6BFu, 2u, nullptr, 0u, kEdges_b63_14FD, sizeof(kEdges_b63_14FD) / sizeof(kEdges_b63_14FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1500[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF503u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1500 = {63u, 0xF500u, 0x1500u, 0xF6B7u, 2u, nullptr, 0u, kEdges_b63_1500, sizeof(kEdges_b63_1500) / sizeof(kEdges_b63_1500[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1503[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF505u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF50Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1503 = {63u, 0xF503u, 0x1503u, 0xF50Du, 1u, nullptr, 0u, kEdges_b63_1503, sizeof(kEdges_b63_1503) / sizeof(kEdges_b63_1503[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1505[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF507u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1505 = {63u, 0xF505u, 0x1505u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1505, sizeof(kEdges_b63_1505) / sizeof(kEdges_b63_1505[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1507[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF50Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1507 = {63u, 0xF507u, 0x1507u, 0x06A5u, 2u, nullptr, 0u, kEdges_b63_1507, sizeof(kEdges_b63_1507) / sizeof(kEdges_b63_1507[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_150A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF50Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_150A = {63u, 0xF50Au, 0x150Au, 0xF6B7u, 2u, nullptr, 0u, kEdges_b63_150A, sizeof(kEdges_b63_150A) / sizeof(kEdges_b63_150A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_150D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF510u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_150D = {63u, 0xF50Du, 0x150Du, 0x0692u, 2u, nullptr, 0u, kEdges_b63_150D, sizeof(kEdges_b63_150D) / sizeof(kEdges_b63_150D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1510[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF513u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1510 = {63u, 0xF510u, 0x1510u, 0x0692u, 2u, nullptr, 0u, kEdges_b63_1510, sizeof(kEdges_b63_1510) / sizeof(kEdges_b63_1510[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1513[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1513 = {63u, 0xF513u, 0x1513u, 0u, 0u, nullptr, 0u, kEdges_b63_1513, sizeof(kEdges_b63_1513) / sizeof(kEdges_b63_1513[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_151C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF51Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_151C = {63u, 0xF51Cu, 0x151Cu, 0xF6BFu, 2u, nullptr, 0u, kEdges_b63_151C, sizeof(kEdges_b63_151C) / sizeof(kEdges_b63_151C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_151F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF521u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_151F = {63u, 0xF51Fu, 0x151Fu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_151F, sizeof(kEdges_b63_151F) / sizeof(kEdges_b63_151F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1521[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF523u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF534u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1521 = {63u, 0xF521u, 0x1521u, 0xF534u, 1u, nullptr, 0u, kEdges_b63_1521, sizeof(kEdges_b63_1521) / sizeof(kEdges_b63_1521[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1523[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF526u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1523 = {63u, 0xF523u, 0x1523u, 0xF6BFu, 2u, nullptr, 0u, kEdges_b63_1523, sizeof(kEdges_b63_1523) / sizeof(kEdges_b63_1523[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1526[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF528u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1526 = {63u, 0xF526u, 0x1526u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1526, sizeof(kEdges_b63_1526) / sizeof(kEdges_b63_1526[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1528[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF52Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1528 = {63u, 0xF528u, 0x1528u, 0x0057u, 1u, nullptr, 0u, kEdges_b63_1528, sizeof(kEdges_b63_1528) / sizeof(kEdges_b63_1528[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_152A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF52Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_152A = {63u, 0xF52Au, 0x152Au, 0xF514u, 2u, nullptr, 0u, kEdges_b63_152A, sizeof(kEdges_b63_152A) / sizeof(kEdges_b63_152A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_152D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF52Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF534u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_152D = {63u, 0xF52Du, 0x152Du, 0xF534u, 1u, nullptr, 0u, kEdges_b63_152D, sizeof(kEdges_b63_152D) / sizeof(kEdges_b63_152D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_152F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF532u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_152F = {63u, 0xF52Fu, 0x152Fu, 0xF6B7u, 2u, nullptr, 0u, kEdges_b63_152F, sizeof(kEdges_b63_152F) / sizeof(kEdges_b63_152F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1532[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF534u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1532 = {63u, 0xF532u, 0x1532u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1532, sizeof(kEdges_b63_1532) / sizeof(kEdges_b63_1532[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1534[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF535u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1534 = {63u, 0xF534u, 0x1534u, 0u, 0u, nullptr, 0u, kEdges_b63_1534, sizeof(kEdges_b63_1534) / sizeof(kEdges_b63_1534[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1535[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF536u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1535 = {63u, 0xF535u, 0x1535u, 0u, 0u, nullptr, 0u, kEdges_b63_1535, sizeof(kEdges_b63_1535) / sizeof(kEdges_b63_1535[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1536[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF538u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1536 = {63u, 0xF536u, 0x1536u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_1536, sizeof(kEdges_b63_1536) / sizeof(kEdges_b63_1536[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1538[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF53Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF549u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1538 = {63u, 0xF538u, 0x1538u, 0xF549u, 1u, nullptr, 0u, kEdges_b63_1538, sizeof(kEdges_b63_1538) / sizeof(kEdges_b63_1538[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_153A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF53Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_153A = {63u, 0xF53Au, 0x153Au, 0xF6AFu, 2u, nullptr, 0u, kEdges_b63_153A, sizeof(kEdges_b63_153A) / sizeof(kEdges_b63_153A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_153D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF53Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_153D = {63u, 0xF53Du, 0x153Du, 0u, 0u, nullptr, 0u, kEdges_b63_153D, sizeof(kEdges_b63_153D) / sizeof(kEdges_b63_153D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_153E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF541u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_153E = {63u, 0xF53Eu, 0x153Eu, 0x0692u, 2u, nullptr, 0u, kEdges_b63_153E, sizeof(kEdges_b63_153E) / sizeof(kEdges_b63_153E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1541[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF543u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1541 = {63u, 0xF541u, 0x1541u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1541, sizeof(kEdges_b63_1541) / sizeof(kEdges_b63_1541[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1543[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF545u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF549u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1543 = {63u, 0xF543u, 0x1543u, 0xF549u, 1u, nullptr, 0u, kEdges_b63_1543, sizeof(kEdges_b63_1543) / sizeof(kEdges_b63_1543[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1545[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF546u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1545 = {63u, 0xF545u, 0x1545u, 0u, 0u, nullptr, 0u, kEdges_b63_1545, sizeof(kEdges_b63_1545) / sizeof(kEdges_b63_1545[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1546[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF547u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1546 = {63u, 0xF546u, 0x1546u, 0u, 0u, nullptr, 0u, kEdges_b63_1546, sizeof(kEdges_b63_1546) / sizeof(kEdges_b63_1546[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1547[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF548u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1547 = {63u, 0xF547u, 0x1547u, 0u, 0u, nullptr, 0u, kEdges_b63_1547, sizeof(kEdges_b63_1547) / sizeof(kEdges_b63_1547[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1548[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1548 = {63u, 0xF548u, 0x1548u, 0u, 0u, nullptr, 0u, kEdges_b63_1548, sizeof(kEdges_b63_1548) / sizeof(kEdges_b63_1548[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1549[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF54Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1549 = {63u, 0xF549u, 0x1549u, 0u, 0u, nullptr, 0u, kEdges_b63_1549, sizeof(kEdges_b63_1549) / sizeof(kEdges_b63_1549[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_154A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF54Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_154A = {63u, 0xF54Au, 0x154Au, 0u, 0u, nullptr, 0u, kEdges_b63_154A, sizeof(kEdges_b63_154A) / sizeof(kEdges_b63_154A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_154B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF54Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_154B = {63u, 0xF54Bu, 0x154Bu, 0u, 0u, nullptr, 0u, kEdges_b63_154B, sizeof(kEdges_b63_154B) / sizeof(kEdges_b63_154B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_154C[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_154C = {63u, 0xF54Cu, 0x154Cu, 0u, 0u, nullptr, 0u, kEdges_b63_154C, sizeof(kEdges_b63_154C) / sizeof(kEdges_b63_154C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16CF[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF6D3u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16CF = {63u, 0xF6CFu, 0x16CFu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_16CF, sizeof(kEdges_b63_16CF) / sizeof(kEdges_b63_16CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16D3[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16D3 = {63u, 0xF6D3u, 0x16D3u, 0u, 0u, nullptr, 0u, kEdges_b63_16D3, sizeof(kEdges_b63_16D3) / sizeof(kEdges_b63_16D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16D4[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF6D8u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16D4 = {63u, 0xF6D4u, 0x16D4u, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_16D4, sizeof(kEdges_b63_16D4) / sizeof(kEdges_b63_16D4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16D8[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16D8 = {63u, 0xF6D8u, 0x16D8u, 0u, 0u, nullptr, 0u, kEdges_b63_16D8, sizeof(kEdges_b63_16D8) / sizeof(kEdges_b63_16D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16D9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16D9 = {63u, 0xF6D9u, 0x16D9u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_16D9, sizeof(kEdges_b63_16D9) / sizeof(kEdges_b63_16D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16DB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16DB = {63u, 0xF6DBu, 0x16DBu, 0x0061u, 1u, nullptr, 0u, kEdges_b63_16DB, sizeof(kEdges_b63_16DB) / sizeof(kEdges_b63_16DB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16DD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16DD = {63u, 0xF6DDu, 0x16DDu, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_16DD, sizeof(kEdges_b63_16DD) / sizeof(kEdges_b63_16DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6E1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16DF = {63u, 0xF6DFu, 0x16DFu, 0x0030u, 1u, nullptr, 0u, kEdges_b63_16DF, sizeof(kEdges_b63_16DF) / sizeof(kEdges_b63_16DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16E1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6E4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16E1 = {63u, 0xF6E1u, 0x16E1u, 0x0370u, 2u, nullptr, 0u, kEdges_b63_16E1, sizeof(kEdges_b63_16E1) / sizeof(kEdges_b63_16E1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16E4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16E4 = {63u, 0xF6E4u, 0x16E4u, 0x0046u, 1u, nullptr, 0u, kEdges_b63_16E4, sizeof(kEdges_b63_16E4) / sizeof(kEdges_b63_16E4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16E6 = {63u, 0xF6E6u, 0x16E6u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_16E6, sizeof(kEdges_b63_16E6) / sizeof(kEdges_b63_16E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16E8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF6EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16E8 = {63u, 0xF6E8u, 0x16E8u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_16E8, sizeof(kEdges_b63_16E8) / sizeof(kEdges_b63_16E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16EB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6EDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16EB = {63u, 0xF6EBu, 0x16EBu, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_16EB, sizeof(kEdges_b63_16EB) / sizeof(kEdges_b63_16EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16ED[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16ED = {63u, 0xF6EDu, 0x16EDu, 0x0370u, 2u, nullptr, 0u, kEdges_b63_16ED, sizeof(kEdges_b63_16ED) / sizeof(kEdges_b63_16ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16F0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16F0 = {63u, 0xF6F0u, 0x16F0u, 0x0046u, 1u, nullptr, 0u, kEdges_b63_16F0, sizeof(kEdges_b63_16F0) / sizeof(kEdges_b63_16F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16F2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16F2 = {63u, 0xF6F2u, 0x16F2u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_16F2, sizeof(kEdges_b63_16F2) / sizeof(kEdges_b63_16F2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16F4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF6F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16F4 = {63u, 0xF6F4u, 0x16F4u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_16F4, sizeof(kEdges_b63_16F4) / sizeof(kEdges_b63_16F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16F7 = {63u, 0xF6F7u, 0x16F7u, 0u, 0u, nullptr, 0u, kEdges_b63_16F7, sizeof(kEdges_b63_16F7) / sizeof(kEdges_b63_16F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16F8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF6FAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF6DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16F8 = {63u, 0xF6F8u, 0x16F8u, 0xF6DBu, 1u, nullptr, 0u, kEdges_b63_16F8, sizeof(kEdges_b63_16F8) / sizeof(kEdges_b63_16F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16FA[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16FA = {63u, 0xF6FAu, 0x16FAu, 0u, 0u, nullptr, 0u, kEdges_b63_16FA, sizeof(kEdges_b63_16FA) / sizeof(kEdges_b63_16FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16FB[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xF6FFu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16FB = {63u, 0xF6FBu, 0x16FBu, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_16FB, sizeof(kEdges_b63_16FB) / sizeof(kEdges_b63_16FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_16FF[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_16FF = {63u, 0xF6FFu, 0x16FFu, 0u, 0u, nullptr, 0u, kEdges_b63_16FF, sizeof(kEdges_b63_16FF) / sizeof(kEdges_b63_16FF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1712[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF715u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1712 = {63u, 0xF712u, 0x1712u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_1712, sizeof(kEdges_b63_1712) / sizeof(kEdges_b63_1712[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1715[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF717u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1715 = {63u, 0xF715u, 0x1715u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1715, sizeof(kEdges_b63_1715) / sizeof(kEdges_b63_1715[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1717[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF71Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1717 = {63u, 0xF717u, 0x1717u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_1717, sizeof(kEdges_b63_1717) / sizeof(kEdges_b63_1717[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_171A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF71Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_171A = {63u, 0xF71Au, 0x171Au, 0x0001u, 1u, nullptr, 0u, kEdges_b63_171A, sizeof(kEdges_b63_171A) / sizeof(kEdges_b63_171A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_171C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF71Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_171C = {63u, 0xF71Cu, 0x171Cu, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_171C, sizeof(kEdges_b63_171C) / sizeof(kEdges_b63_171C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_171F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF721u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_171F = {63u, 0xF71Fu, 0x171Fu, 0x0002u, 1u, nullptr, 0u, kEdges_b63_171F, sizeof(kEdges_b63_171F) / sizeof(kEdges_b63_171F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1721[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF724u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1721 = {63u, 0xF721u, 0x1721u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_1721, sizeof(kEdges_b63_1721) / sizeof(kEdges_b63_1721[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1724[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF726u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1724 = {63u, 0xF724u, 0x1724u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_1724, sizeof(kEdges_b63_1724) / sizeof(kEdges_b63_1724[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1726[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF729u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1726 = {63u, 0xF726u, 0x1726u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_1726, sizeof(kEdges_b63_1726) / sizeof(kEdges_b63_1726[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1729[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF72Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1729 = {63u, 0xF729u, 0x1729u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_1729, sizeof(kEdges_b63_1729) / sizeof(kEdges_b63_1729[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_172B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF72Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_172B = {63u, 0xF72Bu, 0x172Bu, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_172B, sizeof(kEdges_b63_172B) / sizeof(kEdges_b63_172B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_172E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF730u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_172E = {63u, 0xF72Eu, 0x172Eu, 0x0005u, 1u, nullptr, 0u, kEdges_b63_172E, sizeof(kEdges_b63_172E) / sizeof(kEdges_b63_172E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1730[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF733u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1730 = {63u, 0xF730u, 0x1730u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_1730, sizeof(kEdges_b63_1730) / sizeof(kEdges_b63_1730[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1733[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF735u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1733 = {63u, 0xF733u, 0x1733u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_1733, sizeof(kEdges_b63_1733) / sizeof(kEdges_b63_1733[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1735[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF738u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1735 = {63u, 0xF735u, 0x1735u, 0x04B4u, 2u, nullptr, 0u, kEdges_b63_1735, sizeof(kEdges_b63_1735) / sizeof(kEdges_b63_1735[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1738[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF73Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1738 = {63u, 0xF738u, 0x1738u, 0x0007u, 1u, nullptr, 0u, kEdges_b63_1738, sizeof(kEdges_b63_1738) / sizeof(kEdges_b63_1738[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_173A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF73Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_173A = {63u, 0xF73Au, 0x173Au, 0u, 0u, nullptr, 0u, kEdges_b63_173A, sizeof(kEdges_b63_173A) / sizeof(kEdges_b63_173A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_173B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF73Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_173B = {63u, 0xF73Bu, 0x173Bu, 0u, 0u, nullptr, 0u, kEdges_b63_173B, sizeof(kEdges_b63_173B) / sizeof(kEdges_b63_173B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_173C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF73Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_173C = {63u, 0xF73Cu, 0x173Cu, 0u, 0u, nullptr, 0u, kEdges_b63_173C, sizeof(kEdges_b63_173C) / sizeof(kEdges_b63_173C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_173D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF73Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_173D = {63u, 0xF73Du, 0x173Du, 0u, 0u, nullptr, 0u, kEdges_b63_173D, sizeof(kEdges_b63_173D) / sizeof(kEdges_b63_173D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_173E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF740u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_173E = {63u, 0xF73Eu, 0x173Eu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_173E, sizeof(kEdges_b63_173E) / sizeof(kEdges_b63_173E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1740[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF742u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1740 = {63u, 0xF740u, 0x1740u, 0x0011u, 1u, nullptr, 0u, kEdges_b63_1740, sizeof(kEdges_b63_1740) / sizeof(kEdges_b63_1740[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1742[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF744u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1742 = {63u, 0xF742u, 0x1742u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_1742, sizeof(kEdges_b63_1742) / sizeof(kEdges_b63_1742[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1744[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF746u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1744 = {63u, 0xF744u, 0x1744u, 0x000Au, 1u, nullptr, 0u, kEdges_b63_1744, sizeof(kEdges_b63_1744) / sizeof(kEdges_b63_1744[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1746[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF749u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1746 = {63u, 0xF746u, 0x1746u, 0xF7DCu, 2u, nullptr, 0u, kEdges_b63_1746, sizeof(kEdges_b63_1746) / sizeof(kEdges_b63_1746[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1749[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF74Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1749 = {63u, 0xF749u, 0x1749u, 0u, 0u, nullptr, 0u, kEdges_b63_1749, sizeof(kEdges_b63_1749) / sizeof(kEdges_b63_1749[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_174A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF74Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_174A = {63u, 0xF74Au, 0x174Au, 0xF7DCu, 2u, nullptr, 0u, kEdges_b63_174A, sizeof(kEdges_b63_174A) / sizeof(kEdges_b63_174A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_174D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF74Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_174D = {63u, 0xF74Du, 0x174Du, 0x0008u, 1u, nullptr, 0u, kEdges_b63_174D, sizeof(kEdges_b63_174D) / sizeof(kEdges_b63_174D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_174F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF752u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_174F = {63u, 0xF74Fu, 0x174Fu, 0xF845u, 2u, nullptr, 0u, kEdges_b63_174F, sizeof(kEdges_b63_174F) / sizeof(kEdges_b63_174F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1752[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF753u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1752 = {63u, 0xF752u, 0x1752u, 0u, 0u, nullptr, 0u, kEdges_b63_1752, sizeof(kEdges_b63_1752) / sizeof(kEdges_b63_1752[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1753[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF756u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1753 = {63u, 0xF753u, 0x1753u, 0xF845u, 2u, nullptr, 0u, kEdges_b63_1753, sizeof(kEdges_b63_1753) / sizeof(kEdges_b63_1753[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1756[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF758u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1756 = {63u, 0xF756u, 0x1756u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_1756, sizeof(kEdges_b63_1756) / sizeof(kEdges_b63_1756[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1758[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF75Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1758 = {63u, 0xF758u, 0x1758u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1758, sizeof(kEdges_b63_1758) / sizeof(kEdges_b63_1758[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_175A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF75Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_175A = {63u, 0xF75Au, 0x175Au, 0u, 0u, nullptr, 0u, kEdges_b63_175A, sizeof(kEdges_b63_175A) / sizeof(kEdges_b63_175A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_175B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF75Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_175B = {63u, 0xF75Bu, 0x175Bu, 0x0004u, 1u, nullptr, 0u, kEdges_b63_175B, sizeof(kEdges_b63_175B) / sizeof(kEdges_b63_175B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_175D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF75Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_175D = {63u, 0xF75Du, 0x175Du, 0x0004u, 1u, nullptr, 0u, kEdges_b63_175D, sizeof(kEdges_b63_175D) / sizeof(kEdges_b63_175D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_175F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF761u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_175F = {63u, 0xF75Fu, 0x175Fu, 0x000Au, 1u, nullptr, 0u, kEdges_b63_175F, sizeof(kEdges_b63_175F) / sizeof(kEdges_b63_175F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1761[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF763u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1761 = {63u, 0xF761u, 0x1761u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_1761, sizeof(kEdges_b63_1761) / sizeof(kEdges_b63_1761[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1763[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF765u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1763 = {63u, 0xF763u, 0x1763u, 0x0005u, 1u, nullptr, 0u, kEdges_b63_1763, sizeof(kEdges_b63_1763) / sizeof(kEdges_b63_1763[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1765[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF767u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF76Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1765 = {63u, 0xF765u, 0x1765u, 0xF76Fu, 1u, nullptr, 0u, kEdges_b63_1765, sizeof(kEdges_b63_1765) / sizeof(kEdges_b63_1765[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1767[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF769u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF7A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1767 = {63u, 0xF767u, 0x1767u, 0xF7A4u, 1u, nullptr, 0u, kEdges_b63_1767, sizeof(kEdges_b63_1767) / sizeof(kEdges_b63_1767[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1769[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF76Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1769 = {63u, 0xF769u, 0x1769u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_1769, sizeof(kEdges_b63_1769) / sizeof(kEdges_b63_1769[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_176B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF76Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF77Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_176B = {63u, 0xF76Bu, 0x176Bu, 0xF77Fu, 1u, nullptr, 0u, kEdges_b63_176B, sizeof(kEdges_b63_176B) / sizeof(kEdges_b63_176B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_176D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF76Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF777u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_176D = {63u, 0xF76Du, 0x176Du, 0xF777u, 1u, nullptr, 0u, kEdges_b63_176D, sizeof(kEdges_b63_176D) / sizeof(kEdges_b63_176D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_176F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF771u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_176F = {63u, 0xF76Fu, 0x176Fu, 0x0004u, 1u, nullptr, 0u, kEdges_b63_176F, sizeof(kEdges_b63_176F) / sizeof(kEdges_b63_176F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1771[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF773u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1771 = {63u, 0xF771u, 0x1771u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_1771, sizeof(kEdges_b63_1771) / sizeof(kEdges_b63_1771[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1773[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF775u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1773 = {63u, 0xF773u, 0x1773u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_1773, sizeof(kEdges_b63_1773) / sizeof(kEdges_b63_1773[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1775[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF777u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1775 = {63u, 0xF775u, 0x1775u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_1775, sizeof(kEdges_b63_1775) / sizeof(kEdges_b63_1775[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1777[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF779u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1777 = {63u, 0xF777u, 0x1777u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_1777, sizeof(kEdges_b63_1777) / sizeof(kEdges_b63_1777[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1779[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF77Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1779 = {63u, 0xF779u, 0x1779u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_1779, sizeof(kEdges_b63_1779) / sizeof(kEdges_b63_1779[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_177B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF77Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF77Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_177B = {63u, 0xF77Bu, 0x177Bu, 0xF77Fu, 1u, nullptr, 0u, kEdges_b63_177B, sizeof(kEdges_b63_177B) / sizeof(kEdges_b63_177B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_177D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF77Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF7A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_177D = {63u, 0xF77Du, 0x177Du, 0xF7A4u, 1u, nullptr, 0u, kEdges_b63_177D, sizeof(kEdges_b63_177D) / sizeof(kEdges_b63_177D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_177F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF781u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_177F = {63u, 0xF77Fu, 0x177Fu, 0x0002u, 1u, nullptr, 0u, kEdges_b63_177F, sizeof(kEdges_b63_177F) / sizeof(kEdges_b63_177F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1781[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF782u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1781 = {63u, 0xF781u, 0x1781u, 0u, 0u, nullptr, 0u, kEdges_b63_1781, sizeof(kEdges_b63_1781) / sizeof(kEdges_b63_1781[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1782[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF784u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1782 = {63u, 0xF782u, 0x1782u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_1782, sizeof(kEdges_b63_1782) / sizeof(kEdges_b63_1782[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1784[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF786u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1784 = {63u, 0xF784u, 0x1784u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_1784, sizeof(kEdges_b63_1784) / sizeof(kEdges_b63_1784[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1786[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF788u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1786 = {63u, 0xF786u, 0x1786u, 0x000Bu, 1u, nullptr, 0u, kEdges_b63_1786, sizeof(kEdges_b63_1786) / sizeof(kEdges_b63_1786[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1788[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF78Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1788 = {63u, 0xF788u, 0x1788u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_1788, sizeof(kEdges_b63_1788) / sizeof(kEdges_b63_1788[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_178A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF78Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_178A = {63u, 0xF78Au, 0x178Au, 0x0007u, 1u, nullptr, 0u, kEdges_b63_178A, sizeof(kEdges_b63_178A) / sizeof(kEdges_b63_178A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_178C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF78Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF796u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_178C = {63u, 0xF78Cu, 0x178Cu, 0xF796u, 1u, nullptr, 0u, kEdges_b63_178C, sizeof(kEdges_b63_178C) / sizeof(kEdges_b63_178C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_178E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF790u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF7A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_178E = {63u, 0xF78Eu, 0x178Eu, 0xF7A4u, 1u, nullptr, 0u, kEdges_b63_178E, sizeof(kEdges_b63_178E) / sizeof(kEdges_b63_178E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1790[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF792u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1790 = {63u, 0xF790u, 0x1790u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_1790, sizeof(kEdges_b63_1790) / sizeof(kEdges_b63_1790[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1792[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF794u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF7A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1792 = {63u, 0xF792u, 0x1792u, 0xF7A9u, 1u, nullptr, 0u, kEdges_b63_1792, sizeof(kEdges_b63_1792) / sizeof(kEdges_b63_1792[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1794[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF796u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF79Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1794 = {63u, 0xF794u, 0x1794u, 0xF79Eu, 1u, nullptr, 0u, kEdges_b63_1794, sizeof(kEdges_b63_1794) / sizeof(kEdges_b63_1794[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1796[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF798u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1796 = {63u, 0xF796u, 0x1796u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_1796, sizeof(kEdges_b63_1796) / sizeof(kEdges_b63_1796[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1798[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF79Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1798 = {63u, 0xF798u, 0x1798u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_1798, sizeof(kEdges_b63_1798) / sizeof(kEdges_b63_1798[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_179A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF79Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_179A = {63u, 0xF79Au, 0x179Au, 0x0006u, 1u, nullptr, 0u, kEdges_b63_179A, sizeof(kEdges_b63_179A) / sizeof(kEdges_b63_179A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_179C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF79Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_179C = {63u, 0xF79Cu, 0x179Cu, 0x0006u, 1u, nullptr, 0u, kEdges_b63_179C, sizeof(kEdges_b63_179C) / sizeof(kEdges_b63_179C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_179E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7A0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_179E = {63u, 0xF79Eu, 0x179Eu, 0x0006u, 1u, nullptr, 0u, kEdges_b63_179E, sizeof(kEdges_b63_179E) / sizeof(kEdges_b63_179E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17A0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7A2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17A0 = {63u, 0xF7A0u, 0x17A0u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_17A0, sizeof(kEdges_b63_17A0) / sizeof(kEdges_b63_17A0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17A2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7A4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF7A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17A2 = {63u, 0xF7A2u, 0x17A2u, 0xF7A9u, 1u, nullptr, 0u, kEdges_b63_17A2, sizeof(kEdges_b63_17A2) / sizeof(kEdges_b63_17A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17A4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17A4 = {63u, 0xF7A4u, 0x17A4u, 0u, 0u, nullptr, 0u, kEdges_b63_17A4, sizeof(kEdges_b63_17A4) / sizeof(kEdges_b63_17A4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17A5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17A5 = {63u, 0xF7A5u, 0x17A5u, 0u, 0u, nullptr, 0u, kEdges_b63_17A5, sizeof(kEdges_b63_17A5) / sizeof(kEdges_b63_17A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17A6 = {63u, 0xF7A6u, 0x17A6u, 0u, 0u, nullptr, 0u, kEdges_b63_17A6, sizeof(kEdges_b63_17A6) / sizeof(kEdges_b63_17A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17A7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17A7 = {63u, 0xF7A7u, 0x17A7u, 0u, 0u, nullptr, 0u, kEdges_b63_17A7, sizeof(kEdges_b63_17A7) / sizeof(kEdges_b63_17A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17A8[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17A8 = {63u, 0xF7A8u, 0x17A8u, 0u, 0u, nullptr, 0u, kEdges_b63_17A8, sizeof(kEdges_b63_17A8) / sizeof(kEdges_b63_17A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17A9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7ABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17A9 = {63u, 0xF7A9u, 0x17A9u, 0x0003u, 1u, nullptr, 0u, kEdges_b63_17A9, sizeof(kEdges_b63_17A9) / sizeof(kEdges_b63_17A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17AB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17AB = {63u, 0xF7ABu, 0x17ABu, 0x0011u, 1u, nullptr, 0u, kEdges_b63_17AB, sizeof(kEdges_b63_17AB) / sizeof(kEdges_b63_17AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17AD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17AD = {63u, 0xF7ADu, 0x17ADu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_17AD, sizeof(kEdges_b63_17AD) / sizeof(kEdges_b63_17AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17AF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17AF = {63u, 0xF7AFu, 0x17AFu, 0u, 0u, nullptr, 0u, kEdges_b63_17AF, sizeof(kEdges_b63_17AF) / sizeof(kEdges_b63_17AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17B0 = {63u, 0xF7B0u, 0x17B0u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_17B0, sizeof(kEdges_b63_17B0) / sizeof(kEdges_b63_17B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17B2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17B2 = {63u, 0xF7B2u, 0x17B2u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_17B2, sizeof(kEdges_b63_17B2) / sizeof(kEdges_b63_17B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17B4 = {63u, 0xF7B4u, 0x17B4u, 0x00EBu, 1u, nullptr, 0u, kEdges_b63_17B4, sizeof(kEdges_b63_17B4) / sizeof(kEdges_b63_17B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17B6 = {63u, 0xF7B6u, 0x17B6u, 0x000Au, 1u, nullptr, 0u, kEdges_b63_17B6, sizeof(kEdges_b63_17B6) / sizeof(kEdges_b63_17B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17B8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7BAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF7C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17B8 = {63u, 0xF7B8u, 0x17B8u, 0xF7C2u, 1u, nullptr, 0u, kEdges_b63_17B8, sizeof(kEdges_b63_17B8) / sizeof(kEdges_b63_17B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17BA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7BCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17BA = {63u, 0xF7BAu, 0x17BAu, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_17BA, sizeof(kEdges_b63_17BA) / sizeof(kEdges_b63_17BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17BC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17BC = {63u, 0xF7BCu, 0x17BCu, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_17BC, sizeof(kEdges_b63_17BC) / sizeof(kEdges_b63_17BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17BE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17BE = {63u, 0xF7BEu, 0x17BEu, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_17BE, sizeof(kEdges_b63_17BE) / sizeof(kEdges_b63_17BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17C0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17C0 = {63u, 0xF7C0u, 0x17C0u, 0x00EDu, 1u, nullptr, 0u, kEdges_b63_17C0, sizeof(kEdges_b63_17C0) / sizeof(kEdges_b63_17C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17C2 = {63u, 0xF7C2u, 0x17C2u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_17C2, sizeof(kEdges_b63_17C2) / sizeof(kEdges_b63_17C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7C5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17C4 = {63u, 0xF7C4u, 0x17C4u, 0u, 0u, nullptr, 0u, kEdges_b63_17C4, sizeof(kEdges_b63_17C4) / sizeof(kEdges_b63_17C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17C5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17C5 = {63u, 0xF7C5u, 0x17C5u, 0x0006u, 1u, nullptr, 0u, kEdges_b63_17C5, sizeof(kEdges_b63_17C5) / sizeof(kEdges_b63_17C5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17C7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17C7 = {63u, 0xF7C7u, 0x17C7u, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_17C7, sizeof(kEdges_b63_17C7) / sizeof(kEdges_b63_17C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17C9 = {63u, 0xF7C9u, 0x17C9u, 0x00ECu, 1u, nullptr, 0u, kEdges_b63_17C9, sizeof(kEdges_b63_17C9) / sizeof(kEdges_b63_17C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17CB = {63u, 0xF7CBu, 0x17CBu, 0x000Bu, 1u, nullptr, 0u, kEdges_b63_17CB, sizeof(kEdges_b63_17CB) / sizeof(kEdges_b63_17CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17CD[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7CFu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF7A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17CD = {63u, 0xF7CDu, 0x17CDu, 0xF7A4u, 1u, nullptr, 0u, kEdges_b63_17CD, sizeof(kEdges_b63_17CD) / sizeof(kEdges_b63_17CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17CF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17CF = {63u, 0xF7CFu, 0x17CFu, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_17CF, sizeof(kEdges_b63_17CF) / sizeof(kEdges_b63_17CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17D1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17D1 = {63u, 0xF7D1u, 0x17D1u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_17D1, sizeof(kEdges_b63_17D1) / sizeof(kEdges_b63_17D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17D3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17D3 = {63u, 0xF7D3u, 0x17D3u, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_17D3, sizeof(kEdges_b63_17D3) / sizeof(kEdges_b63_17D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17D5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17D5 = {63u, 0xF7D5u, 0x17D5u, 0x00EEu, 1u, nullptr, 0u, kEdges_b63_17D5, sizeof(kEdges_b63_17D5) / sizeof(kEdges_b63_17D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17D7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17D7 = {63u, 0xF7D7u, 0x17D7u, 0u, 0u, nullptr, 0u, kEdges_b63_17D7, sizeof(kEdges_b63_17D7) / sizeof(kEdges_b63_17D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17D8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7D9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17D8 = {63u, 0xF7D8u, 0x17D8u, 0u, 0u, nullptr, 0u, kEdges_b63_17D8, sizeof(kEdges_b63_17D8) / sizeof(kEdges_b63_17D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17D9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17D9 = {63u, 0xF7D9u, 0x17D9u, 0u, 0u, nullptr, 0u, kEdges_b63_17D9, sizeof(kEdges_b63_17D9) / sizeof(kEdges_b63_17D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF7DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17DA = {63u, 0xF7DAu, 0x17DAu, 0u, 0u, nullptr, 0u, kEdges_b63_17DA, sizeof(kEdges_b63_17DA) / sizeof(kEdges_b63_17DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_17DB[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_17DB = {63u, 0xF7DBu, 0x17DBu, 0u, 0u, nullptr, 0u, kEdges_b63_17DB, sizeof(kEdges_b63_17DB) / sizeof(kEdges_b63_17DB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18AE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18AE = {63u, 0xF8AEu, 0x18AEu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_18AE, sizeof(kEdges_b63_18AE) / sizeof(kEdges_b63_18AE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18B1 = {63u, 0xF8B1u, 0x18B1u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_18B1, sizeof(kEdges_b63_18B1) / sizeof(kEdges_b63_18B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18B3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18B3 = {63u, 0xF8B3u, 0x18B3u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_18B3, sizeof(kEdges_b63_18B3) / sizeof(kEdges_b63_18B3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18B6 = {63u, 0xF8B6u, 0x18B6u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_18B6, sizeof(kEdges_b63_18B6) / sizeof(kEdges_b63_18B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18B8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18B8 = {63u, 0xF8B8u, 0x18B8u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_18B8, sizeof(kEdges_b63_18B8) / sizeof(kEdges_b63_18B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18BB = {63u, 0xF8BBu, 0x18BBu, 0x000Au, 1u, nullptr, 0u, kEdges_b63_18BB, sizeof(kEdges_b63_18BB) / sizeof(kEdges_b63_18BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18BD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18BD = {63u, 0xF8BDu, 0x18BDu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_18BD, sizeof(kEdges_b63_18BD) / sizeof(kEdges_b63_18BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18C0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18C0 = {63u, 0xF8C0u, 0x18C0u, 0x000Bu, 1u, nullptr, 0u, kEdges_b63_18C0, sizeof(kEdges_b63_18C0) / sizeof(kEdges_b63_18C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8C5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18C2 = {63u, 0xF8C2u, 0x18C2u, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_18C2, sizeof(kEdges_b63_18C2) / sizeof(kEdges_b63_18C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18C5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18C5 = {63u, 0xF8C5u, 0x18C5u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_18C5, sizeof(kEdges_b63_18C5) / sizeof(kEdges_b63_18C5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18C7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8CAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18C7 = {63u, 0xF8C7u, 0x18C7u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_18C7, sizeof(kEdges_b63_18C7) / sizeof(kEdges_b63_18C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18CA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8CCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18CA = {63u, 0xF8CAu, 0x18CAu, 0x000Du, 1u, nullptr, 0u, kEdges_b63_18CA, sizeof(kEdges_b63_18CA) / sizeof(kEdges_b63_18CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18CC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18CC = {63u, 0xF8CCu, 0x18CCu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_18CC, sizeof(kEdges_b63_18CC) / sizeof(kEdges_b63_18CC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18CE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8D0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18CE = {63u, 0xF8CEu, 0x18CEu, 0x000Au, 1u, nullptr, 0u, kEdges_b63_18CE, sizeof(kEdges_b63_18CE) / sizeof(kEdges_b63_18CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18D0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18D0 = {63u, 0xF8D0u, 0x18D0u, 0u, 0u, nullptr, 0u, kEdges_b63_18D0, sizeof(kEdges_b63_18D0) / sizeof(kEdges_b63_18D0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18D1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18D1 = {63u, 0xF8D1u, 0x18D1u, 0x000Du, 1u, nullptr, 0u, kEdges_b63_18D1, sizeof(kEdges_b63_18D1) / sizeof(kEdges_b63_18D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18D3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8D5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF8DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18D3 = {63u, 0xF8D3u, 0x18D3u, 0xF8DBu, 1u, nullptr, 0u, kEdges_b63_18D3, sizeof(kEdges_b63_18D3) / sizeof(kEdges_b63_18D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18D5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18D5 = {63u, 0xF8D5u, 0x18D5u, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_18D5, sizeof(kEdges_b63_18D5) / sizeof(kEdges_b63_18D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18D7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8D9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18D7 = {63u, 0xF8D7u, 0x18D7u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_18D7, sizeof(kEdges_b63_18D7) / sizeof(kEdges_b63_18D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18D9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18D9 = {63u, 0xF8D9u, 0x18D9u, 0x0004u, 1u, nullptr, 0u, kEdges_b63_18D9, sizeof(kEdges_b63_18D9) / sizeof(kEdges_b63_18D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18DB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18DB = {63u, 0xF8DBu, 0x18DBu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_18DB, sizeof(kEdges_b63_18DB) / sizeof(kEdges_b63_18DB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18DD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18DD = {63u, 0xF8DDu, 0x18DDu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_18DD, sizeof(kEdges_b63_18DD) / sizeof(kEdges_b63_18DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8E0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18DF = {63u, 0xF8DFu, 0x18DFu, 0u, 0u, nullptr, 0u, kEdges_b63_18DF, sizeof(kEdges_b63_18DF) / sizeof(kEdges_b63_18DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18E0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18E0 = {63u, 0xF8E0u, 0x18E0u, 0x000Bu, 1u, nullptr, 0u, kEdges_b63_18E0, sizeof(kEdges_b63_18E0) / sizeof(kEdges_b63_18E0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8E4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18E2 = {63u, 0xF8E2u, 0x18E2u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_18E2, sizeof(kEdges_b63_18E2) / sizeof(kEdges_b63_18E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18E4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18E4 = {63u, 0xF8E4u, 0x18E4u, 0x0009u, 1u, nullptr, 0u, kEdges_b63_18E4, sizeof(kEdges_b63_18E4) / sizeof(kEdges_b63_18E4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18E6 = {63u, 0xF8E6u, 0x18E6u, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_18E6, sizeof(kEdges_b63_18E6) / sizeof(kEdges_b63_18E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18E8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8EAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18E8 = {63u, 0xF8E8u, 0x18E8u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_18E8, sizeof(kEdges_b63_18E8) / sizeof(kEdges_b63_18E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18EA[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8ECu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF8F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18EA = {63u, 0xF8EAu, 0x18EAu, 0xF8F2u, 1u, nullptr, 0u, kEdges_b63_18EA, sizeof(kEdges_b63_18EA) / sizeof(kEdges_b63_18EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18EC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8EEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18EC = {63u, 0xF8ECu, 0x18ECu, 0x00FFu, 1u, nullptr, 0u, kEdges_b63_18EC, sizeof(kEdges_b63_18EC) / sizeof(kEdges_b63_18EC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18EE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18EE = {63u, 0xF8EEu, 0x18EEu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_18EE, sizeof(kEdges_b63_18EE) / sizeof(kEdges_b63_18EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18F0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18F0 = {63u, 0xF8F0u, 0x18F0u, 0u, 0u, nullptr, 0u, kEdges_b63_18F0, sizeof(kEdges_b63_18F0) / sizeof(kEdges_b63_18F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18F1 = {63u, 0xF8F1u, 0x18F1u, 0u, 0u, nullptr, 0u, kEdges_b63_18F1, sizeof(kEdges_b63_18F1) / sizeof(kEdges_b63_18F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18F2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18F2 = {63u, 0xF8F2u, 0x18F2u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_18F2, sizeof(kEdges_b63_18F2) / sizeof(kEdges_b63_18F2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18F4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18F4 = {63u, 0xF8F4u, 0x18F4u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_18F4, sizeof(kEdges_b63_18F4) / sizeof(kEdges_b63_18F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18F6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8F8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF901u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18F6 = {63u, 0xF8F6u, 0x18F6u, 0xF901u, 1u, nullptr, 0u, kEdges_b63_18F6, sizeof(kEdges_b63_18F6) / sizeof(kEdges_b63_18F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18F8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18F8 = {63u, 0xF8F8u, 0x18F8u, 0u, 0u, nullptr, 0u, kEdges_b63_18F8, sizeof(kEdges_b63_18F8) / sizeof(kEdges_b63_18F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18F9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18F9 = {63u, 0xF8F9u, 0x18F9u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_18F9, sizeof(kEdges_b63_18F9) / sizeof(kEdges_b63_18F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18FB = {63u, 0xF8FBu, 0x18FBu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_18FB, sizeof(kEdges_b63_18FB) / sizeof(kEdges_b63_18FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF8FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18FD = {63u, 0xF8FDu, 0x18FDu, 0u, 0u, nullptr, 0u, kEdges_b63_18FD, sizeof(kEdges_b63_18FD) / sizeof(kEdges_b63_18FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_18FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF900u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_18FE = {63u, 0xF8FEu, 0x18FEu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_18FE, sizeof(kEdges_b63_18FE) / sizeof(kEdges_b63_18FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1900[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF901u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1900 = {63u, 0xF900u, 0x1900u, 0u, 0u, nullptr, 0u, kEdges_b63_1900, sizeof(kEdges_b63_1900) / sizeof(kEdges_b63_1900[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1901[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF903u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1901 = {63u, 0xF901u, 0x1901u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1901, sizeof(kEdges_b63_1901) / sizeof(kEdges_b63_1901[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1903[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF905u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1903 = {63u, 0xF903u, 0x1903u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_1903, sizeof(kEdges_b63_1903) / sizeof(kEdges_b63_1903[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1905[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF907u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1905 = {63u, 0xF905u, 0x1905u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_1905, sizeof(kEdges_b63_1905) / sizeof(kEdges_b63_1905[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1907[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF908u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1907 = {63u, 0xF907u, 0x1907u, 0u, 0u, nullptr, 0u, kEdges_b63_1907, sizeof(kEdges_b63_1907) / sizeof(kEdges_b63_1907[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1908[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF909u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1908 = {63u, 0xF908u, 0x1908u, 0u, 0u, nullptr, 0u, kEdges_b63_1908, sizeof(kEdges_b63_1908) / sizeof(kEdges_b63_1908[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1909[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF90Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1909 = {63u, 0xF909u, 0x1909u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1909, sizeof(kEdges_b63_1909) / sizeof(kEdges_b63_1909[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_190B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF90Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF916u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_190B = {63u, 0xF90Bu, 0x190Bu, 0xF916u, 1u, nullptr, 0u, kEdges_b63_190B, sizeof(kEdges_b63_190B) / sizeof(kEdges_b63_190B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_190D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF90Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_190D = {63u, 0xF90Du, 0x190Du, 0x0002u, 1u, nullptr, 0u, kEdges_b63_190D, sizeof(kEdges_b63_190D) / sizeof(kEdges_b63_190D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_190F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF910u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_190F = {63u, 0xF90Fu, 0x190Fu, 0u, 0u, nullptr, 0u, kEdges_b63_190F, sizeof(kEdges_b63_190F) / sizeof(kEdges_b63_190F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1910[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF912u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1910 = {63u, 0xF910u, 0x1910u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1910, sizeof(kEdges_b63_1910) / sizeof(kEdges_b63_1910[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1912[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF914u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF916u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1912 = {63u, 0xF912u, 0x1912u, 0xF916u, 1u, nullptr, 0u, kEdges_b63_1912, sizeof(kEdges_b63_1912) / sizeof(kEdges_b63_1912[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1914[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF916u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1914 = {63u, 0xF914u, 0x1914u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_1914, sizeof(kEdges_b63_1914) / sizeof(kEdges_b63_1914[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1916[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF917u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1916 = {63u, 0xF916u, 0x1916u, 0u, 0u, nullptr, 0u, kEdges_b63_1916, sizeof(kEdges_b63_1916) / sizeof(kEdges_b63_1916[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1917[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF918u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1917 = {63u, 0xF917u, 0x1917u, 0u, 0u, nullptr, 0u, kEdges_b63_1917, sizeof(kEdges_b63_1917) / sizeof(kEdges_b63_1917[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1918[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF919u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1918 = {63u, 0xF918u, 0x1918u, 0u, 0u, nullptr, 0u, kEdges_b63_1918, sizeof(kEdges_b63_1918) / sizeof(kEdges_b63_1918[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1919[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF91Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1919 = {63u, 0xF919u, 0x1919u, 0u, 0u, nullptr, 0u, kEdges_b63_1919, sizeof(kEdges_b63_1919) / sizeof(kEdges_b63_1919[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_191A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF91Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_191A = {63u, 0xF91Au, 0x191Au, 0x0002u, 1u, nullptr, 0u, kEdges_b63_191A, sizeof(kEdges_b63_191A) / sizeof(kEdges_b63_191A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_191C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF91Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_191C = {63u, 0xF91Cu, 0x191Cu, 0u, 0u, nullptr, 0u, kEdges_b63_191C, sizeof(kEdges_b63_191C) / sizeof(kEdges_b63_191C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_191D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF920u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_191D = {63u, 0xF91Du, 0x191Du, 0xF923u, 2u, nullptr, 0u, kEdges_b63_191D, sizeof(kEdges_b63_191D) / sizeof(kEdges_b63_191D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1920[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF922u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1920 = {63u, 0xF920u, 0x1920u, 0x0011u, 1u, nullptr, 0u, kEdges_b63_1920, sizeof(kEdges_b63_1920) / sizeof(kEdges_b63_1920[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1922[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1922 = {63u, 0xF922u, 0x1922u, 0u, 0u, nullptr, 0u, kEdges_b63_1922, sizeof(kEdges_b63_1922) / sizeof(kEdges_b63_1922[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1946[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF948u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1946 = {63u, 0xF946u, 0x1946u, 0x0080u, 1u, nullptr, 0u, kEdges_b63_1946, sizeof(kEdges_b63_1946) / sizeof(kEdges_b63_1946[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1948[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF94Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1948 = {63u, 0xF948u, 0x1948u, 0x06A5u, 2u, nullptr, 0u, kEdges_b63_1948, sizeof(kEdges_b63_1948) / sizeof(kEdges_b63_1948[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_194B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF94Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_194B = {63u, 0xF94Bu, 0x194Bu, 0x0051u, 1u, nullptr, 0u, kEdges_b63_194B, sizeof(kEdges_b63_194B) / sizeof(kEdges_b63_194B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_194D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF523u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF950u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_194D = {63u, 0xF94Du, 0x194Du, 0xF523u, 2u, nullptr, 0u, kEdges_b63_194D, sizeof(kEdges_b63_194D) / sizeof(kEdges_b63_194D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1950[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF952u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF99Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1950 = {63u, 0xF950u, 0x1950u, 0xF99Cu, 1u, nullptr, 0u, kEdges_b63_1950, sizeof(kEdges_b63_1950) / sizeof(kEdges_b63_1950[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1952[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF954u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1952 = {63u, 0xF952u, 0x1952u, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_1952, sizeof(kEdges_b63_1952) / sizeof(kEdges_b63_1952[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1954[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xFA03u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF957u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1954 = {63u, 0xF954u, 0x1954u, 0xFA03u, 2u, nullptr, 0u, kEdges_b63_1954, sizeof(kEdges_b63_1954) / sizeof(kEdges_b63_1954[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1957[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xFA5Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF95Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1957 = {63u, 0xF957u, 0x1957u, 0xFA5Fu, 2u, nullptr, 0u, kEdges_b63_1957, sizeof(kEdges_b63_1957) / sizeof(kEdges_b63_1957[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_195A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF95Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_195A = {63u, 0xF95Au, 0x195Au, 0x008Fu, 1u, nullptr, 0u, kEdges_b63_195A, sizeof(kEdges_b63_195A) / sizeof(kEdges_b63_195A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_195C[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 63, 0xF95Fu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_195C = {63u, 0xF95Cu, 0x195Cu, 0xE468u, 2u, nullptr, 0u, kEdges_b63_195C, sizeof(kEdges_b63_195C) / sizeof(kEdges_b63_195C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_195F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF962u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_195F = {63u, 0xF95Fu, 0x195Fu, 0x03A8u, 2u, nullptr, 0u, kEdges_b63_195F, sizeof(kEdges_b63_195F) / sizeof(kEdges_b63_195F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1962[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF964u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF95Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1962 = {63u, 0xF962u, 0x1962u, 0xF95Cu, 1u, nullptr, 0u, kEdges_b63_1962, sizeof(kEdges_b63_1962) / sizeof(kEdges_b63_1962[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1964[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF966u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1964 = {63u, 0xF964u, 0x1964u, 0x00F0u, 1u, nullptr, 0u, kEdges_b63_1964, sizeof(kEdges_b63_1964) / sizeof(kEdges_b63_1964[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1966[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF968u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1966 = {63u, 0xF966u, 0x1966u, 0x0051u, 1u, nullptr, 0u, kEdges_b63_1966, sizeof(kEdges_b63_1966) / sizeof(kEdges_b63_1966[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1968[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF96Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1968 = {63u, 0xF968u, 0x1968u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_1968, sizeof(kEdges_b63_1968) / sizeof(kEdges_b63_1968[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_196A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF96Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF96Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_196A = {63u, 0xF96Au, 0x196Au, 0xF96Eu, 1u, nullptr, 0u, kEdges_b63_196A, sizeof(kEdges_b63_196A) / sizeof(kEdges_b63_196A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_196C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF96Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_196C = {63u, 0xF96Cu, 0x196Cu, 0x003Cu, 1u, nullptr, 0u, kEdges_b63_196C, sizeof(kEdges_b63_196C) / sizeof(kEdges_b63_196C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_196E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF971u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_196E = {63u, 0xF96Eu, 0x196Eu, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_196E, sizeof(kEdges_b63_196E) / sizeof(kEdges_b63_196E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1971[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 63, 0xF974u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1971 = {63u, 0xF971u, 0x1971u, 0xE468u, 2u, nullptr, 0u, kEdges_b63_1971, sizeof(kEdges_b63_1971) / sizeof(kEdges_b63_1971[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1974[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF977u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1974 = {63u, 0xF974u, 0x1974u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_1974, sizeof(kEdges_b63_1974) / sizeof(kEdges_b63_1974[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1977[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF979u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF971u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1977 = {63u, 0xF977u, 0x1977u, 0xF971u, 1u, nullptr, 0u, kEdges_b63_1977, sizeof(kEdges_b63_1977) / sizeof(kEdges_b63_1977[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1979[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF97Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1979 = {63u, 0xF979u, 0x1979u, 0x03E5u, 2u, nullptr, 0u, kEdges_b63_1979, sizeof(kEdges_b63_1979) / sizeof(kEdges_b63_1979[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_197C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF97Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF971u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_197C = {63u, 0xF97Cu, 0x197Cu, 0xF971u, 1u, nullptr, 0u, kEdges_b63_197C, sizeof(kEdges_b63_197C) / sizeof(kEdges_b63_197C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_197E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF980u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_197E = {63u, 0xF97Eu, 0x197Eu, 0x0013u, 1u, nullptr, 0u, kEdges_b63_197E, sizeof(kEdges_b63_197E) / sizeof(kEdges_b63_197E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1980[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF982u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1980 = {63u, 0xF980u, 0x1980u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_1980, sizeof(kEdges_b63_1980) / sizeof(kEdges_b63_1980[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1982[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF985u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1982 = {63u, 0xF982u, 0x1982u, 0xC62Bu, 2u, nullptr, 0u, kEdges_b63_1982, sizeof(kEdges_b63_1982) / sizeof(kEdges_b63_1982[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1985[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF987u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1985 = {63u, 0xF985u, 0x1985u, 0x00F0u, 1u, nullptr, 0u, kEdges_b63_1985, sizeof(kEdges_b63_1985) / sizeof(kEdges_b63_1985[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1987[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF98Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1987 = {63u, 0xF987u, 0x1987u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_1987, sizeof(kEdges_b63_1987) / sizeof(kEdges_b63_1987[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_198A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF98Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_198A = {63u, 0xF98Au, 0x198Au, 0x0000u, 1u, nullptr, 0u, kEdges_b63_198A, sizeof(kEdges_b63_198A) / sizeof(kEdges_b63_198A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_198C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF98Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_198C = {63u, 0xF98Cu, 0x198Cu, 0x0040u, 1u, nullptr, 0u, kEdges_b63_198C, sizeof(kEdges_b63_198C) / sizeof(kEdges_b63_198C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_198E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD430u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF991u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_198E = {63u, 0xF98Eu, 0x198Eu, 0xD430u, 2u, nullptr, 0u, kEdges_b63_198E, sizeof(kEdges_b63_198E) / sizeof(kEdges_b63_198E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1991[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 63, 0xF994u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1991 = {63u, 0xF991u, 0x1991u, 0xE468u, 2u, nullptr, 0u, kEdges_b63_1991, sizeof(kEdges_b63_1991) / sizeof(kEdges_b63_1991[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1994[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF997u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1994 = {63u, 0xF994u, 0x1994u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_1994, sizeof(kEdges_b63_1994) / sizeof(kEdges_b63_1994[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1997[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF999u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF98Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1997 = {63u, 0xF997u, 0x1997u, 0xF98Au, 1u, nullptr, 0u, kEdges_b63_1997, sizeof(kEdges_b63_1997) / sizeof(kEdges_b63_1997[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1999[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF4E7u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF99Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1999 = {63u, 0xF999u, 0x1999u, 0xF4E7u, 2u, nullptr, 0u, kEdges_b63_1999, sizeof(kEdges_b63_1999) / sizeof(kEdges_b63_1999[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_199C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF99Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_199C = {63u, 0xF99Cu, 0x199Cu, 0x0051u, 1u, nullptr, 0u, kEdges_b63_199C, sizeof(kEdges_b63_199C) / sizeof(kEdges_b63_199C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_199E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9A0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_199E = {63u, 0xF99Eu, 0x199Eu, 0x0008u, 1u, nullptr, 0u, kEdges_b63_199E, sizeof(kEdges_b63_199E) / sizeof(kEdges_b63_199E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19A0[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9A2u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF9B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19A0 = {63u, 0xF9A0u, 0x19A0u, 0xF9B4u, 1u, nullptr, 0u, kEdges_b63_19A0, sizeof(kEdges_b63_19A0) / sizeof(kEdges_b63_19A0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19A2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF9C6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF9A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19A2 = {63u, 0xF9A2u, 0x19A2u, 0xF9C6u, 2u, nullptr, 0u, kEdges_b63_19A2, sizeof(kEdges_b63_19A2) / sizeof(kEdges_b63_19A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19A5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19A5 = {63u, 0xF9A5u, 0x19A5u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_19A5, sizeof(kEdges_b63_19A5) / sizeof(kEdges_b63_19A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19A7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD42Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF9AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19A7 = {63u, 0xF9A7u, 0x19A7u, 0xD42Au, 2u, nullptr, 0u, kEdges_b63_19A7, sizeof(kEdges_b63_19A7) / sizeof(kEdges_b63_19A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19AA[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 63, 0xF9ADu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19AA = {63u, 0xF9AAu, 0x19AAu, 0xE468u, 2u, nullptr, 0u, kEdges_b63_19AA, sizeof(kEdges_b63_19AA) / sizeof(kEdges_b63_19AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19AD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19AD = {63u, 0xF9ADu, 0x19ADu, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_19AD, sizeof(kEdges_b63_19AD) / sizeof(kEdges_b63_19AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19B0 = {63u, 0xF9B0u, 0x19B0u, 0x00B4u, 1u, nullptr, 0u, kEdges_b63_19B0, sizeof(kEdges_b63_19B0) / sizeof(kEdges_b63_19B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19B2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9B4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF9A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19B2 = {63u, 0xF9B2u, 0x19B2u, 0xF9A5u, 1u, nullptr, 0u, kEdges_b63_19B2, sizeof(kEdges_b63_19B2) / sizeof(kEdges_b63_19B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19B4 = {63u, 0xF9B4u, 0x19B4u, 0x0045u, 1u, nullptr, 0u, kEdges_b63_19B4, sizeof(kEdges_b63_19B4) / sizeof(kEdges_b63_19B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9B9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19B6 = {63u, 0xF9B6u, 0x19B6u, 0x042Au, 2u, nullptr, 0u, kEdges_b63_19B6, sizeof(kEdges_b63_19B6) / sizeof(kEdges_b63_19B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19B9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19B9 = {63u, 0xF9B9u, 0x19B9u, 0x0091u, 1u, nullptr, 0u, kEdges_b63_19B9, sizeof(kEdges_b63_19B9) / sizeof(kEdges_b63_19B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19BB = {63u, 0xF9BBu, 0x19BBu, 0x0413u, 2u, nullptr, 0u, kEdges_b63_19BB, sizeof(kEdges_b63_19BB) / sizeof(kEdges_b63_19BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19BE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19BE = {63u, 0xF9BEu, 0x19BEu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_19BE, sizeof(kEdges_b63_19BE) / sizeof(kEdges_b63_19BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19C0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD430u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF9C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19C0 = {63u, 0xF9C0u, 0x19C0u, 0xD430u, 2u, nullptr, 0u, kEdges_b63_19C0, sizeof(kEdges_b63_19C0) / sizeof(kEdges_b63_19C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19C3[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19C3 = {63u, 0xF9C3u, 0x19C3u, 0xE456u, 2u, nullptr, 0u, kEdges_b63_19C3, sizeof(kEdges_b63_19C3) / sizeof(kEdges_b63_19C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19C6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19C6 = {63u, 0xF9C6u, 0x19C6u, 0u, 0u, nullptr, 0u, kEdges_b63_19C6, sizeof(kEdges_b63_19C6) / sizeof(kEdges_b63_19C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19C7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9CAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19C7 = {63u, 0xF9C7u, 0x19C7u, 0x05C7u, 2u, nullptr, 0u, kEdges_b63_19C7, sizeof(kEdges_b63_19C7) / sizeof(kEdges_b63_19C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19CA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19CA = {63u, 0xF9CAu, 0x19CAu, 0u, 0u, nullptr, 0u, kEdges_b63_19CA, sizeof(kEdges_b63_19CA) / sizeof(kEdges_b63_19CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19CB = {63u, 0xF9CBu, 0x19CBu, 0x05DEu, 2u, nullptr, 0u, kEdges_b63_19CB, sizeof(kEdges_b63_19CB) / sizeof(kEdges_b63_19CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19CE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19CE = {63u, 0xF9CEu, 0x19CEu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_19CE, sizeof(kEdges_b63_19CE) / sizeof(kEdges_b63_19CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19D1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19D1 = {63u, 0xF9D1u, 0x19D1u, 0x0080u, 1u, nullptr, 0u, kEdges_b63_19D1, sizeof(kEdges_b63_19D1) / sizeof(kEdges_b63_19D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19D3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9D5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF9E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19D3 = {63u, 0xF9D3u, 0x19D3u, 0xF9E6u, 1u, nullptr, 0u, kEdges_b63_19D3, sizeof(kEdges_b63_19D3) / sizeof(kEdges_b63_19D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19D5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19D5 = {63u, 0xF9D5u, 0x19D5u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_19D5, sizeof(kEdges_b63_19D5) / sizeof(kEdges_b63_19D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19D7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD42Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF9DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19D7 = {63u, 0xF9D7u, 0x19D7u, 0xD42Au, 2u, nullptr, 0u, kEdges_b63_19D7, sizeof(kEdges_b63_19D7) / sizeof(kEdges_b63_19D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19DA[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 63, 0xF9DDu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19DA = {63u, 0xF9DAu, 0x19DAu, 0xE468u, 2u, nullptr, 0u, kEdges_b63_19DA, sizeof(kEdges_b63_19DA) / sizeof(kEdges_b63_19DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19DD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9E0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19DD = {63u, 0xF9DDu, 0x19DDu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_19DD, sizeof(kEdges_b63_19DD) / sizeof(kEdges_b63_19DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19E0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19E0 = {63u, 0xF9E0u, 0x19E0u, 0x0080u, 1u, nullptr, 0u, kEdges_b63_19E0, sizeof(kEdges_b63_19E0) / sizeof(kEdges_b63_19E0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19E2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9E4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF9D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19E2 = {63u, 0xF9E2u, 0x19E2u, 0xF9D5u, 1u, nullptr, 0u, kEdges_b63_19E2, sizeof(kEdges_b63_19E2) / sizeof(kEdges_b63_19E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19E4[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9E6u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF9F5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19E4 = {63u, 0xF9E4u, 0x19E4u, 0xF9F5u, 1u, nullptr, 0u, kEdges_b63_19E4, sizeof(kEdges_b63_19E4) / sizeof(kEdges_b63_19E4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19E6 = {63u, 0xF9E6u, 0x19E6u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_19E6, sizeof(kEdges_b63_19E6) / sizeof(kEdges_b63_19E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19E8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD42Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xF9EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19E8 = {63u, 0xF9E8u, 0x19E8u, 0xD42Au, 2u, nullptr, 0u, kEdges_b63_19E8, sizeof(kEdges_b63_19E8) / sizeof(kEdges_b63_19E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19EB[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 63, 0xF9EEu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19EB = {63u, 0xF9EBu, 0x19EBu, 0xE468u, 2u, nullptr, 0u, kEdges_b63_19EB, sizeof(kEdges_b63_19EB) / sizeof(kEdges_b63_19EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19EE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19EE = {63u, 0xF9EEu, 0x19EEu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_19EE, sizeof(kEdges_b63_19EE) / sizeof(kEdges_b63_19EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19F1 = {63u, 0xF9F1u, 0x19F1u, 0x0080u, 1u, nullptr, 0u, kEdges_b63_19F1, sizeof(kEdges_b63_19F1) / sizeof(kEdges_b63_19F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19F3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9F5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xF9E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19F3 = {63u, 0xF9F3u, 0x19F3u, 0xF9E6u, 1u, nullptr, 0u, kEdges_b63_19F3, sizeof(kEdges_b63_19F3) / sizeof(kEdges_b63_19F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19F5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19F5 = {63u, 0xF9F5u, 0x19F5u, 0x0080u, 1u, nullptr, 0u, kEdges_b63_19F5, sizeof(kEdges_b63_19F5) / sizeof(kEdges_b63_19F5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19F7 = {63u, 0xF9F7u, 0x19F7u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_19F7, sizeof(kEdges_b63_19F7) / sizeof(kEdges_b63_19F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19FA = {63u, 0xF9FAu, 0x19FAu, 0x05DEu, 2u, nullptr, 0u, kEdges_b63_19FA, sizeof(kEdges_b63_19FA) / sizeof(kEdges_b63_19FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xF9FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19FD = {63u, 0xF9FDu, 0x19FDu, 0u, 0u, nullptr, 0u, kEdges_b63_19FD, sizeof(kEdges_b63_19FD) / sizeof(kEdges_b63_19FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_19FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA01u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_19FE = {63u, 0xF9FEu, 0x19FEu, 0x05C7u, 2u, nullptr, 0u, kEdges_b63_19FE, sizeof(kEdges_b63_19FE) / sizeof(kEdges_b63_19FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A01[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA02u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A01 = {63u, 0xFA01u, 0x1A01u, 0u, 0u, nullptr, 0u, kEdges_b63_1A01, sizeof(kEdges_b63_1A01) / sizeof(kEdges_b63_1A01[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A02[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A02 = {63u, 0xFA02u, 0x1A02u, 0u, 0u, nullptr, 0u, kEdges_b63_1A02, sizeof(kEdges_b63_1A02) / sizeof(kEdges_b63_1A02[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A03[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA04u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A03 = {63u, 0xFA03u, 0x1A03u, 0u, 0u, nullptr, 0u, kEdges_b63_1A03, sizeof(kEdges_b63_1A03) / sizeof(kEdges_b63_1A03[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A04[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA07u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A04 = {63u, 0xFA04u, 0x1A04u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_1A04, sizeof(kEdges_b63_1A04) / sizeof(kEdges_b63_1A04[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A07[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA08u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A07 = {63u, 0xFA07u, 0x1A07u, 0u, 0u, nullptr, 0u, kEdges_b63_1A07, sizeof(kEdges_b63_1A07) / sizeof(kEdges_b63_1A07[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A08[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA0Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A08 = {63u, 0xFA08u, 0x1A08u, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_1A08, sizeof(kEdges_b63_1A08) / sizeof(kEdges_b63_1A08[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A0B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA0Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A0B = {63u, 0xFA0Bu, 0x1A0Bu, 0x000Cu, 1u, nullptr, 0u, kEdges_b63_1A0B, sizeof(kEdges_b63_1A0B) / sizeof(kEdges_b63_1A0B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A0D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA0Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A0D = {63u, 0xFA0Du, 0x1A0Du, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_1A0D, sizeof(kEdges_b63_1A0D) / sizeof(kEdges_b63_1A0D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A0F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA11u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A0F = {63u, 0xFA0Fu, 0x1A0Fu, 0x0051u, 1u, nullptr, 0u, kEdges_b63_1A0F, sizeof(kEdges_b63_1A0F) / sizeof(kEdges_b63_1A0F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A11[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA13u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A11 = {63u, 0xFA11u, 0x1A11u, 0x000Fu, 1u, nullptr, 0u, kEdges_b63_1A11, sizeof(kEdges_b63_1A11) / sizeof(kEdges_b63_1A11[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A13[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA15u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xFA19u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A13 = {63u, 0xFA13u, 0x1A13u, 0xFA19u, 1u, nullptr, 0u, kEdges_b63_1A13, sizeof(kEdges_b63_1A13) / sizeof(kEdges_b63_1A13[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A15[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA17u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A15 = {63u, 0xFA15u, 0x1A15u, 0x0018u, 1u, nullptr, 0u, kEdges_b63_1A15, sizeof(kEdges_b63_1A15) / sizeof(kEdges_b63_1A15[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A17[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA19u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A17 = {63u, 0xFA17u, 0x1A17u, 0x00DCu, 1u, nullptr, 0u, kEdges_b63_1A17, sizeof(kEdges_b63_1A17) / sizeof(kEdges_b63_1A17[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A19[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xFA1Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A19 = {63u, 0xFA19u, 0x1A19u, 0xC62Bu, 2u, nullptr, 0u, kEdges_b63_1A19, sizeof(kEdges_b63_1A19) / sizeof(kEdges_b63_1A19[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A1C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA1Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A1C = {63u, 0xFA1Cu, 0x1A1Cu, 0x0057u, 1u, nullptr, 0u, kEdges_b63_1A1C, sizeof(kEdges_b63_1A1C) / sizeof(kEdges_b63_1A1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A1E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA1Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A1E = {63u, 0xFA1Eu, 0x1A1Eu, 0u, 0u, nullptr, 0u, kEdges_b63_1A1E, sizeof(kEdges_b63_1A1E) / sizeof(kEdges_b63_1A1E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A1F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA22u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A1F = {63u, 0xFA1Fu, 0x1A1Fu, 0x0684u, 2u, nullptr, 0u, kEdges_b63_1A1F, sizeof(kEdges_b63_1A1F) / sizeof(kEdges_b63_1A1F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A22[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA25u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A22 = {63u, 0xFA22u, 0x1A22u, 0x064Fu, 2u, nullptr, 0u, kEdges_b63_1A22, sizeof(kEdges_b63_1A22) / sizeof(kEdges_b63_1A22[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A25[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A25 = {63u, 0xFA25u, 0x1A25u, 0x0685u, 2u, nullptr, 0u, kEdges_b63_1A25, sizeof(kEdges_b63_1A25) / sizeof(kEdges_b63_1A25[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A28[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A28 = {63u, 0xFA28u, 0x1A28u, 0x069Eu, 2u, nullptr, 0u, kEdges_b63_1A28, sizeof(kEdges_b63_1A28) / sizeof(kEdges_b63_1A28[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A2B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA2Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A2B = {63u, 0xFA2Bu, 0x1A2Bu, 0x0686u, 2u, nullptr, 0u, kEdges_b63_1A2B, sizeof(kEdges_b63_1A2B) / sizeof(kEdges_b63_1A2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A2E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA30u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A2E = {63u, 0xFA2Eu, 0x1A2Eu, 0x0001u, 1u, nullptr, 0u, kEdges_b63_1A2E, sizeof(kEdges_b63_1A2E) / sizeof(kEdges_b63_1A2E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A30[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD430u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xFA33u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A30 = {63u, 0xFA30u, 0x1A30u, 0xD430u, 2u, nullptr, 0u, kEdges_b63_1A30, sizeof(kEdges_b63_1A30) / sizeof(kEdges_b63_1A30[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A33[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 63, 0xFA36u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A33 = {63u, 0xFA33u, 0x1A33u, 0xE468u, 2u, nullptr, 0u, kEdges_b63_1A33, sizeof(kEdges_b63_1A33) / sizeof(kEdges_b63_1A33[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A36[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA39u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A36 = {63u, 0xFA36u, 0x1A36u, 0x0486u, 2u, nullptr, 0u, kEdges_b63_1A36, sizeof(kEdges_b63_1A36) / sizeof(kEdges_b63_1A36[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A39[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA3Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A39 = {63u, 0xFA39u, 0x1A39u, 0x0040u, 1u, nullptr, 0u, kEdges_b63_1A39, sizeof(kEdges_b63_1A39) / sizeof(kEdges_b63_1A39[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A3B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA3Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xFA2Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A3B = {63u, 0xFA3Bu, 0x1A3Bu, 0xFA2Eu, 1u, nullptr, 0u, kEdges_b63_1A3B, sizeof(kEdges_b63_1A3B) / sizeof(kEdges_b63_1A3B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A3D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD6F1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xFA40u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A3D = {63u, 0xFA3Du, 0x1A3Du, 0xD6F1u, 2u, nullptr, 0u, kEdges_b63_1A3D, sizeof(kEdges_b63_1A3D) / sizeof(kEdges_b63_1A3D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A40[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xFA43u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A40 = {63u, 0xFA40u, 0x1A40u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b63_1A40, sizeof(kEdges_b63_1A40) / sizeof(kEdges_b63_1A40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A43[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCF4Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xFA46u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A43 = {63u, 0xFA43u, 0x1A43u, 0xCF4Au, 2u, nullptr, 0u, kEdges_b63_1A43, sizeof(kEdges_b63_1A43) / sizeof(kEdges_b63_1A43[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A46[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA48u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A46 = {63u, 0xFA46u, 0x1A46u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1A46, sizeof(kEdges_b63_1A46) / sizeof(kEdges_b63_1A46[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A48[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD430u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xFA4Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A48 = {63u, 0xFA48u, 0x1A48u, 0xD430u, 2u, nullptr, 0u, kEdges_b63_1A48, sizeof(kEdges_b63_1A48) / sizeof(kEdges_b63_1A48[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A4B[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 63, 0xFA4Eu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A4B = {63u, 0xFA4Bu, 0x1A4Bu, 0xE468u, 2u, nullptr, 0u, kEdges_b63_1A4B, sizeof(kEdges_b63_1A4B) / sizeof(kEdges_b63_1A4B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A4E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA51u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A4E = {63u, 0xFA4Eu, 0x1A4Eu, 0x05C8u, 2u, nullptr, 0u, kEdges_b63_1A4E, sizeof(kEdges_b63_1A4E) / sizeof(kEdges_b63_1A4E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A51[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA52u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A51 = {63u, 0xFA51u, 0x1A51u, 0u, 0u, nullptr, 0u, kEdges_b63_1A51, sizeof(kEdges_b63_1A51) / sizeof(kEdges_b63_1A51[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A52[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA55u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A52 = {63u, 0xFA52u, 0x1A52u, 0x05B1u, 2u, nullptr, 0u, kEdges_b63_1A52, sizeof(kEdges_b63_1A52) / sizeof(kEdges_b63_1A52[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A55[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA56u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A55 = {63u, 0xFA55u, 0x1A55u, 0u, 0u, nullptr, 0u, kEdges_b63_1A55, sizeof(kEdges_b63_1A55) / sizeof(kEdges_b63_1A55[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A56[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A56 = {63u, 0xFA56u, 0x1A56u, 0u, 0u, nullptr, 0u, kEdges_b63_1A56, sizeof(kEdges_b63_1A56) / sizeof(kEdges_b63_1A56[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A5F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDE59u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xFA62u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A5F = {63u, 0xFA5Fu, 0x1A5Fu, 0xDE59u, 2u, nullptr, 0u, kEdges_b63_1A5F, sizeof(kEdges_b63_1A5F) / sizeof(kEdges_b63_1A5F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A62[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA65u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A62 = {63u, 0xFA62u, 0x1A62u, 0x063Du, 2u, nullptr, 0u, kEdges_b63_1A62, sizeof(kEdges_b63_1A62) / sizeof(kEdges_b63_1A62[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A65[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA68u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A65 = {63u, 0xFA65u, 0x1A65u, 0xFA57u, 2u, nullptr, 0u, kEdges_b63_1A65, sizeof(kEdges_b63_1A65) / sizeof(kEdges_b63_1A65[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A68[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xFA6Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A68 = {63u, 0xFA68u, 0x1A68u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b63_1A68, sizeof(kEdges_b63_1A68) / sizeof(kEdges_b63_1A68[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A6B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA6Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A6B = {63u, 0xFA6Bu, 0x1A6Bu, 0x003Cu, 1u, nullptr, 0u, kEdges_b63_1A6B, sizeof(kEdges_b63_1A6B) / sizeof(kEdges_b63_1A6B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A6D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 63, 0xFA70u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A6D = {63u, 0xFA6Du, 0x1A6Du, 0xC5F6u, 2u, nullptr, 0u, kEdges_b63_1A6D, sizeof(kEdges_b63_1A6D) / sizeof(kEdges_b63_1A6D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A70[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA72u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A70 = {63u, 0xFA70u, 0x1A70u, 0x0008u, 1u, nullptr, 0u, kEdges_b63_1A70, sizeof(kEdges_b63_1A70) / sizeof(kEdges_b63_1A70[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A72[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A72 = {63u, 0xFA72u, 0x1A72u, 0x0093u, 1u, nullptr, 0u, kEdges_b63_1A72, sizeof(kEdges_b63_1A72) / sizeof(kEdges_b63_1A72[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A74[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 63, 0xFA78u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A74 = {63u, 0xFA74u, 0x1A74u, 0xCB28u, 2u, nullptr, 0u, kEdges_b63_1A74, sizeof(kEdges_b63_1A74) / sizeof(kEdges_b63_1A74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A78[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA7Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A78 = {63u, 0xFA78u, 0x1A78u, 0x0057u, 1u, nullptr, 0u, kEdges_b63_1A78, sizeof(kEdges_b63_1A78) / sizeof(kEdges_b63_1A78[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A7A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA7Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A7A = {63u, 0xFA7Au, 0x1A7Au, 0x046Fu, 2u, nullptr, 0u, kEdges_b63_1A7A, sizeof(kEdges_b63_1A7A) / sizeof(kEdges_b63_1A7A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A7D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA7Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A7D = {63u, 0xFA7Du, 0x1A7Du, 0x00C0u, 1u, nullptr, 0u, kEdges_b63_1A7D, sizeof(kEdges_b63_1A7D) / sizeof(kEdges_b63_1A7D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A7F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA82u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A7F = {63u, 0xFA7Fu, 0x1A7Fu, 0x0486u, 2u, nullptr, 0u, kEdges_b63_1A7F, sizeof(kEdges_b63_1A7F) / sizeof(kEdges_b63_1A7F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A82[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A82 = {63u, 0xFA82u, 0x1A82u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1A82, sizeof(kEdges_b63_1A82) / sizeof(kEdges_b63_1A82[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A84[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFA87u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A84 = {63u, 0xFA84u, 0x1A84u, 0x04CBu, 2u, nullptr, 0u, kEdges_b63_1A84, sizeof(kEdges_b63_1A84) / sizeof(kEdges_b63_1A84[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1A87[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1A87 = {63u, 0xFA87u, 0x1A87u, 0u, 0u, nullptr, 0u, kEdges_b63_1A87, sizeof(kEdges_b63_1A87) / sizeof(kEdges_b63_1A87[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F70[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF71u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F70 = {63u, 0xFF70u, 0x1F70u, 0u, 0u, nullptr, 0u, kEdges_b63_1F70, sizeof(kEdges_b63_1F70) / sizeof(kEdges_b63_1F70[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F71[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF72u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F71 = {63u, 0xFF71u, 0x1F71u, 0u, 0u, nullptr, 0u, kEdges_b63_1F71, sizeof(kEdges_b63_1F71) / sizeof(kEdges_b63_1F71[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F72[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F72 = {63u, 0xFF72u, 0x1F72u, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1F72, sizeof(kEdges_b63_1F72) / sizeof(kEdges_b63_1F72[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F74[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF77u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F74 = {63u, 0xFF74u, 0x1F74u, 0x2000u, 2u, nullptr, 0u, kEdges_b63_1F74, sizeof(kEdges_b63_1F74) / sizeof(kEdges_b63_1F74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F77[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF7Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F77 = {63u, 0xFF77u, 0x1F77u, 0x2001u, 2u, nullptr, 0u, kEdges_b63_1F77, sizeof(kEdges_b63_1F77) / sizeof(kEdges_b63_1F77[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F7A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF7Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F7A = {63u, 0xFF7Au, 0x1F7Au, 0x4010u, 2u, nullptr, 0u, kEdges_b63_1F7A, sizeof(kEdges_b63_1F7A) / sizeof(kEdges_b63_1F7A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F7D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF80u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F7D = {63u, 0xFF7Du, 0x1F7Du, 0x4015u, 2u, nullptr, 0u, kEdges_b63_1F7D, sizeof(kEdges_b63_1F7D) / sizeof(kEdges_b63_1F7D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F80[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF82u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F80 = {63u, 0xFF80u, 0x1F80u, 0x0040u, 1u, nullptr, 0u, kEdges_b63_1F80, sizeof(kEdges_b63_1F80) / sizeof(kEdges_b63_1F80[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F82[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF85u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F82 = {63u, 0xFF82u, 0x1F82u, 0x4017u, 2u, nullptr, 0u, kEdges_b63_1F82, sizeof(kEdges_b63_1F82) / sizeof(kEdges_b63_1F82[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F85[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF87u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F85 = {63u, 0xFF85u, 0x1F85u, 0x0002u, 1u, nullptr, 0u, kEdges_b63_1F85, sizeof(kEdges_b63_1F85) / sizeof(kEdges_b63_1F85[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F87[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF8Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F87 = {63u, 0xFF87u, 0x1F87u, 0x2002u, 2u, nullptr, 0u, kEdges_b63_1F87, sizeof(kEdges_b63_1F87) / sizeof(kEdges_b63_1F87[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F8A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF8Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xFF87u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F8A = {63u, 0xFF8Au, 0x1F8Au, 0xFF87u, 1u, nullptr, 0u, kEdges_b63_1F8A, sizeof(kEdges_b63_1F8A) / sizeof(kEdges_b63_1F8A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F8C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF8Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F8C = {63u, 0xFF8Cu, 0x1F8Cu, 0x2002u, 2u, nullptr, 0u, kEdges_b63_1F8C, sizeof(kEdges_b63_1F8C) / sizeof(kEdges_b63_1F8C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F8F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF91u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xFF8Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F8F = {63u, 0xFF8Fu, 0x1F8Fu, 0xFF8Cu, 1u, nullptr, 0u, kEdges_b63_1F8F, sizeof(kEdges_b63_1F8F) / sizeof(kEdges_b63_1F8F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F91[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF92u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F91 = {63u, 0xFF91u, 0x1F91u, 0u, 0u, nullptr, 0u, kEdges_b63_1F91, sizeof(kEdges_b63_1F91) / sizeof(kEdges_b63_1F91[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F92[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF94u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xFF87u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F92 = {63u, 0xFF92u, 0x1F92u, 0xFF87u, 1u, nullptr, 0u, kEdges_b63_1F92, sizeof(kEdges_b63_1F92) / sizeof(kEdges_b63_1F92[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F94[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF95u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F94 = {63u, 0xFF94u, 0x1F94u, 0u, 0u, nullptr, 0u, kEdges_b63_1F94, sizeof(kEdges_b63_1F94) / sizeof(kEdges_b63_1F94[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F95[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF96u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F95 = {63u, 0xFF95u, 0x1F95u, 0u, 0u, nullptr, 0u, kEdges_b63_1F95, sizeof(kEdges_b63_1F95) / sizeof(kEdges_b63_1F95[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F96[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF99u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F96 = {63u, 0xFF96u, 0x1F96u, 0xE000u, 2u, nullptr, 0u, kEdges_b63_1F96, sizeof(kEdges_b63_1F96) / sizeof(kEdges_b63_1F96[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F99[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF9Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F99 = {63u, 0xFF99u, 0x1F99u, 0x2002u, 2u, nullptr, 0u, kEdges_b63_1F99, sizeof(kEdges_b63_1F99) / sizeof(kEdges_b63_1F99[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F9C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF9Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F9C = {63u, 0xFF9Cu, 0x1F9Cu, 0x0010u, 1u, nullptr, 0u, kEdges_b63_1F9C, sizeof(kEdges_b63_1F9C) / sizeof(kEdges_b63_1F9C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F9E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFF9Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F9E = {63u, 0xFF9Eu, 0x1F9Eu, 0u, 0u, nullptr, 0u, kEdges_b63_1F9E, sizeof(kEdges_b63_1F9E) / sizeof(kEdges_b63_1F9E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1F9F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFA2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1F9F = {63u, 0xFF9Fu, 0x1F9Fu, 0x2006u, 2u, nullptr, 0u, kEdges_b63_1F9F, sizeof(kEdges_b63_1F9F) / sizeof(kEdges_b63_1F9F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FA2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFA5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FA2 = {63u, 0xFFA2u, 0x1FA2u, 0x2006u, 2u, nullptr, 0u, kEdges_b63_1FA2, sizeof(kEdges_b63_1FA2) / sizeof(kEdges_b63_1FA2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FA5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFA7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FA5 = {63u, 0xFFA5u, 0x1FA5u, 0x0010u, 1u, nullptr, 0u, kEdges_b63_1FA5, sizeof(kEdges_b63_1FA5) / sizeof(kEdges_b63_1FA5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FA7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFA8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FA7 = {63u, 0xFFA7u, 0x1FA7u, 0u, 0u, nullptr, 0u, kEdges_b63_1FA7, sizeof(kEdges_b63_1FA7) / sizeof(kEdges_b63_1FA7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FA8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFAAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xFF9Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FA8 = {63u, 0xFFA8u, 0x1FA8u, 0xFF9Fu, 1u, nullptr, 0u, kEdges_b63_1FA8, sizeof(kEdges_b63_1FA8) / sizeof(kEdges_b63_1FA8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FAA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FAA = {63u, 0xFFAAu, 0x1FAAu, 0u, 0u, nullptr, 0u, kEdges_b63_1FAA, sizeof(kEdges_b63_1FAA) / sizeof(kEdges_b63_1FAA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FAB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FAB = {63u, 0xFFABu, 0x1FABu, 0x0000u, 1u, nullptr, 0u, kEdges_b63_1FAB, sizeof(kEdges_b63_1FAB) / sizeof(kEdges_b63_1FAB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FAD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFB0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FAD = {63u, 0xFFADu, 0x1FADu, 0x0100u, 2u, nullptr, 0u, kEdges_b63_1FAD, sizeof(kEdges_b63_1FAD) / sizeof(kEdges_b63_1FAD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FB0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFB3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FB0 = {63u, 0xFFB0u, 0x1FB0u, 0x0200u, 2u, nullptr, 0u, kEdges_b63_1FB0, sizeof(kEdges_b63_1FB0) / sizeof(kEdges_b63_1FB0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FB3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFB6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FB3 = {63u, 0xFFB3u, 0x1FB3u, 0x0300u, 2u, nullptr, 0u, kEdges_b63_1FB3, sizeof(kEdges_b63_1FB3) / sizeof(kEdges_b63_1FB3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FB6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFB9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FB6 = {63u, 0xFFB6u, 0x1FB6u, 0x0400u, 2u, nullptr, 0u, kEdges_b63_1FB6, sizeof(kEdges_b63_1FB6) / sizeof(kEdges_b63_1FB6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FB9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFBCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FB9 = {63u, 0xFFB9u, 0x1FB9u, 0x0500u, 2u, nullptr, 0u, kEdges_b63_1FB9, sizeof(kEdges_b63_1FB9) / sizeof(kEdges_b63_1FB9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FBC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFBFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FBC = {63u, 0xFFBCu, 0x1FBCu, 0x0600u, 2u, nullptr, 0u, kEdges_b63_1FBC, sizeof(kEdges_b63_1FBC) / sizeof(kEdges_b63_1FBC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FBF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFC2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FBF = {63u, 0xFFBFu, 0x1FBFu, 0x0700u, 2u, nullptr, 0u, kEdges_b63_1FBF, sizeof(kEdges_b63_1FBF) / sizeof(kEdges_b63_1FBF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FC2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FC2 = {63u, 0xFFC2u, 0x1FC2u, 0u, 0u, nullptr, 0u, kEdges_b63_1FC2, sizeof(kEdges_b63_1FC2) / sizeof(kEdges_b63_1FC2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FC3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFC5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xFFABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FC3 = {63u, 0xFFC3u, 0x1FC3u, 0xFFABu, 1u, nullptr, 0u, kEdges_b63_1FC3, sizeof(kEdges_b63_1FC3) / sizeof(kEdges_b63_1FC3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FC5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFC7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FC5 = {63u, 0xFFC5u, 0x1FC5u, 0x0001u, 1u, nullptr, 0u, kEdges_b63_1FC5, sizeof(kEdges_b63_1FC5) / sizeof(kEdges_b63_1FC5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FC7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFC9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FC7 = {63u, 0xFFC7u, 0x1FC7u, 0x00FBu, 1u, nullptr, 0u, kEdges_b63_1FC7, sizeof(kEdges_b63_1FC7) / sizeof(kEdges_b63_1FC7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FC9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFCCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FC9 = {63u, 0xFFC9u, 0x1FC9u, 0xA000u, 2u, nullptr, 0u, kEdges_b63_1FC9, sizeof(kEdges_b63_1FC9) / sizeof(kEdges_b63_1FC9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FCC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFCEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FCC = {63u, 0xFFCCu, 0x1FCCu, 0x0005u, 1u, nullptr, 0u, kEdges_b63_1FCC, sizeof(kEdges_b63_1FCC) / sizeof(kEdges_b63_1FCC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FCE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFD1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FCE = {63u, 0xFFCEu, 0x1FCEu, 0x8000u, 2u, nullptr, 0u, kEdges_b63_1FCE, sizeof(kEdges_b63_1FCE) / sizeof(kEdges_b63_1FCE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FD1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFD4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FD1 = {63u, 0xFFD1u, 0x1FD1u, 0xFF50u, 2u, nullptr, 0u, kEdges_b63_1FD1, sizeof(kEdges_b63_1FD1) / sizeof(kEdges_b63_1FD1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FD4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFD7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FD4 = {63u, 0xFFD4u, 0x1FD4u, 0x8001u, 2u, nullptr, 0u, kEdges_b63_1FD4, sizeof(kEdges_b63_1FD4) / sizeof(kEdges_b63_1FD4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FD7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFD8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FD7 = {63u, 0xFFD7u, 0x1FD7u, 0u, 0u, nullptr, 0u, kEdges_b63_1FD7, sizeof(kEdges_b63_1FD7) / sizeof(kEdges_b63_1FD7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FD8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 63, 0xFFDAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 63, 0xFFCEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FD8 = {63u, 0xFFD8u, 0x1FD8u, 0xFFCEu, 1u, nullptr, 0u, kEdges_b63_1FD8, sizeof(kEdges_b63_1FD8) / sizeof(kEdges_b63_1FD8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b63_1FDA[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC51Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b63_1FDA = {63u, 0xFFDAu, 0x1FDAu, 0xC51Eu, 2u, nullptr, 0u, kEdges_b63_1FDA, sizeof(kEdges_b63_1FDA) / sizeof(kEdges_b63_1FDA[0])};

} // namespace

MM6ExecResult mm6_dispatch_bank_63(MM6Runtime* rt, std::uint16_t cpu_pc) {
  switch (cpu_pc) {
    case 0xE001u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0001);
    case 0xE004u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0004);
    case 0xE005u: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_0005);
    case 0xE006u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_0006);
    case 0xE007u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0007);
    case 0xE00Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_000A);
    case 0xE00Du: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_000D);
    case 0xE00Eu: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_000E);
    case 0xE00Fu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_000F);
    case 0xE012u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_0012);
    case 0xE015u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0015);
    case 0xE017u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0017);
    case 0xE01Au: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_001A);
    case 0xE01Bu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_001B);
    case 0xE01Eu: return mm6_exec_op_09_ORA_Imm(rt, kCtx_b63_001E);
    case 0xE020u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0020);
    case 0xE023u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0023);
    case 0xE024u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0024);
    case 0xE027u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_0027);
    case 0xE029u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0029);
    case 0xE02Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_002B);
    case 0xE02Eu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_002E);
    case 0xE030u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0030);
    case 0xE033u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_0033);
    case 0xE034u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0034);
    case 0xE036u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0036);
    case 0xE037u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0037);
    case 0xE039u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0039);
    case 0xE03Cu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_003C);
    case 0xE03Fu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_003F);
    case 0xE041u: return mm6_exec_op_09_ORA_Imm(rt, kCtx_b63_0041);
    case 0xE043u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0043);
    case 0xE046u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0046);
    case 0xE048u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0048);
    case 0xE04Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_004B);
    case 0xE04Du: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_004D);
    case 0xE04Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_004E);
    case 0xE051u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0051);
    case 0xE054u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0054);
    case 0xE056u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0056);
    case 0xE059u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0059);
    case 0xE05Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_005B);
    case 0xE05Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_005E);
    case 0xE060u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0060);
    case 0xE063u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0063);
    case 0xE066u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0066);
    case 0xE068u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0068);
    case 0xE06Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_006A);
    case 0xE06Cu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_006C);
    case 0xE06Eu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_006E);
    case 0xE070u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0070);
    case 0xE073u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0073);
    case 0xE075u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0075);
    case 0xE077u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0077);
    case 0xE079u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0079);
    case 0xE07Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_007B);
    case 0xE07Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_007D);
    case 0xE080u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_0080);
    case 0xE083u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0083);
    case 0xE085u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0085);
    case 0xE087u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_0087);
    case 0xE08Au: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_008A);
    case 0xE08Cu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_008C);
    case 0xE08Eu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_008E);
    case 0xE091u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0091);
    case 0xE093u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0093);
    case 0xE095u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0095);
    case 0xE097u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0097);
    case 0xE099u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0099);
    case 0xE09Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_009B);
    case 0xE09Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_009D);
    case 0xE09Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_009F);
    case 0xE0A2u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_00A2);
    case 0xE0A4u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_00A4);
    case 0xE0A7u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_00A7);
    case 0xE0A9u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_00A9);
    case 0xE0ABu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_00AB);
    case 0xE0ADu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_00AD);
    case 0xE0AFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_00AF);
    case 0xE0B2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_00B2);
    case 0xE0B4u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_00B4);
    case 0xE0B6u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_00B6);
    case 0xE0B8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_00B8);
    case 0xE0BBu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_00BB);
    case 0xE0BDu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_00BD);
    case 0xE0BFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_00BF);
    case 0xE0C2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_00C2);
    case 0xE0C4u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_00C4);
    case 0xE0C7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_00C7);
    case 0xE0CAu: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b63_00CA);
    case 0xE0CDu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_00CD);
    case 0xE0CFu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_00CF);
    case 0xE0D1u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_00D1);
    case 0xE0D5u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_00D5);
    case 0xE0D6u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_00D6);
    case 0xE0D8u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_00D8);
    case 0xE0DEu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_00DE);
    case 0xE0E0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_00E0);
    case 0xE0E3u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_00E3);
    case 0xE0E5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_00E5);
    case 0xE0E8u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_00E8);
    case 0xE0EAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_00EA);
    case 0xE0EDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_00ED);
    case 0xE0F0u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_00F0);
    case 0xE0F2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_00F2);
    case 0xE0F5u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_00F5);
    case 0xE0F7u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_00F7);
    case 0xE0F8u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b63_00F8);
    case 0xE0FAu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_00FA);
    case 0xE0FCu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_00FC);
    case 0xE0FDu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_00FD);
    case 0xE0FFu: return mm6_exec_op_05_ORA_Zero(rt, kCtx_b63_00FF);
    case 0xE101u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_0101);
    case 0xE103u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0103);
    case 0xE104u: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_0104);
    case 0xE107u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0107);
    case 0xE108u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0108);
    case 0xE10Bu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_010B);
    case 0xE10Cu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_010C);
    case 0xE10Eu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_010E);
    case 0xE144u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0144);
    case 0xE146u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0146);
    case 0xE148u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0148);
    case 0xE14Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_014A);
    case 0xE14Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_014C);
    case 0xE14Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_014F);
    case 0xE151u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0151);
    case 0xE153u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0153);
    case 0xE155u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0155);
    case 0xE158u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0158);
    case 0xE15Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_015A);
    case 0xE15Cu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_015C);
    case 0xE15Du: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_015D);
    case 0xE15Fu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_015F);
    case 0xE162u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0162);
    case 0xE165u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0165);
    case 0xE166u: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b63_0166);
    case 0xE169u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0169);
    case 0xE16Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_016B);
    case 0xE16Du: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_016D);
    case 0xE16Eu: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_016E);
    case 0xE170u: return mm6_exec_op_6D_ADC_Abs(rt, kCtx_b63_0170);
    case 0xE173u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0173);
    case 0xE176u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0176);
    case 0xE179u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0179);
    case 0xE17Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_017C);
    case 0xE17Fu: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_017F);
    case 0xE181u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0181);
    case 0xE183u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0183);
    case 0xE185u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0185);
    case 0xE187u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0187);
    case 0xE18Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_018A);
    case 0xE18Du: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_018D);
    case 0xE18Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_018F);
    case 0xE191u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0191);
    case 0xE192u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_0192);
    case 0xE194u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0194);
    case 0xE196u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0196);
    case 0xE199u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0199);
    case 0xE19Cu: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_019C);
    case 0xE19Eu: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_019E);
    case 0xE1A0u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_01A0);
    case 0xE1A2u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_01A2);
    case 0xE1A4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_01A4);
    case 0xE1A7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_01A7);
    case 0xE1AAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_01AA);
    case 0xE1ADu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_01AD);
    case 0xE1AFu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_01AF);
    case 0xE1B1u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_01B1);
    case 0xE1DDu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_01DD);
    case 0xE1DFu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_01DF);
    case 0xE1E1u: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_01E1);
    case 0xE1E2u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_01E2);
    case 0xE1E3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_01E3);
    case 0xE1E6u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_01E6);
    case 0xE1E8u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_01E8);
    case 0xE1EAu: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_01EA);
    case 0xE1EBu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_01EB);
    case 0xE1EDu: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_01ED);
    case 0xE1EEu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_01EE);
    case 0xE1F1u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_01F1);
    case 0xE1F2u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_01F2);
    case 0xE1F4u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_01F4);
    case 0xE1F6u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_01F6);
    case 0xE1F8u: return mm6_exec_op_98_TYA_Imp(rt, kCtx_b63_01F8);
    case 0xE1F9u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_01F9);
    case 0xE1FCu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_01FC);
    case 0xE1FDu: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_01FD);
    case 0xE1FEu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_01FE);
    case 0xE200u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0200);
    case 0xE202u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0202);
    case 0xE205u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0205);
    case 0xE207u: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_0207);
    case 0xE209u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_0209);
    case 0xE20Bu: return mm6_exec_op_BE_LDX_AbsY(rt, kCtx_b63_020B);
    case 0xE20Eu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_020E);
    case 0xE211u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0211);
    case 0xE213u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0213);
    case 0xE216u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0216);
    case 0xE218u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0218);
    case 0xE21Au: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_021A);
    case 0xE21Du: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_021D);
    case 0xE21Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_021E);
    case 0xE221u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b63_0221);
    case 0xE224u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0224);
    case 0xE226u: return mm6_exec_op_FE_INC_AbsXW(rt, kCtx_b63_0226);
    case 0xE229u: return mm6_exec_op_FE_INC_AbsXW(rt, kCtx_b63_0229);
    case 0xE22Cu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_022C);
    case 0xE22Fu: return mm6_exec_op_DD_CMP_AbsX(rt, kCtx_b63_022F);
    case 0xE232u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0232);
    case 0xE234u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0234);
    case 0xE236u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0236);
    case 0xE239u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0239);
    case 0xE23Au: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_023A);
    case 0xE23Bu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_023B);
    case 0xE23Cu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_023C);
    case 0xE23Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_023F);
    case 0xE241u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0241);
    case 0xE244u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0244);
    case 0xE246u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0246);
    case 0xE248u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0248);
    case 0xE24Bu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_024B);
    case 0xE24Eu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_024E);
    case 0xE250u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0250);
    case 0xE252u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0252);
    case 0xE255u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0255);
    case 0xE257u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0257);
    case 0xE25Au: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_025A);
    case 0xE25Bu: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_025B);
    case 0xE25Du: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_025D);
    case 0xE25Fu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_025F);
    case 0xE261u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0261);
    case 0xE263u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0263);
    case 0xE266u: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_0266);
    case 0xE267u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0267);
    case 0xE269u: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_0269);
    case 0xE26Bu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_026B);
    case 0xE26Du: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_026D);
    case 0xE26Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_026F);
    case 0xE271u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0271);
    case 0xE274u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0274);
    case 0xE275u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0275);
    case 0xE276u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0276);
    case 0xE277u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0277);
    case 0xE278u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0278);
    case 0xE27Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_027A);
    case 0xE27Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_027D);
    case 0xE280u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_0280);
    case 0xE281u: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_0281);
    case 0xE282u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0282);
    case 0xE283u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0283);
    case 0xE286u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0286);
    case 0xE289u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0289);
    case 0xE28Bu: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_028B);
    case 0xE28Cu: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_028C);
    case 0xE28Du: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_028D);
    case 0xE2A9u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_02A9);
    case 0xE2ACu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_02AC);
    case 0xE2ADu: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_02AD);
    case 0xE2AFu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02AF);
    case 0xE2B1u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_02B1);
    case 0xE2B4u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_02B4);
    case 0xE2B6u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02B6);
    case 0xE2B8u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_02B8);
    case 0xE2B9u: return mm6_exec_op_2A_ROL_Acc(rt, kCtx_b63_02B9);
    case 0xE2BAu: return mm6_exec_op_2A_ROL_Acc(rt, kCtx_b63_02BA);
    case 0xE2BBu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_02BB);
    case 0xE2BDu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_02BD);
    case 0xE2BEu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_02BE);
    case 0xE2C1u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02C1);
    case 0xE2C3u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_02C3);
    case 0xE2C6u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02C6);
    case 0xE2C8u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_02C8);
    case 0xE2CAu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_02CA);
    case 0xE2CDu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02CD);
    case 0xE2CFu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_02CF);
    case 0xE2D2u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02D2);
    case 0xE2D4u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_02D4);
    case 0xE2D6u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_02D6);
    case 0xE2D7u: return mm6_exec_op_BC_LDY_AbsX(rt, kCtx_b63_02D7);
    case 0xE2DAu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_02DA);
    case 0xE2DBu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_02DB);
    case 0xE2DDu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_02DD);
    case 0xE2DEu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_02DE);
    case 0xE2E1u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02E1);
    case 0xE2E3u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_02E3);
    case 0xE2E6u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02E6);
    case 0xE2E8u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_02E8);
    case 0xE2EAu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_02EA);
    case 0xE2EDu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02ED);
    case 0xE2EFu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_02EF);
    case 0xE2F2u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02F2);
    case 0xE2F4u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_02F4);
    case 0xE2F6u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_02F6);
    case 0xE2F8u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_02F8);
    case 0xE2FAu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_02FA);
    case 0xE2FBu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_02FB);
    case 0xE2FDu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_02FD);
    case 0xE2FEu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_02FE);
    case 0xE301u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0301);
    case 0xE303u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0303);
    case 0xE306u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0306);
    case 0xE308u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0308);
    case 0xE309u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0309);
    case 0xE30Bu: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_030B);
    case 0xE30Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_030D);
    case 0xE30Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_030F);
    case 0xE311u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_0311);
    case 0xE313u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0313);
    case 0xE315u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0315);
    case 0xE317u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0317);
    case 0xE319u: return mm6_exec_op_6C_JMP_Ind(rt, kCtx_b63_0319);
    case 0xE31Cu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_031C);
    case 0xE31Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_031E);
    case 0xE321u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0321);
    case 0xE323u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0323);
    case 0xE324u: return mm6_exec_op_65_ADC_Zero(rt, kCtx_b63_0324);
    case 0xE326u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0326);
    case 0xE329u: return mm6_exec_op_6A_ROR_Acc(rt, kCtx_b63_0329);
    case 0xE32Au: return mm6_exec_op_51_EOR_IndY(rt, kCtx_b63_032A);
    case 0xE32Cu: return mm6_exec_op_08_PHP_Imp(rt, kCtx_b63_032C);
    case 0xE32Du: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_032D);
    case 0xE32Eu: return mm6_exec_op_28_PLP_Imp(rt, kCtx_b63_032E);
    case 0xE32Fu: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_032F);
    case 0xE331u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0331);
    case 0xE333u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0333);
    case 0xE334u: return mm6_exec_op_65_ADC_Zero(rt, kCtx_b63_0334);
    case 0xE336u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0336);
    case 0xE339u: return mm6_exec_op_6A_ROR_Acc(rt, kCtx_b63_0339);
    case 0xE33Au: return mm6_exec_op_51_EOR_IndY(rt, kCtx_b63_033A);
    case 0xE33Cu: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_033C);
    case 0xE33Eu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_033E);
    case 0xE340u: return mm6_exec_op_05_ORA_Zero(rt, kCtx_b63_0340);
    case 0xE342u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0342);
    case 0xE345u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0345);
    case 0xE346u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0346);
    case 0xE347u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0347);
    case 0xE348u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0348);
    case 0xE349u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0349);
    case 0xE34Bu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_034B);
    case 0xE34Cu: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_034C);
    case 0xE34Eu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_034E);
    case 0xE350u: return mm6_exec_op_86_STX_Zero(rt, kCtx_b63_0350);
    case 0xE352u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0352);
    case 0xE353u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0353);
    case 0xE355u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0355);
    case 0xE356u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b63_0356);
    case 0xE358u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0358);
    case 0xE35Au: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_035A);
    case 0xE35Cu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_035C);
    case 0xE35Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_035E);
    case 0xE361u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0361);
    case 0xE363u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0363);
    case 0xE364u: return mm6_exec_op_65_ADC_Zero(rt, kCtx_b63_0364);
    case 0xE366u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0366);
    case 0xE369u: return mm6_exec_op_6A_ROR_Acc(rt, kCtx_b63_0369);
    case 0xE36Au: return mm6_exec_op_51_EOR_IndY(rt, kCtx_b63_036A);
    case 0xE36Cu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_036C);
    case 0xE36Du: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_036D);
    case 0xE36Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_036F);
    case 0xE371u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0371);
    case 0xE372u: return mm6_exec_op_F1_SBC_IndY(rt, kCtx_b63_0372);
    case 0xE374u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0374);
    case 0xE377u: return mm6_exec_op_6A_ROR_Acc(rt, kCtx_b63_0377);
    case 0xE378u: return mm6_exec_op_51_EOR_IndY(rt, kCtx_b63_0378);
    case 0xE37Au: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_037A);
    case 0xE37Cu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_037C);
    case 0xE37Eu: return mm6_exec_op_45_EOR_Zero(rt, kCtx_b63_037E);
    case 0xE380u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0380);
    case 0xE383u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0383);
    case 0xE384u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0384);
    case 0xE385u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0385);
    case 0xE386u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_0386);
    case 0xE387u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0387);
    case 0xE389u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_0389);
    case 0xE38Au: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_038A);
    case 0xE38Cu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_038C);
    case 0xE38Eu: return mm6_exec_op_86_STX_Zero(rt, kCtx_b63_038E);
    case 0xE390u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0390);
    case 0xE391u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0391);
    case 0xE393u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0393);
    case 0xE394u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b63_0394);
    case 0xE396u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0396);
    case 0xE398u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0398);
    case 0xE39Au: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_039A);
    case 0xE39Cu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_039C);
    case 0xE39Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_039F);
    case 0xE3A1u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_03A1);
    case 0xE3A2u: return mm6_exec_op_F1_SBC_IndY(rt, kCtx_b63_03A2);
    case 0xE3A4u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_03A4);
    case 0xE3A7u: return mm6_exec_op_6A_ROR_Acc(rt, kCtx_b63_03A7);
    case 0xE3A8u: return mm6_exec_op_51_EOR_IndY(rt, kCtx_b63_03A8);
    case 0xE3AAu: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_03AA);
    case 0xE3ABu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_03AB);
    case 0xE3ACu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_03AC);
    case 0xE3AEu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_03AE);
    case 0xE3B0u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_03B0);
    case 0xE3B1u: return mm6_exec_op_71_ADC_IndY(rt, kCtx_b63_03B1);
    case 0xE3B3u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_03B3);
    case 0xE3B6u: return mm6_exec_op_6A_ROR_Acc(rt, kCtx_b63_03B6);
    case 0xE3B7u: return mm6_exec_op_51_EOR_IndY(rt, kCtx_b63_03B7);
    case 0xE3B9u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_03B9);
    case 0xE3BBu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_03BB);
    case 0xE3BDu: return mm6_exec_op_45_EOR_Zero(rt, kCtx_b63_03BD);
    case 0xE3BFu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_03BF);
    case 0xE3C2u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_03C2);
    case 0xE3C3u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_03C3);
    case 0xE3C4u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_03C4);
    case 0xE3C5u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_03C5);
    case 0xE3C6u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_03C6);
    case 0xE3C8u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_03C8);
    case 0xE3C9u: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_03C9);
    case 0xE3CBu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_03CB);
    case 0xE3CDu: return mm6_exec_op_86_STX_Zero(rt, kCtx_b63_03CD);
    case 0xE3CFu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_03CF);
    case 0xE3D0u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_03D0);
    case 0xE3D2u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_03D2);
    case 0xE3D3u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b63_03D3);
    case 0xE3D5u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_03D5);
    case 0xE3D7u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_03D7);
    case 0xE3D9u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_03D9);
    case 0xE3DBu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_03DB);
    case 0xE3DCu: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b63_03DC);
    case 0xE3DEu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_03DE);
    case 0xE3E0u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_03E0);
    case 0xE3E2u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_03E2);
    case 0xE3E4u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_03E4);
    case 0xE3E7u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_03E7);
    case 0xE3E9u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_03E9);
    case 0xE3EAu: return mm6_exec_op_F1_SBC_IndY(rt, kCtx_b63_03EA);
    case 0xE3ECu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_03EC);
    case 0xE3EFu: return mm6_exec_op_6A_ROR_Acc(rt, kCtx_b63_03EF);
    case 0xE3F0u: return mm6_exec_op_51_EOR_IndY(rt, kCtx_b63_03F0);
    case 0xE3F2u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_03F2);
    case 0xE3F3u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_03F3);
    case 0xE3F4u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_03F4);
    case 0xE3F6u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_03F6);
    case 0xE3F8u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_03F8);
    case 0xE3F9u: return mm6_exec_op_F1_SBC_IndY(rt, kCtx_b63_03F9);
    case 0xE3FBu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_03FB);
    case 0xE3FEu: return mm6_exec_op_6A_ROR_Acc(rt, kCtx_b63_03FE);
    case 0xE3FFu: return mm6_exec_op_51_EOR_IndY(rt, kCtx_b63_03FF);
    case 0xE401u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0401);
    case 0xE403u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0403);
    case 0xE405u: return mm6_exec_op_45_EOR_Zero(rt, kCtx_b63_0405);
    case 0xE407u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0407);
    case 0xE40Au: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_040A);
    case 0xE40Bu: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_040B);
    case 0xE40Cu: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_040C);
    case 0xE40Du: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b63_040D);
    case 0xE40Eu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_040E);
    case 0xE410u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_0410);
    case 0xE411u: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_0411);
    case 0xE413u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0413);
    case 0xE415u: return mm6_exec_op_86_STX_Zero(rt, kCtx_b63_0415);
    case 0xE417u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0417);
    case 0xE41Cu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_041C);
    case 0xE41Eu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_041E);
    case 0xE420u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0420);
    case 0xE421u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0421);
    case 0xE424u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0424);
    case 0xE426u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0426);
    case 0xE428u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0428);
    case 0xE42Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_042A);
    case 0xE42Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_042C);
    case 0xE42Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_042E);
    case 0xE431u: return mm6_exec_op_BA_TSX_Imp(rt, kCtx_b63_0431);
    case 0xE432u: return mm6_exec_op_86_STX_Zero(rt, kCtx_b63_0432);
    case 0xE434u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0434);
    case 0xE436u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0436);
    case 0xE438u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0438);
    case 0xE43Au: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_043A);
    case 0xE43Du: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_043D);
    case 0xE43Fu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_043F);
    case 0xE442u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0442);
    case 0xE443u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0443);
    case 0xE446u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0446);
    case 0xE449u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0449);
    case 0xE44Bu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_044B);
    case 0xE44Eu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_044E);
    case 0xE450u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0450);
    case 0xE453u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0453);
    case 0xE456u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0456);
    case 0xE458u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0458);
    case 0xE45Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_045A);
    case 0xE45Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_045D);
    case 0xE45Fu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_045F);
    case 0xE462u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0462);
    case 0xE465u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0465);
    case 0xE468u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0468);
    case 0xE46Au: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_046A);
    case 0xE46Bu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_046B);
    case 0xE46Cu: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_046C);
    case 0xE46Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_046E);
    case 0xE471u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_0471);
    case 0xE472u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_0472);
    case 0xE474u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0474);
    case 0xE477u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0477);
    case 0xE479u: return mm6_exec_op_9A_TXS_Imp(rt, kCtx_b63_0479);
    case 0xE47Au: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_047A);
    case 0xE47Cu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_047C);
    case 0xE47Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_047E);
    case 0xE481u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0481);
    case 0xE482u: return mm6_exec_op_6C_JMP_Ind(rt, kCtx_b63_0482);
    case 0xE485u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0485);
    case 0xE488u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0488);
    case 0xE48Au: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_048A);
    case 0xE48Cu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_048C);
    case 0xE48Fu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_048F);
    case 0xE491u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0491);
    case 0xE494u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0494);
    case 0xE495u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_0495);
    case 0xE497u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0497);
    case 0xE498u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0498);
    case 0xE49Bu: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_049B);
    case 0xE49Du: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_049D);
    case 0xE49Fu: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b63_049F);
    case 0xE4A1u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_04A1);
    case 0xE4A3u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_04A3);
    case 0xE4A4u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_04A4);
    case 0xE4A5u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_04A5);
    case 0xE4A6u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_04A6);
    case 0xE4A7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_04A7);
    case 0xE4A9u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_04A9);
    case 0xE4ACu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_04AC);
    case 0xE4AFu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_04AF);
    case 0xE4B2u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_04B2);
    case 0xE4B5u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_04B5);
    case 0xE4B8u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_04B8);
    case 0xE4CBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_04CB);
    case 0xE4CDu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_04CD);
    case 0xE4CFu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_04CF);
    case 0xE4D1u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_04D1);
    case 0xE4D3u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_04D3);
    case 0xE4D5u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_04D5);
    case 0xE4D6u: return mm6_exec_op_7D_ADC_AbsX(rt, kCtx_b63_04D6);
    case 0xE4D9u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_04D9);
    case 0xE4DCu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_04DC);
    case 0xE4DEu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_04DE);
    case 0xE4E0u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b63_04E0);
    case 0xE4E3u: return mm6_exec_op_7D_ADC_AbsX(rt, kCtx_b63_04E3);
    case 0xE4E6u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_04E6);
    case 0xE4E9u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_04E9);
    case 0xE4ECu: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_04EC);
    case 0xE4EEu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_04EE);
    case 0xE4F1u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_04F1);
    case 0xE4F3u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_04F3);
    case 0xE4F4u: return mm6_exec_op_7D_ADC_AbsX(rt, kCtx_b63_04F4);
    case 0xE4F7u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_04F7);
    case 0xE4FAu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_04FA);
    case 0xE4FCu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_04FC);
    case 0xE4FEu: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b63_04FE);
    case 0xE501u: return mm6_exec_op_7D_ADC_AbsX(rt, kCtx_b63_0501);
    case 0xE504u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0504);
    case 0xE507u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0507);
    case 0xE50Au: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_050A);
    case 0xE50Cu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_050C);
    case 0xE50Fu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_050F);
    case 0xE510u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_0510);
    case 0xE512u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0512);
    case 0xE515u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0515);
    case 0xE517u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_0517);
    case 0xE518u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0518);
    case 0xE51Au: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_051A);
    case 0xE51Bu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_051B);
    case 0xE51Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_051C);
    case 0xE520u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0520);
    case 0xE521u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0521);
    case 0xE522u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0522);
    case 0xE524u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0524);
    case 0xE527u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0527);
    case 0xE52Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_052A);
    case 0xE52Du: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_052D);
    case 0xE52Eu: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_052E);
    case 0xE530u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0530);
    case 0xE533u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0533);
    case 0xE536u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0536);
    case 0xE539u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0539);
    case 0xE53Bu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_053B);
    case 0xE53Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_053E);
    case 0xE541u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0541);
    case 0xE543u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0543);
    case 0xE545u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0545);
    case 0xE548u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0548);
    case 0xE54Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_054A);
    case 0xE54Du: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_054D);
    case 0xE54Fu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_054F);
    case 0xE551u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0551);
    case 0xE554u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0554);
    case 0xE556u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0556);
    case 0xE559u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0559);
    case 0xE55Cu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_055C);
    case 0xE55Du: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_055D);
    case 0xE560u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0560);
    case 0xE563u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0563);
    case 0xE564u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_0564);
    case 0xE566u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0566);
    case 0xE569u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0569);
    case 0xE56Cu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_056C);
    case 0xE56Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_056F);
    case 0xE571u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0571);
    case 0xE574u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0574);
    case 0xE577u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0577);
    case 0xE579u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0579);
    case 0xE57Bu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_057B);
    case 0xE57Du: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_057D);
    case 0xE57Fu: return mm6_exec_op_DD_CMP_AbsX(rt, kCtx_b63_057F);
    case 0xE582u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0582);
    case 0xE585u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_0585);
    case 0xE587u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0587);
    case 0xE589u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0589);
    case 0xE58Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_058C);
    case 0xE58Fu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_058F);
    case 0xE590u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_0590);
    case 0xE592u: return mm6_exec_op_98_TYA_Imp(rt, kCtx_b63_0592);
    case 0xE593u: return mm6_exec_op_DD_CMP_AbsX(rt, kCtx_b63_0593);
    case 0xE596u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0596);
    case 0xE598u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_0598);
    case 0xE599u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0599);
    case 0xE59Bu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_059B);
    case 0xE59Du: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_059D);
    case 0xE5A0u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_05A0);
    case 0xE5A2u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_05A2);
    case 0xE5A3u: return mm6_exec_op_E0_CPX_Imm(rt, kCtx_b63_05A3);
    case 0xE5A5u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_05A5);
    case 0xE5A7u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_05A7);
    case 0xE5A8u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_05A8);
    case 0xE5A9u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_05A9);
    case 0xE5AAu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_05AA);
    case 0xE5ABu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_05AB);
    case 0xE5AEu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_05AE);
    case 0xE5B0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_05B0);
    case 0xE5B4u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_05B4);
    case 0xE5B5u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_05B5);
    case 0xE5B6u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_05B6);
    case 0xE5B8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_05B8);
    case 0xE5BAu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_05BA);
    case 0xE5BCu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_05BC);
    case 0xE5BFu: return mm6_exec_op_DD_CMP_AbsX(rt, kCtx_b63_05BF);
    case 0xE5C2u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_05C2);
    case 0xE5C5u: return mm6_exec_op_FD_SBC_AbsX(rt, kCtx_b63_05C5);
    case 0xE5C8u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_05C8);
    case 0xE5CAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_05CA);
    case 0xE5CCu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_05CC);
    case 0xE5CEu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_05CE);
    case 0xE5DFu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_05DF);
    case 0xE5E2u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_05E2);
    case 0xE5E3u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_05E3);
    case 0xE5E6u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_05E6);
    case 0xE5E8u: return mm6_exec_op_19_ORA_AbsY(rt, kCtx_b63_05E8);
    case 0xE5EBu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_05EB);
    case 0xE5EEu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_05EE);
    case 0xE5EFu: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_05EF);
    case 0xE5F0u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_05F0);
    case 0xE5F1u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_05F1);
    case 0xE5F2u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_05F2);
    case 0xE5F4u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_05F4);
    case 0xE5F7u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_05F7);
    case 0xE5F9u: return mm6_exec_op_05_ORA_Zero(rt, kCtx_b63_05F9);
    case 0xE5FBu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_05FB);
    case 0xE5FCu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_05FC);
    case 0xE5FFu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_05FF);
    case 0xE600u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0600);
    case 0xE60Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_060E);
    case 0xE611u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0611);
    case 0xE614u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0614);
    case 0xE617u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0617);
    case 0xE61Au: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_061A);
    case 0xE61Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_061D);
    case 0xE61Fu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_061F);
    case 0xE622u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0622);
    case 0xE624u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0624);
    case 0xE627u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0627);
    case 0xE628u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0628);
    case 0xE62Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_062A);
    case 0xE62Cu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_062C);
    case 0xE62Du: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_062D);
    case 0xE62Eu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_062E);
    case 0xE62Fu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_062F);
    case 0xE630u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0630);
    case 0xE632u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0632);
    case 0xE634u: return mm6_exec_op_98_TYA_Imp(rt, kCtx_b63_0634);
    case 0xE635u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0635);
    case 0xE636u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_0636);
    case 0xE638u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0638);
    case 0xE639u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0639);
    case 0xE63Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_063B);
    case 0xE63Du: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_063D);
    case 0xE63Eu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_063E);
    case 0xE63Fu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_063F);
    case 0xE640u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_0640);
    case 0xE641u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0641);
    case 0xE643u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0643);
    case 0xE645u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0645);
    case 0xE8BCu: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_08BC);
    case 0xE8BEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_08BE);
    case 0xE8C1u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_08C1);
    case 0xE8C3u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_08C3);
    case 0xE8C6u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_08C6);
    case 0xE8C8u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_08C8);
    case 0xE8CAu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_08CA);
    case 0xE8CCu: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_08CC);
    case 0xE8CEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_08CE);
    case 0xE8D1u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_08D1);
    case 0xE8D3u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_08D3);
    case 0xE8D6u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_08D6);
    case 0xE8D8u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_08D8);
    case 0xE8DAu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_08DA);
    case 0xE8DCu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_08DC);
    case 0xE8DDu: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_08DD);
    case 0xE8E0u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_08E0);
    case 0xE8E3u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_08E3);
    case 0xE8E5u: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_08E5);
    case 0xE8E8u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_08E8);
    case 0xE8EBu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_08EB);
    case 0xE8EEu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_08EE);
    case 0xE8EFu: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_08EF);
    case 0xE8F1u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_08F1);
    case 0xE8F4u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_08F4);
    case 0xE8F7u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_08F7);
    case 0xE8F9u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_08F9);
    case 0xE8FCu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_08FC);
    case 0xE8FDu: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_08FD);
    case 0xE8FFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_08FF);
    case 0xE902u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_0902);
    case 0xE904u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0904);
    case 0xE906u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0906);
    case 0xE907u: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_0907);
    case 0xE90Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_090A);
    case 0xE90Du: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_090D);
    case 0xE90Fu: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_090F);
    case 0xE912u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0912);
    case 0xE915u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0915);
    case 0xE916u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0916);
    case 0xE919u: return mm6_exec_op_65_ADC_Zero(rt, kCtx_b63_0919);
    case 0xE91Bu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_091B);
    case 0xE91Eu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_091E);
    case 0xE921u: return mm6_exec_op_65_ADC_Zero(rt, kCtx_b63_0921);
    case 0xE923u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0923);
    case 0xE926u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0926);
    case 0xE927u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_0927);
    case 0xE928u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0928);
    case 0xE929u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0929);
    case 0xE92Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_092B);
    case 0xE92Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_092D);
    case 0xE92Fu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_092F);
    case 0xE932u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0932);
    case 0xE934u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0934);
    case 0xE936u: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_0936);
    case 0xE938u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_0938);
    case 0xE939u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0939);
    case 0xE93Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_093C);
    case 0xE93Eu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_093E);
    case 0xE940u: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_0940);
    case 0xE942u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0942);
    case 0xE9D3u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_09D3);
    case 0xE9D5u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_09D5);
    case 0xE9D8u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_09D8);
    case 0xE9DAu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_09DA);
    case 0xE9DDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_09DD);
    case 0xE9E0u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_09E0);
    case 0xE9E2u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_09E2);
    case 0xE9E5u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_09E5);
    case 0xE9E7u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_09E7);
    case 0xE9EAu: return mm6_exec_op_09_ORA_Imm(rt, kCtx_b63_09EA);
    case 0xE9ECu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_09EC);
    case 0xE9EFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_09EF);
    case 0xE9F2u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_09F2);
    case 0xE9F5u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_09F5);
    case 0xE9F7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_09F7);
    case 0xE9F9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_09F9);
    case 0xE9FBu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_09FB);
    case 0xE9FDu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_09FD);
    case 0xE9FFu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_09FF);
    case 0xEA02u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0A02);
    case 0xEA05u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0A05);
    case 0xEA06u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_0A06);
    case 0xEA08u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0A08);
    case 0xEA0Bu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0A0B);
    case 0xEA0Du: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0A0D);
    case 0xEA0Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0A0F);
    case 0xEA13u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0A13);
    case 0xEA16u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0A16);
    case 0xEA19u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0A19);
    case 0xEA1Cu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0A1C);
    case 0xEA1Eu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0A1E);
    case 0xEA21u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0A21);
    case 0xEA23u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0A23);
    case 0xEA26u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0A26);
    case 0xEA29u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_0A29);
    case 0xEA2Bu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0A2B);
    case 0xEA2Eu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0A2E);
    case 0xEA30u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0A30);
    case 0xEA33u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0A33);
    case 0xEA36u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0A36);
    case 0xEA38u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0A38);
    case 0xEA3Au: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0A3A);
    case 0xEA3Du: return mm6_exec_op_09_ORA_Imm(rt, kCtx_b63_0A3D);
    case 0xEA3Fu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0A3F);
    case 0xEA42u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0A42);
    case 0xEA44u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0A44);
    case 0xEA46u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0A46);
    case 0xEA48u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0A48);
    case 0xEA4Bu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0A4B);
    case 0xEA4Eu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0A4E);
    case 0xEA4Fu: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_0A4F);
    case 0xEA51u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0A51);
    case 0xEA54u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0A54);
    case 0xEA56u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0A56);
    case 0xEA58u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0A58);
    case 0xEA5Bu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0A5B);
    case 0xEA5Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0A5D);
    case 0xEA61u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0A61);
    case 0xEA64u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0A64);
    case 0xEA67u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0A67);
    case 0xEA6Au: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0A6A);
    case 0xEA6Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0A6C);
    case 0xEA6Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0A6E);
    case 0xEA71u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0A71);
    case 0xEA74u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_0A74);
    case 0xEA76u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0A76);
    case 0xEA79u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0A79);
    case 0xEA7Cu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0A7C);
    case 0xEA7Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0A7E);
    case 0xEA80u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0A80);
    case 0xEA83u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0A83);
    case 0xEA86u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0A86);
    case 0xEA88u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0A88);
    case 0xEA8Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0A8A);
    case 0xEA8Du: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_0A8D);
    case 0xEA8Fu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0A8F);
    case 0xEA92u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0A92);
    case 0xEA95u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0A95);
    case 0xEA97u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0A97);
    case 0xEA9Au: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0A9A);
    case 0xEA9Cu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0A9C);
    case 0xEA9Eu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0A9E);
    case 0xEAA0u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0AA0);
    case 0xEAA3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0AA3);
    case 0xEAA6u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_0AA6);
    case 0xEAA8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0AA8);
    case 0xEAAAu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0AAA);
    case 0xEAADu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0AAD);
    case 0xEAB0u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0AB0);
    case 0xEAB3u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_0AB3);
    case 0xEAB4u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0AB4);
    case 0xEAB6u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0AB6);
    case 0xEAB9u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0AB9);
    case 0xEABBu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0ABB);
    case 0xEABEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0ABE);
    case 0xEAC1u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_0AC1);
    case 0xEAC3u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_0AC3);
    case 0xEAC4u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0AC4);
    case 0xEAC5u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0AC5);
    case 0xEAC8u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0AC8);
    case 0xEACAu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0ACA);
    case 0xEACCu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0ACC);
    case 0xEACEu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0ACE);
    case 0xEAD1u: return mm6_exec_op_09_ORA_Imm(rt, kCtx_b63_0AD1);
    case 0xEAD3u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0AD3);
    case 0xEAD6u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0AD6);
    case 0xEAD9u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0AD9);
    case 0xEADBu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0ADB);
    case 0xEADEu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0ADE);
    case 0xEAE0u: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b63_0AE0);
    case 0xEAE2u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0AE2);
    case 0xEAE4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0AE4);
    case 0xEAE7u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0AE7);
    case 0xEAEAu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0AEA);
    case 0xEAECu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0AEC);
    case 0xEAEEu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0AEE);
    case 0xEAF0u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0AF0);
    case 0xEAF3u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0AF3);
    case 0xEAF5u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0AF5);
    case 0xEAF7u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0AF7);
    case 0xEAFAu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0AFA);
    case 0xEAFDu: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0AFD);
    case 0xEAFEu: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0AFE);
    case 0xEAFFu: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0AFF);
    case 0xEB00u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0B00);
    case 0xEB01u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0B01);
    case 0xEB02u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0B02);
    case 0xEB04u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0B04);
    case 0xEB06u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_0B06);
    case 0xEB08u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0B08);
    case 0xEB0Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0B0A);
    case 0xEB0Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0B0C);
    case 0xEB0Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0B0E);
    case 0xEB10u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0B10);
    case 0xEB13u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0B13);
    case 0xEB16u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0B16);
    case 0xEB17u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_0B17);
    case 0xEB19u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0B19);
    case 0xEB1Cu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0B1C);
    case 0xEB1Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0B1E);
    case 0xEB20u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0B20);
    case 0xEB23u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0B23);
    case 0xEB25u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0B25);
    case 0xEB27u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0B27);
    case 0xEB29u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0B29);
    case 0xEB2Du: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0B2D);
    case 0xEB30u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0B30);
    case 0xEB32u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0B32);
    case 0xEB35u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0B35);
    case 0xEB38u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_0B38);
    case 0xEB39u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0B39);
    case 0xEB72u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0B72);
    case 0xEB75u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0B75);
    case 0xEB76u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0B76);
    case 0xEB77u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0B77);
    case 0xEB78u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0B78);
    case 0xEB79u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0B79);
    case 0xEB7Au: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0B7A);
    case 0xEB7Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0B7D);
    case 0xEB7Fu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0B7F);
    case 0xEB82u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0B82);
    case 0xEB84u: return mm6_exec_op_6C_JMP_Ind(rt, kCtx_b63_0B84);
    case 0xEB87u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0B87);
    case 0xEB8Au: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0B8A);
    case 0xEB8Cu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0B8C);
    case 0xEB8Fu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0B8F);
    case 0xEB92u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0B92);
    case 0xEB93u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b63_0B93);
    case 0xEB95u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0B95);
    case 0xEB97u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0B97);
    case 0xEB9Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0B9A);
    case 0xEB9Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0B9D);
    case 0xEB9Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0B9F);
    case 0xEBA1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0BA1);
    case 0xEBA3u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0BA3);
    case 0xEBA5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0BA5);
    case 0xEBA8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0BA8);
    case 0xEBABu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0BAB);
    case 0xEBADu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0BAD);
    case 0xEBB0u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0BB0);
    case 0xEBD1u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_0BD1);
    case 0xEBD2u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0BD2);
    case 0xEBD4u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_0BD4);
    case 0xEBD5u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0BD5);
    case 0xEBD7u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_0BD7);
    case 0xEBD8u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0BD8);
    case 0xEBDAu: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_0BDA);
    case 0xEBDBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0BDB);
    case 0xEBDDu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0BDD);
    case 0xEBE0u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0BE0);
    case 0xEBE2u: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_0BE2);
    case 0xEBE4u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0BE4);
    case 0xEBE6u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0BE6);
    case 0xEBE9u: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_0BE9);
    case 0xEBEAu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0BEA);
    case 0xEBECu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0BEC);
    case 0xEBEFu: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_0BEF);
    case 0xEBF0u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0BF0);
    case 0xEBF2u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0BF2);
    case 0xEBF5u: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_0BF5);
    case 0xEBF6u: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_0BF6);
    case 0xEBF7u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0BF7);
    case 0xEBF9u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0BF9);
    case 0xEBFBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0BFB);
    case 0xEBFEu: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_0BFE);
    case 0xEBFFu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0BFF);
    case 0xEC01u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0C01);
    case 0xEC02u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C02);
    case 0xEC05u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0C05);
    case 0xEC06u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0C06);
    case 0xEC08u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0C08);
    case 0xEC0Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0C0A);
    case 0xEC0Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C0C);
    case 0xEC0Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C0E);
    case 0xEC11u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C11);
    case 0xEC14u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0C14);
    case 0xEC16u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C16);
    case 0xEC18u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0C18);
    case 0xEC1Au: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_0C1A);
    case 0xEC1Cu: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_0C1C);
    case 0xEC1Eu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0C1E);
    case 0xEC20u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0C20);
    case 0xEC22u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0C22);
    case 0xEC24u: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_0C24);
    case 0xEC26u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0C26);
    case 0xEC28u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C28);
    case 0xEC2Au: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_0C2A);
    case 0xEC2Bu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0C2B);
    case 0xEC2Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C2D);
    case 0xEC2Fu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_0C2F);
    case 0xEC30u: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_0C30);
    case 0xEC32u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C32);
    case 0xEC35u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_0C35);
    case 0xEC37u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0C37);
    case 0xEC39u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C39);
    case 0xEC3Bu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_0C3B);
    case 0xEC3Cu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0C3C);
    case 0xEC3Eu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C3E);
    case 0xEC40u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C40);
    case 0xEC43u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0C43);
    case 0xEC45u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C45);
    case 0xEC47u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0C47);
    case 0xEC49u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0C49);
    case 0xEC4Bu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0C4B);
    case 0xEC4Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C4D);
    case 0xEC50u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0C50);
    case 0xEC52u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C52);
    case 0xEC55u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0C55);
    case 0xEC57u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C57);
    case 0xEC59u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0C59);
    case 0xEC5Bu: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_0C5B);
    case 0xEC5Du: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0C5D);
    case 0xEC5Fu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0C5F);
    case 0xEC61u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0C61);
    case 0xEC63u: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_0C63);
    case 0xEC65u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0C65);
    case 0xEC67u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C67);
    case 0xEC69u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_0C69);
    case 0xEC6Au: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0C6A);
    case 0xEC6Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C6C);
    case 0xEC6Eu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_0C6E);
    case 0xEC6Fu: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_0C6F);
    case 0xEC71u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C71);
    case 0xEC74u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_0C74);
    case 0xEC76u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0C76);
    case 0xEC78u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C78);
    case 0xEC7Au: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_0C7A);
    case 0xEC7Bu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_0C7B);
    case 0xEC7Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0C7D);
    case 0xEC7Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C7F);
    case 0xEC82u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0C82);
    case 0xEC84u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0C84);
    case 0xEC86u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0C86);
    case 0xEC88u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0C88);
    case 0xEC8Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C8A);
    case 0xEC8Du: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0C8D);
    case 0xEC8Fu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0C8F);
    case 0xEC92u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_0C92);
    case 0xEC94u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0C94);
    case 0xEC96u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0C96);
    case 0xEC99u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0C99);
    case 0xEC9Bu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0C9B);
    case 0xEC9Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0C9E);
    case 0xECA1u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_0CA1);
    case 0xECA3u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0CA3);
    case 0xECA4u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0CA4);
    case 0xECA7u: return mm6_exec_op_09_ORA_Imm(rt, kCtx_b63_0CA7);
    case 0xECA9u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0CA9);
    case 0xECAAu: return mm6_exec_op_65_ADC_Zero(rt, kCtx_b63_0CAA);
    case 0xECACu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0CAC);
    case 0xECAFu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0CAF);
    case 0xECB1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0CB1);
    case 0xECB3u: return mm6_exec_op_7D_ADC_AbsX(rt, kCtx_b63_0CB3);
    case 0xECB6u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_0CB6);
    case 0xECB8u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0CB8);
    case 0xECBAu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0CBA);
    case 0xECBCu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0CBC);
    case 0xECBEu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0CBE);
    case 0xECC1u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0CC1);
    case 0xECC3u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0CC3);
    case 0xECC4u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0CC4);
    case 0xECC7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0CC7);
    case 0xECC9u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0CC9);
    case 0xECCCu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0CCC);
    case 0xECCEu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0CCE);
    case 0xECD1u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0CD1);
    case 0xECD3u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0CD3);
    case 0xECD6u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0CD6);
    case 0xECD8u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0CD8);
    case 0xECDAu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0CDA);
    case 0xECDDu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0CDD);
    case 0xECDFu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0CDF);
    case 0xECE2u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0CE2);
    case 0xECE4u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0CE4);
    case 0xECE7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0CE7);
    case 0xECE9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0CE9);
    case 0xECECu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0CEC);
    case 0xECEEu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0CEE);
    case 0xECF0u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0CF0);
    case 0xECF3u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0CF3);
    case 0xECF4u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0CF4);
    case 0xECF5u: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_0CF5);
    case 0xECF6u: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b63_0CF6);
    case 0xECF8u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0CF8);
    case 0xECFAu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0CFA);
    case 0xECFBu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0CFB);
    case 0xECFCu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0CFC);
    case 0xECFEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0CFE);
    case 0xED01u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0D01);
    case 0xED03u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0D03);
    case 0xED04u: return mm6_exec_op_FD_SBC_AbsX(rt, kCtx_b63_0D04);
    case 0xED07u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0D07);
    case 0xED09u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0D09);
    case 0xED0Bu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0D0B);
    case 0xED0Du: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0D0D);
    case 0xED0Fu: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b63_0D0F);
    case 0xED12u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b63_0D12);
    case 0xED15u: return mm6_exec_op_FE_INC_AbsXW(rt, kCtx_b63_0D15);
    case 0xED18u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0D18);
    case 0xED1Bu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0D1B);
    case 0xED1Du: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0D1D);
    case 0xED20u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0D20);
    case 0xED21u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0D21);
    case 0xED24u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_0D24);
    case 0xED26u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0D26);
    case 0xED28u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0D28);
    case 0xED29u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0D29);
    case 0xED2Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0D2C);
    case 0xED2Eu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0D2E);
    case 0xED31u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0D31);
    case 0xED32u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0D32);
    case 0xED33u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0D33);
    case 0xED34u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0D34);
    case 0xED35u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0D35);
    case 0xED38u: return mm6_exec_op_05_ORA_Zero(rt, kCtx_b63_0D38);
    case 0xED3Au: return mm6_exec_op_99_STA_AbsYW(rt, kCtx_b63_0D3A);
    case 0xED3Du: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0D3D);
    case 0xED3Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0D3E);
    case 0xED40u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0D40);
    case 0xED42u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0D42);
    case 0xED45u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0D45);
    case 0xED47u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0D47);
    case 0xED49u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0D49);
    case 0xED4Cu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0D4C);
    case 0xED4Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0D4F);
    case 0xED51u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0D51);
    case 0xED54u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0D54);
    case 0xED56u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0D56);
    case 0xED58u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0D58);
    case 0xED5Au: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_0D5A);
    case 0xED5Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0D5C);
    case 0xED5Fu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_0D5F);
    case 0xED61u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0D61);
    case 0xED63u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0D63);
    case 0xED65u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0D65);
    case 0xED68u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0D68);
    case 0xED69u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0D69);
    case 0xED6Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0D6B);
    case 0xED6Du: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0D6D);
    case 0xED70u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0D70);
    case 0xED72u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0D72);
    case 0xED74u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0D74);
    case 0xED78u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0D78);
    case 0xED7Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0D7A);
    case 0xED7Du: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0D7D);
    case 0xED7Fu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0D7F);
    case 0xED82u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0D82);
    case 0xED84u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_0D84);
    case 0xED85u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0D85);
    case 0xED88u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0D88);
    case 0xED8Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0D8A);
    case 0xED8Du: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0D8D);
    case 0xED8Fu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0D8F);
    case 0xED92u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0D92);
    case 0xED94u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0D94);
    case 0xED97u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_0D97);
    case 0xED9Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0D9A);
    case 0xED9Du: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b63_0D9D);
    case 0xED9Fu: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_0D9F);
    case 0xEDA1u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_0DA1);
    case 0xEDA2u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0DA2);
    case 0xEDA4u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0DA4);
    case 0xEDA5u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0DA5);
    case 0xEDA6u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0DA6);
    case 0xEDA7u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0DA7);
    case 0xEDA8u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_0DA8);
    case 0xEDAAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0DAA);
    case 0xEDACu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0DAC);
    case 0xEDAEu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0DAE);
    case 0xEDB0u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0DB0);
    case 0xEDB2u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0DB2);
    case 0xEDB5u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0DB5);
    case 0xEDB6u: return mm6_exec_op_FD_SBC_AbsX(rt, kCtx_b63_0DB6);
    case 0xEDB9u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0DB9);
    case 0xEDBBu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0DBB);
    case 0xEDBEu: return mm6_exec_op_FD_SBC_AbsX(rt, kCtx_b63_0DBE);
    case 0xEDC1u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0DC1);
    case 0xEDC3u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0DC3);
    case 0xEDC5u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0DC5);
    case 0xEDC7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0DC7);
    case 0xEDC9u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0DC9);
    case 0xEDCBu: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0DCB);
    case 0xEDCDu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0DCD);
    case 0xEDCFu: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0DCF);
    case 0xEDD1u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0DD1);
    case 0xEDD3u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0DD3);
    case 0xEDD5u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0DD5);
    case 0xEDD7u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0DD7);
    case 0xEDD9u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0DD9);
    case 0xEDDBu: return mm6_exec_op_C5_CMP_Zero(rt, kCtx_b63_0DDB);
    case 0xEDDDu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0DDD);
    case 0xEDDFu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0DDF);
    case 0xEDE1u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0DE1);
    case 0xEDE3u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0DE3);
    case 0xEDE5u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0DE5);
    case 0xEDE8u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0DE8);
    case 0xEDE9u: return mm6_exec_op_FD_SBC_AbsX(rt, kCtx_b63_0DE9);
    case 0xEDECu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0DEC);
    case 0xEDEEu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0DEE);
    case 0xEDF1u: return mm6_exec_op_FD_SBC_AbsX(rt, kCtx_b63_0DF1);
    case 0xEDF4u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0DF4);
    case 0xEDF6u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0DF6);
    case 0xEDF8u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0DF8);
    case 0xEDFAu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0DFA);
    case 0xEDFCu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0DFC);
    case 0xEDFEu: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0DFE);
    case 0xEE00u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E00);
    case 0xEE02u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0E02);
    case 0xEE04u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0E04);
    case 0xEE06u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0E06);
    case 0xEE08u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0E08);
    case 0xEE0Au: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0E0A);
    case 0xEE0Cu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0E0C);
    case 0xEE0Eu: return mm6_exec_op_C5_CMP_Zero(rt, kCtx_b63_0E0E);
    case 0xEE10u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0E10);
    case 0xEE12u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0E12);
    case 0xEE14u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0E14);
    case 0xEE16u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E16);
    case 0xEE18u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0E18);
    case 0xEE19u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E19);
    case 0xEE1Bu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0E1B);
    case 0xEE1Cu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0E1C);
    case 0xEE1Fu: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_0E1F);
    case 0xEE22u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0E22);
    case 0xEE25u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E25);
    case 0xEE27u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0E27);
    case 0xEE2Au: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_0E2A);
    case 0xEE2Du: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0E2D);
    case 0xEE30u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E30);
    case 0xEE32u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_0E32);
    case 0xEE34u: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b63_0E34);
    case 0xEE36u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0E36);
    case 0xEE38u: return mm6_exec_op_D9_CMP_AbsY(rt, kCtx_b63_0E38);
    case 0xEE3Bu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0E3B);
    case 0xEE3Du: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0E3D);
    case 0xEE40u: return mm6_exec_op_C5_CMP_Zero(rt, kCtx_b63_0E40);
    case 0xEE42u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_0E42);
    case 0xEE44u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0E44);
    case 0xEE47u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E47);
    case 0xEE49u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0E49);
    case 0xEE4Cu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0E4C);
    case 0xEE4Eu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0E4E);
    case 0xEE50u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0E50);
    case 0xEE52u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0E52);
    case 0xEE54u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E54);
    case 0xEE56u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0E56);
    case 0xEE58u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0E58);
    case 0xEE5Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E5A);
    case 0xEE5Cu: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0E5C);
    case 0xEE5Eu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0E5E);
    case 0xEE60u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0E60);
    case 0xEE62u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0E62);
    case 0xEE69u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0E69);
    case 0xEE6Au: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0E6A);
    case 0xEE6Du: return mm6_exec_op_F9_SBC_AbsY(rt, kCtx_b63_0E6D);
    case 0xEE70u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0E70);
    case 0xEE73u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E73);
    case 0xEE75u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0E75);
    case 0xEE78u: return mm6_exec_op_F9_SBC_AbsY(rt, kCtx_b63_0E78);
    case 0xEE7Bu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0E7B);
    case 0xEE7Eu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E7E);
    case 0xEE80u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0E80);
    case 0xEE83u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0E83);
    case 0xEE85u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0E85);
    case 0xEE87u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0E87);
    case 0xEE89u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0E89);
    case 0xEE8Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E8B);
    case 0xEE8Du: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0E8D);
    case 0xEE8Fu: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0E8F);
    case 0xEE91u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0E91);
    case 0xEE93u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0E93);
    case 0xEE95u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0E95);
    case 0xEE97u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0E97);
    case 0xEE99u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0E99);
    case 0xEE9Au: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_0E9A);
    case 0xEE9Bu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0E9B);
    case 0xEE9Eu: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_0E9E);
    case 0xEEA1u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0EA1);
    case 0xEEA4u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0EA4);
    case 0xEEA6u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0EA6);
    case 0xEEA9u: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_0EA9);
    case 0xEEACu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0EAC);
    case 0xEEAFu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0EAF);
    case 0xEEB1u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0EB1);
    case 0xEEB4u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0EB4);
    case 0xEEB6u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0EB6);
    case 0xEEB8u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0EB8);
    case 0xEEBAu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0EBA);
    case 0xEEBCu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0EBC);
    case 0xEEBEu: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0EBE);
    case 0xEEC0u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0EC0);
    case 0xEEC2u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0EC2);
    case 0xEEC4u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0EC4);
    case 0xEEC6u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0EC6);
    case 0xEEC8u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0EC8);
    case 0xEEC9u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0EC9);
    case 0xEECAu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0ECA);
    case 0xEECDu: return mm6_exec_op_F9_SBC_AbsY(rt, kCtx_b63_0ECD);
    case 0xEED0u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0ED0);
    case 0xEED3u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0ED3);
    case 0xEED5u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0ED5);
    case 0xEED8u: return mm6_exec_op_F9_SBC_AbsY(rt, kCtx_b63_0ED8);
    case 0xEEDBu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0EDB);
    case 0xEEDEu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0EDE);
    case 0xEEE0u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0EE0);
    case 0xEEE3u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0EE3);
    case 0xEEE5u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0EE5);
    case 0xEEE7u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0EE7);
    case 0xEEE9u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0EE9);
    case 0xEEEBu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0EEB);
    case 0xEEEDu: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0EED);
    case 0xEEEFu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0EEF);
    case 0xEEF1u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0EF1);
    case 0xEEF3u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0EF3);
    case 0xEEF5u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_0EF5);
    case 0xEEF7u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0EF7);
    case 0xEF0Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0F0C);
    case 0xEF0Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0F0F);
    case 0xEF11u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0F11);
    case 0xEF14u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0F14);
    case 0xEF17u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0F17);
    case 0xEF18u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0F18);
    case 0xEF1Bu: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0F1B);
    case 0xEF1Du: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0F1D);
    case 0xEF20u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0F20);
    case 0xEF23u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_0F23);
    case 0xEF25u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0F25);
    case 0xEF28u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0F28);
    case 0xEF29u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0F29);
    case 0xEF2Bu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0F2B);
    case 0xEF2Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0F2E);
    case 0xEF30u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0F30);
    case 0xEF33u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0F33);
    case 0xEF35u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0F35);
    case 0xEF37u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0F37);
    case 0xEF3Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0F3A);
    case 0xEF3Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0F3D);
    case 0xEF3Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0F3F);
    case 0xEF42u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_0F42);
    case 0xEF44u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0F44);
    case 0xEF46u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0F46);
    case 0xEF48u: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b63_0F48);
    case 0xEF4Bu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_0F4B);
    case 0xEF4Eu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0F4E);
    case 0xEF50u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0F50);
    case 0xEF52u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_0F52);
    case 0xEF5Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0F5B);
    case 0xEF5Du: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0F5D);
    case 0xEF60u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_0F60);
    case 0xEF62u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0F62);
    case 0xEF65u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0F65);
    case 0xEF67u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_0F67);
    case 0xEF69u: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b63_0F69);
    case 0xEF6Bu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_0F6B);
    case 0xEF6Du: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0F6D);
    case 0xEF6Fu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_0F6F);
    case 0xEF71u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0F71);
    case 0xEF73u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_0F73);
    case 0xEF74u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0F74);
    case 0xEF76u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0F76);
    case 0xEF78u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0F78);
    case 0xEF79u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b63_0F79);
    case 0xEF7Bu: return mm6_exec_op_05_ORA_Zero(rt, kCtx_b63_0F7B);
    case 0xEF7Du: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_0F7D);
    case 0xEF7Eu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_0F7E);
    case 0xEF81u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0F81);
    case 0xEF84u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0F84);
    case 0xEF87u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0F87);
    case 0xEF89u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0F89);
    case 0xEF8Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0F8B);
    case 0xEF8Du: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0F8D);
    case 0xEF90u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0F90);
    case 0xEF93u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0F93);
    case 0xEF95u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_0F95);
    case 0xEF97u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0F97);
    case 0xEF99u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0F99);
    case 0xEF9Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_0F9B);
    case 0xEF9Du: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0F9D);
    case 0xEFA0u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_0FA0);
    case 0xEFA1u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_0FA1);
    case 0xEFA3u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0FA3);
    case 0xEFA6u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_0FA6);
    case 0xEFA8u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0FA8);
    case 0xEFABu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0FAB);
    case 0xEFAEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0FAE);
    case 0xEFB1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0FB1);
    case 0xEFB3u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_0FB3);
    case 0xEFB6u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0FB6);
    case 0xEFB9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0FB9);
    case 0xEFBBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0FBB);
    case 0xEFBEu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0FBE);
    case 0xEFC0u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_0FC0);
    case 0xEFC3u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0FC3);
    case 0xEFC6u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_0FC6);
    case 0xEFC8u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0FC8);
    case 0xEFCAu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0FCA);
    case 0xEFCCu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_0FCC);
    case 0xEFCEu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0FCE);
    case 0xEFD0u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_0FD0);
    case 0xEFD2u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_0FD2);
    case 0xEFD4u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_0FD4);
    case 0xEFD7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_0FD7);
    case 0xEFDAu: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b63_0FDA);
    case 0xEFDDu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_0FDD);
    case 0xF05Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_105E);
    case 0xF062u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1062);
    case 0xF065u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1065);
    case 0xF067u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1067);
    case 0xF06Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_106A);
    case 0xF06Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_106C);
    case 0xF070u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1070);
    case 0xF072u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1072);
    case 0xF075u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1075);
    case 0xF077u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1077);
    case 0xF07Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_107A);
    case 0xF07Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_107C);
    case 0xF07Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_107F);
    case 0xF081u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1081);
    case 0xF084u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1084);
    case 0xF086u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1086);
    case 0xF088u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_1088);
    case 0xF08Au: return mm6_exec_op_86_STX_Zero(rt, kCtx_b63_108A);
    case 0xF08Cu: return mm6_exec_op_86_STX_Zero(rt, kCtx_b63_108C);
    case 0xF08Eu: return mm6_exec_op_86_STX_Zero(rt, kCtx_b63_108E);
    case 0xF090u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_1090);
    case 0xF092u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1092);
    case 0xF096u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_1096);
    case 0xF098u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1098);
    case 0xF09Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_109B);
    case 0xF09Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_109D);
    case 0xF09Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_109F);
    case 0xF0A1u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_10A1);
    case 0xF0A3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_10A3);
    case 0xF0A6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_10A6);
    case 0xF0A8u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_10A8);
    case 0xF0AAu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_10AA);
    case 0xF0ACu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_10AC);
    case 0xF0AEu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_10AE);
    case 0xF0B1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_10B1);
    case 0xF0B3u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_10B3);
    case 0xF0B6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_10B6);
    case 0xF0B8u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_10B8);
    case 0xF0BBu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_10BB);
    case 0xF0BDu: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b63_10BD);
    case 0xF0C0u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b63_10C0);
    case 0xF0C3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_10C3);
    case 0xF0C6u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_10C6);
    case 0xF0C8u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b63_10C8);
    case 0xF0CBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_10CB);
    case 0xF0CDu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_10CD);
    case 0xF0CEu: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b63_10CE);
    case 0xF0D1u: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_10D1);
    case 0xF0D2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_10D2);
    case 0xF0D5u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_10D5);
    case 0xF0D7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_10D7);
    case 0xF0D9u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_10D9);
    case 0xF0DCu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_10DC);
    case 0xF0DFu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_10DF);
    case 0xF0E0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_10E0);
    case 0xF0E3u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b63_10E3);
    case 0xF0E6u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_10E6);
    case 0xF0E9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_10E9);
    case 0xF0EDu: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b63_10ED);
    case 0xF0F0u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_10F0);
    case 0xF0F2u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_10F2);
    case 0xF0F5u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_10F5);
    case 0xF0F7u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_10F7);
    case 0xF0F9u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_10F9);
    case 0xF0FBu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_10FB);
    case 0xF0FDu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_10FD);
    case 0xF100u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1100);
    case 0xF103u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1103);
    case 0xF106u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1106);
    case 0xF109u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1109);
    case 0xF10Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_110B);
    case 0xF10Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_110E);
    case 0xF111u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1111);
    case 0xF113u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1113);
    case 0xF116u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1116);
    case 0xF118u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1118);
    case 0xF11Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_111C);
    case 0xF11Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_111E);
    case 0xF121u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1121);
    case 0xF124u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_1124);
    case 0xF126u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1126);
    case 0xF129u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1129);
    case 0xF12Cu: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_112C);
    case 0xF12Eu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_112E);
    case 0xF131u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1131);
    case 0xF134u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1134);
    case 0xF137u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1137);
    case 0xF13Au: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_113A);
    case 0xF13Cu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_113C);
    case 0xF13Eu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_113E);
    case 0xF140u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_1140);
    case 0xF142u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_1142);
    case 0xF143u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1143);
    case 0xF146u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_1146);
    case 0xF147u: return mm6_exec_op_65_ADC_Zero(rt, kCtx_b63_1147);
    case 0xF149u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_1149);
    case 0xF14Bu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_114B);
    case 0xF14Cu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_114C);
    case 0xF14Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_114F);
    case 0xF151u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1151);
    case 0xF153u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_1153);
    case 0xF155u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_1155);
    case 0xF156u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_1156);
    case 0xF157u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_1157);
    case 0xF158u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1158);
    case 0xF15Bu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_115B);
    case 0xF15Cu: return mm6_exec_op_65_ADC_Zero(rt, kCtx_b63_115C);
    case 0xF15Eu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_115E);
    case 0xF160u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_1160);
    case 0xF161u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1161);
    case 0xF164u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1164);
    case 0xF166u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1166);
    case 0xF168u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1168);
    case 0xF16Au: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_116A);
    case 0xF16Du: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_116D);
    case 0xF16Fu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_116F);
    case 0xF171u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_1171);
    case 0xF173u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1173);
    case 0xF175u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1175);
    case 0xF177u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1177);
    case 0xF179u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_1179);
    case 0xF17Au: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_117A);
    case 0xF17Bu: return mm6_exec_op_05_ORA_Zero(rt, kCtx_b63_117B);
    case 0xF17Du: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_117D);
    case 0xF17Eu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_117E);
    case 0xF181u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_1181);
    case 0xF183u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1183);
    case 0xF186u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1186);
    case 0xF188u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1188);
    case 0xF18Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_118A);
    case 0xF18Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_118C);
    case 0xF18Eu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_118E);
    case 0xF190u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1190);
    case 0xF193u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1193);
    case 0xF195u: return mm6_exec_op_2C_BIT_Abs(rt, kCtx_b63_1195);
    case 0xF198u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_1198);
    case 0xF19Au: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_119A);
    case 0xF19Cu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_119C);
    case 0xF19Eu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_119E);
    case 0xF1A1u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_11A1);
    case 0xF1A8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11A8);
    case 0xF1ABu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11AB);
    case 0xF1AFu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_11AF);
    case 0xF1B0u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11B0);
    case 0xF1B2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11B2);
    case 0xF1B5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11B5);
    case 0xF1B7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11B7);
    case 0xF1BAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11BA);
    case 0xF1BCu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11BC);
    case 0xF1BFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11BF);
    case 0xF1C1u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11C1);
    case 0xF1C4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11C4);
    case 0xF1C6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11C6);
    case 0xF1C9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11C9);
    case 0xF1CBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11CB);
    case 0xF1CEu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_11CE);
    case 0xF1D1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11D1);
    case 0xF1D3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11D3);
    case 0xF1D6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11D6);
    case 0xF1D8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11D8);
    case 0xF1DBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11DB);
    case 0xF1DDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11DD);
    case 0xF1E0u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11E0);
    case 0xF1E2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11E2);
    case 0xF1E5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11E5);
    case 0xF1E7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11E7);
    case 0xF1EAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11EA);
    case 0xF1ECu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11EC);
    case 0xF1EFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11EF);
    case 0xF1F1u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11F1);
    case 0xF1F4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_11F4);
    case 0xF1F6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_11F6);
    case 0xF1F9u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_11F9);
    case 0xF24Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_124A);
    case 0xF24Du: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_124D);
    case 0xF24Fu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_124F);
    case 0xF251u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_1251);
    case 0xF253u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_1253);
    case 0xF254u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1254);
    case 0xF256u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1256);
    case 0xF258u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1258);
    case 0xF25Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_125A);
    case 0xF25Cu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_125C);
    case 0xF25Eu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_125E);
    case 0xF260u: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_1260);
    case 0xF262u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_1262);
    case 0xF265u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1265);
    case 0xF267u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_1267);
    case 0xF269u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_1269);
    case 0xF26Bu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_126B);
    case 0xF26Du: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_126D);
    case 0xF26Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_126F);
    case 0xF273u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_1273);
    case 0xF275u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_1275);
    case 0xF277u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_1277);
    case 0xF278u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1278);
    case 0xF27Bu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_127B);
    case 0xF27Du: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_127D);
    case 0xF280u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_1280);
    case 0xF281u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_1281);
    case 0xF283u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_1283);
    case 0xF284u: return mm6_exec_op_84_STY_Zero(rt, kCtx_b63_1284);
    case 0xF286u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_1286);
    case 0xF287u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1287);
    case 0xF28Au: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_128A);
    case 0xF28Bu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_128B);
    case 0xF28Du: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_128D);
    case 0xF2AAu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_12AA);
    case 0xF2ABu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12AB);
    case 0xF2AFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12AF);
    case 0xF2B3u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_12B3);
    case 0xF2B4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12B4);
    case 0xF2B7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12B7);
    case 0xF2BAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12BA);
    case 0xF2BDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12BD);
    case 0xF2C1u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_12C1);
    case 0xF2C2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_12C2);
    case 0xF2C4u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_12C4);
    case 0xF2C6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12C6);
    case 0xF2C9u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_12C9);
    case 0xF2CBu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_12CB);
    case 0xF2CDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12CD);
    case 0xF2D1u: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_12D1);
    case 0xF2D2u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_12D2);
    case 0xF2D5u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_12D5);
    case 0xF2D8u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_12D8);
    case 0xF2DAu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_12DA);
    case 0xF2DCu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12DC);
    case 0xF2DFu: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b63_12DF);
    case 0xF2E2u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_12E2);
    case 0xF2E5u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_12E5);
    case 0xF2E8u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b63_12E8);
    case 0xF2EBu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_12EB);
    case 0xF2EEu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_12EE);
    case 0xF2F1u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12F1);
    case 0xF2F4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12F4);
    case 0xF2F7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_12F7);
    case 0xF2FAu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_12FA);
    case 0xF2FCu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_12FC);
    case 0xF2FEu: return mm6_exec_op_2C_BIT_Abs(rt, kCtx_b63_12FE);
    case 0xF301u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1301);
    case 0xF303u: return mm6_exec_op_2C_BIT_Abs(rt, kCtx_b63_1303);
    case 0xF306u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_1306);
    case 0xF308u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1308);
    case 0xF30Bu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_130B);
    case 0xF30Eu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_130E);
    case 0xF310u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_1310);
    case 0xF312u: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_1312);
    case 0xF313u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1313);
    case 0xF315u: return mm6_exec_op_99_STA_AbsYW(rt, kCtx_b63_1315);
    case 0xF318u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1318);
    case 0xF31Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_131A);
    case 0xF31Du: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_131D);
    case 0xF320u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_1320);
    case 0xF322u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1322);
    case 0xF325u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_1325);
    case 0xF327u: return mm6_exec_op_E0_CPX_Imm(rt, kCtx_b63_1327);
    case 0xF329u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_1329);
    case 0xF32Bu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_132B);
    case 0xF32Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_132D);
    case 0xF330u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1330);
    case 0xF333u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1333);
    case 0xF336u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1336);
    case 0xF339u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1339);
    case 0xF33Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_133C);
    case 0xF33Fu: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_133F);
    case 0xF340u: return mm6_exec_op_09_ORA_Imm(rt, kCtx_b63_1340);
    case 0xF342u: return mm6_exec_op_99_STA_AbsYW(rt, kCtx_b63_1342);
    case 0xF345u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_1345);
    case 0xF348u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_1348);
    case 0xF34Au: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_134A);
    case 0xF34Bu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_134B);
    case 0xF34Eu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_134E);
    case 0xF34Fu: return mm6_exec_op_6D_ADC_Abs(rt, kCtx_b63_134F);
    case 0xF352u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_1352);
    case 0xF354u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_1354);
    case 0xF355u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1355);
    case 0xF358u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_1358);
    case 0xF35Au: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_135A);
    case 0xF35Cu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_135C);
    case 0xF35Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_135F);
    case 0xF361u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_1361);
    case 0xF363u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_1363);
    case 0xF364u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_1364);
    case 0xF365u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_1365);
    case 0xF366u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1366);
    case 0xF369u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_1369);
    case 0xF36Au: return mm6_exec_op_6D_ADC_Abs(rt, kCtx_b63_136A);
    case 0xF36Du: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_136D);
    case 0xF36Fu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_136F);
    case 0xF370u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1370);
    case 0xF373u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1373);
    case 0xF376u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_1376);
    case 0xF379u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_1379);
    case 0xF37Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_137A);
    case 0xF37Cu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_137C);
    case 0xF37Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_137F);
    case 0xF381u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1381);
    case 0xF384u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_1384);
    case 0xF386u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_1386);
    case 0xF388u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1388);
    case 0xF38Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_138B);
    case 0xF38Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_138E);
    case 0xF391u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1391);
    case 0xF393u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_1393);
    case 0xF395u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1395);
    case 0xF397u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1397);
    case 0xF399u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_1399);
    case 0xF39Bu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_139B);
    case 0xF39Du: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_139D);
    case 0xF39Fu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_139F);
    case 0xF3A1u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_13A1);
    case 0xF3A3u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_13A3);
    case 0xF3A5u: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b63_13A5);
    case 0xF3A8u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_13A8);
    case 0xF3ABu: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b63_13AB);
    case 0xF3AEu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_13AE);
    case 0xF3B1u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_13B1);
    case 0xF3B2u: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_13B2);
    case 0xF3B5u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_13B5);
    case 0xF3B6u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_13B6);
    case 0xF3B7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_13B7);
    case 0xF3B9u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_13B9);
    case 0xF3BCu: return mm6_exec_op_98_TYA_Imp(rt, kCtx_b63_13BC);
    case 0xF3BDu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_13BD);
    case 0xF3BFu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_13BF);
    case 0xF3C1u: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b63_13C1);
    case 0xF3C4u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b63_13C4);
    case 0xF3C6u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_13C6);
    case 0xF3C8u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_13C8);
    case 0xF3CBu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_13CB);
    case 0xF3CCu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_13CC);
    case 0xF3CEu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_13CE);
    case 0xF3D1u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_13D1);
    case 0xF3D4u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_13D4);
    case 0xF3D7u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_13D7);
    case 0xF3DAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_13DA);
    case 0xF3DCu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_13DC);
    case 0xF3DEu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_13DE);
    case 0xF3E1u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_13E1);
    case 0xF3E4u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_13E4);
    case 0xF3E5u: return mm6_exec_op_26_ROL_Zero(rt, kCtx_b63_13E5);
    case 0xF3E7u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_13E7);
    case 0xF3EAu: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_13EA);
    case 0xF3EBu: return mm6_exec_op_26_ROL_Zero(rt, kCtx_b63_13EB);
    case 0xF3EDu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_13ED);
    case 0xF3F0u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_13F0);
    case 0xF3F1u: return mm6_exec_op_26_ROL_Zero(rt, kCtx_b63_13F1);
    case 0xF3F3u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_13F3);
    case 0xF3F6u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_13F6);
    case 0xF3F7u: return mm6_exec_op_26_ROL_Zero(rt, kCtx_b63_13F7);
    case 0xF3F9u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_13F9);
    case 0xF3FBu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_13FB);
    case 0xF3FEu: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_13FE);
    case 0xF400u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_1400);
    case 0xF401u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1401);
    case 0xF404u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1404);
    case 0xF407u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1407);
    case 0xF40Au: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_140A);
    case 0xF40Bu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_140B);
    case 0xF40Cu: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_140C);
    case 0xF40Eu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_140E);
    case 0xF410u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1410);
    case 0xF412u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_1412);
    case 0xF414u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1414);
    case 0xF416u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_1416);
    case 0xF417u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_1417);
    case 0xF418u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_1418);
    case 0xF41Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_141A);
    case 0xF41Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_141C);
    case 0xF41Eu: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_141E);
    case 0xF420u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1420);
    case 0xF422u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_1422);
    case 0xF424u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1424);
    case 0xF427u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_1427);
    case 0xF429u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_1429);
    case 0xF42Bu: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_142B);
    case 0xF42Du: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_142D);
    case 0xF42Eu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_142E);
    case 0xF431u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_1431);
    case 0xF433u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b63_1433);
    case 0xF435u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1435);
    case 0xF438u: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_1438);
    case 0xF439u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_1439);
    case 0xF43Bu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_143B);
    case 0xF43Eu: return mm6_exec_op_0D_ORA_Abs(rt, kCtx_b63_143E);
    case 0xF441u: return mm6_exec_op_0D_ORA_Abs(rt, kCtx_b63_1441);
    case 0xF444u: return mm6_exec_op_0D_ORA_Abs(rt, kCtx_b63_1444);
    case 0xF447u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_1447);
    case 0xF449u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_1449);
    case 0xF44Bu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_144B);
    case 0xF44Eu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_144E);
    case 0xF450u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_1450);
    case 0xF451u: return mm6_exec_op_19_ORA_AbsY(rt, kCtx_b63_1451);
    case 0xF454u: return mm6_exec_op_99_STA_AbsYW(rt, kCtx_b63_1454);
    case 0xF457u: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_1457);
    case 0xF458u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_1458);
    case 0xF45Au: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_145A);
    case 0xF45Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_145D);
    case 0xF45Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_145F);
    case 0xF461u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1461);
    case 0xF463u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1463);
    case 0xF467u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1467);
    case 0xF46Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_146A);
    case 0xF46Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_146C);
    case 0xF470u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_1470);
    case 0xF473u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1473);
    case 0xF475u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_1475);
    case 0xF477u: return mm6_exec_op_0D_ORA_Abs(rt, kCtx_b63_1477);
    case 0xF47Au: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_147A);
    case 0xF47Bu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_147B);
    case 0xF47Cu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_147C);
    case 0xF47Fu: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_147F);
    case 0xF480u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_1480);
    case 0xF481u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_1481);
    case 0xF483u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1483);
    case 0xF485u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1485);
    case 0xF487u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_1487);
    case 0xF489u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1489);
    case 0xF48Bu: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_148B);
    case 0xF48Cu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_148C);
    case 0xF48Du: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_148D);
    case 0xF48Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_148F);
    case 0xF491u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1491);
    case 0xF493u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_1493);
    case 0xF495u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1495);
    case 0xF497u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_1497);
    case 0xF499u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1499);
    case 0xF49Cu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_149C);
    case 0xF49Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_149E);
    case 0xF4A1u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_14A1);
    case 0xF4A2u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_14A2);
    case 0xF4A3u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_14A3);
    case 0xF4A6u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_14A6);
    case 0xF4A9u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_14A9);
    case 0xF4ACu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_14AC);
    case 0xF4AFu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_14AF);
    case 0xF4B1u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_14B1);
    case 0xF4B3u: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_14B3);
    case 0xF4B4u: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_14B4);
    case 0xF4B5u: return mm6_exec_op_D1_CMP_IndY(rt, kCtx_b63_14B5);
    case 0xF4B7u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_14B7);
    case 0xF4B9u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_14B9);
    case 0xF4BCu: return mm6_exec_op_D1_CMP_IndY(rt, kCtx_b63_14BC);
    case 0xF4BEu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_14BE);
    case 0xF4C0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_14C0);
    case 0xF4C3u: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_14C3);
    case 0xF4C4u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_14C4);
    case 0xF4C5u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_14C5);
    case 0xF4C7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_14C7);
    case 0xF4CAu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_14CA);
    case 0xF4CCu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_14CC);
    case 0xF4CFu: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b63_14CF);
    case 0xF4D2u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_14D2);
    case 0xF4D5u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_14D5);
    case 0xF4D8u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b63_14D8);
    case 0xF4DBu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_14DB);
    case 0xF4DEu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_14DE);
    case 0xF4E1u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_14E1);
    case 0xF4E2u: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_14E2);
    case 0xF4E3u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_14E3);
    case 0xF4E4u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_14E4);
    case 0xF4E6u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_14E6);
    case 0xF4E7u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_14E7);
    case 0xF4E9u: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b63_14E9);
    case 0xF4EBu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_14EB);
    case 0xF4EDu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_14ED);
    case 0xF4F0u: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_14F0);
    case 0xF4F1u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_14F1);
    case 0xF4F3u: return mm6_exec_op_D9_CMP_AbsY(rt, kCtx_b63_14F3);
    case 0xF4F6u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_14F6);
    case 0xF4F8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_14F8);
    case 0xF4FAu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_14FA);
    case 0xF4FDu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_14FD);
    case 0xF500u: return mm6_exec_op_19_ORA_AbsY(rt, kCtx_b63_1500);
    case 0xF503u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1503);
    case 0xF505u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1505);
    case 0xF507u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1507);
    case 0xF50Au: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_150A);
    case 0xF50Du: return mm6_exec_op_1D_ORA_AbsX(rt, kCtx_b63_150D);
    case 0xF510u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1510);
    case 0xF513u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_1513);
    case 0xF51Cu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_151C);
    case 0xF51Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_151F);
    case 0xF521u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1521);
    case 0xF523u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1523);
    case 0xF526u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1526);
    case 0xF528u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1528);
    case 0xF52Au: return mm6_exec_op_D9_CMP_AbsY(rt, kCtx_b63_152A);
    case 0xF52Du: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_152D);
    case 0xF52Fu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_152F);
    case 0xF532u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1532);
    case 0xF534u: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_1534);
    case 0xF535u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_1535);
    case 0xF536u: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b63_1536);
    case 0xF538u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_1538);
    case 0xF53Au: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_153A);
    case 0xF53Du: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_153D);
    case 0xF53Eu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_153E);
    case 0xF541u: return mm6_exec_op_25_AND_Zero(rt, kCtx_b63_1541);
    case 0xF543u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_1543);
    case 0xF545u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_1545);
    case 0xF546u: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_1546);
    case 0xF547u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_1547);
    case 0xF548u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_1548);
    case 0xF549u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_1549);
    case 0xF54Au: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_154A);
    case 0xF54Bu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_154B);
    case 0xF54Cu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_154C);
    case 0xF6CFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_16CF);
    case 0xF6D3u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_16D3);
    case 0xF6D4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_16D4);
    case 0xF6D8u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_16D8);
    case 0xF6D9u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_16D9);
    case 0xF6DBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_16DB);
    case 0xF6DDu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_16DD);
    case 0xF6DFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_16DF);
    case 0xF6E1u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_16E1);
    case 0xF6E4u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_16E4);
    case 0xF6E6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_16E6);
    case 0xF6E8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_16E8);
    case 0xF6EBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_16EB);
    case 0xF6EDu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_16ED);
    case 0xF6F0u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_16F0);
    case 0xF6F2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_16F2);
    case 0xF6F4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_16F4);
    case 0xF6F7u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_16F7);
    case 0xF6F8u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_16F8);
    case 0xF6FAu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_16FA);
    case 0xF6FBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_16FB);
    case 0xF6FFu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_16FF);
    case 0xF712u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_1712);
    case 0xF715u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1715);
    case 0xF717u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_1717);
    case 0xF71Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_171A);
    case 0xF71Cu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_171C);
    case 0xF71Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_171F);
    case 0xF721u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_1721);
    case 0xF724u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1724);
    case 0xF726u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1726);
    case 0xF729u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1729);
    case 0xF72Bu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_172B);
    case 0xF72Eu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_172E);
    case 0xF730u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1730);
    case 0xF733u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1733);
    case 0xF735u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1735);
    case 0xF738u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1738);
    case 0xF73Au: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_173A);
    case 0xF73Bu: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_173B);
    case 0xF73Cu: return mm6_exec_op_98_TYA_Imp(rt, kCtx_b63_173C);
    case 0xF73Du: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_173D);
    case 0xF73Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_173E);
    case 0xF740u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1740);
    case 0xF742u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_1742);
    case 0xF744u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_1744);
    case 0xF746u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_1746);
    case 0xF749u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_1749);
    case 0xF74Au: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_174A);
    case 0xF74Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_174D);
    case 0xF74Fu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_174F);
    case 0xF752u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_1752);
    case 0xF753u: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b63_1753);
    case 0xF756u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1756);
    case 0xF758u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1758);
    case 0xF75Au: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_175A);
    case 0xF75Bu: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_175B);
    case 0xF75Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_175D);
    case 0xF75Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_175F);
    case 0xF761u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1761);
    case 0xF763u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_1763);
    case 0xF765u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_1765);
    case 0xF767u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1767);
    case 0xF769u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1769);
    case 0xF76Bu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_176B);
    case 0xF76Du: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_176D);
    case 0xF76Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_176F);
    case 0xF771u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_1771);
    case 0xF773u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1773);
    case 0xF775u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_1775);
    case 0xF777u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1777);
    case 0xF779u: return mm6_exec_op_C5_CMP_Zero(rt, kCtx_b63_1779);
    case 0xF77Bu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_177B);
    case 0xF77Du: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_177D);
    case 0xF77Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_177F);
    case 0xF781u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_1781);
    case 0xF782u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_1782);
    case 0xF784u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1784);
    case 0xF786u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1786);
    case 0xF788u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1788);
    case 0xF78Au: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_178A);
    case 0xF78Cu: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_178C);
    case 0xF78Eu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_178E);
    case 0xF790u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1790);
    case 0xF792u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b63_1792);
    case 0xF794u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1794);
    case 0xF796u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1796);
    case 0xF798u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_1798);
    case 0xF79Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_179A);
    case 0xF79Cu: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_179C);
    case 0xF79Eu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_179E);
    case 0xF7A0u: return mm6_exec_op_C5_CMP_Zero(rt, kCtx_b63_17A0);
    case 0xF7A2u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_17A2);
    case 0xF7A4u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_17A4);
    case 0xF7A5u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_17A5);
    case 0xF7A6u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_17A6);
    case 0xF7A7u: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_17A7);
    case 0xF7A8u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_17A8);
    case 0xF7A9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_17A9);
    case 0xF7ABu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_17AB);
    case 0xF7ADu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_17AD);
    case 0xF7AFu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_17AF);
    case 0xF7B0u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_17B0);
    case 0xF7B2u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_17B2);
    case 0xF7B4u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_17B4);
    case 0xF7B6u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_17B6);
    case 0xF7B8u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_17B8);
    case 0xF7BAu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_17BA);
    case 0xF7BCu: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_17BC);
    case 0xF7BEu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_17BE);
    case 0xF7C0u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_17C0);
    case 0xF7C2u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_17C2);
    case 0xF7C4u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_17C4);
    case 0xF7C5u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_17C5);
    case 0xF7C7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_17C7);
    case 0xF7C9u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_17C9);
    case 0xF7CBu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_17CB);
    case 0xF7CDu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_17CD);
    case 0xF7CFu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_17CF);
    case 0xF7D1u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_17D1);
    case 0xF7D3u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_17D3);
    case 0xF7D5u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_17D5);
    case 0xF7D7u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_17D7);
    case 0xF7D8u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_17D8);
    case 0xF7D9u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_17D9);
    case 0xF7DAu: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_17DA);
    case 0xF7DBu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_17DB);
    case 0xF8AEu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_18AE);
    case 0xF8B1u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18B1);
    case 0xF8B3u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_18B3);
    case 0xF8B6u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18B6);
    case 0xF8B8u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_18B8);
    case 0xF8BBu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18BB);
    case 0xF8BDu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_18BD);
    case 0xF8C0u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18C0);
    case 0xF8C2u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_18C2);
    case 0xF8C5u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18C5);
    case 0xF8C7u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_18C7);
    case 0xF8CAu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18CA);
    case 0xF8CCu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_18CC);
    case 0xF8CEu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_18CE);
    case 0xF8D0u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_18D0);
    case 0xF8D1u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_18D1);
    case 0xF8D3u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_18D3);
    case 0xF8D5u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_18D5);
    case 0xF8D7u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_18D7);
    case 0xF8D9u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_18D9);
    case 0xF8DBu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18DB);
    case 0xF8DDu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_18DD);
    case 0xF8DFu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b63_18DF);
    case 0xF8E0u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_18E0);
    case 0xF8E2u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18E2);
    case 0xF8E4u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_18E4);
    case 0xF8E6u: return mm6_exec_op_E5_SBC_Zero(rt, kCtx_b63_18E6);
    case 0xF8E8u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_18E8);
    case 0xF8EAu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_18EA);
    case 0xF8ECu: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_18EC);
    case 0xF8EEu: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b63_18EE);
    case 0xF8F0u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_18F0);
    case 0xF8F1u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_18F1);
    case 0xF8F2u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18F2);
    case 0xF8F4u: return mm6_exec_op_C5_CMP_Zero(rt, kCtx_b63_18F4);
    case 0xF8F6u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_18F6);
    case 0xF8F8u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_18F8);
    case 0xF8F9u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_18F9);
    case 0xF8FBu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18FB);
    case 0xF8FDu: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_18FD);
    case 0xF8FEu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_18FE);
    case 0xF900u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b63_1900);
    case 0xF901u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1901);
    case 0xF903u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1903);
    case 0xF905u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1905);
    case 0xF907u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_1907);
    case 0xF908u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b63_1908);
    case 0xF909u: return mm6_exec_op_C5_CMP_Zero(rt, kCtx_b63_1909);
    case 0xF90Bu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_190B);
    case 0xF90Du: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_190D);
    case 0xF90Fu: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_190F);
    case 0xF910u: return mm6_exec_op_C5_CMP_Zero(rt, kCtx_b63_1910);
    case 0xF912u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_1912);
    case 0xF914u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b63_1914);
    case 0xF916u: return mm6_exec_op_98_TYA_Imp(rt, kCtx_b63_1916);
    case 0xF917u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_1917);
    case 0xF918u: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b63_1918);
    case 0xF919u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b63_1919);
    case 0xF91Au: return mm6_exec_op_65_ADC_Zero(rt, kCtx_b63_191A);
    case 0xF91Cu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b63_191C);
    case 0xF91Du: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_191D);
    case 0xF920u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1920);
    case 0xF922u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_1922);
    case 0xF946u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1946);
    case 0xF948u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1948);
    case 0xF94Bu: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_194B);
    case 0xF94Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_194D);
    case 0xF950u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_1950);
    case 0xF952u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_1952);
    case 0xF954u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1954);
    case 0xF957u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1957);
    case 0xF95Au: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b63_195A);
    case 0xF95Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_195C);
    case 0xF95Fu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_195F);
    case 0xF962u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1962);
    case 0xF964u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1964);
    case 0xF966u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_1966);
    case 0xF968u: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b63_1968);
    case 0xF96Au: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_196A);
    case 0xF96Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_196C);
    case 0xF96Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_196E);
    case 0xF971u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1971);
    case 0xF974u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b63_1974);
    case 0xF977u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1977);
    case 0xF979u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1979);
    case 0xF97Cu: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_197C);
    case 0xF97Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_197E);
    case 0xF980u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1980);
    case 0xF982u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1982);
    case 0xF985u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1985);
    case 0xF987u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1987);
    case 0xF98Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_198A);
    case 0xF98Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_198C);
    case 0xF98Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_198E);
    case 0xF991u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1991);
    case 0xF994u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b63_1994);
    case 0xF997u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1997);
    case 0xF999u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1999);
    case 0xF99Cu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_199C);
    case 0xF99Eu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b63_199E);
    case 0xF9A0u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_19A0);
    case 0xF9A2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_19A2);
    case 0xF9A5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_19A5);
    case 0xF9A7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_19A7);
    case 0xF9AAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_19AA);
    case 0xF9ADu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_19AD);
    case 0xF9B0u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_19B0);
    case 0xF9B2u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_19B2);
    case 0xF9B4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_19B4);
    case 0xF9B6u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_19B6);
    case 0xF9B9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_19B9);
    case 0xF9BBu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_19BB);
    case 0xF9BEu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_19BE);
    case 0xF9C0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_19C0);
    case 0xF9C3u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_19C3);
    case 0xF9C6u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_19C6);
    case 0xF9C7u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_19C7);
    case 0xF9CAu: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_19CA);
    case 0xF9CBu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_19CB);
    case 0xF9CEu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_19CE);
    case 0xF9D1u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_19D1);
    case 0xF9D3u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_19D3);
    case 0xF9D5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_19D5);
    case 0xF9D7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_19D7);
    case 0xF9DAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_19DA);
    case 0xF9DDu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_19DD);
    case 0xF9E0u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_19E0);
    case 0xF9E2u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_19E2);
    case 0xF9E4u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_19E4);
    case 0xF9E6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_19E6);
    case 0xF9E8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_19E8);
    case 0xF9EBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_19EB);
    case 0xF9EEu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_19EE);
    case 0xF9F1u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_19F1);
    case 0xF9F3u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b63_19F3);
    case 0xF9F5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_19F5);
    case 0xF9F7u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_19F7);
    case 0xF9FAu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_19FA);
    case 0xF9FDu: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_19FD);
    case 0xF9FEu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_19FE);
    case 0xFA01u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_1A01);
    case 0xFA02u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_1A02);
    case 0xFA03u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_1A03);
    case 0xFA04u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1A04);
    case 0xFA07u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b63_1A07);
    case 0xFA08u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1A08);
    case 0xFA0Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1A0B);
    case 0xFA0Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1A0D);
    case 0xFA0Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1A0F);
    case 0xFA11u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_1A11);
    case 0xFA13u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1A13);
    case 0xFA15u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1A15);
    case 0xFA17u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1A17);
    case 0xFA19u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A19);
    case 0xFA1Cu: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b63_1A1C);
    case 0xFA1Eu: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_1A1E);
    case 0xFA1Fu: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b63_1A1F);
    case 0xFA22u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1A22);
    case 0xFA25u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1A25);
    case 0xFA28u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1A28);
    case 0xFA2Bu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1A2B);
    case 0xFA2Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1A2E);
    case 0xFA30u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A30);
    case 0xFA33u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A33);
    case 0xFA36u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1A36);
    case 0xFA39u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b63_1A39);
    case 0xFA3Bu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b63_1A3B);
    case 0xFA3Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A3D);
    case 0xFA40u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A40);
    case 0xFA43u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A43);
    case 0xFA46u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1A46);
    case 0xFA48u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A48);
    case 0xFA4Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A4B);
    case 0xFA4Eu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_1A4E);
    case 0xFA51u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_1A51);
    case 0xFA52u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b63_1A52);
    case 0xFA55u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b63_1A55);
    case 0xFA56u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_1A56);
    case 0xFA5Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A5F);
    case 0xFA62u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b63_1A62);
    case 0xFA65u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1A65);
    case 0xFA68u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A68);
    case 0xFA6Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1A6B);
    case 0xFA6Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A6D);
    case 0xFA70u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_1A70);
    case 0xFA72u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_1A72);
    case 0xFA74u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b63_1A74);
    case 0xFA78u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b63_1A78);
    case 0xFA7Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1A7A);
    case 0xFA7Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1A7D);
    case 0xFA7Fu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1A7F);
    case 0xFA82u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1A82);
    case 0xFA84u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1A84);
    case 0xFA87u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b63_1A87);
    case 0xFF70u: return mm6_exec_op_78_SEI_Imp(rt, kCtx_b63_1F70);
    case 0xFF71u: return mm6_exec_op_D8_CLD_Imp(rt, kCtx_b63_1F71);
    case 0xFF72u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1F72);
    case 0xFF74u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1F74);
    case 0xFF77u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1F77);
    case 0xFF7Au: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1F7A);
    case 0xFF7Du: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1F7D);
    case 0xFF80u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1F80);
    case 0xFF82u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1F82);
    case 0xFF85u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b63_1F85);
    case 0xFF87u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1F87);
    case 0xFF8Au: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_1F8A);
    case 0xFF8Cu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1F8C);
    case 0xFF8Fu: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b63_1F8F);
    case 0xFF91u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_1F91);
    case 0xFF92u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_1F92);
    case 0xFF94u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_1F94);
    case 0xFF95u: return mm6_exec_op_9A_TXS_Imp(rt, kCtx_b63_1F95);
    case 0xFF96u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1F96);
    case 0xFF99u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b63_1F99);
    case 0xFF9Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1F9C);
    case 0xFF9Eu: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b63_1F9E);
    case 0xFF9Fu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1F9F);
    case 0xFFA2u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1FA2);
    case 0xFFA5u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b63_1FA5);
    case 0xFFA7u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_1FA7);
    case 0xFFA8u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1FA8);
    case 0xFFAAu: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b63_1FAA);
    case 0xFFABu: return mm6_exec_op_95_STA_ZeroX(rt, kCtx_b63_1FAB);
    case 0xFFADu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1FAD);
    case 0xFFB0u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1FB0);
    case 0xFFB3u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1FB3);
    case 0xFFB6u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1FB6);
    case 0xFFB9u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1FB9);
    case 0xFFBCu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1FBC);
    case 0xFFBFu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b63_1FBF);
    case 0xFFC2u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b63_1FC2);
    case 0xFFC3u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b63_1FC3);
    case 0xFFC5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b63_1FC5);
    case 0xFFC7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b63_1FC7);
    case 0xFFC9u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1FC9);
    case 0xFFCCu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b63_1FCC);
    case 0xFFCEu: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b63_1FCE);
    case 0xFFD1u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b63_1FD1);
    case 0xFFD4u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b63_1FD4);
    case 0xFFD7u: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b63_1FD7);
    case 0xFFD8u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b63_1FD8);
    case 0xFFDAu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b63_1FDA);
    default: return mm6_trap_dispatch_miss(rt, 63u, cpu_pc);
  }
}
