// Generated static authority, losslessly compacted for release 1.2.0.
// Every physical-bank/CPU-PC identity still calls its fixed semantic helper.
#include "mm6_v05_contract.h"

namespace {
static constexpr MM6FlowEdgeSpec kEdges_b57_0000[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8003u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0000 = {57u, 0x8000u, 0x0000u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0000, sizeof(kEdges_b57_0000) / sizeof(kEdges_b57_0000[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0003[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8000u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0003 = {57u, 0x8003u, 0x0003u, 0x8000u, 2u, nullptr, 0u, kEdges_b57_0003, sizeof(kEdges_b57_0003) / sizeof(kEdges_b57_0003[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0006[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8008u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0006 = {57u, 0x8006u, 0x0006u, 0x007Fu, 1u, nullptr, 0u, kEdges_b57_0006, sizeof(kEdges_b57_0006) / sizeof(kEdges_b57_0006[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0008[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x800Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0008 = {57u, 0x8008u, 0x0008u, 0x03E5u, 2u, nullptr, 0u, kEdges_b57_0008, sizeof(kEdges_b57_0008) / sizeof(kEdges_b57_0008[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_000B[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x800Eu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_000B = {57u, 0x800Bu, 0x000Bu, 0xE468u, 2u, nullptr, 0u, kEdges_b57_000B, sizeof(kEdges_b57_000B) / sizeof(kEdges_b57_000B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_000E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8011u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_000E = {57u, 0x800Eu, 0x000Eu, 0x056Cu, 2u, nullptr, 0u, kEdges_b57_000E, sizeof(kEdges_b57_000E) / sizeof(kEdges_b57_000E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0011[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8013u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x801Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0011 = {57u, 0x8011u, 0x0011u, 0x801Bu, 1u, nullptr, 0u, kEdges_b57_0011, sizeof(kEdges_b57_0011) / sizeof(kEdges_b57_0011[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0013[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8016u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0013 = {57u, 0x8013u, 0x0013u, 0x0574u, 2u, nullptr, 0u, kEdges_b57_0013, sizeof(kEdges_b57_0013) / sizeof(kEdges_b57_0013[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0016[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8018u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0016 = {57u, 0x8016u, 0x0016u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0016, sizeof(kEdges_b57_0016) / sizeof(kEdges_b57_0016[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0018[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x801Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0018 = {57u, 0x8018u, 0x0018u, 0x056Cu, 2u, nullptr, 0u, kEdges_b57_0018, sizeof(kEdges_b57_0018) / sizeof(kEdges_b57_0018[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_001B[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x800Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_001B = {57u, 0x801Bu, 0x001Bu, 0x800Bu, 2u, nullptr, 0u, kEdges_b57_001B, sizeof(kEdges_b57_001B) / sizeof(kEdges_b57_001B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0024[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8027u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0024 = {57u, 0x8024u, 0x0024u, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_0024, sizeof(kEdges_b57_0024) / sizeof(kEdges_b57_0024[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0027[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8029u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0027 = {57u, 0x8027u, 0x0027u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_0027, sizeof(kEdges_b57_0027) / sizeof(kEdges_b57_0027[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0029[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x802Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0029 = {57u, 0x8029u, 0x0029u, 0x00EDu, 1u, nullptr, 0u, kEdges_b57_0029, sizeof(kEdges_b57_0029) / sizeof(kEdges_b57_0029[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_002B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x802Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_002B = {57u, 0x802Bu, 0x002Bu, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_002B, sizeof(kEdges_b57_002B) / sizeof(kEdges_b57_002B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_002D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x802Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_002D = {57u, 0x802Du, 0x002Du, 0x0080u, 1u, nullptr, 0u, kEdges_b57_002D, sizeof(kEdges_b57_002D) / sizeof(kEdges_b57_002D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_002F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8031u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_002F = {57u, 0x802Fu, 0x002Fu, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_002F, sizeof(kEdges_b57_002F) / sizeof(kEdges_b57_002F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0031[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x813Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8034u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0031 = {57u, 0x8031u, 0x0031u, 0x813Fu, 2u, nullptr, 0u, kEdges_b57_0031, sizeof(kEdges_b57_0031) / sizeof(kEdges_b57_0031[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0034[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8036u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0034 = {57u, 0x8034u, 0x0034u, 0x005Au, 1u, nullptr, 0u, kEdges_b57_0034, sizeof(kEdges_b57_0034) / sizeof(kEdges_b57_0034[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0036[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8110u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8039u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0036 = {57u, 0x8036u, 0x0036u, 0x8110u, 2u, nullptr, 0u, kEdges_b57_0036, sizeof(kEdges_b57_0036) / sizeof(kEdges_b57_0036[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0039[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x803Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0039 = {57u, 0x8039u, 0x0039u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_0039, sizeof(kEdges_b57_0039) / sizeof(kEdges_b57_0039[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_003B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x803Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_003B = {57u, 0x803Bu, 0x003Bu, 0x001Eu, 1u, nullptr, 0u, kEdges_b57_003B, sizeof(kEdges_b57_003B) / sizeof(kEdges_b57_003B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_003D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8040u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_003D = {57u, 0x803Du, 0x003Du, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_003D, sizeof(kEdges_b57_003D) / sizeof(kEdges_b57_003D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0040[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF5Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8043u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0040 = {57u, 0x8040u, 0x0040u, 0xEF5Bu, 2u, nullptr, 0u, kEdges_b57_0040, sizeof(kEdges_b57_0040) / sizeof(kEdges_b57_0040[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0043[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8046u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0043 = {57u, 0x8043u, 0x0043u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_0043, sizeof(kEdges_b57_0043) / sizeof(kEdges_b57_0043[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0046[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8048u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8040u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0046 = {57u, 0x8046u, 0x0046u, 0x8040u, 1u, nullptr, 0u, kEdges_b57_0046, sizeof(kEdges_b57_0046) / sizeof(kEdges_b57_0046[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0048[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x804Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0048 = {57u, 0x8048u, 0x0048u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_0048, sizeof(kEdges_b57_0048) / sizeof(kEdges_b57_0048[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_004A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x804Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_004A = {57u, 0x804Au, 0x004Au, 0x007Au, 1u, nullptr, 0u, kEdges_b57_004A, sizeof(kEdges_b57_004A) / sizeof(kEdges_b57_004A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_004C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x804Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_004C = {57u, 0x804Cu, 0x004Cu, 0xE522u, 2u, nullptr, 0u, kEdges_b57_004C, sizeof(kEdges_b57_004C) / sizeof(kEdges_b57_004C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_004F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8051u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_004F = {57u, 0x804Fu, 0x004Fu, 0x00DFu, 1u, nullptr, 0u, kEdges_b57_004F, sizeof(kEdges_b57_004F) / sizeof(kEdges_b57_004F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0051[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8053u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0051 = {57u, 0x8051u, 0x0051u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0051, sizeof(kEdges_b57_0051) / sizeof(kEdges_b57_0051[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0053[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8054u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0053 = {57u, 0x8053u, 0x0053u, 0u, 0u, nullptr, 0u, kEdges_b57_0053, sizeof(kEdges_b57_0053) / sizeof(kEdges_b57_0053[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0054[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8057u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0054 = {57u, 0x8054u, 0x0054u, 0x8061u, 2u, nullptr, 0u, kEdges_b57_0054, sizeof(kEdges_b57_0054) / sizeof(kEdges_b57_0054[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0057[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8059u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0057 = {57u, 0x8057u, 0x0057u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0057, sizeof(kEdges_b57_0057) / sizeof(kEdges_b57_0057[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0059[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x805Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0059 = {57u, 0x8059u, 0x0059u, 0x8063u, 2u, nullptr, 0u, kEdges_b57_0059, sizeof(kEdges_b57_0059) / sizeof(kEdges_b57_0059[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_005C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x805Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_005C = {57u, 0x805Cu, 0x005Cu, 0x0009u, 1u, nullptr, 0u, kEdges_b57_005C, sizeof(kEdges_b57_005C) / sizeof(kEdges_b57_005C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_005E[] = {
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 57, 0x8065u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 57, 0x80CCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_005E = {57u, 0x805Eu, 0x005Eu, 0x0008u, 2u, nullptr, 0u, kEdges_b57_005E, sizeof(kEdges_b57_005E) / sizeof(kEdges_b57_005E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0065[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8067u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0065 = {57u, 0x8065u, 0x0065u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0065, sizeof(kEdges_b57_0065) / sizeof(kEdges_b57_0065[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0067[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8069u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0067 = {57u, 0x8067u, 0x0067u, 0x0079u, 1u, nullptr, 0u, kEdges_b57_0067, sizeof(kEdges_b57_0067) / sizeof(kEdges_b57_0067[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0069[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x806Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0069 = {57u, 0x8069u, 0x0069u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_0069, sizeof(kEdges_b57_0069) / sizeof(kEdges_b57_0069[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_006C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x806Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_006C = {57u, 0x806Cu, 0x006Cu, 0x0012u, 1u, nullptr, 0u, kEdges_b57_006C, sizeof(kEdges_b57_006C) / sizeof(kEdges_b57_006C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_006E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8071u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_006E = {57u, 0x806Eu, 0x006Eu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_006E, sizeof(kEdges_b57_006E) / sizeof(kEdges_b57_006E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0071[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF5Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8074u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0071 = {57u, 0x8071u, 0x0071u, 0xEF5Bu, 2u, nullptr, 0u, kEdges_b57_0071, sizeof(kEdges_b57_0071) / sizeof(kEdges_b57_0071[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0074[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8077u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0074 = {57u, 0x8074u, 0x0074u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_0074, sizeof(kEdges_b57_0074) / sizeof(kEdges_b57_0074[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0077[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8079u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8071u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0077 = {57u, 0x8077u, 0x0077u, 0x8071u, 1u, nullptr, 0u, kEdges_b57_0077, sizeof(kEdges_b57_0077) / sizeof(kEdges_b57_0077[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0079[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x807Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0079 = {57u, 0x8079u, 0x0079u, 0x0018u, 1u, nullptr, 0u, kEdges_b57_0079, sizeof(kEdges_b57_0079) / sizeof(kEdges_b57_0079[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_007B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x807Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_007B = {57u, 0x807Bu, 0x007Bu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_007B, sizeof(kEdges_b57_007B) / sizeof(kEdges_b57_007B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_007E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8080u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_007E = {57u, 0x807Eu, 0x007Eu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_007E, sizeof(kEdges_b57_007E) / sizeof(kEdges_b57_007E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0080[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF8AEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8083u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0080 = {57u, 0x8080u, 0x0080u, 0xF8AEu, 2u, nullptr, 0u, kEdges_b57_0080, sizeof(kEdges_b57_0080) / sizeof(kEdges_b57_0080[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0083[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8085u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0083 = {57u, 0x8083u, 0x0083u, 0x0011u, 1u, nullptr, 0u, kEdges_b57_0083, sizeof(kEdges_b57_0083) / sizeof(kEdges_b57_0083[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0085[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8088u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0085 = {57u, 0x8085u, 0x0085u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_0085, sizeof(kEdges_b57_0085) / sizeof(kEdges_b57_0085[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0088[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x808Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0088 = {57u, 0x8088u, 0x0088u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_0088, sizeof(kEdges_b57_0088) / sizeof(kEdges_b57_0088[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_008A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x808Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_008A = {57u, 0x808Au, 0x008Au, 0x00D9u, 1u, nullptr, 0u, kEdges_b57_008A, sizeof(kEdges_b57_008A) / sizeof(kEdges_b57_008A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_008C[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8090u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_008C = {57u, 0x808Cu, 0x008Cu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_008C, sizeof(kEdges_b57_008C) / sizeof(kEdges_b57_008C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0090[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8092u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0090 = {57u, 0x8090u, 0x0090u, 0x002Eu, 1u, nullptr, 0u, kEdges_b57_0090, sizeof(kEdges_b57_0090) / sizeof(kEdges_b57_0090[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0092[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8094u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0092 = {57u, 0x8092u, 0x0092u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_0092, sizeof(kEdges_b57_0092) / sizeof(kEdges_b57_0092[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0094[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8097u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0094 = {57u, 0x8094u, 0x0094u, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_0094, sizeof(kEdges_b57_0094) / sizeof(kEdges_b57_0094[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0097[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x809Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0097 = {57u, 0x8097u, 0x0097u, 0x03D6u, 2u, nullptr, 0u, kEdges_b57_0097, sizeof(kEdges_b57_0097) / sizeof(kEdges_b57_0097[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_009A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x809Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_009A = {57u, 0x809Au, 0x009Au, 0u, 0u, nullptr, 0u, kEdges_b57_009A, sizeof(kEdges_b57_009A) / sizeof(kEdges_b57_009A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_009B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x809Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_009B = {57u, 0x809Bu, 0x009Bu, 0x03DDu, 2u, nullptr, 0u, kEdges_b57_009B, sizeof(kEdges_b57_009B) / sizeof(kEdges_b57_009B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_009E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80A0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_009E = {57u, 0x809Eu, 0x009Eu, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_009E, sizeof(kEdges_b57_009E) / sizeof(kEdges_b57_009E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00A0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80A2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00A0 = {57u, 0x80A0u, 0x00A0u, 0x00D9u, 1u, nullptr, 0u, kEdges_b57_00A0, sizeof(kEdges_b57_00A0) / sizeof(kEdges_b57_00A0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00A2[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x80A6u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00A2 = {57u, 0x80A2u, 0x00A2u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_00A2, sizeof(kEdges_b57_00A2) / sizeof(kEdges_b57_00A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00A6 = {57u, 0x80A6u, 0x00A6u, 0x002Eu, 1u, nullptr, 0u, kEdges_b57_00A6, sizeof(kEdges_b57_00A6) / sizeof(kEdges_b57_00A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00A8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00A8 = {57u, 0x80A8u, 0x00A8u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_00A8, sizeof(kEdges_b57_00A8) / sizeof(kEdges_b57_00A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00AA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x80ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00AA = {57u, 0x80AAu, 0x00AAu, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_00AA, sizeof(kEdges_b57_00AA) / sizeof(kEdges_b57_00AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00AD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00AD = {57u, 0x80ADu, 0x00ADu, 0x03D6u, 2u, nullptr, 0u, kEdges_b57_00AD, sizeof(kEdges_b57_00AD) / sizeof(kEdges_b57_00AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00B0 = {57u, 0x80B0u, 0x00B0u, 0u, 0u, nullptr, 0u, kEdges_b57_00B0, sizeof(kEdges_b57_00B0) / sizeof(kEdges_b57_00B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00B1 = {57u, 0x80B1u, 0x00B1u, 0x03DCu, 2u, nullptr, 0u, kEdges_b57_00B1, sizeof(kEdges_b57_00B1) / sizeof(kEdges_b57_00B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00B4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF5Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x80B7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00B4 = {57u, 0x80B4u, 0x00B4u, 0xEF5Bu, 2u, nullptr, 0u, kEdges_b57_00B4, sizeof(kEdges_b57_00B4) / sizeof(kEdges_b57_00B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00B7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80BAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00B7 = {57u, 0x80B7u, 0x00B7u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_00B7, sizeof(kEdges_b57_00B7) / sizeof(kEdges_b57_00B7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00BA[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80BCu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x80C1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00BA = {57u, 0x80BAu, 0x00BAu, 0x80C1u, 1u, nullptr, 0u, kEdges_b57_00BA, sizeof(kEdges_b57_00BA) / sizeof(kEdges_b57_00BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00BC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00BC = {57u, 0x80BCu, 0x00BCu, 0x0078u, 1u, nullptr, 0u, kEdges_b57_00BC, sizeof(kEdges_b57_00BC) / sizeof(kEdges_b57_00BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00BE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x80C1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00BE = {57u, 0x80BEu, 0x00BEu, 0xE522u, 2u, nullptr, 0u, kEdges_b57_00BE, sizeof(kEdges_b57_00BE) / sizeof(kEdges_b57_00BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00C1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00C1 = {57u, 0x80C1u, 0x00C1u, 0x03AFu, 2u, nullptr, 0u, kEdges_b57_00C1, sizeof(kEdges_b57_00C1) / sizeof(kEdges_b57_00C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00C4 = {57u, 0x80C4u, 0x00C4u, 0x03AFu, 2u, nullptr, 0u, kEdges_b57_00C4, sizeof(kEdges_b57_00C4) / sizeof(kEdges_b57_00C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00C7[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80C9u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x80B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00C7 = {57u, 0x80C7u, 0x00C7u, 0x80B4u, 1u, nullptr, 0u, kEdges_b57_00C7, sizeof(kEdges_b57_00C7) / sizeof(kEdges_b57_00C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00C9[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8039u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00C9 = {57u, 0x80C9u, 0x00C9u, 0x8039u, 2u, nullptr, 0u, kEdges_b57_00C9, sizeof(kEdges_b57_00C9) / sizeof(kEdges_b57_00C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00CC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00CC = {57u, 0x80CCu, 0x00CCu, 0x007Bu, 1u, nullptr, 0u, kEdges_b57_00CC, sizeof(kEdges_b57_00CC) / sizeof(kEdges_b57_00CC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00CE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80D0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00CE = {57u, 0x80CEu, 0x00CEu, 0x0009u, 1u, nullptr, 0u, kEdges_b57_00CE, sizeof(kEdges_b57_00CE) / sizeof(kEdges_b57_00CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00D0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x80D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00D0 = {57u, 0x80D0u, 0x00D0u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_00D0, sizeof(kEdges_b57_00D0) / sizeof(kEdges_b57_00D0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00D3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00D3 = {57u, 0x80D3u, 0x00D3u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_00D3, sizeof(kEdges_b57_00D3) / sizeof(kEdges_b57_00D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00D5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00D5 = {57u, 0x80D5u, 0x00D5u, 0x00D8u, 1u, nullptr, 0u, kEdges_b57_00D5, sizeof(kEdges_b57_00D5) / sizeof(kEdges_b57_00D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00D7[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x80DBu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00D7 = {57u, 0x80D7u, 0x00D7u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_00D7, sizeof(kEdges_b57_00D7) / sizeof(kEdges_b57_00D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00DB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00DB = {57u, 0x80DBu, 0x00DBu, 0x002Du, 1u, nullptr, 0u, kEdges_b57_00DB, sizeof(kEdges_b57_00DB) / sizeof(kEdges_b57_00DB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00DD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00DD = {57u, 0x80DDu, 0x00DDu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_00DD, sizeof(kEdges_b57_00DD) / sizeof(kEdges_b57_00DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00DF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x80E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00DF = {57u, 0x80DFu, 0x00DFu, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_00DF, sizeof(kEdges_b57_00DF) / sizeof(kEdges_b57_00DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00E2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF5Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x80E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00E2 = {57u, 0x80E2u, 0x00E2u, 0xEF5Bu, 2u, nullptr, 0u, kEdges_b57_00E2, sizeof(kEdges_b57_00E2) / sizeof(kEdges_b57_00E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00E5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00E5 = {57u, 0x80E5u, 0x00E5u, 0x03AFu, 2u, nullptr, 0u, kEdges_b57_00E5, sizeof(kEdges_b57_00E5) / sizeof(kEdges_b57_00E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00E8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x80EAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x80E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00E8 = {57u, 0x80E8u, 0x00E8u, 0x80E2u, 1u, nullptr, 0u, kEdges_b57_00E8, sizeof(kEdges_b57_00E8) / sizeof(kEdges_b57_00E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_00EA[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8039u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_00EA = {57u, 0x80EAu, 0x00EAu, 0x8039u, 2u, nullptr, 0u, kEdges_b57_00EA, sizeof(kEdges_b57_00EA) / sizeof(kEdges_b57_00EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_010C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x810Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_010C = {57u, 0x810Cu, 0x010Cu, 0x0002u, 1u, nullptr, 0u, kEdges_b57_010C, sizeof(kEdges_b57_010C) / sizeof(kEdges_b57_010C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_010E[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8116u, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 57, 0x8110u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_010E = {57u, 0x810Eu, 0x010Eu, 0x8116u, 1u, nullptr, 0u, kEdges_b57_010E, sizeof(kEdges_b57_010E) / sizeof(kEdges_b57_010E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0110[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8112u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0110 = {57u, 0x8110u, 0x0110u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0110, sizeof(kEdges_b57_0110) / sizeof(kEdges_b57_0110[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0112[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8116u, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 57, 0x8114u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0112 = {57u, 0x8112u, 0x0112u, 0x8116u, 1u, nullptr, 0u, kEdges_b57_0112, sizeof(kEdges_b57_0112) / sizeof(kEdges_b57_0112[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0114[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8116u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0114 = {57u, 0x8114u, 0x0114u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0114, sizeof(kEdges_b57_0114) / sizeof(kEdges_b57_0114[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0116[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8119u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0116 = {57u, 0x8116u, 0x0116u, 0x062Cu, 2u, nullptr, 0u, kEdges_b57_0116, sizeof(kEdges_b57_0116) / sizeof(kEdges_b57_0116[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0119[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x811Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0119 = {57u, 0x8119u, 0x0119u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0119, sizeof(kEdges_b57_0119) / sizeof(kEdges_b57_0119[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_011C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDEA3u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x811Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_011C = {57u, 0x811Cu, 0x011Cu, 0xDEA3u, 2u, nullptr, 0u, kEdges_b57_011C, sizeof(kEdges_b57_011C) / sizeof(kEdges_b57_011C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_011F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8121u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_011F = {57u, 0x811Fu, 0x011Fu, 0x0030u, 1u, nullptr, 0u, kEdges_b57_011F, sizeof(kEdges_b57_011F) / sizeof(kEdges_b57_011F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0121[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8123u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0121 = {57u, 0x8121u, 0x0121u, 0x0049u, 1u, nullptr, 0u, kEdges_b57_0121, sizeof(kEdges_b57_0121) / sizeof(kEdges_b57_0121[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0123[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8126u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0123 = {57u, 0x8123u, 0x0123u, 0x8139u, 2u, nullptr, 0u, kEdges_b57_0123, sizeof(kEdges_b57_0123) / sizeof(kEdges_b57_0123[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0126[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8128u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0126 = {57u, 0x8126u, 0x0126u, 0x00F5u, 1u, nullptr, 0u, kEdges_b57_0126, sizeof(kEdges_b57_0126) / sizeof(kEdges_b57_0126[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0128[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x812Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0128 = {57u, 0x8128u, 0x0128u, 0x813Cu, 2u, nullptr, 0u, kEdges_b57_0128, sizeof(kEdges_b57_0128) / sizeof(kEdges_b57_0128[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_012B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x812Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_012B = {57u, 0x812Bu, 0x012Bu, 0x00F6u, 1u, nullptr, 0u, kEdges_b57_012B, sizeof(kEdges_b57_012B) / sizeof(kEdges_b57_012B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_012D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8136u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8130u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_012D = {57u, 0x812Du, 0x012Du, 0x8136u, 2u, nullptr, 0u, kEdges_b57_012D, sizeof(kEdges_b57_012D) / sizeof(kEdges_b57_012D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0130[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8136u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8133u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0130 = {57u, 0x8130u, 0x0130u, 0x8136u, 2u, nullptr, 0u, kEdges_b57_0130, sizeof(kEdges_b57_0130) / sizeof(kEdges_b57_0130[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0133[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8136u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8136u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0133 = {57u, 0x8133u, 0x0133u, 0x8136u, 2u, nullptr, 0u, kEdges_b57_0133, sizeof(kEdges_b57_0133) / sizeof(kEdges_b57_0133[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0136[] = {
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 63, 0xE0DEu, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 63, 0xE0E3u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 63, 0xE0E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0136 = {57u, 0x8136u, 0x0136u, 0x00F5u, 2u, nullptr, 0u, kEdges_b57_0136, sizeof(kEdges_b57_0136) / sizeof(kEdges_b57_0136[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_013F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8141u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_013F = {57u, 0x813Fu, 0x013Fu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_013F, sizeof(kEdges_b57_013F) / sizeof(kEdges_b57_013F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0141[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8142u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0141 = {57u, 0x8141u, 0x0141u, 0u, 0u, nullptr, 0u, kEdges_b57_0141, sizeof(kEdges_b57_0141) / sizeof(kEdges_b57_0141[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0142[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8143u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0142 = {57u, 0x8142u, 0x0142u, 0u, 0u, nullptr, 0u, kEdges_b57_0142, sizeof(kEdges_b57_0142) / sizeof(kEdges_b57_0142[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0143[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8145u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0143 = {57u, 0x8143u, 0x0143u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_0143, sizeof(kEdges_b57_0143) / sizeof(kEdges_b57_0143[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0145[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8147u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x817Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0145 = {57u, 0x8145u, 0x0145u, 0x817Cu, 1u, nullptr, 0u, kEdges_b57_0145, sizeof(kEdges_b57_0145) / sizeof(kEdges_b57_0145[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0147[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8149u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x814Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0147 = {57u, 0x8147u, 0x0147u, 0x814Eu, 1u, nullptr, 0u, kEdges_b57_0147, sizeof(kEdges_b57_0147) / sizeof(kEdges_b57_0147[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0149[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x814Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0149 = {57u, 0x8149u, 0x0149u, 0u, 0u, nullptr, 0u, kEdges_b57_0149, sizeof(kEdges_b57_0149) / sizeof(kEdges_b57_0149[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_014A[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x814Eu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_014A = {57u, 0x814Au, 0x014Au, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_014A, sizeof(kEdges_b57_014A) / sizeof(kEdges_b57_014A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_014E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x814Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_014E = {57u, 0x814Eu, 0x014Eu, 0u, 0u, nullptr, 0u, kEdges_b57_014E, sizeof(kEdges_b57_014E) / sizeof(kEdges_b57_014E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_014F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8150u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_014F = {57u, 0x814Fu, 0x014Fu, 0u, 0u, nullptr, 0u, kEdges_b57_014F, sizeof(kEdges_b57_014F) / sizeof(kEdges_b57_014F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0150[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8151u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0150 = {57u, 0x8150u, 0x0150u, 0u, 0u, nullptr, 0u, kEdges_b57_0150, sizeof(kEdges_b57_0150) / sizeof(kEdges_b57_0150[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0151[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8153u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0151 = {57u, 0x8151u, 0x0151u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_0151, sizeof(kEdges_b57_0151) / sizeof(kEdges_b57_0151[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0153[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8156u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0153 = {57u, 0x8153u, 0x0153u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_0153, sizeof(kEdges_b57_0153) / sizeof(kEdges_b57_0153[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0156[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8157u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0156 = {57u, 0x8156u, 0x0156u, 0u, 0u, nullptr, 0u, kEdges_b57_0156, sizeof(kEdges_b57_0156) / sizeof(kEdges_b57_0156[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0157[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8159u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0157 = {57u, 0x8157u, 0x0157u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_0157, sizeof(kEdges_b57_0157) / sizeof(kEdges_b57_0157[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0159[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x815Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0159 = {57u, 0x8159u, 0x0159u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0159, sizeof(kEdges_b57_0159) / sizeof(kEdges_b57_0159[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_015C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x815Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_015C = {57u, 0x815Cu, 0x015Cu, 0x0057u, 1u, nullptr, 0u, kEdges_b57_015C, sizeof(kEdges_b57_015C) / sizeof(kEdges_b57_015C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_015E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8161u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_015E = {57u, 0x815Eu, 0x015Eu, 0x046Fu, 2u, nullptr, 0u, kEdges_b57_015E, sizeof(kEdges_b57_015E) / sizeof(kEdges_b57_015E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0161[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8162u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0161 = {57u, 0x8161u, 0x0161u, 0u, 0u, nullptr, 0u, kEdges_b57_0161, sizeof(kEdges_b57_0161) / sizeof(kEdges_b57_0161[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0162[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8164u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0162 = {57u, 0x8162u, 0x0162u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_0162, sizeof(kEdges_b57_0162) / sizeof(kEdges_b57_0162[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0164[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8167u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0164 = {57u, 0x8164u, 0x0164u, 0x059Au, 2u, nullptr, 0u, kEdges_b57_0164, sizeof(kEdges_b57_0164) / sizeof(kEdges_b57_0164[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0167[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8168u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0167 = {57u, 0x8167u, 0x0167u, 0u, 0u, nullptr, 0u, kEdges_b57_0167, sizeof(kEdges_b57_0167) / sizeof(kEdges_b57_0167[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0168[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x816Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0168 = {57u, 0x8168u, 0x0168u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_0168, sizeof(kEdges_b57_0168) / sizeof(kEdges_b57_0168[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_016A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x816Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_016A = {57u, 0x816Au, 0x016Au, 0x0583u, 2u, nullptr, 0u, kEdges_b57_016A, sizeof(kEdges_b57_016A) / sizeof(kEdges_b57_016A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_016D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x816Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_016D = {57u, 0x816Du, 0x016Du, 0u, 0u, nullptr, 0u, kEdges_b57_016D, sizeof(kEdges_b57_016D) / sizeof(kEdges_b57_016D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_016E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x816Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_016E = {57u, 0x816Eu, 0x016Eu, 0u, 0u, nullptr, 0u, kEdges_b57_016E, sizeof(kEdges_b57_016E) / sizeof(kEdges_b57_016E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_016F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8170u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_016F = {57u, 0x816Fu, 0x016Fu, 0u, 0u, nullptr, 0u, kEdges_b57_016F, sizeof(kEdges_b57_016F) / sizeof(kEdges_b57_016F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0170[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8172u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0170 = {57u, 0x8170u, 0x0170u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_0170, sizeof(kEdges_b57_0170) / sizeof(kEdges_b57_0170[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0172[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8173u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0172 = {57u, 0x8172u, 0x0172u, 0u, 0u, nullptr, 0u, kEdges_b57_0172, sizeof(kEdges_b57_0172) / sizeof(kEdges_b57_0172[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0173[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8176u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0173 = {57u, 0x8173u, 0x0173u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_0173, sizeof(kEdges_b57_0173) / sizeof(kEdges_b57_0173[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0176[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8177u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0176 = {57u, 0x8176u, 0x0176u, 0u, 0u, nullptr, 0u, kEdges_b57_0176, sizeof(kEdges_b57_0176) / sizeof(kEdges_b57_0176[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0177[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8178u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0177 = {57u, 0x8177u, 0x0177u, 0u, 0u, nullptr, 0u, kEdges_b57_0177, sizeof(kEdges_b57_0177) / sizeof(kEdges_b57_0177[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0178[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8179u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0178 = {57u, 0x8178u, 0x0178u, 0u, 0u, nullptr, 0u, kEdges_b57_0178, sizeof(kEdges_b57_0178) / sizeof(kEdges_b57_0178[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0179[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x817Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0179 = {57u, 0x8179u, 0x0179u, 0u, 0u, nullptr, 0u, kEdges_b57_0179, sizeof(kEdges_b57_0179) / sizeof(kEdges_b57_0179[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_017A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x817Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8141u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_017A = {57u, 0x817Au, 0x017Au, 0x8141u, 1u, nullptr, 0u, kEdges_b57_017A, sizeof(kEdges_b57_017A) / sizeof(kEdges_b57_017A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_017C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x817Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_017C = {57u, 0x817Cu, 0x017Cu, 0u, 0u, nullptr, 0u, kEdges_b57_017C, sizeof(kEdges_b57_017C) / sizeof(kEdges_b57_017C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_017D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8180u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_017D = {57u, 0x817Du, 0x017Du, 0xE1DDu, 2u, nullptr, 0u, kEdges_b57_017D, sizeof(kEdges_b57_017D) / sizeof(kEdges_b57_017D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0180[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8182u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0180 = {57u, 0x8180u, 0x0180u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_0180, sizeof(kEdges_b57_0180) / sizeof(kEdges_b57_0180[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0182[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0182 = {57u, 0x8182u, 0x0182u, 0u, 0u, nullptr, 0u, kEdges_b57_0182, sizeof(kEdges_b57_0182) / sizeof(kEdges_b57_0182[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0189[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x818Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0189 = {57u, 0x8189u, 0x0189u, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_0189, sizeof(kEdges_b57_0189) / sizeof(kEdges_b57_0189[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_018C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x818Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_018C = {57u, 0x818Cu, 0x018Cu, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_018C, sizeof(kEdges_b57_018C) / sizeof(kEdges_b57_018C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_018E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8191u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_018E = {57u, 0x818Eu, 0x018Eu, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_018E, sizeof(kEdges_b57_018E) / sizeof(kEdges_b57_018E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0191[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8193u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0191 = {57u, 0x8191u, 0x0191u, 0x0007u, 1u, nullptr, 0u, kEdges_b57_0191, sizeof(kEdges_b57_0191) / sizeof(kEdges_b57_0191[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0193[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE60Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8196u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0193 = {57u, 0x8193u, 0x0193u, 0xE60Eu, 2u, nullptr, 0u, kEdges_b57_0193, sizeof(kEdges_b57_0193) / sizeof(kEdges_b57_0193[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0196[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE9D3u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8199u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0196 = {57u, 0x8196u, 0x0196u, 0xE9D3u, 2u, nullptr, 0u, kEdges_b57_0196, sizeof(kEdges_b57_0196) / sizeof(kEdges_b57_0196[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0199[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8191u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0199 = {57u, 0x8199u, 0x0199u, 0x8191u, 2u, nullptr, 0u, kEdges_b57_0199, sizeof(kEdges_b57_0199) / sizeof(kEdges_b57_0199[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01A2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x81A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01A2 = {57u, 0x81A2u, 0x01A2u, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_01A2, sizeof(kEdges_b57_01A2) / sizeof(kEdges_b57_01A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01A5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01A5 = {57u, 0x81A5u, 0x01A5u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_01A5, sizeof(kEdges_b57_01A5) / sizeof(kEdges_b57_01A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01A7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01A7 = {57u, 0x81A7u, 0x01A7u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_01A7, sizeof(kEdges_b57_01A7) / sizeof(kEdges_b57_01A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01AA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81ACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01AA = {57u, 0x81AAu, 0x01AAu, 0x00FBu, 1u, nullptr, 0u, kEdges_b57_01AA, sizeof(kEdges_b57_01AA) / sizeof(kEdges_b57_01AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01AC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01AC = {57u, 0x81ACu, 0x01ACu, 0x0624u, 2u, nullptr, 0u, kEdges_b57_01AC, sizeof(kEdges_b57_01AC) / sizeof(kEdges_b57_01AC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01AF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01AF = {57u, 0x81AFu, 0x01AFu, 0x0080u, 1u, nullptr, 0u, kEdges_b57_01AF, sizeof(kEdges_b57_01AF) / sizeof(kEdges_b57_01AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01B1 = {57u, 0x81B1u, 0x01B1u, 0x060Du, 2u, nullptr, 0u, kEdges_b57_01B1, sizeof(kEdges_b57_01B1) / sizeof(kEdges_b57_01B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01B4 = {57u, 0x81B4u, 0x01B4u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_01B4, sizeof(kEdges_b57_01B4) / sizeof(kEdges_b57_01B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81B9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01B6 = {57u, 0x81B6u, 0x01B6u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_01B6, sizeof(kEdges_b57_01B6) / sizeof(kEdges_b57_01B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01B9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81BAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01B9 = {57u, 0x81B9u, 0x01B9u, 0u, 0u, nullptr, 0u, kEdges_b57_01B9, sizeof(kEdges_b57_01B9) / sizeof(kEdges_b57_01B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01BA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01BA = {57u, 0x81BAu, 0x01BAu, 0x0486u, 2u, nullptr, 0u, kEdges_b57_01BA, sizeof(kEdges_b57_01BA) / sizeof(kEdges_b57_01BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01BD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01BD = {57u, 0x81BDu, 0x01BDu, 0x0486u, 2u, nullptr, 0u, kEdges_b57_01BD, sizeof(kEdges_b57_01BD) / sizeof(kEdges_b57_01BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01C0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01C0 = {57u, 0x81C0u, 0x01C0u, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_01C0, sizeof(kEdges_b57_01C0) / sizeof(kEdges_b57_01C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01C2 = {57u, 0x81C2u, 0x01C2u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_01C2, sizeof(kEdges_b57_01C2) / sizeof(kEdges_b57_01C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01C4 = {57u, 0x81C4u, 0x01C4u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_01C4, sizeof(kEdges_b57_01C4) / sizeof(kEdges_b57_01C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01C6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81C8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01C6 = {57u, 0x81C6u, 0x01C6u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_01C6, sizeof(kEdges_b57_01C6) / sizeof(kEdges_b57_01C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01C8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81CAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x81CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01C8 = {57u, 0x81C8u, 0x01C8u, 0x81CBu, 1u, nullptr, 0u, kEdges_b57_01C8, sizeof(kEdges_b57_01C8) / sizeof(kEdges_b57_01C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01CA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01CA = {57u, 0x81CAu, 0x01CAu, 0u, 0u, nullptr, 0u, kEdges_b57_01CA, sizeof(kEdges_b57_01CA) / sizeof(kEdges_b57_01CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01CB = {57u, 0x81CBu, 0x01CBu, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_01CB, sizeof(kEdges_b57_01CB) / sizeof(kEdges_b57_01CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01CE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01CE = {57u, 0x81CEu, 0x01CEu, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_01CE, sizeof(kEdges_b57_01CE) / sizeof(kEdges_b57_01CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01D1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81D4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01D1 = {57u, 0x81D1u, 0x01D1u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_01D1, sizeof(kEdges_b57_01D1) / sizeof(kEdges_b57_01D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01D4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01D4 = {57u, 0x81D4u, 0x01D4u, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_01D4, sizeof(kEdges_b57_01D4) / sizeof(kEdges_b57_01D4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01D7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01D7 = {57u, 0x81D7u, 0x01D7u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_01D7, sizeof(kEdges_b57_01D7) / sizeof(kEdges_b57_01D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01DA = {57u, 0x81DAu, 0x01DAu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_01DA, sizeof(kEdges_b57_01DA) / sizeof(kEdges_b57_01DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01DD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01DD = {57u, 0x81DDu, 0x01DDu, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_01DD, sizeof(kEdges_b57_01DD) / sizeof(kEdges_b57_01DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01DF = {57u, 0x81DFu, 0x01DFu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_01DF, sizeof(kEdges_b57_01DF) / sizeof(kEdges_b57_01DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01E2 = {57u, 0x81E2u, 0x01E2u, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_01E2, sizeof(kEdges_b57_01E2) / sizeof(kEdges_b57_01E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01E5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81E7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01E5 = {57u, 0x81E5u, 0x01E5u, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_01E5, sizeof(kEdges_b57_01E5) / sizeof(kEdges_b57_01E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01E7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81EAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01E7 = {57u, 0x81E7u, 0x01E7u, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_01E7, sizeof(kEdges_b57_01E7) / sizeof(kEdges_b57_01E7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01EA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81EDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01EA = {57u, 0x81EAu, 0x01EAu, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_01EA, sizeof(kEdges_b57_01EA) / sizeof(kEdges_b57_01EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01ED[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81EFu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x81F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01ED = {57u, 0x81EDu, 0x01EDu, 0x81F2u, 1u, nullptr, 0u, kEdges_b57_01ED, sizeof(kEdges_b57_01ED) / sizeof(kEdges_b57_01ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01EF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01EF = {57u, 0x81EFu, 0x01EFu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_01EF, sizeof(kEdges_b57_01EF) / sizeof(kEdges_b57_01EF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01F2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8224u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x81F5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01F2 = {57u, 0x81F2u, 0x01F2u, 0x8224u, 2u, nullptr, 0u, kEdges_b57_01F2, sizeof(kEdges_b57_01F2) / sizeof(kEdges_b57_01F2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01F5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01F5 = {57u, 0x81F5u, 0x01F5u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_01F5, sizeof(kEdges_b57_01F5) / sizeof(kEdges_b57_01F5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01F8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01F8 = {57u, 0x81F8u, 0x01F8u, 0x00EDu, 1u, nullptr, 0u, kEdges_b57_01F8, sizeof(kEdges_b57_01F8) / sizeof(kEdges_b57_01F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01FA = {57u, 0x81FAu, 0x01FAu, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_01FA, sizeof(kEdges_b57_01FA) / sizeof(kEdges_b57_01FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x81FFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01FD = {57u, 0x81FDu, 0x01FDu, 0x00EBu, 1u, nullptr, 0u, kEdges_b57_01FD, sizeof(kEdges_b57_01FD) / sizeof(kEdges_b57_01FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_01FF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8201u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_01FF = {57u, 0x81FFu, 0x01FFu, 0x0003u, 1u, nullptr, 0u, kEdges_b57_01FF, sizeof(kEdges_b57_01FF) / sizeof(kEdges_b57_01FF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0201[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEE9Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8204u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0201 = {57u, 0x8201u, 0x0201u, 0xEE9Au, 2u, nullptr, 0u, kEdges_b57_0201, sizeof(kEdges_b57_0201) / sizeof(kEdges_b57_0201[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0204[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE4D1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8207u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0204 = {57u, 0x8204u, 0x0204u, 0xE4D1u, 2u, nullptr, 0u, kEdges_b57_0204, sizeof(kEdges_b57_0204) / sizeof(kEdges_b57_0204[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0207[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8209u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0207 = {57u, 0x8207u, 0x0207u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0207, sizeof(kEdges_b57_0207) / sizeof(kEdges_b57_0207[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0209[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x820Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0209 = {57u, 0x8209u, 0x0209u, 0x0011u, 1u, nullptr, 0u, kEdges_b57_0209, sizeof(kEdges_b57_0209) / sizeof(kEdges_b57_0209[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_020B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x820Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_020B = {57u, 0x820Bu, 0x020Bu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_020B, sizeof(kEdges_b57_020B) / sizeof(kEdges_b57_020B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_020D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x820Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_020D = {57u, 0x820Du, 0x020Du, 0x0001u, 1u, nullptr, 0u, kEdges_b57_020D, sizeof(kEdges_b57_020D) / sizeof(kEdges_b57_020D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_020F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD9CDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8212u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_020F = {57u, 0x820Fu, 0x020Fu, 0xD9CDu, 2u, nullptr, 0u, kEdges_b57_020F, sizeof(kEdges_b57_020F) / sizeof(kEdges_b57_020F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0212[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8214u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0212 = {57u, 0x8212u, 0x0212u, 0x0011u, 1u, nullptr, 0u, kEdges_b57_0212, sizeof(kEdges_b57_0212) / sizeof(kEdges_b57_0212[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0214[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8216u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x81F2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0214 = {57u, 0x8214u, 0x0214u, 0x81F2u, 1u, nullptr, 0u, kEdges_b57_0214, sizeof(kEdges_b57_0214) / sizeof(kEdges_b57_0214[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0216[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8218u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0216 = {57u, 0x8216u, 0x0216u, 0x0025u, 1u, nullptr, 0u, kEdges_b57_0216, sizeof(kEdges_b57_0216) / sizeof(kEdges_b57_0216[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0218[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x821Cu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0218 = {57u, 0x8218u, 0x0218u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0218, sizeof(kEdges_b57_0218) / sizeof(kEdges_b57_0218[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_021C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x821Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_021C = {57u, 0x821Cu, 0x021Cu, 0x0042u, 1u, nullptr, 0u, kEdges_b57_021C, sizeof(kEdges_b57_021C) / sizeof(kEdges_b57_021C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_021E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8221u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_021E = {57u, 0x821Eu, 0x021Eu, 0x05DFu, 2u, nullptr, 0u, kEdges_b57_021E, sizeof(kEdges_b57_021E) / sizeof(kEdges_b57_021E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0221[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE477u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0221 = {57u, 0x8221u, 0x0221u, 0xE477u, 2u, nullptr, 0u, kEdges_b57_0221, sizeof(kEdges_b57_0221) / sizeof(kEdges_b57_0221[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0224[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8227u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0224 = {57u, 0x8224u, 0x0224u, 0x056Cu, 2u, nullptr, 0u, kEdges_b57_0224, sizeof(kEdges_b57_0224) / sizeof(kEdges_b57_0224[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0227[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8229u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8244u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0227 = {57u, 0x8227u, 0x0227u, 0x8244u, 1u, nullptr, 0u, kEdges_b57_0227, sizeof(kEdges_b57_0227) / sizeof(kEdges_b57_0227[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0229[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x822Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0229 = {57u, 0x8229u, 0x0229u, 0x0014u, 1u, nullptr, 0u, kEdges_b57_0229, sizeof(kEdges_b57_0229) / sizeof(kEdges_b57_0229[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_022B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x822Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8244u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_022B = {57u, 0x822Bu, 0x022Bu, 0x8244u, 1u, nullptr, 0u, kEdges_b57_022B, sizeof(kEdges_b57_022B) / sizeof(kEdges_b57_022B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_022D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x822Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_022D = {57u, 0x822Du, 0x022Du, 0x0006u, 1u, nullptr, 0u, kEdges_b57_022D, sizeof(kEdges_b57_022D) / sizeof(kEdges_b57_022D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_022F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8231u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_022F = {57u, 0x822Fu, 0x022Fu, 0x00DAu, 1u, nullptr, 0u, kEdges_b57_022F, sizeof(kEdges_b57_022F) / sizeof(kEdges_b57_022F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0231[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8235u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0231 = {57u, 0x8231u, 0x0231u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0231, sizeof(kEdges_b57_0231) / sizeof(kEdges_b57_0231[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0235[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8237u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0235 = {57u, 0x8235u, 0x0235u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_0235, sizeof(kEdges_b57_0235) / sizeof(kEdges_b57_0235[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0237[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8239u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0237 = {57u, 0x8237u, 0x0237u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_0237, sizeof(kEdges_b57_0237) / sizeof(kEdges_b57_0237[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0239[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x823Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0239 = {57u, 0x8239u, 0x0239u, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_0239, sizeof(kEdges_b57_0239) / sizeof(kEdges_b57_0239[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_023C[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_023C = {57u, 0x823Cu, 0x023Cu, 0xE456u, 2u, nullptr, 0u, kEdges_b57_023C, sizeof(kEdges_b57_023C) / sizeof(kEdges_b57_023C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0244[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0244 = {57u, 0x8244u, 0x0244u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0244, sizeof(kEdges_b57_0244) / sizeof(kEdges_b57_0244[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_024D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8250u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_024D = {57u, 0x824Du, 0x024Du, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_024D, sizeof(kEdges_b57_024D) / sizeof(kEdges_b57_024D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0250[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8251u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0250 = {57u, 0x8250u, 0x0250u, 0u, 0u, nullptr, 0u, kEdges_b57_0250, sizeof(kEdges_b57_0250) / sizeof(kEdges_b57_0250[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0251[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8254u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0251 = {57u, 0x8251u, 0x0251u, 0x82EBu, 2u, nullptr, 0u, kEdges_b57_0251, sizeof(kEdges_b57_0251) / sizeof(kEdges_b57_0251[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0254[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8256u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0254 = {57u, 0x8254u, 0x0254u, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_0254, sizeof(kEdges_b57_0254) / sizeof(kEdges_b57_0254[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0256[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8259u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0256 = {57u, 0x8256u, 0x0256u, 0x836Bu, 2u, nullptr, 0u, kEdges_b57_0256, sizeof(kEdges_b57_0256) / sizeof(kEdges_b57_0256[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0259[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x825Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0259 = {57u, 0x8259u, 0x0259u, 0x00ABu, 1u, nullptr, 0u, kEdges_b57_0259, sizeof(kEdges_b57_0259) / sizeof(kEdges_b57_0259[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_025B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x825Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_025B = {57u, 0x825Bu, 0x025Bu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_025B, sizeof(kEdges_b57_025B) / sizeof(kEdges_b57_025B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_025D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8260u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_025D = {57u, 0x825Du, 0x025Du, 0x0624u, 2u, nullptr, 0u, kEdges_b57_025D, sizeof(kEdges_b57_025D) / sizeof(kEdges_b57_025D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0260[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8262u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0260 = {57u, 0x8260u, 0x0260u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0260, sizeof(kEdges_b57_0260) / sizeof(kEdges_b57_0260[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0262[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8264u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0262 = {57u, 0x8262u, 0x0262u, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_0262, sizeof(kEdges_b57_0262) / sizeof(kEdges_b57_0262[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0264[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8266u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0264 = {57u, 0x8264u, 0x0264u, 0x0071u, 1u, nullptr, 0u, kEdges_b57_0264, sizeof(kEdges_b57_0264) / sizeof(kEdges_b57_0264[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0266[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8268u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x827Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0266 = {57u, 0x8266u, 0x0266u, 0x827Eu, 1u, nullptr, 0u, kEdges_b57_0266, sizeof(kEdges_b57_0266) / sizeof(kEdges_b57_0266[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0268[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x826Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0268 = {57u, 0x8268u, 0x0268u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_0268, sizeof(kEdges_b57_0268) / sizeof(kEdges_b57_0268[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_026A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x826Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_026A = {57u, 0x826Au, 0x026Au, 0u, 0u, nullptr, 0u, kEdges_b57_026A, sizeof(kEdges_b57_026A) / sizeof(kEdges_b57_026A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_026B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x826Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_026B = {57u, 0x826Bu, 0x026Bu, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_026B, sizeof(kEdges_b57_026B) / sizeof(kEdges_b57_026B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_026D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x826Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_026D = {57u, 0x826Du, 0x026Du, 0x0008u, 1u, nullptr, 0u, kEdges_b57_026D, sizeof(kEdges_b57_026D) / sizeof(kEdges_b57_026D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_026F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8270u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_026F = {57u, 0x826Fu, 0x026Fu, 0u, 0u, nullptr, 0u, kEdges_b57_026F, sizeof(kEdges_b57_026F) / sizeof(kEdges_b57_026F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0270[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8272u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0270 = {57u, 0x8270u, 0x0270u, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_0270, sizeof(kEdges_b57_0270) / sizeof(kEdges_b57_0270[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0272[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8274u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0272 = {57u, 0x8272u, 0x0272u, 0x0071u, 1u, nullptr, 0u, kEdges_b57_0272, sizeof(kEdges_b57_0272) / sizeof(kEdges_b57_0272[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0274[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8275u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0274 = {57u, 0x8274u, 0x0274u, 0u, 0u, nullptr, 0u, kEdges_b57_0274, sizeof(kEdges_b57_0274) / sizeof(kEdges_b57_0274[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0275[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8276u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0275 = {57u, 0x8275u, 0x0275u, 0u, 0u, nullptr, 0u, kEdges_b57_0275, sizeof(kEdges_b57_0275) / sizeof(kEdges_b57_0275[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0276[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8279u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0276 = {57u, 0x8276u, 0x0276u, 0x0624u, 2u, nullptr, 0u, kEdges_b57_0276, sizeof(kEdges_b57_0276) / sizeof(kEdges_b57_0276[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0279[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE482u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x827Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0279 = {57u, 0x8279u, 0x0279u, 0xE482u, 2u, nullptr, 0u, kEdges_b57_0279, sizeof(kEdges_b57_0279) / sizeof(kEdges_b57_0279[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_027C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x827Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_027C = {57u, 0x827Cu, 0x027Cu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_027C, sizeof(kEdges_b57_027C) / sizeof(kEdges_b57_027C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_027E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8281u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_027E = {57u, 0x827Eu, 0x027Eu, 0x0624u, 2u, nullptr, 0u, kEdges_b57_027E, sizeof(kEdges_b57_027E) / sizeof(kEdges_b57_027E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0281[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8282u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0281 = {57u, 0x8281u, 0x0281u, 0u, 0u, nullptr, 0u, kEdges_b57_0281, sizeof(kEdges_b57_0281) / sizeof(kEdges_b57_0281[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0282[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8283u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0282 = {57u, 0x8282u, 0x0282u, 0u, 0u, nullptr, 0u, kEdges_b57_0282, sizeof(kEdges_b57_0282) / sizeof(kEdges_b57_0282[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0283[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8284u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0283 = {57u, 0x8283u, 0x0283u, 0u, 0u, nullptr, 0u, kEdges_b57_0283, sizeof(kEdges_b57_0283) / sizeof(kEdges_b57_0283[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0284[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8286u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0284 = {57u, 0x8284u, 0x0284u, 0x00ACu, 1u, nullptr, 0u, kEdges_b57_0284, sizeof(kEdges_b57_0284) / sizeof(kEdges_b57_0284[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0286[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8287u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0286 = {57u, 0x8286u, 0x0286u, 0u, 0u, nullptr, 0u, kEdges_b57_0286, sizeof(kEdges_b57_0286) / sizeof(kEdges_b57_0286[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0287[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8289u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0287 = {57u, 0x8287u, 0x0287u, 0x00ACu, 1u, nullptr, 0u, kEdges_b57_0287, sizeof(kEdges_b57_0287) / sizeof(kEdges_b57_0287[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0289[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x828Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0289 = {57u, 0x8289u, 0x0289u, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_0289, sizeof(kEdges_b57_0289) / sizeof(kEdges_b57_0289[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_028B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x828Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x82BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_028B = {57u, 0x828Bu, 0x028Bu, 0x82BEu, 1u, nullptr, 0u, kEdges_b57_028B, sizeof(kEdges_b57_028B) / sizeof(kEdges_b57_028B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_028D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x828Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x82BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_028D = {57u, 0x828Du, 0x028Du, 0x82BEu, 1u, nullptr, 0u, kEdges_b57_028D, sizeof(kEdges_b57_028D) / sizeof(kEdges_b57_028D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_028F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8290u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_028F = {57u, 0x828Fu, 0x028Fu, 0u, 0u, nullptr, 0u, kEdges_b57_028F, sizeof(kEdges_b57_028F) / sizeof(kEdges_b57_028F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0290[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8293u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0290 = {57u, 0x8290u, 0x0290u, 0x9A88u, 2u, nullptr, 0u, kEdges_b57_0290, sizeof(kEdges_b57_0290) / sizeof(kEdges_b57_0290[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0293[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8295u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0293 = {57u, 0x8293u, 0x0293u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0293, sizeof(kEdges_b57_0293) / sizeof(kEdges_b57_0293[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0295[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8298u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0295 = {57u, 0x8295u, 0x0295u, 0x9A8Fu, 2u, nullptr, 0u, kEdges_b57_0295, sizeof(kEdges_b57_0295) / sizeof(kEdges_b57_0295[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0298[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x829Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0298 = {57u, 0x8298u, 0x0298u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_0298, sizeof(kEdges_b57_0298) / sizeof(kEdges_b57_0298[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_029A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x829Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_029A = {57u, 0x829Au, 0x029Au, 0u, 0u, nullptr, 0u, kEdges_b57_029A, sizeof(kEdges_b57_029A) / sizeof(kEdges_b57_029A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_029B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x829Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_029B = {57u, 0x829Bu, 0x029Bu, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_029B, sizeof(kEdges_b57_029B) / sizeof(kEdges_b57_029B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_029D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x829Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_029D = {57u, 0x829Du, 0x029Du, 0x0073u, 1u, nullptr, 0u, kEdges_b57_029D, sizeof(kEdges_b57_029D) / sizeof(kEdges_b57_029D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_029F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82A0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_029F = {57u, 0x829Fu, 0x029Fu, 0u, 0u, nullptr, 0u, kEdges_b57_029F, sizeof(kEdges_b57_029F) / sizeof(kEdges_b57_029F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02A0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82A2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02A0 = {57u, 0x82A0u, 0x02A0u, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_02A0, sizeof(kEdges_b57_02A0) / sizeof(kEdges_b57_02A0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02A2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02A2 = {57u, 0x82A2u, 0x02A2u, 0x0072u, 1u, nullptr, 0u, kEdges_b57_02A2, sizeof(kEdges_b57_02A2) / sizeof(kEdges_b57_02A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02A4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02A4 = {57u, 0x82A4u, 0x02A4u, 0x0687u, 2u, nullptr, 0u, kEdges_b57_02A4, sizeof(kEdges_b57_02A4) / sizeof(kEdges_b57_02A4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02A7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02A7 = {57u, 0x82A7u, 0x02A7u, 0u, 0u, nullptr, 0u, kEdges_b57_02A7, sizeof(kEdges_b57_02A7) / sizeof(kEdges_b57_02A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02A8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02A8 = {57u, 0x82A8u, 0x02A8u, 0x0057u, 1u, nullptr, 0u, kEdges_b57_02A8, sizeof(kEdges_b57_02A8) / sizeof(kEdges_b57_02A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02AA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02AA = {57u, 0x82AAu, 0x02AAu, 0x0697u, 2u, nullptr, 0u, kEdges_b57_02AA, sizeof(kEdges_b57_02AA) / sizeof(kEdges_b57_02AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02AD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02AD = {57u, 0x82ADu, 0x02ADu, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_02AD, sizeof(kEdges_b57_02AD) / sizeof(kEdges_b57_02AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02AF[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82B1u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x82B7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02AF = {57u, 0x82AFu, 0x02AFu, 0x82B7u, 1u, nullptr, 0u, kEdges_b57_02AF, sizeof(kEdges_b57_02AF) / sizeof(kEdges_b57_02AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02B1 = {57u, 0x82B1u, 0x02B1u, 0x007Fu, 1u, nullptr, 0u, kEdges_b57_02B1, sizeof(kEdges_b57_02B1) / sizeof(kEdges_b57_02B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02B3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02B3 = {57u, 0x82B3u, 0x02B3u, 0x0697u, 2u, nullptr, 0u, kEdges_b57_02B3, sizeof(kEdges_b57_02B3) / sizeof(kEdges_b57_02B3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82B7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02B6 = {57u, 0x82B6u, 0x02B6u, 0u, 0u, nullptr, 0u, kEdges_b57_02B6, sizeof(kEdges_b57_02B6) / sizeof(kEdges_b57_02B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02B7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82B9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02B7 = {57u, 0x82B7u, 0x02B7u, 0x00ACu, 1u, nullptr, 0u, kEdges_b57_02B7, sizeof(kEdges_b57_02B7) / sizeof(kEdges_b57_02B7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02B9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE482u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x82BCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02B9 = {57u, 0x82B9u, 0x02B9u, 0xE482u, 2u, nullptr, 0u, kEdges_b57_02B9, sizeof(kEdges_b57_02B9) / sizeof(kEdges_b57_02B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02BC[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82BEu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8286u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02BC = {57u, 0x82BCu, 0x02BCu, 0x8286u, 1u, nullptr, 0u, kEdges_b57_02BC, sizeof(kEdges_b57_02BC) / sizeof(kEdges_b57_02BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02BE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02BE = {57u, 0x82BEu, 0x02BEu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_02BE, sizeof(kEdges_b57_02BE) / sizeof(kEdges_b57_02BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02C0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02C0 = {57u, 0x82C0u, 0x02C0u, 0x0624u, 2u, nullptr, 0u, kEdges_b57_02C0, sizeof(kEdges_b57_02C0) / sizeof(kEdges_b57_02C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02C3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02C3 = {57u, 0x82C3u, 0x02C3u, 0u, 0u, nullptr, 0u, kEdges_b57_02C3, sizeof(kEdges_b57_02C3) / sizeof(kEdges_b57_02C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02C4 = {57u, 0x82C4u, 0x02C4u, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_02C4, sizeof(kEdges_b57_02C4) / sizeof(kEdges_b57_02C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02C6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82C8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x82D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02C6 = {57u, 0x82C6u, 0x02C6u, 0x82D2u, 1u, nullptr, 0u, kEdges_b57_02C6, sizeof(kEdges_b57_02C6) / sizeof(kEdges_b57_02C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02C8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82CAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02C8 = {57u, 0x82C8u, 0x02C8u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_02C8, sizeof(kEdges_b57_02C8) / sizeof(kEdges_b57_02C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02CA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02CA = {57u, 0x82CAu, 0x02CAu, 0u, 0u, nullptr, 0u, kEdges_b57_02CA, sizeof(kEdges_b57_02CA) / sizeof(kEdges_b57_02CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02CB = {57u, 0x82CBu, 0x02CBu, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_02CB, sizeof(kEdges_b57_02CB) / sizeof(kEdges_b57_02CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02CD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02CD = {57u, 0x82CDu, 0x02CDu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_02CD, sizeof(kEdges_b57_02CD) / sizeof(kEdges_b57_02CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02CF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE482u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x82D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02CF = {57u, 0x82CFu, 0x02CFu, 0xE482u, 2u, nullptr, 0u, kEdges_b57_02CF, sizeof(kEdges_b57_02CF) / sizeof(kEdges_b57_02CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02D2[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x82D5u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02D2 = {57u, 0x82D2u, 0x02D2u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_02D2, sizeof(kEdges_b57_02D2) / sizeof(kEdges_b57_02D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02D5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE485u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x82D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02D5 = {57u, 0x82D5u, 0x02D5u, 0xE485u, 2u, nullptr, 0u, kEdges_b57_02D5, sizeof(kEdges_b57_02D5) / sizeof(kEdges_b57_02D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02D8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82DAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x827Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02D8 = {57u, 0x82D8u, 0x02D8u, 0x827Eu, 1u, nullptr, 0u, kEdges_b57_02D8, sizeof(kEdges_b57_02D8) / sizeof(kEdges_b57_02D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82DCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02DA = {57u, 0x82DAu, 0x02DAu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_02DA, sizeof(kEdges_b57_02DA) / sizeof(kEdges_b57_02DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02DC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02DC = {57u, 0x82DCu, 0x02DCu, 0x0682u, 2u, nullptr, 0u, kEdges_b57_02DC, sizeof(kEdges_b57_02DC) / sizeof(kEdges_b57_02DC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02DF = {57u, 0x82DFu, 0x02DFu, 0x04CAu, 2u, nullptr, 0u, kEdges_b57_02DF, sizeof(kEdges_b57_02DF) / sizeof(kEdges_b57_02DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02E2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82E4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x82E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02E2 = {57u, 0x82E2u, 0x02E2u, 0x82E6u, 1u, nullptr, 0u, kEdges_b57_02E2, sizeof(kEdges_b57_02E2) / sizeof(kEdges_b57_02E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02E4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02E4 = {57u, 0x82E4u, 0x02E4u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_02E4, sizeof(kEdges_b57_02E4) / sizeof(kEdges_b57_02E4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x82E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02E6 = {57u, 0x82E6u, 0x02E6u, 0x0071u, 1u, nullptr, 0u, kEdges_b57_02E6, sizeof(kEdges_b57_02E6) / sizeof(kEdges_b57_02E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_02E8[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_02E8 = {57u, 0x82E8u, 0x02E8u, 0xE456u, 2u, nullptr, 0u, kEdges_b57_02E8, sizeof(kEdges_b57_02E8) / sizeof(kEdges_b57_02E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0416[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8418u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0416 = {57u, 0x8416u, 0x0416u, 0x0057u, 1u, nullptr, 0u, kEdges_b57_0416, sizeof(kEdges_b57_0416) / sizeof(kEdges_b57_0416[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0418[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x841Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8429u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0418 = {57u, 0x8418u, 0x0418u, 0x8429u, 1u, nullptr, 0u, kEdges_b57_0418, sizeof(kEdges_b57_0418) / sizeof(kEdges_b57_0418[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_041A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x841Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_041A = {57u, 0x841Au, 0x041Au, 0x0684u, 2u, nullptr, 0u, kEdges_b57_041A, sizeof(kEdges_b57_041A) / sizeof(kEdges_b57_041A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_041D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8420u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_041D = {57u, 0x841Du, 0x041Du, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_041D, sizeof(kEdges_b57_041D) / sizeof(kEdges_b57_041D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0420[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8423u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0420 = {57u, 0x8420u, 0x0420u, 0x0685u, 2u, nullptr, 0u, kEdges_b57_0420, sizeof(kEdges_b57_0420) / sizeof(kEdges_b57_0420[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0423[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8426u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0423 = {57u, 0x8423u, 0x0423u, 0x069Eu, 2u, nullptr, 0u, kEdges_b57_0423, sizeof(kEdges_b57_0423) / sizeof(kEdges_b57_0423[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0426[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8429u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0426 = {57u, 0x8426u, 0x0426u, 0x0686u, 2u, nullptr, 0u, kEdges_b57_0426, sizeof(kEdges_b57_0426) / sizeof(kEdges_b57_0426[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0429[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0429 = {57u, 0x8429u, 0x0429u, 0u, 0u, nullptr, 0u, kEdges_b57_0429, sizeof(kEdges_b57_0429) / sizeof(kEdges_b57_0429[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_049B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x849Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_049B = {57u, 0x849Bu, 0x049Bu, 0x001Fu, 1u, nullptr, 0u, kEdges_b57_049B, sizeof(kEdges_b57_049B) / sizeof(kEdges_b57_049B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_049D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x84A0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_049D = {57u, 0x849Du, 0x049Du, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_049D, sizeof(kEdges_b57_049D) / sizeof(kEdges_b57_049D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04A0[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x84A3u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04A0 = {57u, 0x84A0u, 0x04A0u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_04A0, sizeof(kEdges_b57_04A0) / sizeof(kEdges_b57_04A0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04A3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x84A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04A3 = {57u, 0x84A3u, 0x04A3u, 0x0087u, 1u, nullptr, 0u, kEdges_b57_04A3, sizeof(kEdges_b57_04A3) / sizeof(kEdges_b57_04A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04A5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x84A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04A5 = {57u, 0x84A5u, 0x04A5u, 0x0073u, 1u, nullptr, 0u, kEdges_b57_04A5, sizeof(kEdges_b57_04A5) / sizeof(kEdges_b57_04A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04A7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x84A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04A7 = {57u, 0x84A7u, 0x04A7u, 0x0057u, 1u, nullptr, 0u, kEdges_b57_04A7, sizeof(kEdges_b57_04A7) / sizeof(kEdges_b57_04A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04A9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x84ACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04A9 = {57u, 0x84A9u, 0x04A9u, 0x0697u, 2u, nullptr, 0u, kEdges_b57_04A9, sizeof(kEdges_b57_04A9) / sizeof(kEdges_b57_04A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04AC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD583u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x84AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04AC = {57u, 0x84ACu, 0x04ACu, 0xD583u, 2u, nullptr, 0u, kEdges_b57_04AC, sizeof(kEdges_b57_04AC) / sizeof(kEdges_b57_04AC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04AF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE485u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x84B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04AF = {57u, 0x84AFu, 0x04AFu, 0xE485u, 2u, nullptr, 0u, kEdges_b57_04AF, sizeof(kEdges_b57_04AF) / sizeof(kEdges_b57_04AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04B2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x84B4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x84A0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04B2 = {57u, 0x84B2u, 0x04B2u, 0x84A0u, 1u, nullptr, 0u, kEdges_b57_04B2, sizeof(kEdges_b57_04B2) / sizeof(kEdges_b57_04B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x84B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04B4 = {57u, 0x84B4u, 0x04B4u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_04B4, sizeof(kEdges_b57_04B4) / sizeof(kEdges_b57_04B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x84B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04B6 = {57u, 0x84B6u, 0x04B6u, 0x0071u, 1u, nullptr, 0u, kEdges_b57_04B6, sizeof(kEdges_b57_04B6) / sizeof(kEdges_b57_04B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04B8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x84BAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04B8 = {57u, 0x84B8u, 0x04B8u, 0x001Eu, 1u, nullptr, 0u, kEdges_b57_04B8, sizeof(kEdges_b57_04B8) / sizeof(kEdges_b57_04B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04BA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x84BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04BA = {57u, 0x84BAu, 0x04BAu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_04BA, sizeof(kEdges_b57_04BA) / sizeof(kEdges_b57_04BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04BD[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04BD = {57u, 0x84BDu, 0x04BDu, 0xE456u, 2u, nullptr, 0u, kEdges_b57_04BD, sizeof(kEdges_b57_04BD) / sizeof(kEdges_b57_04BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04FC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x84FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04FC = {57u, 0x84FCu, 0x04FCu, 0x0083u, 1u, nullptr, 0u, kEdges_b57_04FC, sizeof(kEdges_b57_04FC) / sizeof(kEdges_b57_04FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_04FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8501u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_04FE = {57u, 0x84FEu, 0x04FEu, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_04FE, sizeof(kEdges_b57_04FE) / sizeof(kEdges_b57_04FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0501[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAAAu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8504u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0501 = {57u, 0x8501u, 0x0501u, 0xCAAAu, 2u, nullptr, 0u, kEdges_b57_0501, sizeof(kEdges_b57_0501) / sizeof(kEdges_b57_0501[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0504[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0504 = {57u, 0x8504u, 0x0504u, 0xE456u, 2u, nullptr, 0u, kEdges_b57_0504, sizeof(kEdges_b57_0504) / sizeof(kEdges_b57_0504[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_052E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8530u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_052E = {57u, 0x852Eu, 0x052Eu, 0x0004u, 1u, nullptr, 0u, kEdges_b57_052E, sizeof(kEdges_b57_052E) / sizeof(kEdges_b57_052E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0530[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0530 = {57u, 0x8530u, 0x0530u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_0530, sizeof(kEdges_b57_0530) / sizeof(kEdges_b57_0530[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0551[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8553u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0551 = {57u, 0x8551u, 0x0551u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0551, sizeof(kEdges_b57_0551) / sizeof(kEdges_b57_0551[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0553[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8555u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0553 = {57u, 0x8553u, 0x0553u, 0x00FBu, 1u, nullptr, 0u, kEdges_b57_0553, sizeof(kEdges_b57_0553) / sizeof(kEdges_b57_0553[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0555[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8557u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0555 = {57u, 0x8555u, 0x0555u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0555, sizeof(kEdges_b57_0555) / sizeof(kEdges_b57_0555[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0557[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x855Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0557 = {57u, 0x8557u, 0x0557u, 0x069Du, 2u, nullptr, 0u, kEdges_b57_0557, sizeof(kEdges_b57_0557) / sizeof(kEdges_b57_0557[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_055A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x855Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_055A = {57u, 0x855Au, 0x055Au, 0x05DFu, 2u, nullptr, 0u, kEdges_b57_055A, sizeof(kEdges_b57_055A) / sizeof(kEdges_b57_055A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_055D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x855Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_055D = {57u, 0x855Du, 0x055Du, 0x0007u, 1u, nullptr, 0u, kEdges_b57_055D, sizeof(kEdges_b57_055D) / sizeof(kEdges_b57_055D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_055F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8562u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_055F = {57u, 0x855Fu, 0x055Fu, 0x0677u, 2u, nullptr, 0u, kEdges_b57_055F, sizeof(kEdges_b57_055F) / sizeof(kEdges_b57_055F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0562[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8564u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0562 = {57u, 0x8562u, 0x0562u, 0x00C1u, 1u, nullptr, 0u, kEdges_b57_0562, sizeof(kEdges_b57_0562) / sizeof(kEdges_b57_0562[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0564[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8567u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0564 = {57u, 0x8564u, 0x0564u, 0x0672u, 2u, nullptr, 0u, kEdges_b57_0564, sizeof(kEdges_b57_0564) / sizeof(kEdges_b57_0564[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0567[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8569u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0567 = {57u, 0x8567u, 0x0567u, 0x00FEu, 1u, nullptr, 0u, kEdges_b57_0567, sizeof(kEdges_b57_0567) / sizeof(kEdges_b57_0567[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0569[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x856Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0569 = {57u, 0x8569u, 0x0569u, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_0569, sizeof(kEdges_b57_0569) / sizeof(kEdges_b57_0569[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_056C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x856Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_056C = {57u, 0x856Cu, 0x056Cu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_056C, sizeof(kEdges_b57_056C) / sizeof(kEdges_b57_056C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_056E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8570u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_056E = {57u, 0x856Eu, 0x056Eu, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_056E, sizeof(kEdges_b57_056E) / sizeof(kEdges_b57_056E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0570[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8572u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0570 = {57u, 0x8570u, 0x0570u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0570, sizeof(kEdges_b57_0570) / sizeof(kEdges_b57_0570[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0572[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8574u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0572 = {57u, 0x8572u, 0x0572u, 0x0050u, 1u, nullptr, 0u, kEdges_b57_0572, sizeof(kEdges_b57_0572) / sizeof(kEdges_b57_0572[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0574[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8578u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0574 = {57u, 0x8574u, 0x0574u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0574, sizeof(kEdges_b57_0574) / sizeof(kEdges_b57_0574[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0578[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x857Bu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0578 = {57u, 0x8578u, 0x0578u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0578, sizeof(kEdges_b57_0578) / sizeof(kEdges_b57_0578[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_057B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x857Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_057B = {57u, 0x857Bu, 0x057Bu, 0x03AAu, 2u, nullptr, 0u, kEdges_b57_057B, sizeof(kEdges_b57_057B) / sizeof(kEdges_b57_057B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_057E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8580u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8578u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_057E = {57u, 0x857Eu, 0x057Eu, 0x8578u, 1u, nullptr, 0u, kEdges_b57_057E, sizeof(kEdges_b57_057E) / sizeof(kEdges_b57_057E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0580[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8582u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0580 = {57u, 0x8580u, 0x0580u, 0x0032u, 1u, nullptr, 0u, kEdges_b57_0580, sizeof(kEdges_b57_0580) / sizeof(kEdges_b57_0580[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0582[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8585u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0582 = {57u, 0x8582u, 0x0582u, 0x069Eu, 2u, nullptr, 0u, kEdges_b57_0582, sizeof(kEdges_b57_0582) / sizeof(kEdges_b57_0582[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0585[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8588u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0585 = {57u, 0x8585u, 0x0585u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0585, sizeof(kEdges_b57_0585) / sizeof(kEdges_b57_0585[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0588[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x858Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0588 = {57u, 0x8588u, 0x0588u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0588, sizeof(kEdges_b57_0588) / sizeof(kEdges_b57_0588[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_058A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x858Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_058A = {57u, 0x858Au, 0x058Au, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_058A, sizeof(kEdges_b57_058A) / sizeof(kEdges_b57_058A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_058D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x858Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_058D = {57u, 0x858Du, 0x058Du, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_058D, sizeof(kEdges_b57_058D) / sizeof(kEdges_b57_058D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_058F[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x827Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_058F = {57u, 0x858Fu, 0x058Fu, 0x827Cu, 2u, nullptr, 0u, kEdges_b57_058F, sizeof(kEdges_b57_058F) / sizeof(kEdges_b57_058F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05A1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85A3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05A1 = {57u, 0x85A1u, 0x05A1u, 0x0035u, 1u, nullptr, 0u, kEdges_b57_05A1, sizeof(kEdges_b57_05A1) / sizeof(kEdges_b57_05A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05A3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x85A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05A3 = {57u, 0x85A3u, 0x05A3u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_05A3, sizeof(kEdges_b57_05A3) / sizeof(kEdges_b57_05A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05A6 = {57u, 0x85A6u, 0x05A6u, 0x0093u, 1u, nullptr, 0u, kEdges_b57_05A6, sizeof(kEdges_b57_05A6) / sizeof(kEdges_b57_05A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05A8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85ABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05A8 = {57u, 0x85A8u, 0x05A8u, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_05A8, sizeof(kEdges_b57_05A8) / sizeof(kEdges_b57_05A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05AB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAAAu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x85AEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05AB = {57u, 0x85ABu, 0x05ABu, 0xCAAAu, 2u, nullptr, 0u, kEdges_b57_05AB, sizeof(kEdges_b57_05AB) / sizeof(kEdges_b57_05AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05AE[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05AE = {57u, 0x85AEu, 0x05AEu, 0xE456u, 2u, nullptr, 0u, kEdges_b57_05AE, sizeof(kEdges_b57_05AE) / sizeof(kEdges_b57_05AE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05B4 = {57u, 0x85B4u, 0x05B4u, 0x0032u, 1u, nullptr, 0u, kEdges_b57_05B4, sizeof(kEdges_b57_05B4) / sizeof(kEdges_b57_05B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05B6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x85B9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05B6 = {57u, 0x85B6u, 0x05B6u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_05B6, sizeof(kEdges_b57_05B6) / sizeof(kEdges_b57_05B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05B9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05B9 = {57u, 0x85B9u, 0x05B9u, 0x00BBu, 1u, nullptr, 0u, kEdges_b57_05B9, sizeof(kEdges_b57_05B9) / sizeof(kEdges_b57_05B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05BB = {57u, 0x85BBu, 0x05BBu, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_05BB, sizeof(kEdges_b57_05BB) / sizeof(kEdges_b57_05BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05BE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAAAu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x85C1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05BE = {57u, 0x85BEu, 0x05BEu, 0xCAAAu, 2u, nullptr, 0u, kEdges_b57_05BE, sizeof(kEdges_b57_05BE) / sizeof(kEdges_b57_05BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05C1[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05C1 = {57u, 0x85C1u, 0x05C1u, 0xE456u, 2u, nullptr, 0u, kEdges_b57_05C1, sizeof(kEdges_b57_05C1) / sizeof(kEdges_b57_05C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05D8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05D8 = {57u, 0x85D8u, 0x05D8u, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_05D8, sizeof(kEdges_b57_05D8) / sizeof(kEdges_b57_05D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05DA[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85DCu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x85F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05DA = {57u, 0x85DAu, 0x05DAu, 0x85F9u, 1u, nullptr, 0u, kEdges_b57_05DA, sizeof(kEdges_b57_05DA) / sizeof(kEdges_b57_05DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05DC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85DEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05DC = {57u, 0x85DCu, 0x05DCu, 0x0006u, 1u, nullptr, 0u, kEdges_b57_05DC, sizeof(kEdges_b57_05DC) / sizeof(kEdges_b57_05DC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05DE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x85E1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05DE = {57u, 0x85DEu, 0x05DEu, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_05DE, sizeof(kEdges_b57_05DE) / sizeof(kEdges_b57_05DE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05E1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05E1 = {57u, 0x85E1u, 0x05E1u, 0x001Fu, 1u, nullptr, 0u, kEdges_b57_05E1, sizeof(kEdges_b57_05E1) / sizeof(kEdges_b57_05E1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05E3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05E3 = {57u, 0x85E3u, 0x05E3u, 0x0672u, 2u, nullptr, 0u, kEdges_b57_05E3, sizeof(kEdges_b57_05E3) / sizeof(kEdges_b57_05E3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05E6 = {57u, 0x85E6u, 0x05E6u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_05E6, sizeof(kEdges_b57_05E6) / sizeof(kEdges_b57_05E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05E8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05E8 = {57u, 0x85E8u, 0x05E8u, 0x0677u, 2u, nullptr, 0u, kEdges_b57_05E8, sizeof(kEdges_b57_05E8) / sizeof(kEdges_b57_05E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05EB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85EDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05EB = {57u, 0x85EBu, 0x05EBu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_05EB, sizeof(kEdges_b57_05EB) / sizeof(kEdges_b57_05EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05ED[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85EFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05ED = {57u, 0x85EDu, 0x05EDu, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_05ED, sizeof(kEdges_b57_05ED) / sizeof(kEdges_b57_05ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05EF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05EF = {57u, 0x85EFu, 0x05EFu, 0x0095u, 1u, nullptr, 0u, kEdges_b57_05EF, sizeof(kEdges_b57_05EF) / sizeof(kEdges_b57_05EF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85F4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05F1 = {57u, 0x85F1u, 0x05F1u, 0x069Eu, 2u, nullptr, 0u, kEdges_b57_05F1, sizeof(kEdges_b57_05F1) / sizeof(kEdges_b57_05F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05F4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x85F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05F4 = {57u, 0x85F4u, 0x05F4u, 0x000Au, 1u, nullptr, 0u, kEdges_b57_05F4, sizeof(kEdges_b57_05F4) / sizeof(kEdges_b57_05F4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05F6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8416u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x85F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05F6 = {57u, 0x85F6u, 0x05F6u, 0x8416u, 2u, nullptr, 0u, kEdges_b57_05F6, sizeof(kEdges_b57_05F6) / sizeof(kEdges_b57_05F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_05F9[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_05F9 = {57u, 0x85F9u, 0x05F9u, 0u, 0u, nullptr, 0u, kEdges_b57_05F9, sizeof(kEdges_b57_05F9) / sizeof(kEdges_b57_05F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0603[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8605u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0603 = {57u, 0x8603u, 0x0603u, 0x0002u, 1u, nullptr, 0u, kEdges_b57_0603, sizeof(kEdges_b57_0603) / sizeof(kEdges_b57_0603[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0605[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0605 = {57u, 0x8605u, 0x0605u, 0xC5F0u, 2u, nullptr, 0u, kEdges_b57_0605, sizeof(kEdges_b57_0605) / sizeof(kEdges_b57_0605[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0611[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8613u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0611 = {57u, 0x8611u, 0x0611u, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_0611, sizeof(kEdges_b57_0611) / sizeof(kEdges_b57_0611[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0613[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8616u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0613 = {57u, 0x8613u, 0x0613u, 0x05DEu, 2u, nullptr, 0u, kEdges_b57_0613, sizeof(kEdges_b57_0613) / sizeof(kEdges_b57_0613[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0616[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8618u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0616 = {57u, 0x8616u, 0x0616u, 0x0098u, 1u, nullptr, 0u, kEdges_b57_0616, sizeof(kEdges_b57_0616) / sizeof(kEdges_b57_0616[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0618[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x861Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0618 = {57u, 0x8618u, 0x0618u, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_0618, sizeof(kEdges_b57_0618) / sizeof(kEdges_b57_0618[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_061B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x861Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_061B = {57u, 0x861Bu, 0x061Bu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_061B, sizeof(kEdges_b57_061B) / sizeof(kEdges_b57_061B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_061D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8620u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_061D = {57u, 0x861Du, 0x061Du, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_061D, sizeof(kEdges_b57_061D) / sizeof(kEdges_b57_061D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0620[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8623u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0620 = {57u, 0x8620u, 0x0620u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0620, sizeof(kEdges_b57_0620) / sizeof(kEdges_b57_0620[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0623[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8626u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0623 = {57u, 0x8623u, 0x0623u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_0623, sizeof(kEdges_b57_0623) / sizeof(kEdges_b57_0623[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0626[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8628u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8620u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0626 = {57u, 0x8626u, 0x0626u, 0x8620u, 1u, nullptr, 0u, kEdges_b57_0626, sizeof(kEdges_b57_0626) / sizeof(kEdges_b57_0626[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0628[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x862Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0628 = {57u, 0x8628u, 0x0628u, 0x007Fu, 1u, nullptr, 0u, kEdges_b57_0628, sizeof(kEdges_b57_0628) / sizeof(kEdges_b57_0628[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_062A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x862Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_062A = {57u, 0x862Au, 0x062Au, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_062A, sizeof(kEdges_b57_062A) / sizeof(kEdges_b57_062A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_062D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x862Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8635u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_062D = {57u, 0x862Du, 0x062Du, 0x8635u, 1u, nullptr, 0u, kEdges_b57_062D, sizeof(kEdges_b57_062D) / sizeof(kEdges_b57_062D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_062F[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8632u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_062F = {57u, 0x862Fu, 0x062Fu, 0xE468u, 2u, nullptr, 0u, kEdges_b57_062F, sizeof(kEdges_b57_062F) / sizeof(kEdges_b57_062F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0632[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8628u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0632 = {57u, 0x8632u, 0x0632u, 0x8628u, 2u, nullptr, 0u, kEdges_b57_0632, sizeof(kEdges_b57_0632) / sizeof(kEdges_b57_0632[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0635[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8638u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0635 = {57u, 0x8635u, 0x0635u, 0x05DEu, 2u, nullptr, 0u, kEdges_b57_0635, sizeof(kEdges_b57_0635) / sizeof(kEdges_b57_0635[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0638[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x863Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0638 = {57u, 0x8638u, 0x0638u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_0638, sizeof(kEdges_b57_0638) / sizeof(kEdges_b57_0638[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_063B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x863Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_063B = {57u, 0x863Bu, 0x063Bu, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_063B, sizeof(kEdges_b57_063B) / sizeof(kEdges_b57_063B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_063E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8641u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_063E = {57u, 0x863Eu, 0x063Eu, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_063E, sizeof(kEdges_b57_063E) / sizeof(kEdges_b57_063E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0641[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8643u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0641 = {57u, 0x8641u, 0x0641u, 0x0090u, 1u, nullptr, 0u, kEdges_b57_0641, sizeof(kEdges_b57_0641) / sizeof(kEdges_b57_0641[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0643[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8646u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0643 = {57u, 0x8643u, 0x0643u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_0643, sizeof(kEdges_b57_0643) / sizeof(kEdges_b57_0643[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0646[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8648u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0646 = {57u, 0x8646u, 0x0646u, 0x0040u, 1u, nullptr, 0u, kEdges_b57_0646, sizeof(kEdges_b57_0646) / sizeof(kEdges_b57_0646[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0648[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x864Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0648 = {57u, 0x8648u, 0x0648u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0648, sizeof(kEdges_b57_0648) / sizeof(kEdges_b57_0648[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_064B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x864Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_064B = {57u, 0x864Bu, 0x064Bu, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_064B, sizeof(kEdges_b57_064B) / sizeof(kEdges_b57_064B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_064E[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8651u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_064E = {57u, 0x864Eu, 0x064Eu, 0xE468u, 2u, nullptr, 0u, kEdges_b57_064E, sizeof(kEdges_b57_064E) / sizeof(kEdges_b57_064E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0651[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8654u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0651 = {57u, 0x8651u, 0x0651u, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_0651, sizeof(kEdges_b57_0651) / sizeof(kEdges_b57_0651[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0654[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8657u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0654 = {57u, 0x8654u, 0x0654u, 0x03A0u, 2u, nullptr, 0u, kEdges_b57_0654, sizeof(kEdges_b57_0654) / sizeof(kEdges_b57_0654[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0657[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8659u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x864Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0657 = {57u, 0x8657u, 0x0657u, 0x864Eu, 1u, nullptr, 0u, kEdges_b57_0657, sizeof(kEdges_b57_0657) / sizeof(kEdges_b57_0657[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0659[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x865Cu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0659 = {57u, 0x8659u, 0x0659u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0659, sizeof(kEdges_b57_0659) / sizeof(kEdges_b57_0659[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_065C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x865Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_065C = {57u, 0x865Cu, 0x065Cu, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_065C, sizeof(kEdges_b57_065C) / sizeof(kEdges_b57_065C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_065F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8662u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_065F = {57u, 0x865Fu, 0x065Fu, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_065F, sizeof(kEdges_b57_065F) / sizeof(kEdges_b57_065F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0662[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8666u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0662 = {57u, 0x8662u, 0x0662u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0662, sizeof(kEdges_b57_0662) / sizeof(kEdges_b57_0662[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0666[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8669u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0666 = {57u, 0x8666u, 0x0666u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0666, sizeof(kEdges_b57_0666) / sizeof(kEdges_b57_0666[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0669[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x866Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0669 = {57u, 0x8669u, 0x0669u, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_0669, sizeof(kEdges_b57_0669) / sizeof(kEdges_b57_0669[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_066C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x866Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_066C = {57u, 0x866Cu, 0x066Cu, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_066C, sizeof(kEdges_b57_066C) / sizeof(kEdges_b57_066C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_066F[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8673u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_066F = {57u, 0x866Fu, 0x066Fu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_066F, sizeof(kEdges_b57_066F) / sizeof(kEdges_b57_066F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0673[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8676u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0673 = {57u, 0x8673u, 0x0673u, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_0673, sizeof(kEdges_b57_0673) / sizeof(kEdges_b57_0673[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0676[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8679u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0676 = {57u, 0x8676u, 0x0676u, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_0676, sizeof(kEdges_b57_0676) / sizeof(kEdges_b57_0676[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0679[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x867Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0679 = {57u, 0x8679u, 0x0679u, 0x0682u, 2u, nullptr, 0u, kEdges_b57_0679, sizeof(kEdges_b57_0679) / sizeof(kEdges_b57_0679[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_067C[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x827Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_067C = {57u, 0x867Cu, 0x067Cu, 0x827Cu, 2u, nullptr, 0u, kEdges_b57_067C, sizeof(kEdges_b57_067C) / sizeof(kEdges_b57_067C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_06C0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x86C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_06C0 = {57u, 0x86C0u, 0x06C0u, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_06C0, sizeof(kEdges_b57_06C0) / sizeof(kEdges_b57_06C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_06C2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x86C4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x86D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_06C2 = {57u, 0x86C2u, 0x06C2u, 0x86D2u, 1u, nullptr, 0u, kEdges_b57_06C2, sizeof(kEdges_b57_06C2) / sizeof(kEdges_b57_06C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_06C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x86C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_06C4 = {57u, 0x86C4u, 0x06C4u, 0x002Eu, 1u, nullptr, 0u, kEdges_b57_06C4, sizeof(kEdges_b57_06C4) / sizeof(kEdges_b57_06C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_06C6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x86C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_06C6 = {57u, 0x86C6u, 0x06C6u, 0x0672u, 2u, nullptr, 0u, kEdges_b57_06C6, sizeof(kEdges_b57_06C6) / sizeof(kEdges_b57_06C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_06C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x86CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_06C9 = {57u, 0x86C9u, 0x06C9u, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_06C9, sizeof(kEdges_b57_06C9) / sizeof(kEdges_b57_06C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_06CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x86CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_06CB = {57u, 0x86CBu, 0x06CBu, 0x0677u, 2u, nullptr, 0u, kEdges_b57_06CB, sizeof(kEdges_b57_06CB) / sizeof(kEdges_b57_06CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_06CE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x86D0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_06CE = {57u, 0x86CEu, 0x06CEu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_06CE, sizeof(kEdges_b57_06CE) / sizeof(kEdges_b57_06CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_06D0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x86D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_06D0 = {57u, 0x86D0u, 0x06D0u, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_06D0, sizeof(kEdges_b57_06D0) / sizeof(kEdges_b57_06D0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_06D2[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_06D2 = {57u, 0x86D2u, 0x06D2u, 0u, 0u, nullptr, 0u, kEdges_b57_06D2, sizeof(kEdges_b57_06D2) / sizeof(kEdges_b57_06D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0733[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8735u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0733 = {57u, 0x8733u, 0x0733u, 0x005Du, 1u, nullptr, 0u, kEdges_b57_0733, sizeof(kEdges_b57_0733) / sizeof(kEdges_b57_0733[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0735[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8738u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0735 = {57u, 0x8735u, 0x0735u, 0x069Eu, 2u, nullptr, 0u, kEdges_b57_0735, sizeof(kEdges_b57_0735) / sizeof(kEdges_b57_0735[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0738[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x873Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0738 = {57u, 0x8738u, 0x0738u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0738, sizeof(kEdges_b57_0738) / sizeof(kEdges_b57_0738[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_073B[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x87A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_073B = {57u, 0x873Bu, 0x073Bu, 0x87A6u, 2u, nullptr, 0u, kEdges_b57_073B, sizeof(kEdges_b57_073B) / sizeof(kEdges_b57_073B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0755[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8757u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0755 = {57u, 0x8755u, 0x0755u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0755, sizeof(kEdges_b57_0755) / sizeof(kEdges_b57_0755[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0757[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8759u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0757 = {57u, 0x8757u, 0x0757u, 0x00D0u, 1u, nullptr, 0u, kEdges_b57_0757, sizeof(kEdges_b57_0757) / sizeof(kEdges_b57_0757[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0759[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x875Du, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0759 = {57u, 0x8759u, 0x0759u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0759, sizeof(kEdges_b57_0759) / sizeof(kEdges_b57_0759[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_075D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x875Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_075D = {57u, 0x875Du, 0x075Du, 0x0001u, 1u, nullptr, 0u, kEdges_b57_075D, sizeof(kEdges_b57_075D) / sizeof(kEdges_b57_075D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_075F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8762u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_075F = {57u, 0x875Fu, 0x075Fu, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_075F, sizeof(kEdges_b57_075F) / sizeof(kEdges_b57_075F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0762[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8765u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0762 = {57u, 0x8762u, 0x0762u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0762, sizeof(kEdges_b57_0762) / sizeof(kEdges_b57_0762[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0765[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8768u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0765 = {57u, 0x8765u, 0x0765u, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_0765, sizeof(kEdges_b57_0765) / sizeof(kEdges_b57_0765[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0768[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x876Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8762u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0768 = {57u, 0x8768u, 0x0768u, 0x8762u, 1u, nullptr, 0u, kEdges_b57_0768, sizeof(kEdges_b57_0768) / sizeof(kEdges_b57_0768[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_076A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x876Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_076A = {57u, 0x876Au, 0x076Au, 0x007Fu, 1u, nullptr, 0u, kEdges_b57_076A, sizeof(kEdges_b57_076A) / sizeof(kEdges_b57_076A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_076C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x876Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_076C = {57u, 0x876Cu, 0x076Cu, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_076C, sizeof(kEdges_b57_076C) / sizeof(kEdges_b57_076C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_076F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8771u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8777u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_076F = {57u, 0x876Fu, 0x076Fu, 0x8777u, 1u, nullptr, 0u, kEdges_b57_076F, sizeof(kEdges_b57_076F) / sizeof(kEdges_b57_076F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0771[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8774u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0771 = {57u, 0x8771u, 0x0771u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0771, sizeof(kEdges_b57_0771) / sizeof(kEdges_b57_0771[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0774[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x876Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0774 = {57u, 0x8774u, 0x0774u, 0x876Au, 2u, nullptr, 0u, kEdges_b57_0774, sizeof(kEdges_b57_0774) / sizeof(kEdges_b57_0774[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0777[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8779u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0777 = {57u, 0x8777u, 0x0777u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_0777, sizeof(kEdges_b57_0777) / sizeof(kEdges_b57_0777[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0779[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x877Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0779 = {57u, 0x8779u, 0x0779u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_0779, sizeof(kEdges_b57_0779) / sizeof(kEdges_b57_0779[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_077C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x877Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_077C = {57u, 0x877Cu, 0x077Cu, 0x009Du, 1u, nullptr, 0u, kEdges_b57_077C, sizeof(kEdges_b57_077C) / sizeof(kEdges_b57_077C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_077E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8781u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_077E = {57u, 0x877Eu, 0x077Eu, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_077E, sizeof(kEdges_b57_077E) / sizeof(kEdges_b57_077E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0781[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8784u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0781 = {57u, 0x8781u, 0x0781u, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_0781, sizeof(kEdges_b57_0781) / sizeof(kEdges_b57_0781[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0784[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8786u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0784 = {57u, 0x8784u, 0x0784u, 0x00D0u, 1u, nullptr, 0u, kEdges_b57_0784, sizeof(kEdges_b57_0784) / sizeof(kEdges_b57_0784[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0786[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8789u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0786 = {57u, 0x8786u, 0x0786u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_0786, sizeof(kEdges_b57_0786) / sizeof(kEdges_b57_0786[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0789[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x878Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0789 = {57u, 0x8789u, 0x0789u, 0x0090u, 1u, nullptr, 0u, kEdges_b57_0789, sizeof(kEdges_b57_0789) / sizeof(kEdges_b57_0789[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_078B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x878Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_078B = {57u, 0x878Bu, 0x078Bu, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_078B, sizeof(kEdges_b57_078B) / sizeof(kEdges_b57_078B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_078E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8791u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_078E = {57u, 0x878Eu, 0x078Eu, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_078E, sizeof(kEdges_b57_078E) / sizeof(kEdges_b57_078E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0791[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x864Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0791 = {57u, 0x8791u, 0x0791u, 0x864Eu, 2u, nullptr, 0u, kEdges_b57_0791, sizeof(kEdges_b57_0791) / sizeof(kEdges_b57_0791[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07A6 = {57u, 0x87A6u, 0x07A6u, 0x0023u, 1u, nullptr, 0u, kEdges_b57_07A6, sizeof(kEdges_b57_07A6) / sizeof(kEdges_b57_07A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07A8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87AAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x87AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07A8 = {57u, 0x87A8u, 0x07A8u, 0x87AFu, 1u, nullptr, 0u, kEdges_b57_07A8, sizeof(kEdges_b57_07A8) / sizeof(kEdges_b57_07A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07AA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87ACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07AA = {57u, 0x87AAu, 0x07AAu, 0x0007u, 1u, nullptr, 0u, kEdges_b57_07AA, sizeof(kEdges_b57_07AA) / sizeof(kEdges_b57_07AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07AC[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07AC = {57u, 0x87ACu, 0x07ACu, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_07AC, sizeof(kEdges_b57_07AC) / sizeof(kEdges_b57_07AC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07AF[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07AF = {57u, 0x87AFu, 0x07AFu, 0u, 0u, nullptr, 0u, kEdges_b57_07AF, sizeof(kEdges_b57_07AF) / sizeof(kEdges_b57_07AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07B0 = {57u, 0x87B0u, 0x07B0u, 0x009Au, 1u, nullptr, 0u, kEdges_b57_07B0, sizeof(kEdges_b57_07B0) / sizeof(kEdges_b57_07B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07B2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x87D4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x87B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07B2 = {57u, 0x87B2u, 0x07B2u, 0x87D4u, 2u, nullptr, 0u, kEdges_b57_07B2, sizeof(kEdges_b57_07B2) / sizeof(kEdges_b57_07B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07B5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87B7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07B5 = {57u, 0x87B5u, 0x07B5u, 0x009Bu, 1u, nullptr, 0u, kEdges_b57_07B5, sizeof(kEdges_b57_07B5) / sizeof(kEdges_b57_07B5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07B7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x87D4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x87BAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07B7 = {57u, 0x87B7u, 0x07B7u, 0x87D4u, 2u, nullptr, 0u, kEdges_b57_07B7, sizeof(kEdges_b57_07B7) / sizeof(kEdges_b57_07B7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07BA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87BCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07BA = {57u, 0x87BAu, 0x07BAu, 0x009Cu, 1u, nullptr, 0u, kEdges_b57_07BA, sizeof(kEdges_b57_07BA) / sizeof(kEdges_b57_07BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07BC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x87D4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x87BFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07BC = {57u, 0x87BCu, 0x07BCu, 0x87D4u, 2u, nullptr, 0u, kEdges_b57_07BC, sizeof(kEdges_b57_07BC) / sizeof(kEdges_b57_07BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07BF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87C1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07BF = {57u, 0x87BFu, 0x07BFu, 0x0057u, 1u, nullptr, 0u, kEdges_b57_07BF, sizeof(kEdges_b57_07BF) / sizeof(kEdges_b57_07BF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07C1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07C1 = {57u, 0x87C1u, 0x07C1u, 0x001Au, 1u, nullptr, 0u, kEdges_b57_07C1, sizeof(kEdges_b57_07C1) / sizeof(kEdges_b57_07C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07C3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87C5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x87B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07C3 = {57u, 0x87C3u, 0x07C3u, 0x87B0u, 1u, nullptr, 0u, kEdges_b57_07C3, sizeof(kEdges_b57_07C3) / sizeof(kEdges_b57_07C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07C5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07C5 = {57u, 0x87C5u, 0x07C5u, 0x001Bu, 1u, nullptr, 0u, kEdges_b57_07C5, sizeof(kEdges_b57_07C5) / sizeof(kEdges_b57_07C5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07C7[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87C9u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x87B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07C7 = {57u, 0x87C7u, 0x07C7u, 0x87B0u, 1u, nullptr, 0u, kEdges_b57_07C7, sizeof(kEdges_b57_07C7) / sizeof(kEdges_b57_07C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07C9 = {57u, 0x87C9u, 0x07C9u, 0x0013u, 1u, nullptr, 0u, kEdges_b57_07C9, sizeof(kEdges_b57_07C9) / sizeof(kEdges_b57_07C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07CB[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87CDu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x87B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07CB = {57u, 0x87CBu, 0x07CBu, 0x87B0u, 1u, nullptr, 0u, kEdges_b57_07CB, sizeof(kEdges_b57_07CB) / sizeof(kEdges_b57_07CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07CD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07CD = {57u, 0x87CDu, 0x07CDu, 0x0014u, 1u, nullptr, 0u, kEdges_b57_07CD, sizeof(kEdges_b57_07CD) / sizeof(kEdges_b57_07CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07CF[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87D1u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x87B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07CF = {57u, 0x87CFu, 0x07CFu, 0x87B0u, 1u, nullptr, 0u, kEdges_b57_07CF, sizeof(kEdges_b57_07CF) / sizeof(kEdges_b57_07CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07D1[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07D1 = {57u, 0x87D1u, 0x07D1u, 0xC5E6u, 2u, nullptr, 0u, kEdges_b57_07D1, sizeof(kEdges_b57_07D1) / sizeof(kEdges_b57_07D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07D4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAAAu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x87D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07D4 = {57u, 0x87D4u, 0x07D4u, 0xCAAAu, 2u, nullptr, 0u, kEdges_b57_07D4, sizeof(kEdges_b57_07D4) / sizeof(kEdges_b57_07D4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07D7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x87D9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07D7 = {57u, 0x87D7u, 0x07D7u, 0x0004u, 1u, nullptr, 0u, kEdges_b57_07D7, sizeof(kEdges_b57_07D7) / sizeof(kEdges_b57_07D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07D9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x87DCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07D9 = {57u, 0x87D9u, 0x07D9u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b57_07D9, sizeof(kEdges_b57_07D9) / sizeof(kEdges_b57_07D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_07DC[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_07DC = {57u, 0x87DCu, 0x07DCu, 0u, 0u, nullptr, 0u, kEdges_b57_07DC, sizeof(kEdges_b57_07DC) / sizeof(kEdges_b57_07DC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0810[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8812u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0810 = {57u, 0x8810u, 0x0810u, 0x000Au, 1u, nullptr, 0u, kEdges_b57_0810, sizeof(kEdges_b57_0810) / sizeof(kEdges_b57_0810[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0812[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8815u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0812 = {57u, 0x8812u, 0x0812u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_0812, sizeof(kEdges_b57_0812) / sizeof(kEdges_b57_0812[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0815[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0815 = {57u, 0x8815u, 0x0815u, 0u, 0u, nullptr, 0u, kEdges_b57_0815, sizeof(kEdges_b57_0815) / sizeof(kEdges_b57_0815[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0820[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8822u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0820 = {57u, 0x8820u, 0x0820u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_0820, sizeof(kEdges_b57_0820) / sizeof(kEdges_b57_0820[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0822[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x841Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0822 = {57u, 0x8822u, 0x0822u, 0x841Au, 2u, nullptr, 0u, kEdges_b57_0822, sizeof(kEdges_b57_0822) / sizeof(kEdges_b57_0822[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0833[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8835u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0833 = {57u, 0x8833u, 0x0833u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0833, sizeof(kEdges_b57_0833) / sizeof(kEdges_b57_0833[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0835[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8838u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0835 = {57u, 0x8835u, 0x0835u, 0x060Du, 2u, nullptr, 0u, kEdges_b57_0835, sizeof(kEdges_b57_0835) / sizeof(kEdges_b57_0835[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0838[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x883Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0838 = {57u, 0x8838u, 0x0838u, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_0838, sizeof(kEdges_b57_0838) / sizeof(kEdges_b57_0838[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_083A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x883Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x885Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_083A = {57u, 0x883Au, 0x083Au, 0x885Cu, 1u, nullptr, 0u, kEdges_b57_083A, sizeof(kEdges_b57_083A) / sizeof(kEdges_b57_083A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_083C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x883Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_083C = {57u, 0x883Cu, 0x083Cu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_083C, sizeof(kEdges_b57_083C) / sizeof(kEdges_b57_083C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_083E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8841u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_083E = {57u, 0x883Eu, 0x083Eu, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_083E, sizeof(kEdges_b57_083E) / sizeof(kEdges_b57_083E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0841[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8844u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0841 = {57u, 0x8841u, 0x0841u, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_0841, sizeof(kEdges_b57_0841) / sizeof(kEdges_b57_0841[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0844[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8846u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0844 = {57u, 0x8844u, 0x0844u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0844, sizeof(kEdges_b57_0844) / sizeof(kEdges_b57_0844[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0846[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8849u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0846 = {57u, 0x8846u, 0x0846u, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_0846, sizeof(kEdges_b57_0846) / sizeof(kEdges_b57_0846[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0849[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x884Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0849 = {57u, 0x8849u, 0x0849u, 0x0004u, 1u, nullptr, 0u, kEdges_b57_0849, sizeof(kEdges_b57_0849) / sizeof(kEdges_b57_0849[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_084B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x884Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_084B = {57u, 0x884Bu, 0x084Bu, 0x05DEu, 2u, nullptr, 0u, kEdges_b57_084B, sizeof(kEdges_b57_084B) / sizeof(kEdges_b57_084B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_084E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8850u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_084E = {57u, 0x884Eu, 0x084Eu, 0x0011u, 1u, nullptr, 0u, kEdges_b57_084E, sizeof(kEdges_b57_084E) / sizeof(kEdges_b57_084E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0850[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8853u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0850 = {57u, 0x8850u, 0x0850u, 0x0677u, 2u, nullptr, 0u, kEdges_b57_0850, sizeof(kEdges_b57_0850) / sizeof(kEdges_b57_0850[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0853[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8855u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0853 = {57u, 0x8853u, 0x0853u, 0x00B0u, 1u, nullptr, 0u, kEdges_b57_0853, sizeof(kEdges_b57_0853) / sizeof(kEdges_b57_0853[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0855[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8858u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0855 = {57u, 0x8855u, 0x0855u, 0x0672u, 2u, nullptr, 0u, kEdges_b57_0855, sizeof(kEdges_b57_0855) / sizeof(kEdges_b57_0855[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0858[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x885Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0858 = {57u, 0x8858u, 0x0858u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0858, sizeof(kEdges_b57_0858) / sizeof(kEdges_b57_0858[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_085A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x885Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_085A = {57u, 0x885Au, 0x085Au, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_085A, sizeof(kEdges_b57_085A) / sizeof(kEdges_b57_085A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_085C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x885Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_085C = {57u, 0x885Cu, 0x085Cu, 0x000Bu, 1u, nullptr, 0u, kEdges_b57_085C, sizeof(kEdges_b57_085C) / sizeof(kEdges_b57_085C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_085E[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_085E = {57u, 0x885Eu, 0x085Eu, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_085E, sizeof(kEdges_b57_085E) / sizeof(kEdges_b57_085E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0879[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x887Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0879 = {57u, 0x8879u, 0x0879u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_0879, sizeof(kEdges_b57_0879) / sizeof(kEdges_b57_0879[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_087B[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8416u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_087B = {57u, 0x887Bu, 0x087Bu, 0x8416u, 2u, nullptr, 0u, kEdges_b57_087B, sizeof(kEdges_b57_087B) / sizeof(kEdges_b57_087B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_08C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x88C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_08C2 = {57u, 0x88C2u, 0x08C2u, 0x007Bu, 1u, nullptr, 0u, kEdges_b57_08C2, sizeof(kEdges_b57_08C2) / sizeof(kEdges_b57_08C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_08C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x88C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_08C4 = {57u, 0x88C4u, 0x08C4u, 0x069Eu, 2u, nullptr, 0u, kEdges_b57_08C4, sizeof(kEdges_b57_08C4) / sizeof(kEdges_b57_08C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_08C7[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_08C7 = {57u, 0x88C7u, 0x08C7u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_08C7, sizeof(kEdges_b57_08C7) / sizeof(kEdges_b57_08C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_08F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x88F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_08F1 = {57u, 0x88F1u, 0x08F1u, 0x0055u, 1u, nullptr, 0u, kEdges_b57_08F1, sizeof(kEdges_b57_08F1) / sizeof(kEdges_b57_08F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_08F3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x88F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_08F3 = {57u, 0x88F3u, 0x08F3u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_08F3, sizeof(kEdges_b57_08F3) / sizeof(kEdges_b57_08F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_08F6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x88F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_08F6 = {57u, 0x88F6u, 0x08F6u, 0x00B9u, 1u, nullptr, 0u, kEdges_b57_08F6, sizeof(kEdges_b57_08F6) / sizeof(kEdges_b57_08F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_08F8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x88FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_08F8 = {57u, 0x88F8u, 0x08F8u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_08F8, sizeof(kEdges_b57_08F8) / sizeof(kEdges_b57_08F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_08FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x88FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_08FB = {57u, 0x88FBu, 0x08FBu, 0x008Bu, 1u, nullptr, 0u, kEdges_b57_08FB, sizeof(kEdges_b57_08FB) / sizeof(kEdges_b57_08FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_08FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8900u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_08FD = {57u, 0x88FDu, 0x08FDu, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_08FD, sizeof(kEdges_b57_08FD) / sizeof(kEdges_b57_08FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0900[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0900 = {57u, 0x8900u, 0x0900u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0900, sizeof(kEdges_b57_0900) / sizeof(kEdges_b57_0900[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0937[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8939u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0937 = {57u, 0x8937u, 0x0937u, 0x0006u, 1u, nullptr, 0u, kEdges_b57_0937, sizeof(kEdges_b57_0937) / sizeof(kEdges_b57_0937[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0939[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0939 = {57u, 0x8939u, 0x0939u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_0939, sizeof(kEdges_b57_0939) / sizeof(kEdges_b57_0939[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0942[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8944u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0942 = {57u, 0x8942u, 0x0942u, 0x004Au, 1u, nullptr, 0u, kEdges_b57_0942, sizeof(kEdges_b57_0942) / sizeof(kEdges_b57_0942[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0944[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8947u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0944 = {57u, 0x8944u, 0x0944u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0944, sizeof(kEdges_b57_0944) / sizeof(kEdges_b57_0944[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0947[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8949u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0947 = {57u, 0x8947u, 0x0947u, 0x00D7u, 1u, nullptr, 0u, kEdges_b57_0947, sizeof(kEdges_b57_0947) / sizeof(kEdges_b57_0947[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0949[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x894Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0949 = {57u, 0x8949u, 0x0949u, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_0949, sizeof(kEdges_b57_0949) / sizeof(kEdges_b57_0949[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_094C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x894Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_094C = {57u, 0x894Cu, 0x094Cu, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_094C, sizeof(kEdges_b57_094C) / sizeof(kEdges_b57_094C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_094F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8951u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_094F = {57u, 0x894Fu, 0x094Fu, 0x00F6u, 1u, nullptr, 0u, kEdges_b57_094F, sizeof(kEdges_b57_094F) / sizeof(kEdges_b57_094F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0951[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8954u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0951 = {57u, 0x8951u, 0x0951u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0951, sizeof(kEdges_b57_0951) / sizeof(kEdges_b57_0951[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0954[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8810u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0954 = {57u, 0x8954u, 0x0954u, 0x8810u, 2u, nullptr, 0u, kEdges_b57_0954, sizeof(kEdges_b57_0954) / sizeof(kEdges_b57_0954[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0974[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8976u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0974 = {57u, 0x8974u, 0x0974u, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_0974, sizeof(kEdges_b57_0974) / sizeof(kEdges_b57_0974[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0976[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0976 = {57u, 0x8976u, 0x0976u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_0976, sizeof(kEdges_b57_0976) / sizeof(kEdges_b57_0976[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_097F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8981u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_097F = {57u, 0x897Fu, 0x097Fu, 0x000Du, 1u, nullptr, 0u, kEdges_b57_097F, sizeof(kEdges_b57_097F) / sizeof(kEdges_b57_097F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0981[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0981 = {57u, 0x8981u, 0x0981u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_0981, sizeof(kEdges_b57_0981) / sizeof(kEdges_b57_0981[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0999[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x899Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0999 = {57u, 0x8999u, 0x0999u, 0x0002u, 1u, nullptr, 0u, kEdges_b57_0999, sizeof(kEdges_b57_0999) / sizeof(kEdges_b57_0999[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_099B[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_099B = {57u, 0x899Bu, 0x099Bu, 0xC5F0u, 2u, nullptr, 0u, kEdges_b57_099B, sizeof(kEdges_b57_099B) / sizeof(kEdges_b57_099B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_09F5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x89F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_09F5 = {57u, 0x89F5u, 0x09F5u, 0x0057u, 1u, nullptr, 0u, kEdges_b57_09F5, sizeof(kEdges_b57_09F5) / sizeof(kEdges_b57_09F5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_09F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x89FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_09F7 = {57u, 0x89F7u, 0x09F7u, 0x046Fu, 2u, nullptr, 0u, kEdges_b57_09F7, sizeof(kEdges_b57_09F7) / sizeof(kEdges_b57_09F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_09FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x89FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_09FA = {57u, 0x89FAu, 0x09FAu, 0u, 0u, nullptr, 0u, kEdges_b57_09FA, sizeof(kEdges_b57_09FA) / sizeof(kEdges_b57_09FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_09FB[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xD712u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_09FB = {57u, 0x89FBu, 0x09FBu, 0xD712u, 2u, nullptr, 0u, kEdges_b57_09FB, sizeof(kEdges_b57_09FB) / sizeof(kEdges_b57_09FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A47[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A49u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A47 = {57u, 0x8A47u, 0x0A47u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_0A47, sizeof(kEdges_b57_0A47) / sizeof(kEdges_b57_0A47[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A49[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A49 = {57u, 0x8A49u, 0x0A49u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_0A49, sizeof(kEdges_b57_0A49) / sizeof(kEdges_b57_0A49[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A55[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A57u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A55 = {57u, 0x8A55u, 0x0A55u, 0x0002u, 1u, nullptr, 0u, kEdges_b57_0A55, sizeof(kEdges_b57_0A55) / sizeof(kEdges_b57_0A55[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A57[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A57 = {57u, 0x8A57u, 0x0A57u, 0xC5F0u, 2u, nullptr, 0u, kEdges_b57_0A57, sizeof(kEdges_b57_0A57) / sizeof(kEdges_b57_0A57[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A60[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A62u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A60 = {57u, 0x8A60u, 0x0A60u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0A60, sizeof(kEdges_b57_0A60) / sizeof(kEdges_b57_0A60[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A62[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A65u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A62 = {57u, 0x8A62u, 0x0A62u, 0x0358u, 2u, nullptr, 0u, kEdges_b57_0A62, sizeof(kEdges_b57_0A62) / sizeof(kEdges_b57_0A62[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A65[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A67u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A65 = {57u, 0x8A65u, 0x0A65u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_0A65, sizeof(kEdges_b57_0A65) / sizeof(kEdges_b57_0A65[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A67[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A67 = {57u, 0x8A67u, 0x0A67u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_0A67, sizeof(kEdges_b57_0A67) / sizeof(kEdges_b57_0A67[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A70[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A72u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A70 = {57u, 0x8A70u, 0x0A70u, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_0A70, sizeof(kEdges_b57_0A70) / sizeof(kEdges_b57_0A70[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A72[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A74u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8A75u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A72 = {57u, 0x8A72u, 0x0A72u, 0x8A75u, 1u, nullptr, 0u, kEdges_b57_0A72, sizeof(kEdges_b57_0A72) / sizeof(kEdges_b57_0A72[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A74[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A74 = {57u, 0x8A74u, 0x0A74u, 0u, 0u, nullptr, 0u, kEdges_b57_0A74, sizeof(kEdges_b57_0A74) / sizeof(kEdges_b57_0A74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A75[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A77u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A75 = {57u, 0x8A75u, 0x0A75u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_0A75, sizeof(kEdges_b57_0A75) / sizeof(kEdges_b57_0A75[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A77[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A7Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A77 = {57u, 0x8A77u, 0x0A77u, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_0A77, sizeof(kEdges_b57_0A77) / sizeof(kEdges_b57_0A77[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A7A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A7Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A7A = {57u, 0x8A7Au, 0x0A7Au, 0x006Du, 1u, nullptr, 0u, kEdges_b57_0A7A, sizeof(kEdges_b57_0A7A) / sizeof(kEdges_b57_0A7A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A7C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A7Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A7C = {57u, 0x8A7Cu, 0x0A7Cu, 0x0672u, 2u, nullptr, 0u, kEdges_b57_0A7C, sizeof(kEdges_b57_0A7C) / sizeof(kEdges_b57_0A7C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A7F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A81u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A7F = {57u, 0x8A7Fu, 0x0A7Fu, 0x0014u, 1u, nullptr, 0u, kEdges_b57_0A7F, sizeof(kEdges_b57_0A7F) / sizeof(kEdges_b57_0A7F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A81[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A81 = {57u, 0x8A81u, 0x0A81u, 0x0677u, 2u, nullptr, 0u, kEdges_b57_0A81, sizeof(kEdges_b57_0A81) / sizeof(kEdges_b57_0A81[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A84[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A86u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A84 = {57u, 0x8A84u, 0x0A84u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0A84, sizeof(kEdges_b57_0A84) / sizeof(kEdges_b57_0A84[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A86[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A88u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A86 = {57u, 0x8A86u, 0x0A86u, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_0A86, sizeof(kEdges_b57_0A86) / sizeof(kEdges_b57_0A86[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A88[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A8Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A88 = {57u, 0x8A88u, 0x0A88u, 0x00FBu, 1u, nullptr, 0u, kEdges_b57_0A88, sizeof(kEdges_b57_0A88) / sizeof(kEdges_b57_0A88[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A8A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A8Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A8A = {57u, 0x8A8Au, 0x0A8Au, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_0A8A, sizeof(kEdges_b57_0A8A) / sizeof(kEdges_b57_0A8A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A8D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A8Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A8D = {57u, 0x8A8Du, 0x0A8Du, 0x0010u, 1u, nullptr, 0u, kEdges_b57_0A8D, sizeof(kEdges_b57_0A8D) / sizeof(kEdges_b57_0A8D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A8F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8A92u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A8F = {57u, 0x8A8Fu, 0x0A8Fu, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_0A8F, sizeof(kEdges_b57_0A8F) / sizeof(kEdges_b57_0A8F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A92[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8A94u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A92 = {57u, 0x8A92u, 0x0A92u, 0x000Au, 1u, nullptr, 0u, kEdges_b57_0A92, sizeof(kEdges_b57_0A92) / sizeof(kEdges_b57_0A92[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0A94[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8416u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0A94 = {57u, 0x8A94u, 0x0A94u, 0x8416u, 2u, nullptr, 0u, kEdges_b57_0A94, sizeof(kEdges_b57_0A94) / sizeof(kEdges_b57_0A94[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AA9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AA9 = {57u, 0x8AA9u, 0x0AA9u, 0x0002u, 1u, nullptr, 0u, kEdges_b57_0AA9, sizeof(kEdges_b57_0AA9) / sizeof(kEdges_b57_0AA9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AAB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F0u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8AAEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AAB = {57u, 0x8AABu, 0x0AABu, 0xC5F0u, 2u, nullptr, 0u, kEdges_b57_0AAB, sizeof(kEdges_b57_0AAB) / sizeof(kEdges_b57_0AAB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AAE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AB0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AAE = {57u, 0x8AAEu, 0x0AAEu, 0x00AAu, 1u, nullptr, 0u, kEdges_b57_0AAE, sizeof(kEdges_b57_0AAE) / sizeof(kEdges_b57_0AAE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AB0[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AB0 = {57u, 0x8AB0u, 0x0AB0u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0AB0, sizeof(kEdges_b57_0AB0) / sizeof(kEdges_b57_0AB0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AC1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AC1 = {57u, 0x8AC1u, 0x0AC1u, 0x00B8u, 1u, nullptr, 0u, kEdges_b57_0AC1, sizeof(kEdges_b57_0AC1) / sizeof(kEdges_b57_0AC1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AC3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AC6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AC3 = {57u, 0x8AC3u, 0x0AC3u, 0x069Eu, 2u, nullptr, 0u, kEdges_b57_0AC3, sizeof(kEdges_b57_0AC3) / sizeof(kEdges_b57_0AC3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AC6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AC6 = {57u, 0x8AC6u, 0x0AC6u, 0x00B9u, 1u, nullptr, 0u, kEdges_b57_0AC6, sizeof(kEdges_b57_0AC6) / sizeof(kEdges_b57_0AC6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AC8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8ACBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AC8 = {57u, 0x8AC8u, 0x0AC8u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0AC8, sizeof(kEdges_b57_0AC8) / sizeof(kEdges_b57_0AC8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0ACB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8ACDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0ACB = {57u, 0x8ACBu, 0x0ACBu, 0x0060u, 1u, nullptr, 0u, kEdges_b57_0ACB, sizeof(kEdges_b57_0ACB) / sizeof(kEdges_b57_0ACB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0ACD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8AD0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0ACD = {57u, 0x8ACDu, 0x0ACDu, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0ACD, sizeof(kEdges_b57_0ACD) / sizeof(kEdges_b57_0ACD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AD0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AD2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AD0 = {57u, 0x8AD0u, 0x0AD0u, 0x00B2u, 1u, nullptr, 0u, kEdges_b57_0AD0, sizeof(kEdges_b57_0AD0) / sizeof(kEdges_b57_0AD0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AD2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AD5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AD2 = {57u, 0x8AD2u, 0x0AD2u, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_0AD2, sizeof(kEdges_b57_0AD2) / sizeof(kEdges_b57_0AD2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AD5[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AD5 = {57u, 0x8AD5u, 0x0AD5u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0AD5, sizeof(kEdges_b57_0AD5) / sizeof(kEdges_b57_0AD5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0ADE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AE0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0ADE = {57u, 0x8ADEu, 0x0ADEu, 0x0002u, 1u, nullptr, 0u, kEdges_b57_0ADE, sizeof(kEdges_b57_0ADE) / sizeof(kEdges_b57_0ADE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AE0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F0u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8AE3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AE0 = {57u, 0x8AE0u, 0x0AE0u, 0xC5F0u, 2u, nullptr, 0u, kEdges_b57_0AE0, sizeof(kEdges_b57_0AE0) / sizeof(kEdges_b57_0AE0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AE3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AE5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AE3 = {57u, 0x8AE3u, 0x0AE3u, 0x0069u, 1u, nullptr, 0u, kEdges_b57_0AE3, sizeof(kEdges_b57_0AE3) / sizeof(kEdges_b57_0AE3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AE5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8AE8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AE5 = {57u, 0x8AE5u, 0x0AE5u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0AE5, sizeof(kEdges_b57_0AE5) / sizeof(kEdges_b57_0AE5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AE8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AEAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AE8 = {57u, 0x8AE8u, 0x0AE8u, 0x00D0u, 1u, nullptr, 0u, kEdges_b57_0AE8, sizeof(kEdges_b57_0AE8) / sizeof(kEdges_b57_0AE8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AEA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AEDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AEA = {57u, 0x8AEAu, 0x0AEAu, 0x069Eu, 2u, nullptr, 0u, kEdges_b57_0AEA, sizeof(kEdges_b57_0AEA) / sizeof(kEdges_b57_0AEA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AED[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AED = {57u, 0x8AEDu, 0x0AEDu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0AED, sizeof(kEdges_b57_0AED) / sizeof(kEdges_b57_0AED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AF3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AF5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AF3 = {57u, 0x8AF3u, 0x0AF3u, 0x00B4u, 1u, nullptr, 0u, kEdges_b57_0AF3, sizeof(kEdges_b57_0AF3) / sizeof(kEdges_b57_0AF3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AF5[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8AFCu, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 57, 0x8AF7u, "V13 exact flag-provenance hard exclusion", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AF5 = {57u, 0x8AF5u, 0x0AF5u, 0x8AFCu, 1u, nullptr, 0u, kEdges_b57_0AF5, sizeof(kEdges_b57_0AF5) / sizeof(kEdges_b57_0AF5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AFA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AFCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AFA = {57u, 0x8AFAu, 0x0AFAu, 0x00B1u, 1u, nullptr, 0u, kEdges_b57_0AFA, sizeof(kEdges_b57_0AFA) / sizeof(kEdges_b57_0AFA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AFC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8AFFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AFC = {57u, 0x8AFCu, 0x0AFCu, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_0AFC, sizeof(kEdges_b57_0AFC) / sizeof(kEdges_b57_0AFC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0AFF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAAAu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8B02u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0AFF = {57u, 0x8AFFu, 0x0AFFu, 0xCAAAu, 2u, nullptr, 0u, kEdges_b57_0AFF, sizeof(kEdges_b57_0AFF) / sizeof(kEdges_b57_0AFF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B02[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B02 = {57u, 0x8B02u, 0x0B02u, 0xE456u, 2u, nullptr, 0u, kEdges_b57_0B02, sizeof(kEdges_b57_0B02) / sizeof(kEdges_b57_0B02[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B0B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B0Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B0B = {57u, 0x8B0Bu, 0x0B0Bu, 0x00B9u, 1u, nullptr, 0u, kEdges_b57_0B0B, sizeof(kEdges_b57_0B0B) / sizeof(kEdges_b57_0B0B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B0D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8B10u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B0D = {57u, 0x8B0Du, 0x0B0Du, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0B0D, sizeof(kEdges_b57_0B0D) / sizeof(kEdges_b57_0B0D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B10[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B12u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B10 = {57u, 0x8B10u, 0x0B10u, 0x0063u, 1u, nullptr, 0u, kEdges_b57_0B10, sizeof(kEdges_b57_0B10) / sizeof(kEdges_b57_0B10[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B12[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8B15u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B12 = {57u, 0x8B12u, 0x0B12u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0B12, sizeof(kEdges_b57_0B12) / sizeof(kEdges_b57_0B12[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B15[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B17u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B15 = {57u, 0x8B15u, 0x0B15u, 0x0012u, 1u, nullptr, 0u, kEdges_b57_0B15, sizeof(kEdges_b57_0B15) / sizeof(kEdges_b57_0B15[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B17[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B17 = {57u, 0x8B17u, 0x0B17u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_0B17, sizeof(kEdges_b57_0B17) / sizeof(kEdges_b57_0B17[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B24[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xFA03u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8B27u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B24 = {57u, 0x8B24u, 0x0B24u, 0xFA03u, 2u, nullptr, 0u, kEdges_b57_0B24, sizeof(kEdges_b57_0B24) / sizeof(kEdges_b57_0B24[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B27[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B29u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B27 = {57u, 0x8B27u, 0x0B27u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0B27, sizeof(kEdges_b57_0B27) / sizeof(kEdges_b57_0B27[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B29[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B29 = {57u, 0x8B29u, 0x0B29u, 0x00E0u, 1u, nullptr, 0u, kEdges_b57_0B29, sizeof(kEdges_b57_0B29) / sizeof(kEdges_b57_0B29[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B2B[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8B2Fu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B2B = {57u, 0x8B2Bu, 0x0B2Bu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0B2B, sizeof(kEdges_b57_0B2B) / sizeof(kEdges_b57_0B2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B2F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B31u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B2F = {57u, 0x8B2Fu, 0x0B2Fu, 0x0003u, 1u, nullptr, 0u, kEdges_b57_0B2F, sizeof(kEdges_b57_0B2F) / sizeof(kEdges_b57_0B2F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B31[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B34u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B31 = {57u, 0x8B31u, 0x0B31u, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_0B31, sizeof(kEdges_b57_0B31) / sizeof(kEdges_b57_0B31[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B34[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B36u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B34 = {57u, 0x8B34u, 0x0B34u, 0x0090u, 1u, nullptr, 0u, kEdges_b57_0B34, sizeof(kEdges_b57_0B34) / sizeof(kEdges_b57_0B34[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B36[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B39u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B36 = {57u, 0x8B36u, 0x0B36u, 0x060Cu, 2u, nullptr, 0u, kEdges_b57_0B36, sizeof(kEdges_b57_0B36) / sizeof(kEdges_b57_0B36[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B39[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8B3Cu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B39 = {57u, 0x8B39u, 0x0B39u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0B39, sizeof(kEdges_b57_0B39) / sizeof(kEdges_b57_0B39[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B3C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B3Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B3C = {57u, 0x8B3Cu, 0x0B3Cu, 0x03A8u, 2u, nullptr, 0u, kEdges_b57_0B3C, sizeof(kEdges_b57_0B3C) / sizeof(kEdges_b57_0B3C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B3F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B41u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8B39u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B3F = {57u, 0x8B3Fu, 0x0B3Fu, 0x8B39u, 1u, nullptr, 0u, kEdges_b57_0B3F, sizeof(kEdges_b57_0B3F) / sizeof(kEdges_b57_0B3F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B41[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B43u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B41 = {57u, 0x8B41u, 0x0B41u, 0x007Fu, 1u, nullptr, 0u, kEdges_b57_0B41, sizeof(kEdges_b57_0B41) / sizeof(kEdges_b57_0B41[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B43[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8B46u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B43 = {57u, 0x8B43u, 0x0B43u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_0B43, sizeof(kEdges_b57_0B43) / sizeof(kEdges_b57_0B43[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B46[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B49u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B46 = {57u, 0x8B46u, 0x0B46u, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_0B46, sizeof(kEdges_b57_0B46) / sizeof(kEdges_b57_0B46[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B49[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B4Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B49 = {57u, 0x8B49u, 0x0B49u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_0B49, sizeof(kEdges_b57_0B49) / sizeof(kEdges_b57_0B49[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B4C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B4Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B4C = {57u, 0x8B4Cu, 0x0B4Cu, 0x05DEu, 2u, nullptr, 0u, kEdges_b57_0B4C, sizeof(kEdges_b57_0B4C) / sizeof(kEdges_b57_0B4C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B4F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B52u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B4F = {57u, 0x8B4Fu, 0x0B4Fu, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_0B4F, sizeof(kEdges_b57_0B4F) / sizeof(kEdges_b57_0B4F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B52[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B55u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B52 = {57u, 0x8B52u, 0x0B52u, 0x060Cu, 2u, nullptr, 0u, kEdges_b57_0B52, sizeof(kEdges_b57_0B52) / sizeof(kEdges_b57_0B52[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B55[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B58u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B55 = {57u, 0x8B55u, 0x0B55u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0B55, sizeof(kEdges_b57_0B55) / sizeof(kEdges_b57_0B55[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B58[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B5Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B58 = {57u, 0x8B58u, 0x0B58u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_0B58, sizeof(kEdges_b57_0B58) / sizeof(kEdges_b57_0B58[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B5B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B5Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B5B = {57u, 0x8B5Bu, 0x0B5Bu, 0u, 0u, nullptr, 0u, kEdges_b57_0B5B, sizeof(kEdges_b57_0B5B) / sizeof(kEdges_b57_0B5B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B5C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B5Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B5C = {57u, 0x8B5Cu, 0x0B5Cu, 0x0010u, 1u, nullptr, 0u, kEdges_b57_0B5C, sizeof(kEdges_b57_0B5C) / sizeof(kEdges_b57_0B5C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B5E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B61u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B5E = {57u, 0x8B5Eu, 0x0B5Eu, 0x0486u, 2u, nullptr, 0u, kEdges_b57_0B5E, sizeof(kEdges_b57_0B5E) / sizeof(kEdges_b57_0B5E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B61[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B64u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B61 = {57u, 0x8B61u, 0x0B61u, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_0B61, sizeof(kEdges_b57_0B61) / sizeof(kEdges_b57_0B61[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B64[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8B67u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B64 = {57u, 0x8B64u, 0x0B64u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0B64, sizeof(kEdges_b57_0B64) / sizeof(kEdges_b57_0B64[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B67[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B6Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B67 = {57u, 0x8B67u, 0x0B67u, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_0B67, sizeof(kEdges_b57_0B67) / sizeof(kEdges_b57_0B67[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B6A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B6Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B6A = {57u, 0x8B6Au, 0x0B6Au, 0x03A0u, 2u, nullptr, 0u, kEdges_b57_0B6A, sizeof(kEdges_b57_0B6A) / sizeof(kEdges_b57_0B6A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B6D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B6Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8B64u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B6D = {57u, 0x8B6Du, 0x0B6Du, 0x8B64u, 1u, nullptr, 0u, kEdges_b57_0B6D, sizeof(kEdges_b57_0B6D) / sizeof(kEdges_b57_0B6D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B6F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B71u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B6F = {57u, 0x8B6Fu, 0x0B6Fu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0B6F, sizeof(kEdges_b57_0B6F) / sizeof(kEdges_b57_0B6F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B71[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B71 = {57u, 0x8B71u, 0x0B71u, 0x069Du, 2u, nullptr, 0u, kEdges_b57_0B71, sizeof(kEdges_b57_0B71) / sizeof(kEdges_b57_0B71[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B74[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B77u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B74 = {57u, 0x8B74u, 0x0B74u, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_0B74, sizeof(kEdges_b57_0B74) / sizeof(kEdges_b57_0B74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B77[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B79u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B77 = {57u, 0x8B77u, 0x0B77u, 0x00FAu, 1u, nullptr, 0u, kEdges_b57_0B77, sizeof(kEdges_b57_0B77) / sizeof(kEdges_b57_0B77[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B79[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF95Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B79 = {57u, 0x8B79u, 0x0B79u, 0xF95Au, 2u, nullptr, 0u, kEdges_b57_0B79, sizeof(kEdges_b57_0B79) / sizeof(kEdges_b57_0B79[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B8C[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B8C = {57u, 0x8B8Cu, 0x0B8Cu, 0u, 0u, nullptr, 0u, kEdges_b57_0B8C, sizeof(kEdges_b57_0B8C) / sizeof(kEdges_b57_0B8C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B93[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B95u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B93 = {57u, 0x8B93u, 0x0B93u, 0x006Bu, 1u, nullptr, 0u, kEdges_b57_0B93, sizeof(kEdges_b57_0B93) / sizeof(kEdges_b57_0B93[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B95[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8B98u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B95 = {57u, 0x8B95u, 0x0B95u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0B95, sizeof(kEdges_b57_0B95) / sizeof(kEdges_b57_0B95[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B98[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B9Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B98 = {57u, 0x8B98u, 0x0B98u, 0x00D0u, 1u, nullptr, 0u, kEdges_b57_0B98, sizeof(kEdges_b57_0B98) / sizeof(kEdges_b57_0B98[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B9A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8B9Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B9A = {57u, 0x8B9Au, 0x0B9Au, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0B9A, sizeof(kEdges_b57_0B9A) / sizeof(kEdges_b57_0B9A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B9D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8B9Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B9D = {57u, 0x8B9Du, 0x0B9Du, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0B9D, sizeof(kEdges_b57_0B9D) / sizeof(kEdges_b57_0B9D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0B9F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BA2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0B9F = {57u, 0x8B9Fu, 0x0B9Fu, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_0B9F, sizeof(kEdges_b57_0B9F) / sizeof(kEdges_b57_0B9F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BA2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BA4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BA2 = {57u, 0x8BA2u, 0x0BA2u, 0x00C3u, 1u, nullptr, 0u, kEdges_b57_0BA2, sizeof(kEdges_b57_0BA2) / sizeof(kEdges_b57_0BA2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BA4[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BA4 = {57u, 0x8BA4u, 0x0BA4u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0BA4, sizeof(kEdges_b57_0BA4) / sizeof(kEdges_b57_0BA4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BB3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BB5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BB3 = {57u, 0x8BB3u, 0x0BB3u, 0x0002u, 1u, nullptr, 0u, kEdges_b57_0BB3, sizeof(kEdges_b57_0BB3) / sizeof(kEdges_b57_0BB3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BB5[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BB5 = {57u, 0x8BB5u, 0x0BB5u, 0xC5F0u, 2u, nullptr, 0u, kEdges_b57_0BB5, sizeof(kEdges_b57_0BB5) / sizeof(kEdges_b57_0BB5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BC5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xFA03u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8BC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BC5 = {57u, 0x8BC5u, 0x0BC5u, 0xFA03u, 2u, nullptr, 0u, kEdges_b57_0BC5, sizeof(kEdges_b57_0BC5) / sizeof(kEdges_b57_0BC5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BC8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BCAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BC8 = {57u, 0x8BC8u, 0x0BC8u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0BC8, sizeof(kEdges_b57_0BC8) / sizeof(kEdges_b57_0BC8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BCA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BCCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BCA = {57u, 0x8BCAu, 0x0BCAu, 0x00E5u, 1u, nullptr, 0u, kEdges_b57_0BCA, sizeof(kEdges_b57_0BCA) / sizeof(kEdges_b57_0BCA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BCC[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8BD0u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BCC = {57u, 0x8BCCu, 0x0BCCu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0BCC, sizeof(kEdges_b57_0BCC) / sizeof(kEdges_b57_0BCC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BD0[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8B2Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BD0 = {57u, 0x8BD0u, 0x0BD0u, 0x8B2Fu, 2u, nullptr, 0u, kEdges_b57_0BD0, sizeof(kEdges_b57_0BD0) / sizeof(kEdges_b57_0BD0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BD6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xFA03u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8BD9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BD6 = {57u, 0x8BD6u, 0x0BD6u, 0xFA03u, 2u, nullptr, 0u, kEdges_b57_0BD6, sizeof(kEdges_b57_0BD6) / sizeof(kEdges_b57_0BD6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BD9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BDBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BD9 = {57u, 0x8BD9u, 0x0BD9u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0BD9, sizeof(kEdges_b57_0BD9) / sizeof(kEdges_b57_0BD9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BDB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BDDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BDB = {57u, 0x8BDBu, 0x0BDBu, 0x00E8u, 1u, nullptr, 0u, kEdges_b57_0BDB, sizeof(kEdges_b57_0BDB) / sizeof(kEdges_b57_0BDB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BDD[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8BE1u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BDD = {57u, 0x8BDDu, 0x0BDDu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0BDD, sizeof(kEdges_b57_0BDD) / sizeof(kEdges_b57_0BDD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BE1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BE3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BE1 = {57u, 0x8BE1u, 0x0BE1u, 0x0007u, 1u, nullptr, 0u, kEdges_b57_0BE1, sizeof(kEdges_b57_0BE1) / sizeof(kEdges_b57_0BE1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BE3[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8B31u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BE3 = {57u, 0x8BE3u, 0x0BE3u, 0x8B31u, 2u, nullptr, 0u, kEdges_b57_0BE3, sizeof(kEdges_b57_0BE3) / sizeof(kEdges_b57_0BE3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BE9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BEBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BE9 = {57u, 0x8BE9u, 0x0BE9u, 0x00B8u, 1u, nullptr, 0u, kEdges_b57_0BE9, sizeof(kEdges_b57_0BE9) / sizeof(kEdges_b57_0BE9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BEB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BEEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BEB = {57u, 0x8BEBu, 0x0BEBu, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_0BEB, sizeof(kEdges_b57_0BEB) / sizeof(kEdges_b57_0BEB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BEE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xFA03u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8BF1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BEE = {57u, 0x8BEEu, 0x0BEEu, 0xFA03u, 2u, nullptr, 0u, kEdges_b57_0BEE, sizeof(kEdges_b57_0BEE) / sizeof(kEdges_b57_0BEE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BF1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BF3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BF1 = {57u, 0x8BF1u, 0x0BF1u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0BF1, sizeof(kEdges_b57_0BF1) / sizeof(kEdges_b57_0BF1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BF3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BF5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BF3 = {57u, 0x8BF3u, 0x0BF3u, 0x00EBu, 1u, nullptr, 0u, kEdges_b57_0BF3, sizeof(kEdges_b57_0BF3) / sizeof(kEdges_b57_0BF3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BF5[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8BF9u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BF5 = {57u, 0x8BF5u, 0x0BF5u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0BF5, sizeof(kEdges_b57_0BF5) / sizeof(kEdges_b57_0BF5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BF9[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8BFCu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BF9 = {57u, 0x8BF9u, 0x0BF9u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0BF9, sizeof(kEdges_b57_0BF9) / sizeof(kEdges_b57_0BF9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BFC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8BFFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BFC = {57u, 0x8BFCu, 0x0BFCu, 0x03A8u, 2u, nullptr, 0u, kEdges_b57_0BFC, sizeof(kEdges_b57_0BFC) / sizeof(kEdges_b57_0BFC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0BFF[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C01u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8BF9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0BFF = {57u, 0x8BFFu, 0x0BFFu, 0x8BF9u, 1u, nullptr, 0u, kEdges_b57_0BFF, sizeof(kEdges_b57_0BFF) / sizeof(kEdges_b57_0BFF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C01[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C03u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C01 = {57u, 0x8C01u, 0x0C01u, 0x007Fu, 1u, nullptr, 0u, kEdges_b57_0C01, sizeof(kEdges_b57_0C01) / sizeof(kEdges_b57_0C01[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C03[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8C06u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C03 = {57u, 0x8C03u, 0x0C03u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_0C03, sizeof(kEdges_b57_0C03) / sizeof(kEdges_b57_0C03[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C06[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C08u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C06 = {57u, 0x8C06u, 0x0C06u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_0C06, sizeof(kEdges_b57_0C06) / sizeof(kEdges_b57_0C06[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C08[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C0Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C08 = {57u, 0x8C08u, 0x0C08u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_0C08, sizeof(kEdges_b57_0C08) / sizeof(kEdges_b57_0C08[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C0B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C0Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C0B = {57u, 0x8C0Bu, 0x0C0Bu, 0x008Eu, 1u, nullptr, 0u, kEdges_b57_0C0B, sizeof(kEdges_b57_0C0B) / sizeof(kEdges_b57_0C0B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C0D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C10u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C0D = {57u, 0x8C0Du, 0x0C0Du, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_0C0D, sizeof(kEdges_b57_0C0D) / sizeof(kEdges_b57_0C0D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C10[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C13u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C10 = {57u, 0x8C10u, 0x0C10u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_0C10, sizeof(kEdges_b57_0C10) / sizeof(kEdges_b57_0C10[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C13[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C16u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C13 = {57u, 0x8C13u, 0x0C13u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0C13, sizeof(kEdges_b57_0C13) / sizeof(kEdges_b57_0C13[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C16[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8B58u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C16 = {57u, 0x8C16u, 0x0C16u, 0x8B58u, 2u, nullptr, 0u, kEdges_b57_0C16, sizeof(kEdges_b57_0C16) / sizeof(kEdges_b57_0C16[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C1C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xFA03u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8C1Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C1C = {57u, 0x8C1Cu, 0x0C1Cu, 0xFA03u, 2u, nullptr, 0u, kEdges_b57_0C1C, sizeof(kEdges_b57_0C1C) / sizeof(kEdges_b57_0C1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C1F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C21u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C1F = {57u, 0x8C1Fu, 0x0C1Fu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0C1F, sizeof(kEdges_b57_0C1F) / sizeof(kEdges_b57_0C1F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C21[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C23u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C21 = {57u, 0x8C21u, 0x0C21u, 0x00D3u, 1u, nullptr, 0u, kEdges_b57_0C21, sizeof(kEdges_b57_0C21) / sizeof(kEdges_b57_0C21[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C23[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8C27u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C23 = {57u, 0x8C23u, 0x0C23u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0C23, sizeof(kEdges_b57_0C23) / sizeof(kEdges_b57_0C23[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C27[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8C2Au, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C27 = {57u, 0x8C27u, 0x0C27u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0C27, sizeof(kEdges_b57_0C27) / sizeof(kEdges_b57_0C27[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C2A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C2Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C2A = {57u, 0x8C2Au, 0x0C2Au, 0x03A8u, 2u, nullptr, 0u, kEdges_b57_0C2A, sizeof(kEdges_b57_0C2A) / sizeof(kEdges_b57_0C2A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C2D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C2Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8C27u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C2D = {57u, 0x8C2Du, 0x0C2Du, 0x8C27u, 1u, nullptr, 0u, kEdges_b57_0C2D, sizeof(kEdges_b57_0C2D) / sizeof(kEdges_b57_0C2D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C2F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C31u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C2F = {57u, 0x8C2Fu, 0x0C2Fu, 0x00D2u, 1u, nullptr, 0u, kEdges_b57_0C2F, sizeof(kEdges_b57_0C2F) / sizeof(kEdges_b57_0C2F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C31[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C34u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C31 = {57u, 0x8C31u, 0x0C31u, 0x03AAu, 2u, nullptr, 0u, kEdges_b57_0C31, sizeof(kEdges_b57_0C31) / sizeof(kEdges_b57_0C31[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C34[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C36u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C34 = {57u, 0x8C34u, 0x0C34u, 0x00A0u, 1u, nullptr, 0u, kEdges_b57_0C34, sizeof(kEdges_b57_0C34) / sizeof(kEdges_b57_0C34[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C36[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8DE9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8C39u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C36 = {57u, 0x8C36u, 0x0C36u, 0x8DE9u, 2u, nullptr, 0u, kEdges_b57_0C36, sizeof(kEdges_b57_0C36) / sizeof(kEdges_b57_0C36[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C39[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C3Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C39 = {57u, 0x8C39u, 0x0C39u, 0x007Fu, 1u, nullptr, 0u, kEdges_b57_0C39, sizeof(kEdges_b57_0C39) / sizeof(kEdges_b57_0C39[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C3B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8C3Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C3B = {57u, 0x8C3Bu, 0x0C3Bu, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_0C3B, sizeof(kEdges_b57_0C3B) / sizeof(kEdges_b57_0C3B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C3E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C40u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C3E = {57u, 0x8C3Eu, 0x0C3Eu, 0x0007u, 1u, nullptr, 0u, kEdges_b57_0C3E, sizeof(kEdges_b57_0C3E) / sizeof(kEdges_b57_0C3E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C40[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C43u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C40 = {57u, 0x8C40u, 0x0C40u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_0C40, sizeof(kEdges_b57_0C40) / sizeof(kEdges_b57_0C40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C43[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C45u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C43 = {57u, 0x8C43u, 0x0C43u, 0x001Eu, 1u, nullptr, 0u, kEdges_b57_0C43, sizeof(kEdges_b57_0C43) / sizeof(kEdges_b57_0C43[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C45[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C48u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C45 = {57u, 0x8C45u, 0x0C45u, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_0C45, sizeof(kEdges_b57_0C45) / sizeof(kEdges_b57_0C45[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C48[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C4Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C48 = {57u, 0x8C48u, 0x0C48u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_0C48, sizeof(kEdges_b57_0C48) / sizeof(kEdges_b57_0C48[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C4B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C4Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C4B = {57u, 0x8C4Bu, 0x0C4Bu, 0u, 0u, nullptr, 0u, kEdges_b57_0C4B, sizeof(kEdges_b57_0C4B) / sizeof(kEdges_b57_0C4B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C4C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C4Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C4C = {57u, 0x8C4Cu, 0x0C4Cu, 0x0010u, 1u, nullptr, 0u, kEdges_b57_0C4C, sizeof(kEdges_b57_0C4C) / sizeof(kEdges_b57_0C4C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C4E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C51u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C4E = {57u, 0x8C4Eu, 0x0C4Eu, 0x0486u, 2u, nullptr, 0u, kEdges_b57_0C4E, sizeof(kEdges_b57_0C4E) / sizeof(kEdges_b57_0C4E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C51[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C54u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C51 = {57u, 0x8C51u, 0x0C51u, 0x060Cu, 2u, nullptr, 0u, kEdges_b57_0C51, sizeof(kEdges_b57_0C51) / sizeof(kEdges_b57_0C51[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C54[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C57u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C54 = {57u, 0x8C54u, 0x0C54u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0C54, sizeof(kEdges_b57_0C54) / sizeof(kEdges_b57_0C54[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C57[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C5Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C57 = {57u, 0x8C57u, 0x0C57u, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_0C57, sizeof(kEdges_b57_0C57) / sizeof(kEdges_b57_0C57[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C5A[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8C5Du, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C5A = {57u, 0x8C5Au, 0x0C5Au, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0C5A, sizeof(kEdges_b57_0C5A) / sizeof(kEdges_b57_0C5A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C5D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C60u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C5D = {57u, 0x8C5Du, 0x0C5Du, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_0C5D, sizeof(kEdges_b57_0C5D) / sizeof(kEdges_b57_0C5D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C60[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C62u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C60 = {57u, 0x8C60u, 0x0C60u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0C60, sizeof(kEdges_b57_0C60) / sizeof(kEdges_b57_0C60[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C62[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C64u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C62 = {57u, 0x8C62u, 0x0C62u, 0x0040u, 1u, nullptr, 0u, kEdges_b57_0C62, sizeof(kEdges_b57_0C62) / sizeof(kEdges_b57_0C62[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C64[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD430u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8C67u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C64 = {57u, 0x8C64u, 0x0C64u, 0xD430u, 2u, nullptr, 0u, kEdges_b57_0C64, sizeof(kEdges_b57_0C64) / sizeof(kEdges_b57_0C64[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C67[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C6Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C67 = {57u, 0x8C67u, 0x0C67u, 0x03A0u, 2u, nullptr, 0u, kEdges_b57_0C67, sizeof(kEdges_b57_0C67) / sizeof(kEdges_b57_0C67[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C6A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C6Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8C5Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C6A = {57u, 0x8C6Au, 0x0C6Au, 0x8C5Au, 1u, nullptr, 0u, kEdges_b57_0C6A, sizeof(kEdges_b57_0C6A) / sizeof(kEdges_b57_0C6A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C6C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C6Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C6C = {57u, 0x8C6Cu, 0x0C6Cu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0C6C, sizeof(kEdges_b57_0C6C) / sizeof(kEdges_b57_0C6C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C6E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C71u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C6E = {57u, 0x8C6Eu, 0x0C6Eu, 0x069Du, 2u, nullptr, 0u, kEdges_b57_0C6E, sizeof(kEdges_b57_0C6E) / sizeof(kEdges_b57_0C6E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C71[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C71 = {57u, 0x8C71u, 0x0C71u, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_0C71, sizeof(kEdges_b57_0C71) / sizeof(kEdges_b57_0C71[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C74[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C77u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C74 = {57u, 0x8C74u, 0x0C74u, 0x0682u, 2u, nullptr, 0u, kEdges_b57_0C74, sizeof(kEdges_b57_0C74) / sizeof(kEdges_b57_0C74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C77[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD6F1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8C7Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C77 = {57u, 0x8C77u, 0x0C77u, 0xD6F1u, 2u, nullptr, 0u, kEdges_b57_0C77, sizeof(kEdges_b57_0C77) / sizeof(kEdges_b57_0C77[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C7A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C7Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C7A = {57u, 0x8C7Au, 0x0C7Au, 0x00D2u, 1u, nullptr, 0u, kEdges_b57_0C7A, sizeof(kEdges_b57_0C7A) / sizeof(kEdges_b57_0C7A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C7C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C7Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C7C = {57u, 0x8C7Cu, 0x0C7Cu, 0x03AAu, 2u, nullptr, 0u, kEdges_b57_0C7C, sizeof(kEdges_b57_0C7C) / sizeof(kEdges_b57_0C7C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C7F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C81u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C7F = {57u, 0x8C7Fu, 0x0C7Fu, 0x00D2u, 1u, nullptr, 0u, kEdges_b57_0C7F, sizeof(kEdges_b57_0C7F) / sizeof(kEdges_b57_0C7F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C81[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8C84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C81 = {57u, 0x8C81u, 0x0C81u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0C81, sizeof(kEdges_b57_0C81) / sizeof(kEdges_b57_0C81[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C84[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C86u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C84 = {57u, 0x8C84u, 0x0C84u, 0x00E7u, 1u, nullptr, 0u, kEdges_b57_0C84, sizeof(kEdges_b57_0C84) / sizeof(kEdges_b57_0C84[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C86[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8C89u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C86 = {57u, 0x8C86u, 0x0C86u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0C86, sizeof(kEdges_b57_0C86) / sizeof(kEdges_b57_0C86[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C89[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C8Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C89 = {57u, 0x8C89u, 0x0C89u, 0x00D4u, 1u, nullptr, 0u, kEdges_b57_0C89, sizeof(kEdges_b57_0C89) / sizeof(kEdges_b57_0C89[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C8B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C8Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C8B = {57u, 0x8C8Bu, 0x0C8Bu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0C8B, sizeof(kEdges_b57_0C8B) / sizeof(kEdges_b57_0C8B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C8D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C8Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C8D = {57u, 0x8C8Du, 0x0C8Du, 0x0057u, 1u, nullptr, 0u, kEdges_b57_0C8D, sizeof(kEdges_b57_0C8D) / sizeof(kEdges_b57_0C8D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C8F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C91u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C8F = {57u, 0x8C8Fu, 0x0C8Fu, 0x0009u, 1u, nullptr, 0u, kEdges_b57_0C8F, sizeof(kEdges_b57_0C8F) / sizeof(kEdges_b57_0C8F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C91[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C93u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C91 = {57u, 0x8C91u, 0x0C91u, 0x0070u, 1u, nullptr, 0u, kEdges_b57_0C91, sizeof(kEdges_b57_0C91) / sizeof(kEdges_b57_0C91[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C93[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C95u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C93 = {57u, 0x8C93u, 0x0C93u, 0x000Au, 1u, nullptr, 0u, kEdges_b57_0C93, sizeof(kEdges_b57_0C93) / sizeof(kEdges_b57_0C93[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C95[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C97u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C95 = {57u, 0x8C95u, 0x0C95u, 0x000Au, 1u, nullptr, 0u, kEdges_b57_0C95, sizeof(kEdges_b57_0C95) / sizeof(kEdges_b57_0C95[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C97[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF8BDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8C9Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C97 = {57u, 0x8C97u, 0x0C97u, 0xF8BDu, 2u, nullptr, 0u, kEdges_b57_0C97, sizeof(kEdges_b57_0C97) / sizeof(kEdges_b57_0C97[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C9A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C9Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C9A = {57u, 0x8C9Au, 0x0C9Au, 0x0011u, 1u, nullptr, 0u, kEdges_b57_0C9A, sizeof(kEdges_b57_0C9A) / sizeof(kEdges_b57_0C9A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C9C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8C9Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C9C = {57u, 0x8C9Cu, 0x0C9Cu, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_0C9C, sizeof(kEdges_b57_0C9C) / sizeof(kEdges_b57_0C9C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0C9F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0C9F = {57u, 0x8C9Fu, 0x0C9Fu, 0x0004u, 1u, nullptr, 0u, kEdges_b57_0C9F, sizeof(kEdges_b57_0C9F) / sizeof(kEdges_b57_0C9F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CA1[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE60Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CA4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CA1 = {57u, 0x8CA1u, 0x0CA1u, 0xE60Eu, 2u, nullptr, 0u, kEdges_b57_0CA1, sizeof(kEdges_b57_0CA1) / sizeof(kEdges_b57_0CA1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CA4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CA6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CA4 = {57u, 0x8CA4u, 0x0CA4u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0CA4, sizeof(kEdges_b57_0CA4) / sizeof(kEdges_b57_0CA4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CA6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CA8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CA6 = {57u, 0x8CA6u, 0x0CA6u, 0x0040u, 1u, nullptr, 0u, kEdges_b57_0CA6, sizeof(kEdges_b57_0CA6) / sizeof(kEdges_b57_0CA6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CA8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD430u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CA8 = {57u, 0x8CA8u, 0x0CA8u, 0xD430u, 2u, nullptr, 0u, kEdges_b57_0CA8, sizeof(kEdges_b57_0CA8) / sizeof(kEdges_b57_0CA8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CAB[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8CAEu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CAB = {57u, 0x8CABu, 0x0CABu, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0CAB, sizeof(kEdges_b57_0CAB) / sizeof(kEdges_b57_0CAB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CAE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CB1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CAE = {57u, 0x8CAEu, 0x0CAEu, 0x0490u, 2u, nullptr, 0u, kEdges_b57_0CAE, sizeof(kEdges_b57_0CAE) / sizeof(kEdges_b57_0CAE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CB1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CB3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CB1 = {57u, 0x8CB1u, 0x0CB1u, 0x00D0u, 1u, nullptr, 0u, kEdges_b57_0CB1, sizeof(kEdges_b57_0CB1) / sizeof(kEdges_b57_0CB1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CB3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CB5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8C89u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CB3 = {57u, 0x8CB3u, 0x0CB3u, 0x8C89u, 1u, nullptr, 0u, kEdges_b57_0CB3, sizeof(kEdges_b57_0CB3) / sizeof(kEdges_b57_0CB3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CB5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CB8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CB5 = {57u, 0x8CB5u, 0x0CB5u, 0x03E5u, 2u, nullptr, 0u, kEdges_b57_0CB5, sizeof(kEdges_b57_0CB5) / sizeof(kEdges_b57_0CB5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CB8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CBAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8CA4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CB8 = {57u, 0x8CB8u, 0x0CB8u, 0x8CA4u, 1u, nullptr, 0u, kEdges_b57_0CB8, sizeof(kEdges_b57_0CB8) / sizeof(kEdges_b57_0CB8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CBA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CBCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CBA = {57u, 0x8CBAu, 0x0CBAu, 0x00A1u, 1u, nullptr, 0u, kEdges_b57_0CBA, sizeof(kEdges_b57_0CBA) / sizeof(kEdges_b57_0CBA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CBC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8DE9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CBFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CBC = {57u, 0x8CBCu, 0x0CBCu, 0x8DE9u, 2u, nullptr, 0u, kEdges_b57_0CBC, sizeof(kEdges_b57_0CBC) / sizeof(kEdges_b57_0CBC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CBF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x91A5u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CC2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CBF = {57u, 0x8CBFu, 0x0CBFu, 0x91A5u, 2u, nullptr, 0u, kEdges_b57_0CBF, sizeof(kEdges_b57_0CBF) / sizeof(kEdges_b57_0CBF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CC2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CC4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CC2 = {57u, 0x8CC2u, 0x0CC2u, 0x0080u, 1u, nullptr, 0u, kEdges_b57_0CC2, sizeof(kEdges_b57_0CC2) / sizeof(kEdges_b57_0CC2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CC4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x91D8u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CC7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CC4 = {57u, 0x8CC4u, 0x0CC4u, 0x91D8u, 2u, nullptr, 0u, kEdges_b57_0CC4, sizeof(kEdges_b57_0CC4) / sizeof(kEdges_b57_0CC4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CC7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CC9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CC7 = {57u, 0x8CC7u, 0x0CC7u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0CC7, sizeof(kEdges_b57_0CC7) / sizeof(kEdges_b57_0CC7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CC9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x919Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CCCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CC9 = {57u, 0x8CC9u, 0x0CC9u, 0x919Au, 2u, nullptr, 0u, kEdges_b57_0CC9, sizeof(kEdges_b57_0CC9) / sizeof(kEdges_b57_0CC9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CCC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE005u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CCFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CCC = {57u, 0x8CCCu, 0x0CCCu, 0xE005u, 2u, nullptr, 0u, kEdges_b57_0CCC, sizeof(kEdges_b57_0CCC) / sizeof(kEdges_b57_0CCC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CCF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CD1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CCF = {57u, 0x8CCFu, 0x0CCFu, 0x003Cu, 1u, nullptr, 0u, kEdges_b57_0CCF, sizeof(kEdges_b57_0CCF) / sizeof(kEdges_b57_0CCF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CD1[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CD4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CD1 = {57u, 0x8CD1u, 0x0CD1u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b57_0CD1, sizeof(kEdges_b57_0CD1) / sizeof(kEdges_b57_0CD1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CD4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CD6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CD4 = {57u, 0x8CD4u, 0x0CD4u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0CD4, sizeof(kEdges_b57_0CD4) / sizeof(kEdges_b57_0CD4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CD6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CD9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CD6 = {57u, 0x8CD6u, 0x0CD6u, 0x069Fu, 2u, nullptr, 0u, kEdges_b57_0CD6, sizeof(kEdges_b57_0CD6) / sizeof(kEdges_b57_0CD6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CD9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CDBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CD9 = {57u, 0x8CD9u, 0x0CD9u, 0x006Cu, 1u, nullptr, 0u, kEdges_b57_0CD9, sizeof(kEdges_b57_0CD9) / sizeof(kEdges_b57_0CD9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CDB[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8CDFu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CDB = {57u, 0x8CDBu, 0x0CDBu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0CDB, sizeof(kEdges_b57_0CDB) / sizeof(kEdges_b57_0CDB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CDF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8DEEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CE2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CDF = {57u, 0x8CDFu, 0x0CDFu, 0x8DEEu, 2u, nullptr, 0u, kEdges_b57_0CDF, sizeof(kEdges_b57_0CDF) / sizeof(kEdges_b57_0CDF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CE2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CE4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CE2 = {57u, 0x8CE2u, 0x0CE2u, 0x006Du, 1u, nullptr, 0u, kEdges_b57_0CE2, sizeof(kEdges_b57_0CE2) / sizeof(kEdges_b57_0CE2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CE4[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8CE8u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CE4 = {57u, 0x8CE4u, 0x0CE4u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0CE4, sizeof(kEdges_b57_0CE4) / sizeof(kEdges_b57_0CE4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CE8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8DEEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CEBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CE8 = {57u, 0x8CE8u, 0x0CE8u, 0x8DEEu, 2u, nullptr, 0u, kEdges_b57_0CE8, sizeof(kEdges_b57_0CE8) / sizeof(kEdges_b57_0CE8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CEB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CEDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CEB = {57u, 0x8CEBu, 0x0CEBu, 0x00A2u, 1u, nullptr, 0u, kEdges_b57_0CEB, sizeof(kEdges_b57_0CEB) / sizeof(kEdges_b57_0CEB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CED[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8DE9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CF0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CED = {57u, 0x8CEDu, 0x0CEDu, 0x8DE9u, 2u, nullptr, 0u, kEdges_b57_0CED, sizeof(kEdges_b57_0CED) / sizeof(kEdges_b57_0CED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CF0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CF2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CF0 = {57u, 0x8CF0u, 0x0CF0u, 0x0048u, 1u, nullptr, 0u, kEdges_b57_0CF0, sizeof(kEdges_b57_0CF0) / sizeof(kEdges_b57_0CF0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CF2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE005u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CF5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CF2 = {57u, 0x8CF2u, 0x0CF2u, 0xE005u, 2u, nullptr, 0u, kEdges_b57_0CF2, sizeof(kEdges_b57_0CF2) / sizeof(kEdges_b57_0CF2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CF5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CF6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CF5 = {57u, 0x8CF5u, 0x0CF5u, 0u, 0u, nullptr, 0u, kEdges_b57_0CF5, sizeof(kEdges_b57_0CF5) / sizeof(kEdges_b57_0CF5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CF6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CF8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8CF2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CF6 = {57u, 0x8CF6u, 0x0CF6u, 0x8CF2u, 1u, nullptr, 0u, kEdges_b57_0CF6, sizeof(kEdges_b57_0CF6) / sizeof(kEdges_b57_0CF6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CF8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CFAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CF8 = {57u, 0x8CF8u, 0x0CF8u, 0x00A4u, 1u, nullptr, 0u, kEdges_b57_0CF8, sizeof(kEdges_b57_0CF8) / sizeof(kEdges_b57_0CF8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CFA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8DE9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8CFDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CFA = {57u, 0x8CFAu, 0x0CFAu, 0x8DE9u, 2u, nullptr, 0u, kEdges_b57_0CFA, sizeof(kEdges_b57_0CFA) / sizeof(kEdges_b57_0CFA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CFD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8CFFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CFD = {57u, 0x8CFDu, 0x0CFDu, 0x0007u, 1u, nullptr, 0u, kEdges_b57_0CFD, sizeof(kEdges_b57_0CFD) / sizeof(kEdges_b57_0CFD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0CFF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE0FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D02u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0CFF = {57u, 0x8CFFu, 0x0CFFu, 0xE0FDu, 2u, nullptr, 0u, kEdges_b57_0CFF, sizeof(kEdges_b57_0CFF) / sizeof(kEdges_b57_0CFF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D02[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D04u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D02 = {57u, 0x8D02u, 0x0D02u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0D02, sizeof(kEdges_b57_0D02) / sizeof(kEdges_b57_0D02[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D04[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D06u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D04 = {57u, 0x8D04u, 0x0D04u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_0D04, sizeof(kEdges_b57_0D04) / sizeof(kEdges_b57_0D04[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D06[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D09u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D06 = {57u, 0x8D06u, 0x0D06u, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_0D06, sizeof(kEdges_b57_0D06) / sizeof(kEdges_b57_0D06[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D09[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D0Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D09 = {57u, 0x8D09u, 0x0D09u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0D09, sizeof(kEdges_b57_0D09) / sizeof(kEdges_b57_0D09[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D0B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D0Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D0B = {57u, 0x8D0Bu, 0x0D0Bu, 0x060Du, 2u, nullptr, 0u, kEdges_b57_0D0B, sizeof(kEdges_b57_0D0B) / sizeof(kEdges_b57_0D0B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D0E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D10u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D0E = {57u, 0x8D0Eu, 0x0D0Eu, 0x00FEu, 1u, nullptr, 0u, kEdges_b57_0D0E, sizeof(kEdges_b57_0D0E) / sizeof(kEdges_b57_0D0E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D10[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D13u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D10 = {57u, 0x8D10u, 0x0D10u, 0x0624u, 2u, nullptr, 0u, kEdges_b57_0D10, sizeof(kEdges_b57_0D10) / sizeof(kEdges_b57_0D10[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D13[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D15u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D13 = {57u, 0x8D13u, 0x0D13u, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_0D13, sizeof(kEdges_b57_0D13) / sizeof(kEdges_b57_0D13[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D15[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D15 = {57u, 0x8D15u, 0x0D15u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_0D15, sizeof(kEdges_b57_0D15) / sizeof(kEdges_b57_0D15[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D18[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D1Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D18 = {57u, 0x8D18u, 0x0D18u, 0x00FEu, 1u, nullptr, 0u, kEdges_b57_0D18, sizeof(kEdges_b57_0D18) / sizeof(kEdges_b57_0D18[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D1A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D1Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D1A = {57u, 0x8D1Au, 0x0D1Au, 0x00EDu, 1u, nullptr, 0u, kEdges_b57_0D1A, sizeof(kEdges_b57_0D1A) / sizeof(kEdges_b57_0D1A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D1C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D1Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D1C = {57u, 0x8D1Cu, 0x0D1Cu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0D1C, sizeof(kEdges_b57_0D1C) / sizeof(kEdges_b57_0D1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D1E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D20u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D1E = {57u, 0x8D1Eu, 0x0D1Eu, 0x00EBu, 1u, nullptr, 0u, kEdges_b57_0D1E, sizeof(kEdges_b57_0D1E) / sizeof(kEdges_b57_0D1E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D20[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D22u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D20 = {57u, 0x8D20u, 0x0D20u, 0x0005u, 1u, nullptr, 0u, kEdges_b57_0D20, sizeof(kEdges_b57_0D20) / sizeof(kEdges_b57_0D20[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D22[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEE9Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D25u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D22 = {57u, 0x8D22u, 0x0D22u, 0xEE9Au, 2u, nullptr, 0u, kEdges_b57_0D22, sizeof(kEdges_b57_0D22) / sizeof(kEdges_b57_0D22[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D25[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE4D3u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D25 = {57u, 0x8D25u, 0x0D25u, 0xE4D3u, 2u, nullptr, 0u, kEdges_b57_0D25, sizeof(kEdges_b57_0D25) / sizeof(kEdges_b57_0D25[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D28[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE005u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D28 = {57u, 0x8D28u, 0x0D28u, 0xE005u, 2u, nullptr, 0u, kEdges_b57_0D28, sizeof(kEdges_b57_0D28) / sizeof(kEdges_b57_0D28[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D2B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D2Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D2B = {57u, 0x8D2Bu, 0x0D2Bu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0D2B, sizeof(kEdges_b57_0D2B) / sizeof(kEdges_b57_0D2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D2D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D30u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D2D = {57u, 0x8D2Du, 0x0D2Du, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0D2D, sizeof(kEdges_b57_0D2D) / sizeof(kEdges_b57_0D2D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D30[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D32u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D30 = {57u, 0x8D30u, 0x0D30u, 0x00B4u, 1u, nullptr, 0u, kEdges_b57_0D30, sizeof(kEdges_b57_0D30) / sizeof(kEdges_b57_0D30[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D32[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D34u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8D18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D32 = {57u, 0x8D32u, 0x0D32u, 0x8D18u, 1u, nullptr, 0u, kEdges_b57_0D32, sizeof(kEdges_b57_0D32) / sizeof(kEdges_b57_0D32[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D34[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D37u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D34 = {57u, 0x8D34u, 0x0D34u, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_0D34, sizeof(kEdges_b57_0D34) / sizeof(kEdges_b57_0D34[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D37[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D39u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8D09u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D37 = {57u, 0x8D37u, 0x0D37u, 0x8D09u, 1u, nullptr, 0u, kEdges_b57_0D37, sizeof(kEdges_b57_0D37) / sizeof(kEdges_b57_0D37[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D39[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x91A5u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D3Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D39 = {57u, 0x8D39u, 0x0D39u, 0x91A5u, 2u, nullptr, 0u, kEdges_b57_0D39, sizeof(kEdges_b57_0D39) / sizeof(kEdges_b57_0D39[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D3C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D3Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D3C = {57u, 0x8D3Cu, 0x0D3Cu, 0x000Au, 1u, nullptr, 0u, kEdges_b57_0D3C, sizeof(kEdges_b57_0D3C) / sizeof(kEdges_b57_0D3C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D3E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D40u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D3E = {57u, 0x8D3Eu, 0x0D3Eu, 0x0004u, 1u, nullptr, 0u, kEdges_b57_0D3E, sizeof(kEdges_b57_0D3E) / sizeof(kEdges_b57_0D3E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D40[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D43u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D40 = {57u, 0x8D40u, 0x0D40u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_0D40, sizeof(kEdges_b57_0D40) / sizeof(kEdges_b57_0D40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D43[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D45u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D43 = {57u, 0x8D43u, 0x0D43u, 0x000Au, 1u, nullptr, 0u, kEdges_b57_0D43, sizeof(kEdges_b57_0D43) / sizeof(kEdges_b57_0D43[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D45[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D47u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D45 = {57u, 0x8D45u, 0x0D45u, 0x0004u, 1u, nullptr, 0u, kEdges_b57_0D45, sizeof(kEdges_b57_0D45) / sizeof(kEdges_b57_0D45[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D47[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE60Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D4Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D47 = {57u, 0x8D47u, 0x0D47u, 0xE60Eu, 2u, nullptr, 0u, kEdges_b57_0D47, sizeof(kEdges_b57_0D47) / sizeof(kEdges_b57_0D47[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D4A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE005u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D4Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D4A = {57u, 0x8D4Au, 0x0D4Au, 0xE005u, 2u, nullptr, 0u, kEdges_b57_0D4A, sizeof(kEdges_b57_0D4A) / sizeof(kEdges_b57_0D4A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D4D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D50u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D4D = {57u, 0x8D4Du, 0x0D4Du, 0x0490u, 2u, nullptr, 0u, kEdges_b57_0D4D, sizeof(kEdges_b57_0D4D) / sizeof(kEdges_b57_0D4D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D50[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D52u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D50 = {57u, 0x8D50u, 0x0D50u, 0x0004u, 1u, nullptr, 0u, kEdges_b57_0D50, sizeof(kEdges_b57_0D50) / sizeof(kEdges_b57_0D50[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D52[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D54u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8D43u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D52 = {57u, 0x8D52u, 0x0D52u, 0x8D43u, 1u, nullptr, 0u, kEdges_b57_0D52, sizeof(kEdges_b57_0D52) / sizeof(kEdges_b57_0D52[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D54[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D56u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D54 = {57u, 0x8D54u, 0x0D54u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0D54, sizeof(kEdges_b57_0D54) / sizeof(kEdges_b57_0D54[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D56[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D59u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D56 = {57u, 0x8D56u, 0x0D56u, 0x03C1u, 2u, nullptr, 0u, kEdges_b57_0D56, sizeof(kEdges_b57_0D56) / sizeof(kEdges_b57_0D56[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D59[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D5Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D59 = {57u, 0x8D59u, 0x0D59u, 0x0088u, 1u, nullptr, 0u, kEdges_b57_0D59, sizeof(kEdges_b57_0D59) / sizeof(kEdges_b57_0D59[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D5B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x91D8u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D5Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D5B = {57u, 0x8D5Bu, 0x0D5Bu, 0x91D8u, 2u, nullptr, 0u, kEdges_b57_0D5B, sizeof(kEdges_b57_0D5B) / sizeof(kEdges_b57_0D5B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D5E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D60u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D5E = {57u, 0x8D5Eu, 0x0D5Eu, 0x0063u, 1u, nullptr, 0u, kEdges_b57_0D5E, sizeof(kEdges_b57_0D5E) / sizeof(kEdges_b57_0D5E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D60[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D62u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D60 = {57u, 0x8D60u, 0x0D60u, 0x00DCu, 1u, nullptr, 0u, kEdges_b57_0D60, sizeof(kEdges_b57_0D60) / sizeof(kEdges_b57_0D60[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D62[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D64u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D62 = {57u, 0x8D62u, 0x0D62u, 0x00BEu, 1u, nullptr, 0u, kEdges_b57_0D62, sizeof(kEdges_b57_0D62) / sizeof(kEdges_b57_0D62[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D64[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D67u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D64 = {57u, 0x8D64u, 0x0D64u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0D64, sizeof(kEdges_b57_0D64) / sizeof(kEdges_b57_0D64[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D67[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D69u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D67 = {57u, 0x8D67u, 0x0D67u, 0x00BCu, 1u, nullptr, 0u, kEdges_b57_0D67, sizeof(kEdges_b57_0D67) / sizeof(kEdges_b57_0D67[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D69[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8DE9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D6Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D69 = {57u, 0x8D69u, 0x0D69u, 0x8DE9u, 2u, nullptr, 0u, kEdges_b57_0D69, sizeof(kEdges_b57_0D69) / sizeof(kEdges_b57_0D69[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D6C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D6Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D6C = {57u, 0x8D6Cu, 0x0D6Cu, 0x0030u, 1u, nullptr, 0u, kEdges_b57_0D6C, sizeof(kEdges_b57_0D6C) / sizeof(kEdges_b57_0D6C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D6E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D71u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D6E = {57u, 0x8D6Eu, 0x0D6Eu, 0x04D5u, 2u, nullptr, 0u, kEdges_b57_0D6E, sizeof(kEdges_b57_0D6E) / sizeof(kEdges_b57_0D6E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D71[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D73u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D71 = {57u, 0x8D71u, 0x0D71u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0D71, sizeof(kEdges_b57_0D71) / sizeof(kEdges_b57_0D71[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D73[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D76u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D73 = {57u, 0x8D73u, 0x0D73u, 0x0490u, 2u, nullptr, 0u, kEdges_b57_0D73, sizeof(kEdges_b57_0D73) / sizeof(kEdges_b57_0D73[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D76[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D79u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D76 = {57u, 0x8D76u, 0x0D76u, 0x05D2u, 2u, nullptr, 0u, kEdges_b57_0D76, sizeof(kEdges_b57_0D76) / sizeof(kEdges_b57_0D76[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D79[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D7Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D79 = {57u, 0x8D79u, 0x0D79u, 0x05D2u, 2u, nullptr, 0u, kEdges_b57_0D79, sizeof(kEdges_b57_0D79) / sizeof(kEdges_b57_0D79[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D7C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D7Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D7C = {57u, 0x8D7Cu, 0x0D7Cu, 0x8E04u, 2u, nullptr, 0u, kEdges_b57_0D7C, sizeof(kEdges_b57_0D7C) / sizeof(kEdges_b57_0D7C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D7F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D81u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8DAFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D7F = {57u, 0x8D7Fu, 0x0D7Fu, 0x8DAFu, 1u, nullptr, 0u, kEdges_b57_0D7F, sizeof(kEdges_b57_0D7F) / sizeof(kEdges_b57_0D7F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D81[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D81 = {57u, 0x8D81u, 0x0D81u, 0x05E9u, 2u, nullptr, 0u, kEdges_b57_0D81, sizeof(kEdges_b57_0D81) / sizeof(kEdges_b57_0D81[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D84[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D85u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D84 = {57u, 0x8D84u, 0x0D84u, 0u, 0u, nullptr, 0u, kEdges_b57_0D84, sizeof(kEdges_b57_0D84) / sizeof(kEdges_b57_0D84[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D85[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D88u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D85 = {57u, 0x8D85u, 0x0D85u, 0x8E04u, 2u, nullptr, 0u, kEdges_b57_0D85, sizeof(kEdges_b57_0D85) / sizeof(kEdges_b57_0D85[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D88[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D8Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D88 = {57u, 0x8D88u, 0x0D88u, 0x03D8u, 2u, nullptr, 0u, kEdges_b57_0D88, sizeof(kEdges_b57_0D88) / sizeof(kEdges_b57_0D88[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D8B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D8Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D8B = {57u, 0x8D8Bu, 0x0D8Bu, 0u, 0u, nullptr, 0u, kEdges_b57_0D8B, sizeof(kEdges_b57_0D8B) / sizeof(kEdges_b57_0D8B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D8C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D8Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D8C = {57u, 0x8D8Cu, 0x0D8Cu, 0x05D2u, 2u, nullptr, 0u, kEdges_b57_0D8C, sizeof(kEdges_b57_0D8C) / sizeof(kEdges_b57_0D8C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D8F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D91u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D8F = {57u, 0x8D8Fu, 0x0D8Fu, 0x000Au, 1u, nullptr, 0u, kEdges_b57_0D8F, sizeof(kEdges_b57_0D8F) / sizeof(kEdges_b57_0D8F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D91[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D93u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D91 = {57u, 0x8D91u, 0x0D91u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0D91, sizeof(kEdges_b57_0D91) / sizeof(kEdges_b57_0D91[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D93[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE60Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D96u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D93 = {57u, 0x8D93u, 0x0D93u, 0xE60Eu, 2u, nullptr, 0u, kEdges_b57_0D93, sizeof(kEdges_b57_0D93) / sizeof(kEdges_b57_0D93[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D96[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE005u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8D99u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D96 = {57u, 0x8D96u, 0x0D96u, 0xE005u, 2u, nullptr, 0u, kEdges_b57_0D96, sizeof(kEdges_b57_0D96) / sizeof(kEdges_b57_0D96[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D99[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D9Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D99 = {57u, 0x8D99u, 0x0D99u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0D99, sizeof(kEdges_b57_0D99) / sizeof(kEdges_b57_0D99[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D9B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8D9Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D9B = {57u, 0x8D9Bu, 0x0D9Bu, 0x0490u, 2u, nullptr, 0u, kEdges_b57_0D9B, sizeof(kEdges_b57_0D9B) / sizeof(kEdges_b57_0D9B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0D9E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0D9E = {57u, 0x8D9Eu, 0x0D9Eu, 0x0486u, 2u, nullptr, 0u, kEdges_b57_0D9E, sizeof(kEdges_b57_0D9E) / sizeof(kEdges_b57_0D9E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DA1[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DA3u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8DA5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DA1 = {57u, 0x8DA1u, 0x0DA1u, 0x8DA5u, 1u, nullptr, 0u, kEdges_b57_0DA1, sizeof(kEdges_b57_0DA1) / sizeof(kEdges_b57_0DA1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DA3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DA5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DA3 = {57u, 0x8DA3u, 0x0DA3u, 0x0002u, 1u, nullptr, 0u, kEdges_b57_0DA3, sizeof(kEdges_b57_0DA3) / sizeof(kEdges_b57_0DA3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DA5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x919Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8DA8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DA5 = {57u, 0x8DA5u, 0x0DA5u, 0x919Au, 2u, nullptr, 0u, kEdges_b57_0DA5, sizeof(kEdges_b57_0DA5) / sizeof(kEdges_b57_0DA5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DA8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DA8 = {57u, 0x8DA8u, 0x0DA8u, 0x05E9u, 2u, nullptr, 0u, kEdges_b57_0DA8, sizeof(kEdges_b57_0DA8) / sizeof(kEdges_b57_0DA8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DAB[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DADu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8D8Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DAB = {57u, 0x8DABu, 0x0DABu, 0x8D8Fu, 1u, nullptr, 0u, kEdges_b57_0DAB, sizeof(kEdges_b57_0DAB) / sizeof(kEdges_b57_0DAB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DAD[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DAFu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8D79u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DAD = {57u, 0x8DADu, 0x0DADu, 0x8D79u, 1u, nullptr, 0u, kEdges_b57_0DAD, sizeof(kEdges_b57_0DAD) / sizeof(kEdges_b57_0DAD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DAF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DB1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DAF = {57u, 0x8DAFu, 0x0DAFu, 0x00F0u, 1u, nullptr, 0u, kEdges_b57_0DAF, sizeof(kEdges_b57_0DAF) / sizeof(kEdges_b57_0DAF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DB1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DB3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DB1 = {57u, 0x8DB1u, 0x0DB1u, 0x00DCu, 1u, nullptr, 0u, kEdges_b57_0DB1, sizeof(kEdges_b57_0DB1) / sizeof(kEdges_b57_0DB1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DB3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA3Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8DB6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DB3 = {57u, 0x8DB3u, 0x0DB3u, 0xCA3Du, 2u, nullptr, 0u, kEdges_b57_0DB3, sizeof(kEdges_b57_0DB3) / sizeof(kEdges_b57_0DB3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DB6[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8DBAu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DB6 = {57u, 0x8DB6u, 0x0DB6u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0DB6, sizeof(kEdges_b57_0DB6) / sizeof(kEdges_b57_0DB6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DBA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DBCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DBA = {57u, 0x8DBAu, 0x0DBAu, 0x00E4u, 1u, nullptr, 0u, kEdges_b57_0DBA, sizeof(kEdges_b57_0DBA) / sizeof(kEdges_b57_0DBA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DBC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8DBFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DBC = {57u, 0x8DBCu, 0x0DBCu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0DBC, sizeof(kEdges_b57_0DBC) / sizeof(kEdges_b57_0DBC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DBF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DC1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DBF = {57u, 0x8DBFu, 0x0DBFu, 0x00E7u, 1u, nullptr, 0u, kEdges_b57_0DBF, sizeof(kEdges_b57_0DBF) / sizeof(kEdges_b57_0DBF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DC1[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8DC4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DC1 = {57u, 0x8DC1u, 0x0DC1u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0DC1, sizeof(kEdges_b57_0DC1) / sizeof(kEdges_b57_0DC1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DC4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DC6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DC4 = {57u, 0x8DC4u, 0x0DC4u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0DC4, sizeof(kEdges_b57_0DC4) / sizeof(kEdges_b57_0DC4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DC6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DC9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DC6 = {57u, 0x8DC6u, 0x0DC6u, 0x03A0u, 2u, nullptr, 0u, kEdges_b57_0DC6, sizeof(kEdges_b57_0DC6) / sizeof(kEdges_b57_0DC6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DC9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8DCCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DC9 = {57u, 0x8DC9u, 0x0DC9u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b57_0DC9, sizeof(kEdges_b57_0DC9) / sizeof(kEdges_b57_0DC9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DCC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9BFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8DCFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DCC = {57u, 0x8DCCu, 0x0DCCu, 0xC9BFu, 2u, nullptr, 0u, kEdges_b57_0DCC, sizeof(kEdges_b57_0DCC) / sizeof(kEdges_b57_0DCC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DCF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA89u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8DD2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DCF = {57u, 0x8DCFu, 0x0DCFu, 0xCA89u, 2u, nullptr, 0u, kEdges_b57_0DCF, sizeof(kEdges_b57_0DCF) / sizeof(kEdges_b57_0DCF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DD2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DD4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DD2 = {57u, 0x8DD2u, 0x0DD2u, 0x006Eu, 1u, nullptr, 0u, kEdges_b57_0DD2, sizeof(kEdges_b57_0DD2) / sizeof(kEdges_b57_0DD2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DD4[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8DD8u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DD4 = {57u, 0x8DD4u, 0x0DD4u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0DD4, sizeof(kEdges_b57_0DD4) / sizeof(kEdges_b57_0DD4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DD8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DDAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DD8 = {57u, 0x8DD8u, 0x0DD8u, 0x005Au, 1u, nullptr, 0u, kEdges_b57_0DD8, sizeof(kEdges_b57_0DD8) / sizeof(kEdges_b57_0DD8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DDA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8DDDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DDA = {57u, 0x8DDAu, 0x0DDAu, 0xC5F6u, 2u, nullptr, 0u, kEdges_b57_0DDA, sizeof(kEdges_b57_0DDA) / sizeof(kEdges_b57_0DDA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DDD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DDFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DDD = {57u, 0x8DDDu, 0x0DDDu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0DDD, sizeof(kEdges_b57_0DDD) / sizeof(kEdges_b57_0DDD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DDF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DE2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DDF = {57u, 0x8DDFu, 0x0DDFu, 0x069Fu, 2u, nullptr, 0u, kEdges_b57_0DDF, sizeof(kEdges_b57_0DDF) / sizeof(kEdges_b57_0DDF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DE2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DE4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DE2 = {57u, 0x8DE2u, 0x0DE2u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0DE2, sizeof(kEdges_b57_0DE2) / sizeof(kEdges_b57_0DE2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DE4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DE6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DE4 = {57u, 0x8DE4u, 0x0DE4u, 0x00F0u, 1u, nullptr, 0u, kEdges_b57_0DE4, sizeof(kEdges_b57_0DE4) / sizeof(kEdges_b57_0DE4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DE6[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DE6 = {57u, 0x8DE6u, 0x0DE6u, 0xE456u, 2u, nullptr, 0u, kEdges_b57_0DE6, sizeof(kEdges_b57_0DE6) / sizeof(kEdges_b57_0DE6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DE9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DEBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DE9 = {57u, 0x8DE9u, 0x0DE9u, 0x000Au, 1u, nullptr, 0u, kEdges_b57_0DE9, sizeof(kEdges_b57_0DE9) / sizeof(kEdges_b57_0DE9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DEB[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DEB = {57u, 0x8DEBu, 0x0DEBu, 0xE522u, 2u, nullptr, 0u, kEdges_b57_0DEB, sizeof(kEdges_b57_0DEB) / sizeof(kEdges_b57_0DEB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DEE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DF0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DEE = {57u, 0x8DEEu, 0x0DEEu, 0x005Au, 1u, nullptr, 0u, kEdges_b57_0DEE, sizeof(kEdges_b57_0DEE) / sizeof(kEdges_b57_0DEE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DF0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8DF3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DF0 = {57u, 0x8DF0u, 0x0DF0u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b57_0DF0, sizeof(kEdges_b57_0DF0) / sizeof(kEdges_b57_0DF0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DF3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DF5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DF3 = {57u, 0x8DF3u, 0x0DF3u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0DF3, sizeof(kEdges_b57_0DF3) / sizeof(kEdges_b57_0DF3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DF5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DF8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DF5 = {57u, 0x8DF5u, 0x0DF5u, 0x069Fu, 2u, nullptr, 0u, kEdges_b57_0DF5, sizeof(kEdges_b57_0DF5) / sizeof(kEdges_b57_0DF5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DF8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8DFAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DF8 = {57u, 0x8DF8u, 0x0DF8u, 0x006Fu, 1u, nullptr, 0u, kEdges_b57_0DF8, sizeof(kEdges_b57_0DF8) / sizeof(kEdges_b57_0DF8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DFA[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8DFEu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DFA = {57u, 0x8DFAu, 0x0DFAu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0DFA, sizeof(kEdges_b57_0DFA) / sizeof(kEdges_b57_0DFA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0DFE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8E00u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0DFE = {57u, 0x8DFEu, 0x0DFEu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_0DFE, sizeof(kEdges_b57_0DFE) / sizeof(kEdges_b57_0DFE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0E00[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8E03u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0E00 = {57u, 0x8E00u, 0x0E00u, 0x069Fu, 2u, nullptr, 0u, kEdges_b57_0E00, sizeof(kEdges_b57_0E00) / sizeof(kEdges_b57_0E00[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0E03[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0E03 = {57u, 0x8E03u, 0x0E03u, 0u, 0u, nullptr, 0u, kEdges_b57_0E03, sizeof(kEdges_b57_0E03) / sizeof(kEdges_b57_0E03[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0E31[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8E33u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0E31 = {57u, 0x8E31u, 0x0E31u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0E31, sizeof(kEdges_b57_0E31) / sizeof(kEdges_b57_0E31[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0E33[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8416u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8E36u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0E33 = {57u, 0x8E33u, 0x0E33u, 0x8416u, 2u, nullptr, 0u, kEdges_b57_0E33, sizeof(kEdges_b57_0E33) / sizeof(kEdges_b57_0E33[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0E36[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8E38u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0E36 = {57u, 0x8E36u, 0x0E36u, 0x0013u, 1u, nullptr, 0u, kEdges_b57_0E36, sizeof(kEdges_b57_0E36) / sizeof(kEdges_b57_0E36[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0E38[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0E38 = {57u, 0x8E38u, 0x0E38u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_0E38, sizeof(kEdges_b57_0E38) / sizeof(kEdges_b57_0E38[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0EE7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8EE9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0EE7 = {57u, 0x8EE7u, 0x0EE7u, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_0EE7, sizeof(kEdges_b57_0EE7) / sizeof(kEdges_b57_0EE7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0EE9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8EEBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0EE9 = {57u, 0x8EE9u, 0x0EE9u, 0x00DCu, 1u, nullptr, 0u, kEdges_b57_0EE9, sizeof(kEdges_b57_0EE9) / sizeof(kEdges_b57_0EE9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0EEB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xFA5Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8EEEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0EEB = {57u, 0x8EEBu, 0x0EEBu, 0xFA5Fu, 2u, nullptr, 0u, kEdges_b57_0EEB, sizeof(kEdges_b57_0EEB) / sizeof(kEdges_b57_0EEB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0EEE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8EF0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0EEE = {57u, 0x8EEEu, 0x0EEEu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_0EEE, sizeof(kEdges_b57_0EEE) / sizeof(kEdges_b57_0EEE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0EF0[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8EF3u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0EF0 = {57u, 0x8EF0u, 0x0EF0u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0EF0, sizeof(kEdges_b57_0EF0) / sizeof(kEdges_b57_0EF0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0EF3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8EF6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0EF3 = {57u, 0x8EF3u, 0x0EF3u, 0x03A8u, 2u, nullptr, 0u, kEdges_b57_0EF3, sizeof(kEdges_b57_0EF3) / sizeof(kEdges_b57_0EF3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0EF6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8EF8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8EF0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0EF6 = {57u, 0x8EF6u, 0x0EF6u, 0x8EF0u, 1u, nullptr, 0u, kEdges_b57_0EF6, sizeof(kEdges_b57_0EF6) / sizeof(kEdges_b57_0EF6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0EF8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8EFAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0EF8 = {57u, 0x8EF8u, 0x0EF8u, 0x0039u, 1u, nullptr, 0u, kEdges_b57_0EF8, sizeof(kEdges_b57_0EF8) / sizeof(kEdges_b57_0EF8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0EFA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8EFDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0EFA = {57u, 0x8EFAu, 0x0EFAu, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_0EFA, sizeof(kEdges_b57_0EFA) / sizeof(kEdges_b57_0EFA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0EFD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F00u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0EFD = {57u, 0x8EFDu, 0x0EFDu, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_0EFD, sizeof(kEdges_b57_0EFD) / sizeof(kEdges_b57_0EFD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F00[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F03u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F00 = {57u, 0x8F00u, 0x0F00u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0F00, sizeof(kEdges_b57_0F00) / sizeof(kEdges_b57_0F00[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F03[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F06u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F03 = {57u, 0x8F03u, 0x0F03u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_0F03, sizeof(kEdges_b57_0F03) / sizeof(kEdges_b57_0F03[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F06[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F09u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F06 = {57u, 0x8F06u, 0x0F06u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_0F06, sizeof(kEdges_b57_0F06) / sizeof(kEdges_b57_0F06[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F09[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F0Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F09 = {57u, 0x8F09u, 0x0F09u, 0x0057u, 1u, nullptr, 0u, kEdges_b57_0F09, sizeof(kEdges_b57_0F09) / sizeof(kEdges_b57_0F09[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F0B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F0Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F0B = {57u, 0x8F0Bu, 0x0F0Bu, 0x046Fu, 2u, nullptr, 0u, kEdges_b57_0F0B, sizeof(kEdges_b57_0F0B) / sizeof(kEdges_b57_0F0B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F0E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F11u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F0E = {57u, 0x8F0Eu, 0x0F0Eu, 0x063Eu, 2u, nullptr, 0u, kEdges_b57_0F0E, sizeof(kEdges_b57_0F0E) / sizeof(kEdges_b57_0F0E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F11[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8F14u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F11 = {57u, 0x8F11u, 0x0F11u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0F11, sizeof(kEdges_b57_0F11) / sizeof(kEdges_b57_0F11[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F14[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F17u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F14 = {57u, 0x8F14u, 0x0F14u, 0x063Eu, 2u, nullptr, 0u, kEdges_b57_0F14, sizeof(kEdges_b57_0F14) / sizeof(kEdges_b57_0F14[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F17[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F19u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F17 = {57u, 0x8F17u, 0x0F17u, 0x0010u, 1u, nullptr, 0u, kEdges_b57_0F17, sizeof(kEdges_b57_0F17) / sizeof(kEdges_b57_0F17[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F19[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F1Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F19 = {57u, 0x8F19u, 0x0F19u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_0F19, sizeof(kEdges_b57_0F19) / sizeof(kEdges_b57_0F19[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F1C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F1Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F1C = {57u, 0x8F1Cu, 0x0F1Cu, 0x03A0u, 2u, nullptr, 0u, kEdges_b57_0F1C, sizeof(kEdges_b57_0F1C) / sizeof(kEdges_b57_0F1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F1F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F21u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8F11u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F1F = {57u, 0x8F1Fu, 0x0F1Fu, 0x8F11u, 1u, nullptr, 0u, kEdges_b57_0F1F, sizeof(kEdges_b57_0F1F) / sizeof(kEdges_b57_0F1F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F21[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F23u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F21 = {57u, 0x8F21u, 0x0F21u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0F21, sizeof(kEdges_b57_0F21) / sizeof(kEdges_b57_0F21[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F23[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F26u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F23 = {57u, 0x8F23u, 0x0F23u, 0x0642u, 2u, nullptr, 0u, kEdges_b57_0F23, sizeof(kEdges_b57_0F23) / sizeof(kEdges_b57_0F23[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F26[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD6F1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F29u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F26 = {57u, 0x8F26u, 0x0F26u, 0xD6F1u, 2u, nullptr, 0u, kEdges_b57_0F26, sizeof(kEdges_b57_0F26) / sizeof(kEdges_b57_0F26[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F29[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F29 = {57u, 0x8F29u, 0x0F29u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_0F29, sizeof(kEdges_b57_0F29) / sizeof(kEdges_b57_0F29[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F2B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD430u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F2Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F2B = {57u, 0x8F2Bu, 0x0F2Bu, 0xD430u, 2u, nullptr, 0u, kEdges_b57_0F2B, sizeof(kEdges_b57_0F2B) / sizeof(kEdges_b57_0F2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F2E[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8F31u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F2E = {57u, 0x8F2Eu, 0x0F2Eu, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0F2E, sizeof(kEdges_b57_0F2E) / sizeof(kEdges_b57_0F2E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F31[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F34u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F31 = {57u, 0x8F31u, 0x0F31u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0F31, sizeof(kEdges_b57_0F31) / sizeof(kEdges_b57_0F31[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F34[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F36u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F34 = {57u, 0x8F34u, 0x0F34u, 0x00B4u, 1u, nullptr, 0u, kEdges_b57_0F34, sizeof(kEdges_b57_0F34) / sizeof(kEdges_b57_0F34[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F36[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F38u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8F29u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F36 = {57u, 0x8F36u, 0x0F36u, 0x8F29u, 1u, nullptr, 0u, kEdges_b57_0F36, sizeof(kEdges_b57_0F36) / sizeof(kEdges_b57_0F36[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F38[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDFB9u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F3Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F38 = {57u, 0x8F38u, 0x0F38u, 0xDFB9u, 2u, nullptr, 0u, kEdges_b57_0F38, sizeof(kEdges_b57_0F38) / sizeof(kEdges_b57_0F38[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F3B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA3Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F3Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F3B = {57u, 0x8F3Bu, 0x0F3Bu, 0xCA3Du, 2u, nullptr, 0u, kEdges_b57_0F3B, sizeof(kEdges_b57_0F3B) / sizeof(kEdges_b57_0F3B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F3E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F40u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F3E = {57u, 0x8F3Eu, 0x0F3Eu, 0x000Bu, 1u, nullptr, 0u, kEdges_b57_0F3E, sizeof(kEdges_b57_0F3E) / sizeof(kEdges_b57_0F3E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F40[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F42u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F40 = {57u, 0x8F40u, 0x0F40u, 0x00DCu, 1u, nullptr, 0u, kEdges_b57_0F40, sizeof(kEdges_b57_0F40) / sizeof(kEdges_b57_0F40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F42[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F45u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F42 = {57u, 0x8F42u, 0x0F42u, 0x063Du, 2u, nullptr, 0u, kEdges_b57_0F42, sizeof(kEdges_b57_0F42) / sizeof(kEdges_b57_0F42[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F45[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F48u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F45 = {57u, 0x8F45u, 0x0F45u, 0x8EDCu, 2u, nullptr, 0u, kEdges_b57_0F45, sizeof(kEdges_b57_0F45) / sizeof(kEdges_b57_0F45[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F48[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F4Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F48 = {57u, 0x8F48u, 0x0F48u, 0x0080u, 1u, nullptr, 0u, kEdges_b57_0F48, sizeof(kEdges_b57_0F48) / sizeof(kEdges_b57_0F48[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F4A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB94u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F4Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F4A = {57u, 0x8F4Au, 0x0F4Au, 0xDB94u, 2u, nullptr, 0u, kEdges_b57_0F4A, sizeof(kEdges_b57_0F4A) / sizeof(kEdges_b57_0F4A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F4D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F4Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F4D = {57u, 0x8F4Du, 0x0F4Du, 0x0080u, 1u, nullptr, 0u, kEdges_b57_0F4D, sizeof(kEdges_b57_0F4D) / sizeof(kEdges_b57_0F4D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F4F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB94u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F52u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F4F = {57u, 0x8F4Fu, 0x0F4Fu, 0xDB94u, 2u, nullptr, 0u, kEdges_b57_0F4F, sizeof(kEdges_b57_0F4F) / sizeof(kEdges_b57_0F4F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F52[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F54u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F52 = {57u, 0x8F52u, 0x0F52u, 0x0080u, 1u, nullptr, 0u, kEdges_b57_0F52, sizeof(kEdges_b57_0F52) / sizeof(kEdges_b57_0F52[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F54[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB94u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F57u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F54 = {57u, 0x8F54u, 0x0F54u, 0xDB94u, 2u, nullptr, 0u, kEdges_b57_0F54, sizeof(kEdges_b57_0F54) / sizeof(kEdges_b57_0F54[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F57[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F59u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F57 = {57u, 0x8F57u, 0x0F57u, 0x0080u, 1u, nullptr, 0u, kEdges_b57_0F57, sizeof(kEdges_b57_0F57) / sizeof(kEdges_b57_0F57[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F59[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDB94u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F5Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F59 = {57u, 0x8F59u, 0x0F59u, 0xDB94u, 2u, nullptr, 0u, kEdges_b57_0F59, sizeof(kEdges_b57_0F59) / sizeof(kEdges_b57_0F59[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F5C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F5Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F5C = {57u, 0x8F5Cu, 0x0F5Cu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0F5C, sizeof(kEdges_b57_0F5C) / sizeof(kEdges_b57_0F5C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F5E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x89F5u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F61u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F5E = {57u, 0x8F5Eu, 0x0F5Eu, 0x89F5u, 2u, nullptr, 0u, kEdges_b57_0F5E, sizeof(kEdges_b57_0F5E) / sizeof(kEdges_b57_0F5E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F61[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F63u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F61 = {57u, 0x8F61u, 0x0F61u, 0x0097u, 1u, nullptr, 0u, kEdges_b57_0F61, sizeof(kEdges_b57_0F61) / sizeof(kEdges_b57_0F61[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F63[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F66u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F63 = {57u, 0x8F63u, 0x0F63u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0F63, sizeof(kEdges_b57_0F63) / sizeof(kEdges_b57_0F63[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F66[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F69u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F66 = {57u, 0x8F66u, 0x0F66u, 0x06A9u, 2u, nullptr, 0u, kEdges_b57_0F66, sizeof(kEdges_b57_0F66) / sizeof(kEdges_b57_0F66[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F69[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F6Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F69 = {57u, 0x8F69u, 0x0F69u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_0F69, sizeof(kEdges_b57_0F69) / sizeof(kEdges_b57_0F69[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F6C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F6Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F6C = {57u, 0x8F6Cu, 0x0F6Cu, 0x06AAu, 2u, nullptr, 0u, kEdges_b57_0F6C, sizeof(kEdges_b57_0F6C) / sizeof(kEdges_b57_0F6C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F6F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F72u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F6F = {57u, 0x8F6Fu, 0x0F6Fu, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0F6F, sizeof(kEdges_b57_0F6F) / sizeof(kEdges_b57_0F6F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F72[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F72 = {57u, 0x8F72u, 0x0F72u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_0F72, sizeof(kEdges_b57_0F72) / sizeof(kEdges_b57_0F72[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F74[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F77u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F74 = {57u, 0x8F74u, 0x0F74u, 0x0348u, 2u, nullptr, 0u, kEdges_b57_0F74, sizeof(kEdges_b57_0F74) / sizeof(kEdges_b57_0F74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F77[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F79u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F77 = {57u, 0x8F77u, 0x0F77u, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_0F77, sizeof(kEdges_b57_0F77) / sizeof(kEdges_b57_0F77[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F79[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F7Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8F83u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F79 = {57u, 0x8F79u, 0x0F79u, 0x8F83u, 1u, nullptr, 0u, kEdges_b57_0F79, sizeof(kEdges_b57_0F79) / sizeof(kEdges_b57_0F79[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F7B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F7Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F7B = {57u, 0x8F7Bu, 0x0F7Bu, 0u, 0u, nullptr, 0u, kEdges_b57_0F7B, sizeof(kEdges_b57_0F7B) / sizeof(kEdges_b57_0F7B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F7C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F7Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8F74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F7C = {57u, 0x8F7Cu, 0x0F7Cu, 0x8F74u, 1u, nullptr, 0u, kEdges_b57_0F7C, sizeof(kEdges_b57_0F7C) / sizeof(kEdges_b57_0F7C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F7E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F80u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F7E = {57u, 0x8F7Eu, 0x0F7Eu, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_0F7E, sizeof(kEdges_b57_0F7E) / sizeof(kEdges_b57_0F7E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F80[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F83u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F80 = {57u, 0x8F80u, 0x0F80u, 0x034Cu, 2u, nullptr, 0u, kEdges_b57_0F80, sizeof(kEdges_b57_0F80) / sizeof(kEdges_b57_0F80[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F83[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9AE6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F86u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F83 = {57u, 0x8F83u, 0x0F83u, 0x9AE6u, 2u, nullptr, 0u, kEdges_b57_0F83, sizeof(kEdges_b57_0F83) / sizeof(kEdges_b57_0F83[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F86[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9AC4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8F89u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F86 = {57u, 0x8F86u, 0x0F86u, 0x9AC4u, 2u, nullptr, 0u, kEdges_b57_0F86, sizeof(kEdges_b57_0F86) / sizeof(kEdges_b57_0F86[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F89[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F89 = {57u, 0x8F89u, 0x0F89u, 0xE456u, 2u, nullptr, 0u, kEdges_b57_0F89, sizeof(kEdges_b57_0F89) / sizeof(kEdges_b57_0F89[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F95[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x8F98u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F95 = {57u, 0x8F95u, 0x0F95u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_0F95, sizeof(kEdges_b57_0F95) / sizeof(kEdges_b57_0F95[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F98[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F9Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F98 = {57u, 0x8F98u, 0x0F98u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0F98, sizeof(kEdges_b57_0F98) / sizeof(kEdges_b57_0F98[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F9B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F9Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F9B = {57u, 0x8F9Bu, 0x0F9Bu, 0x0077u, 1u, nullptr, 0u, kEdges_b57_0F9B, sizeof(kEdges_b57_0F9B) / sizeof(kEdges_b57_0F9B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F9D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8F9Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x8F95u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F9D = {57u, 0x8F9Du, 0x0F9Du, 0x8F95u, 1u, nullptr, 0u, kEdges_b57_0F9D, sizeof(kEdges_b57_0F9D) / sizeof(kEdges_b57_0F9D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0F9F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0F9F = {57u, 0x8F9Fu, 0x0F9Fu, 0x0030u, 1u, nullptr, 0u, kEdges_b57_0F9F, sizeof(kEdges_b57_0F9F) / sizeof(kEdges_b57_0F9F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FA1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FA4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FA1 = {57u, 0x8FA1u, 0x0FA1u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_0FA1, sizeof(kEdges_b57_0FA1) / sizeof(kEdges_b57_0FA1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FA4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FA6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FA4 = {57u, 0x8FA4u, 0x0FA4u, 0x0053u, 1u, nullptr, 0u, kEdges_b57_0FA4, sizeof(kEdges_b57_0FA4) / sizeof(kEdges_b57_0FA4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FA6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FA9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FA6 = {57u, 0x8FA6u, 0x0FA6u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_0FA6, sizeof(kEdges_b57_0FA6) / sizeof(kEdges_b57_0FA6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FA9[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x827Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FA9 = {57u, 0x8FA9u, 0x0FA9u, 0x827Cu, 2u, nullptr, 0u, kEdges_b57_0FA9, sizeof(kEdges_b57_0FA9) / sizeof(kEdges_b57_0FA9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FBC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FBEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FBC = {57u, 0x8FBCu, 0x0FBCu, 0x0003u, 1u, nullptr, 0u, kEdges_b57_0FBC, sizeof(kEdges_b57_0FBC) / sizeof(kEdges_b57_0FBC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FBE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FC1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FBE = {57u, 0x8FBEu, 0x0FBEu, 0x05DEu, 2u, nullptr, 0u, kEdges_b57_0FBE, sizeof(kEdges_b57_0FBE) / sizeof(kEdges_b57_0FBE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FC1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FC1 = {57u, 0x8FC1u, 0x0FC1u, 0x00A1u, 1u, nullptr, 0u, kEdges_b57_0FC1, sizeof(kEdges_b57_0FC1) / sizeof(kEdges_b57_0FC1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FC3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FC6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FC3 = {57u, 0x8FC3u, 0x0FC3u, 0x05F5u, 2u, nullptr, 0u, kEdges_b57_0FC3, sizeof(kEdges_b57_0FC3) / sizeof(kEdges_b57_0FC3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FC6[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x861Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FC6 = {57u, 0x8FC6u, 0x0FC6u, 0x861Bu, 2u, nullptr, 0u, kEdges_b57_0FC6, sizeof(kEdges_b57_0FC6) / sizeof(kEdges_b57_0FC6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FCF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FD1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FCF = {57u, 0x8FCFu, 0x0FCFu, 0x006Au, 1u, nullptr, 0u, kEdges_b57_0FCF, sizeof(kEdges_b57_0FCF) / sizeof(kEdges_b57_0FCF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FD1[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8FD4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FD1 = {57u, 0x8FD1u, 0x0FD1u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0FD1, sizeof(kEdges_b57_0FD1) / sizeof(kEdges_b57_0FD1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FD4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FD6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FD4 = {57u, 0x8FD4u, 0x0FD4u, 0x00D0u, 1u, nullptr, 0u, kEdges_b57_0FD4, sizeof(kEdges_b57_0FD4) / sizeof(kEdges_b57_0FD4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FD6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8FD9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FD6 = {57u, 0x8FD6u, 0x0FD6u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_0FD6, sizeof(kEdges_b57_0FD6) / sizeof(kEdges_b57_0FD6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FD9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FDBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FD9 = {57u, 0x8FD9u, 0x0FD9u, 0x00BEu, 1u, nullptr, 0u, kEdges_b57_0FD9, sizeof(kEdges_b57_0FD9) / sizeof(kEdges_b57_0FD9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FDB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FDEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FDB = {57u, 0x8FDBu, 0x0FDBu, 0x064Fu, 2u, nullptr, 0u, kEdges_b57_0FDB, sizeof(kEdges_b57_0FDB) / sizeof(kEdges_b57_0FDB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FDE[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FDE = {57u, 0x8FDEu, 0x0FDEu, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_0FDE, sizeof(kEdges_b57_0FDE) / sizeof(kEdges_b57_0FDE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FE4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xFA03u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8FE7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FE4 = {57u, 0x8FE4u, 0x0FE4u, 0xFA03u, 2u, nullptr, 0u, kEdges_b57_0FE4, sizeof(kEdges_b57_0FE4) / sizeof(kEdges_b57_0FE4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FE7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FE9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FE7 = {57u, 0x8FE7u, 0x0FE7u, 0x00B7u, 1u, nullptr, 0u, kEdges_b57_0FE7, sizeof(kEdges_b57_0FE7) / sizeof(kEdges_b57_0FE7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FE9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FEBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FE9 = {57u, 0x8FE9u, 0x0FE9u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0FE9, sizeof(kEdges_b57_0FE9) / sizeof(kEdges_b57_0FE9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FEB[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x8FEFu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FEB = {57u, 0x8FEBu, 0x0FEBu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0FEB, sizeof(kEdges_b57_0FEB) / sizeof(kEdges_b57_0FEB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FEF[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xF95Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FEF = {57u, 0x8FEFu, 0x0FEFu, 0xF95Au, 2u, nullptr, 0u, kEdges_b57_0FEF, sizeof(kEdges_b57_0FEF) / sizeof(kEdges_b57_0FEF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FF5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xFA03u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x8FF8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FF5 = {57u, 0x8FF5u, 0x0FF5u, 0xFA03u, 2u, nullptr, 0u, kEdges_b57_0FF5, sizeof(kEdges_b57_0FF5) / sizeof(kEdges_b57_0FF5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FF8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FFAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FF8 = {57u, 0x8FF8u, 0x0FF8u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_0FF8, sizeof(kEdges_b57_0FF8) / sizeof(kEdges_b57_0FF8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FFA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x8FFCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FFA = {57u, 0x8FFAu, 0x0FFAu, 0x00EFu, 1u, nullptr, 0u, kEdges_b57_0FFA, sizeof(kEdges_b57_0FFA) / sizeof(kEdges_b57_0FFA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_0FFC[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x9000u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_0FFC = {57u, 0x8FFCu, 0x0FFCu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_0FFC, sizeof(kEdges_b57_0FFC) / sizeof(kEdges_b57_0FFC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1000[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x9003u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1000 = {57u, 0x9000u, 0x1000u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_1000, sizeof(kEdges_b57_1000) / sizeof(kEdges_b57_1000[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1003[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9006u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1003 = {57u, 0x9003u, 0x1003u, 0x03A8u, 2u, nullptr, 0u, kEdges_b57_1003, sizeof(kEdges_b57_1003) / sizeof(kEdges_b57_1003[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1006[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9008u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9000u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1006 = {57u, 0x9006u, 0x1006u, 0x9000u, 1u, nullptr, 0u, kEdges_b57_1006, sizeof(kEdges_b57_1006) / sizeof(kEdges_b57_1006[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1008[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x900Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1008 = {57u, 0x9008u, 0x1008u, 0x00CCu, 1u, nullptr, 0u, kEdges_b57_1008, sizeof(kEdges_b57_1008) / sizeof(kEdges_b57_1008[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_100A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x900Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_100A = {57u, 0x900Au, 0x100Au, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_100A, sizeof(kEdges_b57_100A) / sizeof(kEdges_b57_100A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_100D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x900Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_100D = {57u, 0x900Du, 0x100Du, 0x0000u, 1u, nullptr, 0u, kEdges_b57_100D, sizeof(kEdges_b57_100D) / sizeof(kEdges_b57_100D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_100F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9012u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_100F = {57u, 0x900Fu, 0x100Fu, 0x0679u, 2u, nullptr, 0u, kEdges_b57_100F, sizeof(kEdges_b57_100F) / sizeof(kEdges_b57_100F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1012[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9015u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1012 = {57u, 0x9012u, 0x1012u, 0x05E7u, 2u, nullptr, 0u, kEdges_b57_1012, sizeof(kEdges_b57_1012) / sizeof(kEdges_b57_1012[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1015[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9018u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1015 = {57u, 0x9015u, 0x1015u, 0x03A8u, 2u, nullptr, 0u, kEdges_b57_1015, sizeof(kEdges_b57_1015) / sizeof(kEdges_b57_1015[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1018[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x901Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1018 = {57u, 0x9018u, 0x1018u, 0x03ACu, 2u, nullptr, 0u, kEdges_b57_1018, sizeof(kEdges_b57_1018) / sizeof(kEdges_b57_1018[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_101B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x901Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_101B = {57u, 0x901Bu, 0x101Bu, 0x03ADu, 2u, nullptr, 0u, kEdges_b57_101B, sizeof(kEdges_b57_101B) / sizeof(kEdges_b57_101B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_101E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9021u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_101E = {57u, 0x901Eu, 0x101Eu, 0x03AEu, 2u, nullptr, 0u, kEdges_b57_101E, sizeof(kEdges_b57_101E) / sizeof(kEdges_b57_101E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1021[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9023u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1021 = {57u, 0x9021u, 0x1021u, 0x008Bu, 1u, nullptr, 0u, kEdges_b57_1021, sizeof(kEdges_b57_1021) / sizeof(kEdges_b57_1021[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1023[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9210u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9026u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1023 = {57u, 0x9023u, 0x1023u, 0x9210u, 2u, nullptr, 0u, kEdges_b57_1023, sizeof(kEdges_b57_1023) / sizeof(kEdges_b57_1023[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1026[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9028u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1026 = {57u, 0x9026u, 0x1026u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1026, sizeof(kEdges_b57_1026) / sizeof(kEdges_b57_1026[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1028[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x902Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1028 = {57u, 0x9028u, 0x1028u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_1028, sizeof(kEdges_b57_1028) / sizeof(kEdges_b57_1028[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_102B[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x902Eu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_102B = {57u, 0x902Bu, 0x102Bu, 0xE468u, 2u, nullptr, 0u, kEdges_b57_102B, sizeof(kEdges_b57_102B) / sizeof(kEdges_b57_102B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_102E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9031u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_102E = {57u, 0x902Eu, 0x102Eu, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_102E, sizeof(kEdges_b57_102E) / sizeof(kEdges_b57_102E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1031[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9034u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1031 = {57u, 0x9031u, 0x1031u, 0x03A0u, 2u, nullptr, 0u, kEdges_b57_1031, sizeof(kEdges_b57_1031) / sizeof(kEdges_b57_1031[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1034[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9036u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x902Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1034 = {57u, 0x9034u, 0x1034u, 0x902Bu, 1u, nullptr, 0u, kEdges_b57_1034, sizeof(kEdges_b57_1034) / sizeof(kEdges_b57_1034[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1036[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9038u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1036 = {57u, 0x9036u, 0x1036u, 0x008Cu, 1u, nullptr, 0u, kEdges_b57_1036, sizeof(kEdges_b57_1036) / sizeof(kEdges_b57_1036[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1038[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x903Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1038 = {57u, 0x9038u, 0x1038u, 0x0682u, 2u, nullptr, 0u, kEdges_b57_1038, sizeof(kEdges_b57_1038) / sizeof(kEdges_b57_1038[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_103B[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x903Fu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_103B = {57u, 0x903Bu, 0x103Bu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_103B, sizeof(kEdges_b57_103B) / sizeof(kEdges_b57_103B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_103F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9041u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_103F = {57u, 0x903Fu, 0x103Fu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_103F, sizeof(kEdges_b57_103F) / sizeof(kEdges_b57_103F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1041[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9043u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1041 = {57u, 0x9041u, 0x1041u, 0x00F1u, 1u, nullptr, 0u, kEdges_b57_1041, sizeof(kEdges_b57_1041) / sizeof(kEdges_b57_1041[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1043[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x9047u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1043 = {57u, 0x9043u, 0x1043u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_1043, sizeof(kEdges_b57_1043) / sizeof(kEdges_b57_1043[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1047[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x904Au, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1047 = {57u, 0x9047u, 0x1047u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_1047, sizeof(kEdges_b57_1047) / sizeof(kEdges_b57_1047[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_104A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x904Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_104A = {57u, 0x904Au, 0x104Au, 0x03A8u, 2u, nullptr, 0u, kEdges_b57_104A, sizeof(kEdges_b57_104A) / sizeof(kEdges_b57_104A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_104D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x904Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9047u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_104D = {57u, 0x904Du, 0x104Du, 0x9047u, 1u, nullptr, 0u, kEdges_b57_104D, sizeof(kEdges_b57_104D) / sizeof(kEdges_b57_104D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_104F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9051u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_104F = {57u, 0x904Fu, 0x104Fu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_104F, sizeof(kEdges_b57_104F) / sizeof(kEdges_b57_104F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1051[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9054u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1051 = {57u, 0x9051u, 0x1051u, 0x0679u, 2u, nullptr, 0u, kEdges_b57_1051, sizeof(kEdges_b57_1051) / sizeof(kEdges_b57_1051[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1054[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9057u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1054 = {57u, 0x9054u, 0x1054u, 0x05E7u, 2u, nullptr, 0u, kEdges_b57_1054, sizeof(kEdges_b57_1054) / sizeof(kEdges_b57_1054[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1057[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9059u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1057 = {57u, 0x9057u, 0x1057u, 0x008Cu, 1u, nullptr, 0u, kEdges_b57_1057, sizeof(kEdges_b57_1057) / sizeof(kEdges_b57_1057[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1059[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9210u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x905Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1059 = {57u, 0x9059u, 0x1059u, 0x9210u, 2u, nullptr, 0u, kEdges_b57_1059, sizeof(kEdges_b57_1059) / sizeof(kEdges_b57_1059[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_105C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x905Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_105C = {57u, 0x905Cu, 0x105Cu, 0x0007u, 1u, nullptr, 0u, kEdges_b57_105C, sizeof(kEdges_b57_105C) / sizeof(kEdges_b57_105C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_105E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9061u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_105E = {57u, 0x905Eu, 0x105Eu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_105E, sizeof(kEdges_b57_105E) / sizeof(kEdges_b57_105E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1061[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x9064u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1061 = {57u, 0x9061u, 0x1061u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_1061, sizeof(kEdges_b57_1061) / sizeof(kEdges_b57_1061[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1064[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9067u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1064 = {57u, 0x9064u, 0x1064u, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_1064, sizeof(kEdges_b57_1064) / sizeof(kEdges_b57_1064[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1067[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x906Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1067 = {57u, 0x9067u, 0x1067u, 0x03A0u, 2u, nullptr, 0u, kEdges_b57_1067, sizeof(kEdges_b57_1067) / sizeof(kEdges_b57_1067[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_106A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x906Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9061u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_106A = {57u, 0x906Au, 0x106Au, 0x9061u, 1u, nullptr, 0u, kEdges_b57_106A, sizeof(kEdges_b57_106A) / sizeof(kEdges_b57_106A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_106C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x906Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_106C = {57u, 0x906Cu, 0x106Cu, 0x008Du, 1u, nullptr, 0u, kEdges_b57_106C, sizeof(kEdges_b57_106C) / sizeof(kEdges_b57_106C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_106E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9071u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_106E = {57u, 0x906Eu, 0x106Eu, 0x0682u, 2u, nullptr, 0u, kEdges_b57_106E, sizeof(kEdges_b57_106E) / sizeof(kEdges_b57_106E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1071[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x9075u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1071 = {57u, 0x9071u, 0x1071u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_1071, sizeof(kEdges_b57_1071) / sizeof(kEdges_b57_1071[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1075[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9077u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1075 = {57u, 0x9075u, 0x1075u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1075, sizeof(kEdges_b57_1075) / sizeof(kEdges_b57_1075[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1077[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9079u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1077 = {57u, 0x9077u, 0x1077u, 0x00F2u, 1u, nullptr, 0u, kEdges_b57_1077, sizeof(kEdges_b57_1077) / sizeof(kEdges_b57_1077[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1079[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x907Du, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1079 = {57u, 0x9079u, 0x1079u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_1079, sizeof(kEdges_b57_1079) / sizeof(kEdges_b57_1079[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_107D[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x9080u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_107D = {57u, 0x907Du, 0x107Du, 0xE468u, 2u, nullptr, 0u, kEdges_b57_107D, sizeof(kEdges_b57_107D) / sizeof(kEdges_b57_107D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1080[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9083u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1080 = {57u, 0x9080u, 0x1080u, 0x03A8u, 2u, nullptr, 0u, kEdges_b57_1080, sizeof(kEdges_b57_1080) / sizeof(kEdges_b57_1080[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1083[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9085u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x907Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1083 = {57u, 0x9083u, 0x1083u, 0x907Du, 1u, nullptr, 0u, kEdges_b57_1083, sizeof(kEdges_b57_1083) / sizeof(kEdges_b57_1083[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1085[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD6F1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9088u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1085 = {57u, 0x9085u, 0x1085u, 0xD6F1u, 2u, nullptr, 0u, kEdges_b57_1085, sizeof(kEdges_b57_1085) / sizeof(kEdges_b57_1085[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1088[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x908Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1088 = {57u, 0x9088u, 0x1088u, 0x00E9u, 1u, nullptr, 0u, kEdges_b57_1088, sizeof(kEdges_b57_1088) / sizeof(kEdges_b57_1088[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_108A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x908Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_108A = {57u, 0x908Au, 0x108Au, 0x0008u, 1u, nullptr, 0u, kEdges_b57_108A, sizeof(kEdges_b57_108A) / sizeof(kEdges_b57_108A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_108C[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x9090u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_108C = {57u, 0x908Cu, 0x108Cu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_108C, sizeof(kEdges_b57_108C) / sizeof(kEdges_b57_108C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1090[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9092u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1090 = {57u, 0x9090u, 0x1090u, 0x0073u, 1u, nullptr, 0u, kEdges_b57_1090, sizeof(kEdges_b57_1090) / sizeof(kEdges_b57_1090[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1092[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9095u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1092 = {57u, 0x9092u, 0x1092u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_1092, sizeof(kEdges_b57_1092) / sizeof(kEdges_b57_1092[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1095[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9097u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1095 = {57u, 0x9095u, 0x1095u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1095, sizeof(kEdges_b57_1095) / sizeof(kEdges_b57_1095[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1097[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x909Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1097 = {57u, 0x9097u, 0x1097u, 0x0679u, 2u, nullptr, 0u, kEdges_b57_1097, sizeof(kEdges_b57_1097) / sizeof(kEdges_b57_1097[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_109A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x909Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_109A = {57u, 0x909Au, 0x109Au, 0x05E7u, 2u, nullptr, 0u, kEdges_b57_109A, sizeof(kEdges_b57_109A) / sizeof(kEdges_b57_109A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_109D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90A0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_109D = {57u, 0x909Du, 0x109Du, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_109D, sizeof(kEdges_b57_109D) / sizeof(kEdges_b57_109D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10A0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90A3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10A0 = {57u, 0x90A0u, 0x10A0u, 0x049Cu, 2u, nullptr, 0u, kEdges_b57_10A0, sizeof(kEdges_b57_10A0) / sizeof(kEdges_b57_10A0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10A3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10A3 = {57u, 0x90A3u, 0x10A3u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_10A3, sizeof(kEdges_b57_10A3) / sizeof(kEdges_b57_10A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10A6 = {57u, 0x90A6u, 0x10A6u, 0x04E1u, 2u, nullptr, 0u, kEdges_b57_10A6, sizeof(kEdges_b57_10A6) / sizeof(kEdges_b57_10A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10A9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90ABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10A9 = {57u, 0x90A9u, 0x10A9u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_10A9, sizeof(kEdges_b57_10A9) / sizeof(kEdges_b57_10A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10AB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9210u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x90AEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10AB = {57u, 0x90ABu, 0x10ABu, 0x9210u, 2u, nullptr, 0u, kEdges_b57_10AB, sizeof(kEdges_b57_10AB) / sizeof(kEdges_b57_10AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10AE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10AE = {57u, 0x90AEu, 0x10AEu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_10AE, sizeof(kEdges_b57_10AE) / sizeof(kEdges_b57_10AE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10B0 = {57u, 0x90B0u, 0x10B0u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_10B0, sizeof(kEdges_b57_10B0) / sizeof(kEdges_b57_10B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10B3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10B3 = {57u, 0x90B3u, 0x10B3u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_10B3, sizeof(kEdges_b57_10B3) / sizeof(kEdges_b57_10B3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10B5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD430u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x90B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10B5 = {57u, 0x90B5u, 0x10B5u, 0xD430u, 2u, nullptr, 0u, kEdges_b57_10B5, sizeof(kEdges_b57_10B5) / sizeof(kEdges_b57_10B5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10B8[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x90BBu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10B8 = {57u, 0x90B8u, 0x10B8u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_10B8, sizeof(kEdges_b57_10B8) / sizeof(kEdges_b57_10B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10BB = {57u, 0x90BBu, 0x10BBu, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_10BB, sizeof(kEdges_b57_10BB) / sizeof(kEdges_b57_10BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10BE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90C1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10BE = {57u, 0x90BEu, 0x10BEu, 0x03A0u, 2u, nullptr, 0u, kEdges_b57_10BE, sizeof(kEdges_b57_10BE) / sizeof(kEdges_b57_10BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10C1[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90C3u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x90B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10C1 = {57u, 0x90C1u, 0x10C1u, 0x90B3u, 1u, nullptr, 0u, kEdges_b57_10C1, sizeof(kEdges_b57_10C1) / sizeof(kEdges_b57_10C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10C3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10C3 = {57u, 0x90C3u, 0x10C3u, 0x03E5u, 2u, nullptr, 0u, kEdges_b57_10C3, sizeof(kEdges_b57_10C3) / sizeof(kEdges_b57_10C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10C6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90C8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x90B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10C6 = {57u, 0x90C6u, 0x10C6u, 0x90B3u, 1u, nullptr, 0u, kEdges_b57_10C6, sizeof(kEdges_b57_10C6) / sizeof(kEdges_b57_10C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10C8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90CAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10C8 = {57u, 0x90C8u, 0x10C8u, 0x00D0u, 1u, nullptr, 0u, kEdges_b57_10C8, sizeof(kEdges_b57_10C8) / sizeof(kEdges_b57_10C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10CA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x90CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10CA = {57u, 0x90CAu, 0x10CAu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_10CA, sizeof(kEdges_b57_10CA) / sizeof(kEdges_b57_10CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10CD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10CD = {57u, 0x90CDu, 0x10CDu, 0x0072u, 1u, nullptr, 0u, kEdges_b57_10CD, sizeof(kEdges_b57_10CD) / sizeof(kEdges_b57_10CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10CF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x90D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10CF = {57u, 0x90CFu, 0x10CFu, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_10CF, sizeof(kEdges_b57_10CF) / sizeof(kEdges_b57_10CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10D2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90D4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10D2 = {57u, 0x90D2u, 0x10D2u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_10D2, sizeof(kEdges_b57_10D2) / sizeof(kEdges_b57_10D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10D4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD430u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x90D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10D4 = {57u, 0x90D4u, 0x10D4u, 0xD430u, 2u, nullptr, 0u, kEdges_b57_10D4, sizeof(kEdges_b57_10D4) / sizeof(kEdges_b57_10D4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10D7[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x90DAu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10D7 = {57u, 0x90D7u, 0x10D7u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_10D7, sizeof(kEdges_b57_10D7) / sizeof(kEdges_b57_10D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10DA = {57u, 0x90DAu, 0x10DAu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_10DA, sizeof(kEdges_b57_10DA) / sizeof(kEdges_b57_10DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10DD[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90DFu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x90D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10DD = {57u, 0x90DDu, 0x10DDu, 0x90D2u, 1u, nullptr, 0u, kEdges_b57_10DD, sizeof(kEdges_b57_10DD) / sizeof(kEdges_b57_10DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10DF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x91A5u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x90E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10DF = {57u, 0x90DFu, 0x10DFu, 0x91A5u, 2u, nullptr, 0u, kEdges_b57_10DF, sizeof(kEdges_b57_10DF) / sizeof(kEdges_b57_10DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10E2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xD6F1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x90E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10E2 = {57u, 0x90E2u, 0x10E2u, 0xD6F1u, 2u, nullptr, 0u, kEdges_b57_10E2, sizeof(kEdges_b57_10E2) / sizeof(kEdges_b57_10E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10E5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90E7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10E5 = {57u, 0x90E5u, 0x10E5u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_10E5, sizeof(kEdges_b57_10E5) / sizeof(kEdges_b57_10E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10E7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90E9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10E7 = {57u, 0x90E7u, 0x10E7u, 0x00D6u, 1u, nullptr, 0u, kEdges_b57_10E7, sizeof(kEdges_b57_10E7) / sizeof(kEdges_b57_10E7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10E9[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x90EDu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10E9 = {57u, 0x90E9u, 0x10E9u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_10E9, sizeof(kEdges_b57_10E9) / sizeof(kEdges_b57_10E9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10ED[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF0Cu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x90F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10ED = {57u, 0x90EDu, 0x10EDu, 0xEF0Cu, 2u, nullptr, 0u, kEdges_b57_10ED, sizeof(kEdges_b57_10ED) / sizeof(kEdges_b57_10ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10F0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10F0 = {57u, 0x90F0u, 0x10F0u, 0x03B7u, 2u, nullptr, 0u, kEdges_b57_10F0, sizeof(kEdges_b57_10F0) / sizeof(kEdges_b57_10F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90F5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10F3 = {57u, 0x90F3u, 0x10F3u, 0x0040u, 1u, nullptr, 0u, kEdges_b57_10F3, sizeof(kEdges_b57_10F3) / sizeof(kEdges_b57_10F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10F5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10F5 = {57u, 0x90F5u, 0x10F5u, 0x0040u, 1u, nullptr, 0u, kEdges_b57_10F5, sizeof(kEdges_b57_10F5) / sizeof(kEdges_b57_10F5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10F7 = {57u, 0x90F7u, 0x10F7u, 0x03B7u, 2u, nullptr, 0u, kEdges_b57_10F7, sizeof(kEdges_b57_10F7) / sizeof(kEdges_b57_10F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10FA = {57u, 0x90FAu, 0x10FAu, 0u, 0u, nullptr, 0u, kEdges_b57_10FA, sizeof(kEdges_b57_10FA) / sizeof(kEdges_b57_10FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10FB = {57u, 0x90FBu, 0x10FBu, 0u, 0u, nullptr, 0u, kEdges_b57_10FB, sizeof(kEdges_b57_10FB) / sizeof(kEdges_b57_10FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10FC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10FC = {57u, 0x90FCu, 0x10FCu, 0u, 0u, nullptr, 0u, kEdges_b57_10FC, sizeof(kEdges_b57_10FC) / sizeof(kEdges_b57_10FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x90FFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10FD = {57u, 0x90FDu, 0x10FDu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_10FD, sizeof(kEdges_b57_10FD) / sizeof(kEdges_b57_10FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_10FF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9100u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_10FF = {57u, 0x90FFu, 0x10FFu, 0u, 0u, nullptr, 0u, kEdges_b57_10FF, sizeof(kEdges_b57_10FF) / sizeof(kEdges_b57_10FF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1100[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9103u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1100 = {57u, 0x9100u, 0x1100u, 0x9198u, 2u, nullptr, 0u, kEdges_b57_1100, sizeof(kEdges_b57_1100) / sizeof(kEdges_b57_1100[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1103[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9106u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1103 = {57u, 0x9103u, 0x1103u, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_1103, sizeof(kEdges_b57_1103) / sizeof(kEdges_b57_1103[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1106[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9108u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1106 = {57u, 0x9106u, 0x1106u, 0x00BDu, 1u, nullptr, 0u, kEdges_b57_1106, sizeof(kEdges_b57_1106) / sizeof(kEdges_b57_1106[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1108[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x910Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1108 = {57u, 0x9108u, 0x1108u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_1108, sizeof(kEdges_b57_1108) / sizeof(kEdges_b57_1108[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_110B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x910Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_110B = {57u, 0x910Bu, 0x110Bu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_110B, sizeof(kEdges_b57_110B) / sizeof(kEdges_b57_110B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_110D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9110u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_110D = {57u, 0x910Du, 0x110Du, 0x060Du, 2u, nullptr, 0u, kEdges_b57_110D, sizeof(kEdges_b57_110D) / sizeof(kEdges_b57_110D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1110[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9112u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1110 = {57u, 0x9110u, 0x1110u, 0x00FCu, 1u, nullptr, 0u, kEdges_b57_1110, sizeof(kEdges_b57_1110) / sizeof(kEdges_b57_1110[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1112[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9115u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1112 = {57u, 0x9112u, 0x1112u, 0x0624u, 2u, nullptr, 0u, kEdges_b57_1112, sizeof(kEdges_b57_1112) / sizeof(kEdges_b57_1112[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1115[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9118u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1115 = {57u, 0x9115u, 0x1115u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b57_1115, sizeof(kEdges_b57_1115) / sizeof(kEdges_b57_1115[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1118[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x911Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1118 = {57u, 0x9118u, 0x1118u, 0xC62Bu, 2u, nullptr, 0u, kEdges_b57_1118, sizeof(kEdges_b57_1118) / sizeof(kEdges_b57_1118[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_111B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x911Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_111B = {57u, 0x911Bu, 0x111Bu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_111B, sizeof(kEdges_b57_111B) / sizeof(kEdges_b57_111B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_111D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x911Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_111D = {57u, 0x911Du, 0x111Du, 0x0003u, 1u, nullptr, 0u, kEdges_b57_111D, sizeof(kEdges_b57_111D) / sizeof(kEdges_b57_111D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_111F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEE9Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9122u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_111F = {57u, 0x911Fu, 0x111Fu, 0xEE9Au, 2u, nullptr, 0u, kEdges_b57_111F, sizeof(kEdges_b57_111F) / sizeof(kEdges_b57_111F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1122[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9125u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1122 = {57u, 0x9122u, 0x1122u, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_1122, sizeof(kEdges_b57_1122) / sizeof(kEdges_b57_1122[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1125[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9127u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1125 = {57u, 0x9125u, 0x1125u, 0x00EDu, 1u, nullptr, 0u, kEdges_b57_1125, sizeof(kEdges_b57_1125) / sizeof(kEdges_b57_1125[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1127[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9129u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1127 = {57u, 0x9127u, 0x1127u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1127, sizeof(kEdges_b57_1127) / sizeof(kEdges_b57_1127[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1129[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x912Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1129 = {57u, 0x9129u, 0x1129u, 0x00EBu, 1u, nullptr, 0u, kEdges_b57_1129, sizeof(kEdges_b57_1129) / sizeof(kEdges_b57_1129[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_112B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE4D3u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x912Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_112B = {57u, 0x912Bu, 0x112Bu, 0xE4D3u, 2u, nullptr, 0u, kEdges_b57_112B, sizeof(kEdges_b57_112B) / sizeof(kEdges_b57_112B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_112E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9131u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_112E = {57u, 0x912Eu, 0x112Eu, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_112E, sizeof(kEdges_b57_112E) / sizeof(kEdges_b57_112E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1131[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9133u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1131 = {57u, 0x9131u, 0x1131u, 0x0020u, 1u, nullptr, 0u, kEdges_b57_1131, sizeof(kEdges_b57_1131) / sizeof(kEdges_b57_1131[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1133[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9135u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9137u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1133 = {57u, 0x9133u, 0x1133u, 0x9137u, 1u, nullptr, 0u, kEdges_b57_1133, sizeof(kEdges_b57_1133) / sizeof(kEdges_b57_1133[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1135[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9137u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1135 = {57u, 0x9135u, 0x1135u, 0x0020u, 1u, nullptr, 0u, kEdges_b57_1135, sizeof(kEdges_b57_1135) / sizeof(kEdges_b57_1135[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1137[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9139u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1137 = {57u, 0x9137u, 0x1137u, 0x00E0u, 1u, nullptr, 0u, kEdges_b57_1137, sizeof(kEdges_b57_1137) / sizeof(kEdges_b57_1137[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1139[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x913Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x913Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1139 = {57u, 0x9139u, 0x1139u, 0x913Du, 1u, nullptr, 0u, kEdges_b57_1139, sizeof(kEdges_b57_1139) / sizeof(kEdges_b57_1139[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_113B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x913Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_113B = {57u, 0x913Bu, 0x113Bu, 0x00E0u, 1u, nullptr, 0u, kEdges_b57_113B, sizeof(kEdges_b57_113B) / sizeof(kEdges_b57_113B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_113D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9140u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_113D = {57u, 0x913Du, 0x113Du, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_113D, sizeof(kEdges_b57_113D) / sizeof(kEdges_b57_113D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1140[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9143u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1140 = {57u, 0x9140u, 0x1140u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1140, sizeof(kEdges_b57_1140) / sizeof(kEdges_b57_1140[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1143[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9145u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1143 = {57u, 0x9143u, 0x1143u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1143, sizeof(kEdges_b57_1143) / sizeof(kEdges_b57_1143[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1145[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9147u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x914Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1145 = {57u, 0x9145u, 0x1145u, 0x914Cu, 1u, nullptr, 0u, kEdges_b57_1145, sizeof(kEdges_b57_1145) / sizeof(kEdges_b57_1145[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1147[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9149u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1147 = {57u, 0x9147u, 0x1147u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1147, sizeof(kEdges_b57_1147) / sizeof(kEdges_b57_1147[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1149[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x914Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1149 = {57u, 0x9149u, 0x1149u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1149, sizeof(kEdges_b57_1149) / sizeof(kEdges_b57_1149[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_114C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x914Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_114C = {57u, 0x914Cu, 0x114Cu, 0x00B4u, 1u, nullptr, 0u, kEdges_b57_114C, sizeof(kEdges_b57_114C) / sizeof(kEdges_b57_114C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_114E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9150u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9115u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_114E = {57u, 0x914Eu, 0x114Eu, 0x9115u, 1u, nullptr, 0u, kEdges_b57_114E, sizeof(kEdges_b57_114E) / sizeof(kEdges_b57_114E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1150[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9152u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1150 = {57u, 0x9150u, 0x1150u, 0x0017u, 1u, nullptr, 0u, kEdges_b57_1150, sizeof(kEdges_b57_1150) / sizeof(kEdges_b57_1150[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1152[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9154u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1152 = {57u, 0x9152u, 0x1152u, 0x00DCu, 1u, nullptr, 0u, kEdges_b57_1152, sizeof(kEdges_b57_1152) / sizeof(kEdges_b57_1152[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1154[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9156u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1154 = {57u, 0x9154u, 0x1154u, 0x00B4u, 1u, nullptr, 0u, kEdges_b57_1154, sizeof(kEdges_b57_1154) / sizeof(kEdges_b57_1154[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1156[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9159u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1156 = {57u, 0x9156u, 0x1156u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1156, sizeof(kEdges_b57_1156) / sizeof(kEdges_b57_1156[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1159[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x915Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1159 = {57u, 0x9159u, 0x1159u, 0x0040u, 1u, nullptr, 0u, kEdges_b57_1159, sizeof(kEdges_b57_1159) / sizeof(kEdges_b57_1159[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_115B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x915Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_115B = {57u, 0x915Bu, 0x115Bu, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_115B, sizeof(kEdges_b57_115B) / sizeof(kEdges_b57_115B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_115E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9160u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_115E = {57u, 0x915Eu, 0x115Eu, 0x00BEu, 1u, nullptr, 0u, kEdges_b57_115E, sizeof(kEdges_b57_115E) / sizeof(kEdges_b57_115E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1160[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9162u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1160 = {57u, 0x9160u, 0x1160u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1160, sizeof(kEdges_b57_1160) / sizeof(kEdges_b57_1160[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1162[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9165u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1162 = {57u, 0x9162u, 0x1162u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_1162, sizeof(kEdges_b57_1162) / sizeof(kEdges_b57_1162[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1165[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9168u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1165 = {57u, 0x9165u, 0x1165u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b57_1165, sizeof(kEdges_b57_1165) / sizeof(kEdges_b57_1165[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1168[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x916Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1168 = {57u, 0x9168u, 0x1168u, 0xC62Bu, 2u, nullptr, 0u, kEdges_b57_1168, sizeof(kEdges_b57_1168) / sizeof(kEdges_b57_1168[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_116B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x916Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_116B = {57u, 0x916Bu, 0x116Bu, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_116B, sizeof(kEdges_b57_116B) / sizeof(kEdges_b57_116B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_116E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9170u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9165u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_116E = {57u, 0x916Eu, 0x116Eu, 0x9165u, 1u, nullptr, 0u, kEdges_b57_116E, sizeof(kEdges_b57_116E) / sizeof(kEdges_b57_116E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1170[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9172u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1170 = {57u, 0x9170u, 0x1170u, 0x00BFu, 1u, nullptr, 0u, kEdges_b57_1170, sizeof(kEdges_b57_1170) / sizeof(kEdges_b57_1170[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1172[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9174u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1172 = {57u, 0x9172u, 0x1172u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1172, sizeof(kEdges_b57_1172) / sizeof(kEdges_b57_1172[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1174[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9177u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1174 = {57u, 0x9174u, 0x1174u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_1174, sizeof(kEdges_b57_1174) / sizeof(kEdges_b57_1174[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1177[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9179u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1177 = {57u, 0x9177u, 0x1177u, 0x00F0u, 1u, nullptr, 0u, kEdges_b57_1177, sizeof(kEdges_b57_1177) / sizeof(kEdges_b57_1177[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1179[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x917Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1179 = {57u, 0x9179u, 0x1179u, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1179, sizeof(kEdges_b57_1179) / sizeof(kEdges_b57_1179[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_117C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x917Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_117C = {57u, 0x917Cu, 0x117Cu, 0xE1DDu, 2u, nullptr, 0u, kEdges_b57_117C, sizeof(kEdges_b57_117C) / sizeof(kEdges_b57_117C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_117F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9182u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_117F = {57u, 0x917Fu, 0x117Fu, 0xC62Bu, 2u, nullptr, 0u, kEdges_b57_117F, sizeof(kEdges_b57_117F) / sizeof(kEdges_b57_117F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1182[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9185u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1182 = {57u, 0x9182u, 0x1182u, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1182, sizeof(kEdges_b57_1182) / sizeof(kEdges_b57_1182[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1185[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9187u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x917Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1185 = {57u, 0x9185u, 0x1185u, 0x917Cu, 1u, nullptr, 0u, kEdges_b57_1185, sizeof(kEdges_b57_1185) / sizeof(kEdges_b57_1185[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1187[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA3Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x918Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1187 = {57u, 0x9187u, 0x1187u, 0xCA3Du, 2u, nullptr, 0u, kEdges_b57_1187, sizeof(kEdges_b57_1187) / sizeof(kEdges_b57_1187[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_118A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x918Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_118A = {57u, 0x918Au, 0x118Au, 0x0000u, 1u, nullptr, 0u, kEdges_b57_118A, sizeof(kEdges_b57_118A) / sizeof(kEdges_b57_118A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_118C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x918Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_118C = {57u, 0x918Cu, 0x118Cu, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_118C, sizeof(kEdges_b57_118C) / sizeof(kEdges_b57_118C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_118E[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xD1F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_118E = {57u, 0x918Eu, 0x118Eu, 0xD1F3u, 2u, nullptr, 0u, kEdges_b57_118E, sizeof(kEdges_b57_118E) / sizeof(kEdges_b57_118E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_119A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x919Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_119A = {57u, 0x919Au, 0x119Au, 0u, 0u, nullptr, 0u, kEdges_b57_119A, sizeof(kEdges_b57_119A) / sizeof(kEdges_b57_119A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_119B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x919Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_119B = {57u, 0x919Bu, 0x119Bu, 0x91A2u, 2u, nullptr, 0u, kEdges_b57_119B, sizeof(kEdges_b57_119B) / sizeof(kEdges_b57_119B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_119E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91A1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_119E = {57u, 0x919Eu, 0x119Eu, 0x03B7u, 2u, nullptr, 0u, kEdges_b57_119E, sizeof(kEdges_b57_119E) / sizeof(kEdges_b57_119E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11A1[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11A1 = {57u, 0x91A1u, 0x11A1u, 0u, 0u, nullptr, 0u, kEdges_b57_11A1, sizeof(kEdges_b57_11A1) / sizeof(kEdges_b57_11A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11A5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11A5 = {57u, 0x91A5u, 0x11A5u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_11A5, sizeof(kEdges_b57_11A5) / sizeof(kEdges_b57_11A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11A7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F0u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x91AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11A7 = {57u, 0x91A7u, 0x11A7u, 0xC5F0u, 2u, nullptr, 0u, kEdges_b57_11A7, sizeof(kEdges_b57_11A7) / sizeof(kEdges_b57_11A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11AA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91ACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11AA = {57u, 0x91AAu, 0x11AAu, 0x00AEu, 1u, nullptr, 0u, kEdges_b57_11AA, sizeof(kEdges_b57_11AA) / sizeof(kEdges_b57_11AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11AC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x91AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11AC = {57u, 0x91ACu, 0x11ACu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_11AC, sizeof(kEdges_b57_11AC) / sizeof(kEdges_b57_11AC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11AF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11AF = {57u, 0x91AFu, 0x11AFu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_11AF, sizeof(kEdges_b57_11AF) / sizeof(kEdges_b57_11AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11B1 = {57u, 0x91B1u, 0x11B1u, 0x0098u, 1u, nullptr, 0u, kEdges_b57_11B1, sizeof(kEdges_b57_11B1) / sizeof(kEdges_b57_11B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11B3[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE0FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11B3 = {57u, 0x91B3u, 0x11B3u, 0xE0FDu, 2u, nullptr, 0u, kEdges_b57_11B3, sizeof(kEdges_b57_11B3) / sizeof(kEdges_b57_11B3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91B9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11B6 = {57u, 0x91B6u, 0x11B6u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_11B6, sizeof(kEdges_b57_11B6) / sizeof(kEdges_b57_11B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11B9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91BCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11B9 = {57u, 0x91B9u, 0x11B9u, 0x91A2u, 2u, nullptr, 0u, kEdges_b57_11B9, sizeof(kEdges_b57_11B9) / sizeof(kEdges_b57_11B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11BC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91BFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11BC = {57u, 0x91BCu, 0x11BCu, 0x03B7u, 2u, nullptr, 0u, kEdges_b57_11BC, sizeof(kEdges_b57_11BC) / sizeof(kEdges_b57_11BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11BF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11BF = {57u, 0x91BFu, 0x11BFu, 0x91D2u, 2u, nullptr, 0u, kEdges_b57_11BF, sizeof(kEdges_b57_11BF) / sizeof(kEdges_b57_11BF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11C2 = {57u, 0x91C2u, 0x11C2u, 0x00EDu, 1u, nullptr, 0u, kEdges_b57_11C2, sizeof(kEdges_b57_11C2) / sizeof(kEdges_b57_11C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11C4 = {57u, 0x91C4u, 0x11C4u, 0x91D5u, 2u, nullptr, 0u, kEdges_b57_11C4, sizeof(kEdges_b57_11C4) / sizeof(kEdges_b57_11C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11C7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11C7 = {57u, 0x91C7u, 0x11C7u, 0x00EBu, 1u, nullptr, 0u, kEdges_b57_11C7, sizeof(kEdges_b57_11C7) / sizeof(kEdges_b57_11C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11C9 = {57u, 0x91C9u, 0x11C9u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_11C9, sizeof(kEdges_b57_11C9) / sizeof(kEdges_b57_11C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11CB = {57u, 0x91CBu, 0x11CBu, 0x00EEu, 1u, nullptr, 0u, kEdges_b57_11CB, sizeof(kEdges_b57_11CB) / sizeof(kEdges_b57_11CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11CD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11CD = {57u, 0x91CDu, 0x11CDu, 0x00ECu, 1u, nullptr, 0u, kEdges_b57_11CD, sizeof(kEdges_b57_11CD) / sizeof(kEdges_b57_11CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11CF[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE4D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11CF = {57u, 0x91CFu, 0x11CFu, 0xE4D3u, 2u, nullptr, 0u, kEdges_b57_11CF, sizeof(kEdges_b57_11CF) / sizeof(kEdges_b57_11CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11D8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91D9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11D8 = {57u, 0x91D8u, 0x11D8u, 0u, 0u, nullptr, 0u, kEdges_b57_11D8, sizeof(kEdges_b57_11D8) / sizeof(kEdges_b57_11D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11D9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11D9 = {57u, 0x91D9u, 0x11D9u, 0x0002u, 1u, nullptr, 0u, kEdges_b57_11D9, sizeof(kEdges_b57_11D9) / sizeof(kEdges_b57_11D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11DB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE0FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x91DEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11DB = {57u, 0x91DBu, 0x11DBu, 0xE0FDu, 2u, nullptr, 0u, kEdges_b57_11DB, sizeof(kEdges_b57_11DB) / sizeof(kEdges_b57_11DB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11DE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11DE = {57u, 0x91DEu, 0x11DEu, 0u, 0u, nullptr, 0u, kEdges_b57_11DE, sizeof(kEdges_b57_11DE) / sizeof(kEdges_b57_11DE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91E1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11DF = {57u, 0x91DFu, 0x11DFu, 0x0007u, 1u, nullptr, 0u, kEdges_b57_11DF, sizeof(kEdges_b57_11DF) / sizeof(kEdges_b57_11DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11E1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91E4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11E1 = {57u, 0x91E1u, 0x11E1u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_11E1, sizeof(kEdges_b57_11E1) / sizeof(kEdges_b57_11E1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11E4[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91E6u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x91FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11E4 = {57u, 0x91E4u, 0x11E4u, 0x91FBu, 1u, nullptr, 0u, kEdges_b57_11E4, sizeof(kEdges_b57_11E4) / sizeof(kEdges_b57_11E4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11E6 = {57u, 0x91E6u, 0x11E6u, 0x0002u, 1u, nullptr, 0u, kEdges_b57_11E6, sizeof(kEdges_b57_11E6) / sizeof(kEdges_b57_11E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11E8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11E8 = {57u, 0x91E8u, 0x11E8u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_11E8, sizeof(kEdges_b57_11E8) / sizeof(kEdges_b57_11E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11EB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x91B6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x91EEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11EB = {57u, 0x91EBu, 0x11EBu, 0x91B6u, 2u, nullptr, 0u, kEdges_b57_11EB, sizeof(kEdges_b57_11EB) / sizeof(kEdges_b57_11EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11EE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE005u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x91F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11EE = {57u, 0x91EEu, 0x11EEu, 0xE005u, 2u, nullptr, 0u, kEdges_b57_11EE, sizeof(kEdges_b57_11EE) / sizeof(kEdges_b57_11EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11F1 = {57u, 0x91F1u, 0x11F1u, 0x0007u, 1u, nullptr, 0u, kEdges_b57_11F1, sizeof(kEdges_b57_11F1) / sizeof(kEdges_b57_11F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11F3 = {57u, 0x91F3u, 0x11F3u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_11F3, sizeof(kEdges_b57_11F3) / sizeof(kEdges_b57_11F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11F6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91F8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x91EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11F6 = {57u, 0x91F6u, 0x11F6u, 0x91EBu, 1u, nullptr, 0u, kEdges_b57_11F6, sizeof(kEdges_b57_11F6) / sizeof(kEdges_b57_11F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11F8[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x91A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11F8 = {57u, 0x91F8u, 0x11F8u, 0x91A5u, 2u, nullptr, 0u, kEdges_b57_11F8, sizeof(kEdges_b57_11F8) / sizeof(kEdges_b57_11F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x91FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11FB = {57u, 0x91FBu, 0x11FBu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_11FB, sizeof(kEdges_b57_11FB) / sizeof(kEdges_b57_11FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_11FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9200u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_11FD = {57u, 0x91FDu, 0x11FDu, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_11FD, sizeof(kEdges_b57_11FD) / sizeof(kEdges_b57_11FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1200[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x91B6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9203u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1200 = {57u, 0x9200u, 0x1200u, 0x91B6u, 2u, nullptr, 0u, kEdges_b57_1200, sizeof(kEdges_b57_1200) / sizeof(kEdges_b57_1200[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1203[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE005u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9206u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1203 = {57u, 0x9203u, 0x1203u, 0xE005u, 2u, nullptr, 0u, kEdges_b57_1203, sizeof(kEdges_b57_1203) / sizeof(kEdges_b57_1203[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1206[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9208u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1206 = {57u, 0x9206u, 0x1206u, 0x0007u, 1u, nullptr, 0u, kEdges_b57_1206, sizeof(kEdges_b57_1206) / sizeof(kEdges_b57_1206[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1208[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x920Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1208 = {57u, 0x9208u, 0x1208u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_1208, sizeof(kEdges_b57_1208) / sizeof(kEdges_b57_1208[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_120B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x920Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9200u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_120B = {57u, 0x920Bu, 0x120Bu, 0x9200u, 1u, nullptr, 0u, kEdges_b57_120B, sizeof(kEdges_b57_120B) / sizeof(kEdges_b57_120B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_120D[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x91A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_120D = {57u, 0x920Du, 0x120Du, 0x91A5u, 2u, nullptr, 0u, kEdges_b57_120D, sizeof(kEdges_b57_120D) / sizeof(kEdges_b57_120D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1210[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9211u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1210 = {57u, 0x9210u, 0x1210u, 0u, 0u, nullptr, 0u, kEdges_b57_1210, sizeof(kEdges_b57_1210) / sizeof(kEdges_b57_1210[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1211[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9213u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1211 = {57u, 0x9211u, 0x1211u, 0x007Fu, 1u, nullptr, 0u, kEdges_b57_1211, sizeof(kEdges_b57_1211) / sizeof(kEdges_b57_1211[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1213[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9216u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1213 = {57u, 0x9213u, 0x1213u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_1213, sizeof(kEdges_b57_1213) / sizeof(kEdges_b57_1213[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1216[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9217u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1216 = {57u, 0x9216u, 0x1216u, 0u, 0u, nullptr, 0u, kEdges_b57_1216, sizeof(kEdges_b57_1216) / sizeof(kEdges_b57_1216[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1217[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x921Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1217 = {57u, 0x9217u, 0x1217u, 0x0682u, 2u, nullptr, 0u, kEdges_b57_1217, sizeof(kEdges_b57_1217) / sizeof(kEdges_b57_1217[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_121A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x921Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_121A = {57u, 0x921Au, 0x121Au, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_121A, sizeof(kEdges_b57_121A) / sizeof(kEdges_b57_121A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_121D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9220u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_121D = {57u, 0x921Du, 0x121Du, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_121D, sizeof(kEdges_b57_121D) / sizeof(kEdges_b57_121D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1220[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9221u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1220 = {57u, 0x9220u, 0x1220u, 0u, 0u, nullptr, 0u, kEdges_b57_1220, sizeof(kEdges_b57_1220) / sizeof(kEdges_b57_1220[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1221[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9223u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1221 = {57u, 0x9221u, 0x1221u, 0x0010u, 1u, nullptr, 0u, kEdges_b57_1221, sizeof(kEdges_b57_1221) / sizeof(kEdges_b57_1221[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1223[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9226u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1223 = {57u, 0x9223u, 0x1223u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_1223, sizeof(kEdges_b57_1223) / sizeof(kEdges_b57_1223[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1226[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9229u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1226 = {57u, 0x9226u, 0x1226u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1226, sizeof(kEdges_b57_1226) / sizeof(kEdges_b57_1226[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1229[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x922Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1229 = {57u, 0x9229u, 0x1229u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_1229, sizeof(kEdges_b57_1229) / sizeof(kEdges_b57_1229[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_122C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x922Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_122C = {57u, 0x922Cu, 0x122Cu, 0x05C7u, 2u, nullptr, 0u, kEdges_b57_122C, sizeof(kEdges_b57_122C) / sizeof(kEdges_b57_122C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_122F[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_122F = {57u, 0x922Fu, 0x122Fu, 0u, 0u, nullptr, 0u, kEdges_b57_122F, sizeof(kEdges_b57_122F) / sizeof(kEdges_b57_122F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1236[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9238u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1236 = {57u, 0x9236u, 0x1236u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1236, sizeof(kEdges_b57_1236) / sizeof(kEdges_b57_1236[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1238[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x923Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1238 = {57u, 0x9238u, 0x1238u, 0x0358u, 2u, nullptr, 0u, kEdges_b57_1238, sizeof(kEdges_b57_1238) / sizeof(kEdges_b57_1238[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_123B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x923Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_123B = {57u, 0x923Bu, 0x123Bu, 0x0359u, 2u, nullptr, 0u, kEdges_b57_123B, sizeof(kEdges_b57_123B) / sizeof(kEdges_b57_123B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_123E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9241u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_123E = {57u, 0x923Eu, 0x123Eu, 0x035Au, 2u, nullptr, 0u, kEdges_b57_123E, sizeof(kEdges_b57_123E) / sizeof(kEdges_b57_123E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1241[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1241 = {57u, 0x9241u, 0x1241u, 0u, 0u, nullptr, 0u, kEdges_b57_1241, sizeof(kEdges_b57_1241) / sizeof(kEdges_b57_1241[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1257[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9259u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1257 = {57u, 0x9257u, 0x1257u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1257, sizeof(kEdges_b57_1257) / sizeof(kEdges_b57_1257[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1259[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8416u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1259 = {57u, 0x9259u, 0x1259u, 0x8416u, 2u, nullptr, 0u, kEdges_b57_1259, sizeof(kEdges_b57_1259) / sizeof(kEdges_b57_1259[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_126F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9271u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_126F = {57u, 0x926Fu, 0x126Fu, 0x0057u, 1u, nullptr, 0u, kEdges_b57_126F, sizeof(kEdges_b57_126F) / sizeof(kEdges_b57_126F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1271[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x8416u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1271 = {57u, 0x9271u, 0x1271u, 0x8416u, 2u, nullptr, 0u, kEdges_b57_1271, sizeof(kEdges_b57_1271) / sizeof(kEdges_b57_1271[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1288[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x928Bu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1288 = {57u, 0x9288u, 0x1288u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_1288, sizeof(kEdges_b57_1288) / sizeof(kEdges_b57_1288[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_128B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x928Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_128B = {57u, 0x928Bu, 0x128Bu, 0x056Cu, 2u, nullptr, 0u, kEdges_b57_128B, sizeof(kEdges_b57_128B) / sizeof(kEdges_b57_128B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_128E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9290u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9288u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_128E = {57u, 0x928Eu, 0x128Eu, 0x9288u, 1u, nullptr, 0u, kEdges_b57_128E, sizeof(kEdges_b57_128E) / sizeof(kEdges_b57_128E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1290[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9292u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1290 = {57u, 0x9290u, 0x1290u, 0x001Au, 1u, nullptr, 0u, kEdges_b57_1290, sizeof(kEdges_b57_1290) / sizeof(kEdges_b57_1290[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1292[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9294u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x92A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1292 = {57u, 0x9292u, 0x1292u, 0x92A6u, 1u, nullptr, 0u, kEdges_b57_1292, sizeof(kEdges_b57_1292) / sizeof(kEdges_b57_1292[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1294[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9296u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1294 = {57u, 0x9294u, 0x1294u, 0x0011u, 1u, nullptr, 0u, kEdges_b57_1294, sizeof(kEdges_b57_1294) / sizeof(kEdges_b57_1294[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1296[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9299u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1296 = {57u, 0x9296u, 0x1296u, 0x0574u, 2u, nullptr, 0u, kEdges_b57_1296, sizeof(kEdges_b57_1296) / sizeof(kEdges_b57_1296[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1299[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x929Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1299 = {57u, 0x9299u, 0x1299u, 0x0006u, 1u, nullptr, 0u, kEdges_b57_1299, sizeof(kEdges_b57_1299) / sizeof(kEdges_b57_1299[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_129B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x929Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_129B = {57u, 0x929Bu, 0x129Bu, 0x0025u, 1u, nullptr, 0u, kEdges_b57_129B, sizeof(kEdges_b57_129B) / sizeof(kEdges_b57_129B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_129D[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x92A1u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_129D = {57u, 0x929Du, 0x129Du, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_129D, sizeof(kEdges_b57_129D) / sizeof(kEdges_b57_129D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12A1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92A3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12A1 = {57u, 0x92A1u, 0x12A1u, 0x0040u, 1u, nullptr, 0u, kEdges_b57_12A1, sizeof(kEdges_b57_12A1) / sizeof(kEdges_b57_12A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12A3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12A3 = {57u, 0x92A3u, 0x12A3u, 0x05DFu, 2u, nullptr, 0u, kEdges_b57_12A3, sizeof(kEdges_b57_12A3) / sizeof(kEdges_b57_12A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12A6 = {57u, 0x92A6u, 0x12A6u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_12A6, sizeof(kEdges_b57_12A6) / sizeof(kEdges_b57_12A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12A8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12A8 = {57u, 0x92A8u, 0x12A8u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_12A8, sizeof(kEdges_b57_12A8) / sizeof(kEdges_b57_12A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12AA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12AA = {57u, 0x92AAu, 0x12AAu, 0x056Cu, 2u, nullptr, 0u, kEdges_b57_12AA, sizeof(kEdges_b57_12AA) / sizeof(kEdges_b57_12AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12AD[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9288u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12AD = {57u, 0x92ADu, 0x12ADu, 0x9288u, 2u, nullptr, 0u, kEdges_b57_12AD, sizeof(kEdges_b57_12AD) / sizeof(kEdges_b57_12AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12B6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x92B9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12B6 = {57u, 0x92B6u, 0x12B6u, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_12B6, sizeof(kEdges_b57_12B6) / sizeof(kEdges_b57_12B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12B9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12B9 = {57u, 0x92B9u, 0x12B9u, 0x002Eu, 1u, nullptr, 0u, kEdges_b57_12B9, sizeof(kEdges_b57_12B9) / sizeof(kEdges_b57_12B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12BB = {57u, 0x92BBu, 0x12BBu, 0x05DEu, 2u, nullptr, 0u, kEdges_b57_12BB, sizeof(kEdges_b57_12BB) / sizeof(kEdges_b57_12BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12BE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12BE = {57u, 0x92BEu, 0x12BEu, 0x00DFu, 1u, nullptr, 0u, kEdges_b57_12BE, sizeof(kEdges_b57_12BE) / sizeof(kEdges_b57_12BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12C0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12C0 = {57u, 0x92C0u, 0x12C0u, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_12C0, sizeof(kEdges_b57_12C0) / sizeof(kEdges_b57_12C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12C3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92C5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12C3 = {57u, 0x92C3u, 0x12C3u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_12C3, sizeof(kEdges_b57_12C3) / sizeof(kEdges_b57_12C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12C5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12C5 = {57u, 0x92C5u, 0x12C5u, 0x00F7u, 1u, nullptr, 0u, kEdges_b57_12C5, sizeof(kEdges_b57_12C5) / sizeof(kEdges_b57_12C5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12C7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12C7 = {57u, 0x92C7u, 0x12C7u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_12C7, sizeof(kEdges_b57_12C7) / sizeof(kEdges_b57_12C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12C9 = {57u, 0x92C9u, 0x12C9u, 0x0093u, 1u, nullptr, 0u, kEdges_b57_12C9, sizeof(kEdges_b57_12C9) / sizeof(kEdges_b57_12C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12CB = {57u, 0x92CBu, 0x12CBu, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_12CB, sizeof(kEdges_b57_12CB) / sizeof(kEdges_b57_12CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12CD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x813Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x92D0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12CD = {57u, 0x92CDu, 0x12CDu, 0x813Fu, 2u, nullptr, 0u, kEdges_b57_12CD, sizeof(kEdges_b57_12CD) / sizeof(kEdges_b57_12CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12D0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12D0 = {57u, 0x92D0u, 0x12D0u, 0x007Fu, 1u, nullptr, 0u, kEdges_b57_12D0, sizeof(kEdges_b57_12D0) / sizeof(kEdges_b57_12D0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12D2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8110u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x92D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12D2 = {57u, 0x92D2u, 0x12D2u, 0x8110u, 2u, nullptr, 0u, kEdges_b57_12D2, sizeof(kEdges_b57_12D2) / sizeof(kEdges_b57_12D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12D5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF29u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x92D8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12D5 = {57u, 0x92D5u, 0x12D5u, 0xEF29u, 2u, nullptr, 0u, kEdges_b57_12D5, sizeof(kEdges_b57_12D5) / sizeof(kEdges_b57_12D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12D8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12D8 = {57u, 0x92D8u, 0x12D8u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_12D8, sizeof(kEdges_b57_12D8) / sizeof(kEdges_b57_12D8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92DCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12DA = {57u, 0x92DAu, 0x12DAu, 0x00DFu, 1u, nullptr, 0u, kEdges_b57_12DA, sizeof(kEdges_b57_12DA) / sizeof(kEdges_b57_12DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12DC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12DC = {57u, 0x92DCu, 0x12DCu, 0x060Du, 2u, nullptr, 0u, kEdges_b57_12DC, sizeof(kEdges_b57_12DC) / sizeof(kEdges_b57_12DC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12DF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x92E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12DF = {57u, 0x92DFu, 0x12DFu, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_12DF, sizeof(kEdges_b57_12DF) / sizeof(kEdges_b57_12DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92E4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12E2 = {57u, 0x92E2u, 0x12E2u, 0x00F3u, 1u, nullptr, 0u, kEdges_b57_12E2, sizeof(kEdges_b57_12E2) / sizeof(kEdges_b57_12E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12E4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12E4 = {57u, 0x92E4u, 0x12E4u, 0x001Fu, 1u, nullptr, 0u, kEdges_b57_12E4, sizeof(kEdges_b57_12E4) / sizeof(kEdges_b57_12E4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12E6[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92E8u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x92DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12E6 = {57u, 0x92E6u, 0x12E6u, 0x92DFu, 1u, nullptr, 0u, kEdges_b57_12E6, sizeof(kEdges_b57_12E6) / sizeof(kEdges_b57_12E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12E8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92EAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12E8 = {57u, 0x92E8u, 0x12E8u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_12E8, sizeof(kEdges_b57_12E8) / sizeof(kEdges_b57_12E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12EA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92ECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12EA = {57u, 0x92EAu, 0x12EAu, 0x0058u, 1u, nullptr, 0u, kEdges_b57_12EA, sizeof(kEdges_b57_12EA) / sizeof(kEdges_b57_12EA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12EC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x92EFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12EC = {57u, 0x92ECu, 0x12ECu, 0xE522u, 2u, nullptr, 0u, kEdges_b57_12EC, sizeof(kEdges_b57_12EC) / sizeof(kEdges_b57_12EC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12EF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12EF = {57u, 0x92EFu, 0x12EFu, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_12EF, sizeof(kEdges_b57_12EF) / sizeof(kEdges_b57_12EF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12F1 = {57u, 0x92F1u, 0x12F1u, 0x0059u, 1u, nullptr, 0u, kEdges_b57_12F1, sizeof(kEdges_b57_12F1) / sizeof(kEdges_b57_12F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12F3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x92F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12F3 = {57u, 0x92F3u, 0x12F3u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_12F3, sizeof(kEdges_b57_12F3) / sizeof(kEdges_b57_12F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12F6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12F6 = {57u, 0x92F6u, 0x12F6u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_12F6, sizeof(kEdges_b57_12F6) / sizeof(kEdges_b57_12F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12F8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12F8 = {57u, 0x92F8u, 0x12F8u, 0x060Du, 2u, nullptr, 0u, kEdges_b57_12F8, sizeof(kEdges_b57_12F8) / sizeof(kEdges_b57_12F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x92FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12FB = {57u, 0x92FBu, 0x12FBu, 0x060Du, 2u, nullptr, 0u, kEdges_b57_12FB, sizeof(kEdges_b57_12FB) / sizeof(kEdges_b57_12FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_12FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9300u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_12FE = {57u, 0x92FEu, 0x12FEu, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_12FE, sizeof(kEdges_b57_12FE) / sizeof(kEdges_b57_12FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1300[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9301u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1300 = {57u, 0x9300u, 0x1300u, 0u, 0u, nullptr, 0u, kEdges_b57_1300, sizeof(kEdges_b57_1300) / sizeof(kEdges_b57_1300[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1301[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9304u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1301 = {57u, 0x9301u, 0x1301u, 0x9318u, 2u, nullptr, 0u, kEdges_b57_1301, sizeof(kEdges_b57_1301) / sizeof(kEdges_b57_1301[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1304[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9305u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1304 = {57u, 0x9304u, 0x1304u, 0u, 0u, nullptr, 0u, kEdges_b57_1304, sizeof(kEdges_b57_1304) / sizeof(kEdges_b57_1304[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1305[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9308u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1305 = {57u, 0x9305u, 0x1305u, 0x9312u, 2u, nullptr, 0u, kEdges_b57_1305, sizeof(kEdges_b57_1305) / sizeof(kEdges_b57_1305[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1308[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x930Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1308 = {57u, 0x9308u, 0x1308u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1308, sizeof(kEdges_b57_1308) / sizeof(kEdges_b57_1308[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_130A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x930Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_130A = {57u, 0x930Au, 0x130Au, 0x9315u, 2u, nullptr, 0u, kEdges_b57_130A, sizeof(kEdges_b57_130A) / sizeof(kEdges_b57_130A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_130D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x930Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_130D = {57u, 0x930Du, 0x130Du, 0x0009u, 1u, nullptr, 0u, kEdges_b57_130D, sizeof(kEdges_b57_130D) / sizeof(kEdges_b57_130D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_130F[] = {
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 57, 0x9328u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 57, 0x9338u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 57, 0x9350u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_130F = {57u, 0x930Fu, 0x130Fu, 0x0008u, 2u, nullptr, 0u, kEdges_b57_130F, sizeof(kEdges_b57_130F) / sizeof(kEdges_b57_130F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1328[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x932Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1328 = {57u, 0x9328u, 0x1328u, 0x0014u, 1u, nullptr, 0u, kEdges_b57_1328, sizeof(kEdges_b57_1328) / sizeof(kEdges_b57_1328[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_132A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x932Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_132A = {57u, 0x932Au, 0x132Au, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_132A, sizeof(kEdges_b57_132A) / sizeof(kEdges_b57_132A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_132D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9330u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_132D = {57u, 0x932Du, 0x132Du, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_132D, sizeof(kEdges_b57_132D) / sizeof(kEdges_b57_132D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1330[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9333u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1330 = {57u, 0x9330u, 0x1330u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_1330, sizeof(kEdges_b57_1330) / sizeof(kEdges_b57_1330[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1333[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9335u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x932Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1333 = {57u, 0x9333u, 0x1333u, 0x932Du, 1u, nullptr, 0u, kEdges_b57_1333, sizeof(kEdges_b57_1333) / sizeof(kEdges_b57_1333[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1335[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x92DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1335 = {57u, 0x9335u, 0x1335u, 0x92DFu, 2u, nullptr, 0u, kEdges_b57_1335, sizeof(kEdges_b57_1335) / sizeof(kEdges_b57_1335[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1338[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x933Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1338 = {57u, 0x9338u, 0x1338u, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_1338, sizeof(kEdges_b57_1338) / sizeof(kEdges_b57_1338[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_133A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x933Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_133A = {57u, 0x933Au, 0x133Au, 0x0052u, 1u, nullptr, 0u, kEdges_b57_133A, sizeof(kEdges_b57_133A) / sizeof(kEdges_b57_133A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_133C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x933Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_133C = {57u, 0x933Cu, 0x133Cu, 0xE522u, 2u, nullptr, 0u, kEdges_b57_133C, sizeof(kEdges_b57_133C) / sizeof(kEdges_b57_133C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_133F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9341u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_133F = {57u, 0x933Fu, 0x133Fu, 0x00E2u, 1u, nullptr, 0u, kEdges_b57_133F, sizeof(kEdges_b57_133F) / sizeof(kEdges_b57_133F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1341[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9344u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1341 = {57u, 0x9341u, 0x1341u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_1341, sizeof(kEdges_b57_1341) / sizeof(kEdges_b57_1341[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1344[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9346u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x934Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1344 = {57u, 0x9344u, 0x1344u, 0x934Du, 1u, nullptr, 0u, kEdges_b57_1344, sizeof(kEdges_b57_1344) / sizeof(kEdges_b57_1344[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1346[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9348u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1346 = {57u, 0x9346u, 0x1346u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1346, sizeof(kEdges_b57_1346) / sizeof(kEdges_b57_1346[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1348[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x934Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1348 = {57u, 0x9348u, 0x1348u, 0x002Fu, 1u, nullptr, 0u, kEdges_b57_1348, sizeof(kEdges_b57_1348) / sizeof(kEdges_b57_1348[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_134A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x934Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_134A = {57u, 0x934Au, 0x134Au, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_134A, sizeof(kEdges_b57_134A) / sizeof(kEdges_b57_134A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_134D[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x92DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_134D = {57u, 0x934Du, 0x134Du, 0x92DFu, 2u, nullptr, 0u, kEdges_b57_134D, sizeof(kEdges_b57_134D) / sizeof(kEdges_b57_134D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1350[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9352u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1350 = {57u, 0x9350u, 0x1350u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_1350, sizeof(kEdges_b57_1350) / sizeof(kEdges_b57_1350[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1352[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9354u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1352 = {57u, 0x9352u, 0x1352u, 0x004Fu, 1u, nullptr, 0u, kEdges_b57_1352, sizeof(kEdges_b57_1352) / sizeof(kEdges_b57_1352[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1354[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9357u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1354 = {57u, 0x9354u, 0x1354u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_1354, sizeof(kEdges_b57_1354) / sizeof(kEdges_b57_1354[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1357[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9359u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1357 = {57u, 0x9357u, 0x1357u, 0x00E3u, 1u, nullptr, 0u, kEdges_b57_1357, sizeof(kEdges_b57_1357) / sizeof(kEdges_b57_1357[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1359[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x935Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1359 = {57u, 0x9359u, 0x1359u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_1359, sizeof(kEdges_b57_1359) / sizeof(kEdges_b57_1359[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_135C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x935Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9365u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_135C = {57u, 0x935Cu, 0x135Cu, 0x9365u, 1u, nullptr, 0u, kEdges_b57_135C, sizeof(kEdges_b57_135C) / sizeof(kEdges_b57_135C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_135E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9360u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_135E = {57u, 0x935Eu, 0x135Eu, 0x0009u, 1u, nullptr, 0u, kEdges_b57_135E, sizeof(kEdges_b57_135E) / sizeof(kEdges_b57_135E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1360[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9362u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1360 = {57u, 0x9360u, 0x1360u, 0x0030u, 1u, nullptr, 0u, kEdges_b57_1360, sizeof(kEdges_b57_1360) / sizeof(kEdges_b57_1360[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1362[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9365u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1362 = {57u, 0x9362u, 0x1362u, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_1362, sizeof(kEdges_b57_1362) / sizeof(kEdges_b57_1362[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1365[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x92DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1365 = {57u, 0x9365u, 0x1365u, 0x92DFu, 2u, nullptr, 0u, kEdges_b57_1365, sizeof(kEdges_b57_1365) / sizeof(kEdges_b57_1365[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_136E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9371u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_136E = {57u, 0x936Eu, 0x136Eu, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_136E, sizeof(kEdges_b57_136E) / sizeof(kEdges_b57_136E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1371[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9373u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1371 = {57u, 0x9371u, 0x1371u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1371, sizeof(kEdges_b57_1371) / sizeof(kEdges_b57_1371[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1373[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9376u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1373 = {57u, 0x9373u, 0x1373u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_1373, sizeof(kEdges_b57_1373) / sizeof(kEdges_b57_1373[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1376[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9378u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1376 = {57u, 0x9376u, 0x1376u, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_1376, sizeof(kEdges_b57_1376) / sizeof(kEdges_b57_1376[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1378[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x937Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1378 = {57u, 0x9378u, 0x1378u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1378, sizeof(kEdges_b57_1378) / sizeof(kEdges_b57_1378[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_137B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x937Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_137B = {57u, 0x937Bu, 0x137Bu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_137B, sizeof(kEdges_b57_137B) / sizeof(kEdges_b57_137B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_137E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x937Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_137E = {57u, 0x937Eu, 0x137Eu, 0u, 0u, nullptr, 0u, kEdges_b57_137E, sizeof(kEdges_b57_137E) / sizeof(kEdges_b57_137E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_137F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9382u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_137F = {57u, 0x937Fu, 0x137Fu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_137F, sizeof(kEdges_b57_137F) / sizeof(kEdges_b57_137F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1382[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9385u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1382 = {57u, 0x9382u, 0x1382u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_1382, sizeof(kEdges_b57_1382) / sizeof(kEdges_b57_1382[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1385[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9388u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1385 = {57u, 0x9385u, 0x1385u, 0x93EEu, 2u, nullptr, 0u, kEdges_b57_1385, sizeof(kEdges_b57_1385) / sizeof(kEdges_b57_1385[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1388[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x938Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9398u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1388 = {57u, 0x9388u, 0x1388u, 0x9398u, 1u, nullptr, 0u, kEdges_b57_1388, sizeof(kEdges_b57_1388) / sizeof(kEdges_b57_1388[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_138A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x938Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_138A = {57u, 0x938Au, 0x138Au, 0x0025u, 1u, nullptr, 0u, kEdges_b57_138A, sizeof(kEdges_b57_138A) / sizeof(kEdges_b57_138A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_138C[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x9390u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_138C = {57u, 0x938Cu, 0x138Cu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_138C, sizeof(kEdges_b57_138C) / sizeof(kEdges_b57_138C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1390[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9392u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1390 = {57u, 0x9390u, 0x1390u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1390, sizeof(kEdges_b57_1390) / sizeof(kEdges_b57_1390[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1392[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9395u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1392 = {57u, 0x9392u, 0x1392u, 0x05DFu, 2u, nullptr, 0u, kEdges_b57_1392, sizeof(kEdges_b57_1392) / sizeof(kEdges_b57_1392[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1395[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE477u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1395 = {57u, 0x9395u, 0x1395u, 0xE477u, 2u, nullptr, 0u, kEdges_b57_1395, sizeof(kEdges_b57_1395) / sizeof(kEdges_b57_1395[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1398[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x939Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1398 = {57u, 0x9398u, 0x1398u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1398, sizeof(kEdges_b57_1398) / sizeof(kEdges_b57_1398[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_139B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x939Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_139B = {57u, 0x939Bu, 0x139Bu, 0u, 0u, nullptr, 0u, kEdges_b57_139B, sizeof(kEdges_b57_139B) / sizeof(kEdges_b57_139B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_139C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x939Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_139C = {57u, 0x939Cu, 0x139Cu, 0x93EEu, 2u, nullptr, 0u, kEdges_b57_139C, sizeof(kEdges_b57_139C) / sizeof(kEdges_b57_139C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_139F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93A2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_139F = {57u, 0x939Fu, 0x139Fu, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_139F, sizeof(kEdges_b57_139F) / sizeof(kEdges_b57_139F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13A2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93A3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13A2 = {57u, 0x93A2u, 0x13A2u, 0u, 0u, nullptr, 0u, kEdges_b57_13A2, sizeof(kEdges_b57_13A2) / sizeof(kEdges_b57_13A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13A3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13A3 = {57u, 0x93A3u, 0x13A3u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_13A3, sizeof(kEdges_b57_13A3) / sizeof(kEdges_b57_13A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13A5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE60Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x93A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13A5 = {57u, 0x93A5u, 0x13A5u, 0xE60Eu, 2u, nullptr, 0u, kEdges_b57_13A5, sizeof(kEdges_b57_13A5) / sizeof(kEdges_b57_13A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13A8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE9D3u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x93ABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13A8 = {57u, 0x93A8u, 0x13A8u, 0xE9D3u, 2u, nullptr, 0u, kEdges_b57_13A8, sizeof(kEdges_b57_13A8) / sizeof(kEdges_b57_13A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13AB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93AEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13AB = {57u, 0x93ABu, 0x13ABu, 0x056Cu, 2u, nullptr, 0u, kEdges_b57_13AB, sizeof(kEdges_b57_13AB) / sizeof(kEdges_b57_13AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13AE[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93B0u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x93C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13AE = {57u, 0x93AEu, 0x13AEu, 0x93C6u, 1u, nullptr, 0u, kEdges_b57_13AE, sizeof(kEdges_b57_13AE) / sizeof(kEdges_b57_13AE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13B0 = {57u, 0x93B0u, 0x13B0u, 0x0014u, 1u, nullptr, 0u, kEdges_b57_13B0, sizeof(kEdges_b57_13B0) / sizeof(kEdges_b57_13B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13B2[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93B4u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x93C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13B2 = {57u, 0x93B2u, 0x13B2u, 0x93C6u, 1u, nullptr, 0u, kEdges_b57_13B2, sizeof(kEdges_b57_13B2) / sizeof(kEdges_b57_13B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13B4 = {57u, 0x93B4u, 0x13B4u, 0x0006u, 1u, nullptr, 0u, kEdges_b57_13B4, sizeof(kEdges_b57_13B4) / sizeof(kEdges_b57_13B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13B6 = {57u, 0x93B6u, 0x13B6u, 0x00E4u, 1u, nullptr, 0u, kEdges_b57_13B6, sizeof(kEdges_b57_13B6) / sizeof(kEdges_b57_13B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13B8[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x93BCu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13B8 = {57u, 0x93B8u, 0x13B8u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_13B8, sizeof(kEdges_b57_13B8) / sizeof(kEdges_b57_13B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13BC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13BC = {57u, 0x93BCu, 0x13BCu, 0x0003u, 1u, nullptr, 0u, kEdges_b57_13BC, sizeof(kEdges_b57_13BC) / sizeof(kEdges_b57_13BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13BE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13BE = {57u, 0x93BEu, 0x13BEu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_13BE, sizeof(kEdges_b57_13BE) / sizeof(kEdges_b57_13BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13C0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x93C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13C0 = {57u, 0x93C0u, 0x13C0u, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_13C0, sizeof(kEdges_b57_13C0) / sizeof(kEdges_b57_13C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13C3[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13C3 = {57u, 0x93C3u, 0x13C3u, 0xE456u, 2u, nullptr, 0u, kEdges_b57_13C3, sizeof(kEdges_b57_13C3) / sizeof(kEdges_b57_13C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13C6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13C6 = {57u, 0x93C6u, 0x13C6u, 0x056Cu, 2u, nullptr, 0u, kEdges_b57_13C6, sizeof(kEdges_b57_13C6) / sizeof(kEdges_b57_13C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13C9[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93CBu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x93E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13C9 = {57u, 0x93C9u, 0x13C9u, 0x93E6u, 1u, nullptr, 0u, kEdges_b57_13C9, sizeof(kEdges_b57_13C9) / sizeof(kEdges_b57_13C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13CB = {57u, 0x93CBu, 0x13CBu, 0x0020u, 1u, nullptr, 0u, kEdges_b57_13CB, sizeof(kEdges_b57_13CB) / sizeof(kEdges_b57_13CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13CD[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93CFu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x93E1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13CD = {57u, 0x93CDu, 0x13CDu, 0x93E1u, 1u, nullptr, 0u, kEdges_b57_13CD, sizeof(kEdges_b57_13CD) / sizeof(kEdges_b57_13CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13CF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13CF = {57u, 0x93CFu, 0x13CFu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_13CF, sizeof(kEdges_b57_13CF) / sizeof(kEdges_b57_13CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13D1[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE61Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x93D4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13D1 = {57u, 0x93D1u, 0x13D1u, 0xE61Au, 2u, nullptr, 0u, kEdges_b57_13D1, sizeof(kEdges_b57_13D1) / sizeof(kEdges_b57_13D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13D4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93D6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13D4 = {57u, 0x93D4u, 0x13D4u, 0x00EBu, 1u, nullptr, 0u, kEdges_b57_13D4, sizeof(kEdges_b57_13D4) / sizeof(kEdges_b57_13D4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13D6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93D9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13D6 = {57u, 0x93D6u, 0x13D6u, 0x069Au, 2u, nullptr, 0u, kEdges_b57_13D6, sizeof(kEdges_b57_13D6) / sizeof(kEdges_b57_13D6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13D9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93DBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13D9 = {57u, 0x93D9u, 0x13D9u, 0x00EDu, 1u, nullptr, 0u, kEdges_b57_13D9, sizeof(kEdges_b57_13D9) / sizeof(kEdges_b57_13D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13DB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93DEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13DB = {57u, 0x93DBu, 0x13DBu, 0x069Bu, 2u, nullptr, 0u, kEdges_b57_13DB, sizeof(kEdges_b57_13DB) / sizeof(kEdges_b57_13DB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13DE[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x93E1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13DE = {57u, 0x93DEu, 0x13DEu, 0x93E1u, 2u, nullptr, 0u, kEdges_b57_13DE, sizeof(kEdges_b57_13DE) / sizeof(kEdges_b57_13DE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13E1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93E3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13E1 = {57u, 0x93E1u, 0x13E1u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_13E1, sizeof(kEdges_b57_13E1) / sizeof(kEdges_b57_13E1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13E3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13E3 = {57u, 0x93E3u, 0x13E3u, 0x056Cu, 2u, nullptr, 0u, kEdges_b57_13E3, sizeof(kEdges_b57_13E3) / sizeof(kEdges_b57_13E3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13E6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93E9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13E6 = {57u, 0x93E6u, 0x13E6u, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_13E6, sizeof(kEdges_b57_13E6) / sizeof(kEdges_b57_13E6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13E9[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x93EBu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x93A3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13E9 = {57u, 0x93E9u, 0x13E9u, 0x93A3u, 1u, nullptr, 0u, kEdges_b57_13E9, sizeof(kEdges_b57_13E9) / sizeof(kEdges_b57_13E9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_13EB[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x937Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_13EB = {57u, 0x93EBu, 0x13EBu, 0x937Bu, 2u, nullptr, 0u, kEdges_b57_13EB, sizeof(kEdges_b57_13EB) / sizeof(kEdges_b57_13EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1416[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9418u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1416 = {57u, 0x9416u, 0x1416u, 0x00FEu, 1u, nullptr, 0u, kEdges_b57_1416, sizeof(kEdges_b57_1416) / sizeof(kEdges_b57_1416[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1418[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x941Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1418 = {57u, 0x9418u, 0x1418u, 0x00F9u, 1u, nullptr, 0u, kEdges_b57_1418, sizeof(kEdges_b57_1418) / sizeof(kEdges_b57_1418[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_141A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x941Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_141A = {57u, 0x941Au, 0x141Au, 0x00C1u, 1u, nullptr, 0u, kEdges_b57_141A, sizeof(kEdges_b57_141A) / sizeof(kEdges_b57_141A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_141C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x941Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_141C = {57u, 0x941Cu, 0x141Cu, 0x0672u, 2u, nullptr, 0u, kEdges_b57_141C, sizeof(kEdges_b57_141C) / sizeof(kEdges_b57_141C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_141F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9421u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_141F = {57u, 0x941Fu, 0x141Fu, 0x0007u, 1u, nullptr, 0u, kEdges_b57_141F, sizeof(kEdges_b57_141F) / sizeof(kEdges_b57_141F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1421[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9424u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1421 = {57u, 0x9421u, 0x1421u, 0x0677u, 2u, nullptr, 0u, kEdges_b57_1421, sizeof(kEdges_b57_1421) / sizeof(kEdges_b57_1421[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1424[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9426u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1424 = {57u, 0x9424u, 0x1424u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1424, sizeof(kEdges_b57_1424) / sizeof(kEdges_b57_1424[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1426[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9428u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1426 = {57u, 0x9426u, 0x1426u, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_1426, sizeof(kEdges_b57_1426) / sizeof(kEdges_b57_1426[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1428[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1428 = {57u, 0x9428u, 0x1428u, 0u, 0u, nullptr, 0u, kEdges_b57_1428, sizeof(kEdges_b57_1428) / sizeof(kEdges_b57_1428[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_142F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9432u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_142F = {57u, 0x942Fu, 0x142Fu, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_142F, sizeof(kEdges_b57_142F) / sizeof(kEdges_b57_142F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1432[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9434u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1432 = {57u, 0x9432u, 0x1432u, 0x002Fu, 1u, nullptr, 0u, kEdges_b57_1432, sizeof(kEdges_b57_1432) / sizeof(kEdges_b57_1432[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1434[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9437u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1434 = {57u, 0x9434u, 0x1434u, 0x05DEu, 2u, nullptr, 0u, kEdges_b57_1434, sizeof(kEdges_b57_1434) / sizeof(kEdges_b57_1434[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1437[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9439u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1437 = {57u, 0x9437u, 0x1437u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1437, sizeof(kEdges_b57_1437) / sizeof(kEdges_b57_1437[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1439[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x943Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1439 = {57u, 0x9439u, 0x1439u, 0x00CCu, 1u, nullptr, 0u, kEdges_b57_1439, sizeof(kEdges_b57_1439) / sizeof(kEdges_b57_1439[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_143B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x943Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_143B = {57u, 0x943Bu, 0x143Bu, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_143B, sizeof(kEdges_b57_143B) / sizeof(kEdges_b57_143B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_143D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x943Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_143D = {57u, 0x943Du, 0x143Du, 0x0095u, 1u, nullptr, 0u, kEdges_b57_143D, sizeof(kEdges_b57_143D) / sizeof(kEdges_b57_143D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_143F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9441u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_143F = {57u, 0x943Fu, 0x143Fu, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_143F, sizeof(kEdges_b57_143F) / sizeof(kEdges_b57_143F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1441[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x813Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9444u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1441 = {57u, 0x9441u, 0x1441u, 0x813Fu, 2u, nullptr, 0u, kEdges_b57_1441, sizeof(kEdges_b57_1441) / sizeof(kEdges_b57_1441[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1444[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9446u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1444 = {57u, 0x9444u, 0x1444u, 0x00B4u, 1u, nullptr, 0u, kEdges_b57_1444, sizeof(kEdges_b57_1444) / sizeof(kEdges_b57_1444[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1446[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9449u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1446 = {57u, 0x9446u, 0x1446u, 0x05BAu, 2u, nullptr, 0u, kEdges_b57_1446, sizeof(kEdges_b57_1446) / sizeof(kEdges_b57_1446[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1449[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x944Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1449 = {57u, 0x9449u, 0x1449u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1449, sizeof(kEdges_b57_1449) / sizeof(kEdges_b57_1449[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_144B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x944Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_144B = {57u, 0x944Bu, 0x144Bu, 0x05E8u, 2u, nullptr, 0u, kEdges_b57_144B, sizeof(kEdges_b57_144B) / sizeof(kEdges_b57_144B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_144E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9450u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_144E = {57u, 0x944Eu, 0x144Eu, 0x0003u, 1u, nullptr, 0u, kEdges_b57_144E, sizeof(kEdges_b57_144E) / sizeof(kEdges_b57_144E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1450[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9453u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1450 = {57u, 0x9450u, 0x1450u, 0x04BCu, 2u, nullptr, 0u, kEdges_b57_1450, sizeof(kEdges_b57_1450) / sizeof(kEdges_b57_1450[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1453[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9456u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1453 = {57u, 0x9453u, 0x1453u, 0x0477u, 2u, nullptr, 0u, kEdges_b57_1453, sizeof(kEdges_b57_1453) / sizeof(kEdges_b57_1453[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1456[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9457u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1456 = {57u, 0x9456u, 0x1456u, 0u, 0u, nullptr, 0u, kEdges_b57_1456, sizeof(kEdges_b57_1456) / sizeof(kEdges_b57_1456[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1457[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9459u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9450u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1457 = {57u, 0x9457u, 0x1457u, 0x9450u, 1u, nullptr, 0u, kEdges_b57_1457, sizeof(kEdges_b57_1457) / sizeof(kEdges_b57_1457[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1459[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x945Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1459 = {57u, 0x9459u, 0x1459u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1459, sizeof(kEdges_b57_1459) / sizeof(kEdges_b57_1459[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_145B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x945Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_145B = {57u, 0x945Bu, 0x145Bu, 0x00FBu, 1u, nullptr, 0u, kEdges_b57_145B, sizeof(kEdges_b57_145B) / sizeof(kEdges_b57_145B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_145D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9416u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9460u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_145D = {57u, 0x945Du, 0x145Du, 0x9416u, 2u, nullptr, 0u, kEdges_b57_145D, sizeof(kEdges_b57_145D) / sizeof(kEdges_b57_145D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1460[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9462u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1460 = {57u, 0x9460u, 0x1460u, 0x00F8u, 1u, nullptr, 0u, kEdges_b57_1460, sizeof(kEdges_b57_1460) / sizeof(kEdges_b57_1460[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1462[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9464u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1462 = {57u, 0x9462u, 0x1462u, 0x00B8u, 1u, nullptr, 0u, kEdges_b57_1462, sizeof(kEdges_b57_1462) / sizeof(kEdges_b57_1462[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1464[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9467u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1464 = {57u, 0x9464u, 0x1464u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_1464, sizeof(kEdges_b57_1464) / sizeof(kEdges_b57_1464[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1467[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF29u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x946Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1467 = {57u, 0x9467u, 0x1467u, 0xEF29u, 2u, nullptr, 0u, kEdges_b57_1467, sizeof(kEdges_b57_1467) / sizeof(kEdges_b57_1467[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_146A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x953Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x946Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_146A = {57u, 0x946Au, 0x146Au, 0x953Du, 2u, nullptr, 0u, kEdges_b57_146A, sizeof(kEdges_b57_146A) / sizeof(kEdges_b57_146A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_146D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x946Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_146D = {57u, 0x946Du, 0x146Du, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_146D, sizeof(kEdges_b57_146D) / sizeof(kEdges_b57_146D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_146F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9471u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_146F = {57u, 0x946Fu, 0x146Fu, 0x00B8u, 1u, nullptr, 0u, kEdges_b57_146F, sizeof(kEdges_b57_146F) / sizeof(kEdges_b57_146F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1471[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9474u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1471 = {57u, 0x9471u, 0x1471u, 0x0624u, 2u, nullptr, 0u, kEdges_b57_1471, sizeof(kEdges_b57_1471) / sizeof(kEdges_b57_1471[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1474[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9476u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1474 = {57u, 0x9474u, 0x1474u, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_1474, sizeof(kEdges_b57_1474) / sizeof(kEdges_b57_1474[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1476[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x94FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9479u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1476 = {57u, 0x9476u, 0x1476u, 0x94FDu, 2u, nullptr, 0u, kEdges_b57_1476, sizeof(kEdges_b57_1476) / sizeof(kEdges_b57_1476[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1479[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x947Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1479 = {57u, 0x9479u, 0x1479u, 0x069Du, 2u, nullptr, 0u, kEdges_b57_1479, sizeof(kEdges_b57_1479) / sizeof(kEdges_b57_1479[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_147C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x947Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9484u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_147C = {57u, 0x947Cu, 0x147Cu, 0x9484u, 1u, nullptr, 0u, kEdges_b57_147C, sizeof(kEdges_b57_147C) / sizeof(kEdges_b57_147C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_147E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9481u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_147E = {57u, 0x947Eu, 0x147Eu, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_147E, sizeof(kEdges_b57_147E) / sizeof(kEdges_b57_147E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1481[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9474u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1481 = {57u, 0x9481u, 0x1481u, 0x9474u, 2u, nullptr, 0u, kEdges_b57_1481, sizeof(kEdges_b57_1481) / sizeof(kEdges_b57_1481[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1484[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9486u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1484 = {57u, 0x9484u, 0x1484u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1484, sizeof(kEdges_b57_1484) / sizeof(kEdges_b57_1484[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1486[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9488u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1486 = {57u, 0x9486u, 0x1486u, 0x00F8u, 1u, nullptr, 0u, kEdges_b57_1486, sizeof(kEdges_b57_1486) / sizeof(kEdges_b57_1486[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1488[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x953Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x948Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1488 = {57u, 0x9488u, 0x1488u, 0x953Du, 2u, nullptr, 0u, kEdges_b57_1488, sizeof(kEdges_b57_1488) / sizeof(kEdges_b57_1488[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_148B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x948Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_148B = {57u, 0x948Bu, 0x148Bu, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_148B, sizeof(kEdges_b57_148B) / sizeof(kEdges_b57_148B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_148D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x94FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9490u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_148D = {57u, 0x948Du, 0x148Du, 0x94FDu, 2u, nullptr, 0u, kEdges_b57_148D, sizeof(kEdges_b57_148D) / sizeof(kEdges_b57_148D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1490[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9493u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1490 = {57u, 0x9490u, 0x1490u, 0x0574u, 2u, nullptr, 0u, kEdges_b57_1490, sizeof(kEdges_b57_1490) / sizeof(kEdges_b57_1490[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1493[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9496u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1493 = {57u, 0x9493u, 0x1493u, 0x0575u, 2u, nullptr, 0u, kEdges_b57_1493, sizeof(kEdges_b57_1493) / sizeof(kEdges_b57_1493[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1496[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9499u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1496 = {57u, 0x9496u, 0x1496u, 0x0576u, 2u, nullptr, 0u, kEdges_b57_1496, sizeof(kEdges_b57_1496) / sizeof(kEdges_b57_1496[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1499[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x949Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x94B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1499 = {57u, 0x9499u, 0x1499u, 0x94B3u, 1u, nullptr, 0u, kEdges_b57_1499, sizeof(kEdges_b57_1499) / sizeof(kEdges_b57_1499[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_149B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x949Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_149B = {57u, 0x949Bu, 0x149Bu, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_149B, sizeof(kEdges_b57_149B) / sizeof(kEdges_b57_149B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_149E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94A1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_149E = {57u, 0x949Eu, 0x149Eu, 0x0486u, 2u, nullptr, 0u, kEdges_b57_149E, sizeof(kEdges_b57_149E) / sizeof(kEdges_b57_149E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14A1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14A1 = {57u, 0x94A1u, 0x14A1u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_14A1, sizeof(kEdges_b57_14A1) / sizeof(kEdges_b57_14A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14A4[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94A6u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x94DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14A4 = {57u, 0x94A4u, 0x14A4u, 0x94DAu, 1u, nullptr, 0u, kEdges_b57_14A4, sizeof(kEdges_b57_14A4) / sizeof(kEdges_b57_14A4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14A6 = {57u, 0x94A6u, 0x14A6u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_14A6, sizeof(kEdges_b57_14A6) / sizeof(kEdges_b57_14A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14A9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94ABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14A9 = {57u, 0x94A9u, 0x14A9u, 0x0040u, 1u, nullptr, 0u, kEdges_b57_14A9, sizeof(kEdges_b57_14A9) / sizeof(kEdges_b57_14A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14AB[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94ADu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x948Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14AB = {57u, 0x94ABu, 0x14ABu, 0x948Bu, 1u, nullptr, 0u, kEdges_b57_14AB, sizeof(kEdges_b57_14AB) / sizeof(kEdges_b57_14AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14AD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9530u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x94B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14AD = {57u, 0x94ADu, 0x14ADu, 0x9530u, 2u, nullptr, 0u, kEdges_b57_14AD, sizeof(kEdges_b57_14AD) / sizeof(kEdges_b57_14AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14B0[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9490u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14B0 = {57u, 0x94B0u, 0x14B0u, 0x9490u, 2u, nullptr, 0u, kEdges_b57_14B0, sizeof(kEdges_b57_14B0) / sizeof(kEdges_b57_14B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14B3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14B3 = {57u, 0x94B3u, 0x14B3u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_14B3, sizeof(kEdges_b57_14B3) / sizeof(kEdges_b57_14B3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14B5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14B5 = {57u, 0x94B5u, 0x14B5u, 0x0575u, 2u, nullptr, 0u, kEdges_b57_14B5, sizeof(kEdges_b57_14B5) / sizeof(kEdges_b57_14B5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14B8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14B8 = {57u, 0x94B8u, 0x14B8u, 0x0576u, 2u, nullptr, 0u, kEdges_b57_14B8, sizeof(kEdges_b57_14B8) / sizeof(kEdges_b57_14B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14BB = {57u, 0x94BBu, 0x14BBu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_14BB, sizeof(kEdges_b57_14BB) / sizeof(kEdges_b57_14BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14BD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14BD = {57u, 0x94BDu, 0x14BDu, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_14BD, sizeof(kEdges_b57_14BD) / sizeof(kEdges_b57_14BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14C0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x953Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x94C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14C0 = {57u, 0x94C0u, 0x14C0u, 0x953Du, 2u, nullptr, 0u, kEdges_b57_14C0, sizeof(kEdges_b57_14C0) / sizeof(kEdges_b57_14C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14C3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x94C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14C3 = {57u, 0x94C3u, 0x14C3u, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_14C3, sizeof(kEdges_b57_14C3) / sizeof(kEdges_b57_14C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14C6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14C6 = {57u, 0x94C6u, 0x14C6u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_14C6, sizeof(kEdges_b57_14C6) / sizeof(kEdges_b57_14C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14C9 = {57u, 0x94C9u, 0x14C9u, 0x00AFu, 1u, nullptr, 0u, kEdges_b57_14C9, sizeof(kEdges_b57_14C9) / sizeof(kEdges_b57_14C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14CB[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94CDu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x94D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14CB = {57u, 0x94CBu, 0x14CBu, 0x94D2u, 1u, nullptr, 0u, kEdges_b57_14CB, sizeof(kEdges_b57_14CB) / sizeof(kEdges_b57_14CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14CD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14CD = {57u, 0x94CDu, 0x14CDu, 0x0004u, 1u, nullptr, 0u, kEdges_b57_14CD, sizeof(kEdges_b57_14CD) / sizeof(kEdges_b57_14CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14CF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x94FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x94D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14CF = {57u, 0x94CFu, 0x14CFu, 0x94FDu, 2u, nullptr, 0u, kEdges_b57_14CF, sizeof(kEdges_b57_14CF) / sizeof(kEdges_b57_14CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14D2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14D2 = {57u, 0x94D2u, 0x14D2u, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_14D2, sizeof(kEdges_b57_14D2) / sizeof(kEdges_b57_14D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14D5[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94D7u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x94C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14D5 = {57u, 0x94D5u, 0x14D5u, 0x94C3u, 1u, nullptr, 0u, kEdges_b57_14D5, sizeof(kEdges_b57_14D5) / sizeof(kEdges_b57_14D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14D7[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9488u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14D7 = {57u, 0x94D7u, 0x14D7u, 0x9488u, 2u, nullptr, 0u, kEdges_b57_14D7, sizeof(kEdges_b57_14D7) / sizeof(kEdges_b57_14D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14DA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x953Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x94DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14DA = {57u, 0x94DAu, 0x14DAu, 0x953Du, 2u, nullptr, 0u, kEdges_b57_14DA, sizeof(kEdges_b57_14DA) / sizeof(kEdges_b57_14DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14DD[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x94E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14DD = {57u, 0x94DDu, 0x14DDu, 0x94E5u, 2u, nullptr, 0u, kEdges_b57_14DD, sizeof(kEdges_b57_14DD) / sizeof(kEdges_b57_14DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14E0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14E0 = {57u, 0x94E0u, 0x14E0u, 0x0004u, 1u, nullptr, 0u, kEdges_b57_14E0, sizeof(kEdges_b57_14E0) / sizeof(kEdges_b57_14E0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14E2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x94FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x94E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14E2 = {57u, 0x94E2u, 0x14E2u, 0x94FDu, 2u, nullptr, 0u, kEdges_b57_14E2, sizeof(kEdges_b57_14E2) / sizeof(kEdges_b57_14E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14E5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x94E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14E5 = {57u, 0x94E5u, 0x14E5u, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_14E5, sizeof(kEdges_b57_14E5) / sizeof(kEdges_b57_14E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14E8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14E8 = {57u, 0x94E8u, 0x14E8u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_14E8, sizeof(kEdges_b57_14E8) / sizeof(kEdges_b57_14E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14EB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94EEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14EB = {57u, 0x94EBu, 0x14EBu, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_14EB, sizeof(kEdges_b57_14EB) / sizeof(kEdges_b57_14EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14EE[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94F0u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9488u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14EE = {57u, 0x94EEu, 0x14EEu, 0x9488u, 1u, nullptr, 0u, kEdges_b57_14EE, sizeof(kEdges_b57_14EE) / sizeof(kEdges_b57_14EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14F0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14F0 = {57u, 0x94F0u, 0x14F0u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_14F0, sizeof(kEdges_b57_14F0) / sizeof(kEdges_b57_14F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94F5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14F3 = {57u, 0x94F3u, 0x14F3u, 0x00AFu, 1u, nullptr, 0u, kEdges_b57_14F3, sizeof(kEdges_b57_14F3) / sizeof(kEdges_b57_14F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14F5[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x94F7u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x94E0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14F5 = {57u, 0x94F5u, 0x14F5u, 0x94E0u, 1u, nullptr, 0u, kEdges_b57_14F5, sizeof(kEdges_b57_14F5) / sizeof(kEdges_b57_14F5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14F7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9530u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x94FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14F7 = {57u, 0x94F7u, 0x14F7u, 0x9530u, 2u, nullptr, 0u, kEdges_b57_14F7, sizeof(kEdges_b57_14F7) / sizeof(kEdges_b57_14F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14FA[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x94E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14FA = {57u, 0x94FAu, 0x14FAu, 0x94E5u, 2u, nullptr, 0u, kEdges_b57_14FA, sizeof(kEdges_b57_14FA) / sizeof(kEdges_b57_14FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_14FD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9500u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_14FD = {57u, 0x94FDu, 0x14FDu, 0x03D6u, 2u, nullptr, 0u, kEdges_b57_14FD, sizeof(kEdges_b57_14FD) / sizeof(kEdges_b57_14FD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1500[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9503u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1500 = {57u, 0x9500u, 0x1500u, 0x05BAu, 2u, nullptr, 0u, kEdges_b57_1500, sizeof(kEdges_b57_1500) / sizeof(kEdges_b57_1500[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1503[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9505u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x952Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1503 = {57u, 0x9503u, 0x1503u, 0x952Fu, 1u, nullptr, 0u, kEdges_b57_1503, sizeof(kEdges_b57_1503) / sizeof(kEdges_b57_1503[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1505[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9507u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1505 = {57u, 0x9505u, 0x1505u, 0x000Bu, 1u, nullptr, 0u, kEdges_b57_1505, sizeof(kEdges_b57_1505) / sizeof(kEdges_b57_1505[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1507[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x950Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1507 = {57u, 0x9507u, 0x1507u, 0x03D6u, 2u, nullptr, 0u, kEdges_b57_1507, sizeof(kEdges_b57_1507) / sizeof(kEdges_b57_1507[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_150A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x950Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_150A = {57u, 0x950Au, 0x150Au, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_150A, sizeof(kEdges_b57_150A) / sizeof(kEdges_b57_150A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_150D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x950Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_150D = {57u, 0x950Du, 0x150Du, 0x0001u, 1u, nullptr, 0u, kEdges_b57_150D, sizeof(kEdges_b57_150D) / sizeof(kEdges_b57_150D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_150F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9511u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_150F = {57u, 0x950Fu, 0x150Fu, 0x0004u, 1u, nullptr, 0u, kEdges_b57_150F, sizeof(kEdges_b57_150F) / sizeof(kEdges_b57_150F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1511[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9513u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9515u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1511 = {57u, 0x9511u, 0x1511u, 0x9515u, 1u, nullptr, 0u, kEdges_b57_1511, sizeof(kEdges_b57_1511) / sizeof(kEdges_b57_1511[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1513[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9515u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1513 = {57u, 0x9513u, 0x1513u, 0x0004u, 1u, nullptr, 0u, kEdges_b57_1513, sizeof(kEdges_b57_1513) / sizeof(kEdges_b57_1513[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1515[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE60Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9518u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1515 = {57u, 0x9515u, 0x1515u, 0xE60Eu, 2u, nullptr, 0u, kEdges_b57_1515, sizeof(kEdges_b57_1515) / sizeof(kEdges_b57_1515[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1518[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x951Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1518 = {57u, 0x9518u, 0x1518u, 0x0057u, 1u, nullptr, 0u, kEdges_b57_1518, sizeof(kEdges_b57_1518) / sizeof(kEdges_b57_1518[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_151A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x951Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_151A = {57u, 0x951Au, 0x151Au, 0u, 0u, nullptr, 0u, kEdges_b57_151A, sizeof(kEdges_b57_151A) / sizeof(kEdges_b57_151A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_151B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x951Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_151B = {57u, 0x951Bu, 0x151Bu, 0x046Fu, 2u, nullptr, 0u, kEdges_b57_151B, sizeof(kEdges_b57_151B) / sizeof(kEdges_b57_151B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_151E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9521u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_151E = {57u, 0x951Eu, 0x151Eu, 0x04B4u, 2u, nullptr, 0u, kEdges_b57_151E, sizeof(kEdges_b57_151E) / sizeof(kEdges_b57_151E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1521[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9522u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1521 = {57u, 0x9521u, 0x1521u, 0u, 0u, nullptr, 0u, kEdges_b57_1521, sizeof(kEdges_b57_1521) / sizeof(kEdges_b57_1521[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1522[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9524u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1522 = {57u, 0x9522u, 0x1522u, 0x0007u, 1u, nullptr, 0u, kEdges_b57_1522, sizeof(kEdges_b57_1522) / sizeof(kEdges_b57_1522[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1524[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9526u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9507u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1524 = {57u, 0x9524u, 0x1524u, 0x9507u, 1u, nullptr, 0u, kEdges_b57_1524, sizeof(kEdges_b57_1524) / sizeof(kEdges_b57_1524[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1526[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9528u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1526 = {57u, 0x9526u, 0x1526u, 0x00B0u, 1u, nullptr, 0u, kEdges_b57_1526, sizeof(kEdges_b57_1526) / sizeof(kEdges_b57_1526[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1528[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9529u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1528 = {57u, 0x9528u, 0x1528u, 0u, 0u, nullptr, 0u, kEdges_b57_1528, sizeof(kEdges_b57_1528) / sizeof(kEdges_b57_1528[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1529[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x952Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1529 = {57u, 0x9529u, 0x1529u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1529, sizeof(kEdges_b57_1529) / sizeof(kEdges_b57_1529[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_152C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x952Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_152C = {57u, 0x952Cu, 0x152Cu, 0x069Du, 2u, nullptr, 0u, kEdges_b57_152C, sizeof(kEdges_b57_152C) / sizeof(kEdges_b57_152C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_152F[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_152F = {57u, 0x952Fu, 0x152Fu, 0u, 0u, nullptr, 0u, kEdges_b57_152F, sizeof(kEdges_b57_152F) / sizeof(kEdges_b57_152F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1530[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9532u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1530 = {57u, 0x9530u, 0x1530u, 0x000Au, 1u, nullptr, 0u, kEdges_b57_1530, sizeof(kEdges_b57_1530) / sizeof(kEdges_b57_1530[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1532[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9534u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1532 = {57u, 0x9532u, 0x1532u, 0x005Du, 1u, nullptr, 0u, kEdges_b57_1532, sizeof(kEdges_b57_1532) / sizeof(kEdges_b57_1532[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1534[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9537u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1534 = {57u, 0x9534u, 0x1534u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_1534, sizeof(kEdges_b57_1534) / sizeof(kEdges_b57_1534[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1537[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9538u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1537 = {57u, 0x9537u, 0x1537u, 0u, 0u, nullptr, 0u, kEdges_b57_1537, sizeof(kEdges_b57_1537) / sizeof(kEdges_b57_1537[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1538[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x953Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1538 = {57u, 0x9538u, 0x1538u, 0x005Eu, 1u, nullptr, 0u, kEdges_b57_1538, sizeof(kEdges_b57_1538) / sizeof(kEdges_b57_1538[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_153A[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_153A = {57u, 0x953Au, 0x153Au, 0xE522u, 2u, nullptr, 0u, kEdges_b57_153A, sizeof(kEdges_b57_153A) / sizeof(kEdges_b57_153A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_153D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x953Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_153D = {57u, 0x953Du, 0x153Du, 0x000Au, 1u, nullptr, 0u, kEdges_b57_153D, sizeof(kEdges_b57_153D) / sizeof(kEdges_b57_153D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_153F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9541u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_153F = {57u, 0x953Fu, 0x153Fu, 0x005Fu, 1u, nullptr, 0u, kEdges_b57_153F, sizeof(kEdges_b57_153F) / sizeof(kEdges_b57_153F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1541[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9544u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1541 = {57u, 0x9541u, 0x1541u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_1541, sizeof(kEdges_b57_1541) / sizeof(kEdges_b57_1541[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1544[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9545u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1544 = {57u, 0x9544u, 0x1544u, 0u, 0u, nullptr, 0u, kEdges_b57_1544, sizeof(kEdges_b57_1544) / sizeof(kEdges_b57_1544[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1545[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9547u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1545 = {57u, 0x9545u, 0x1545u, 0x0060u, 1u, nullptr, 0u, kEdges_b57_1545, sizeof(kEdges_b57_1545) / sizeof(kEdges_b57_1545[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1547[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1547 = {57u, 0x9547u, 0x1547u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_1547, sizeof(kEdges_b57_1547) / sizeof(kEdges_b57_1547[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_154A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x954Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_154A = {57u, 0x954Au, 0x154Au, 0x0009u, 1u, nullptr, 0u, kEdges_b57_154A, sizeof(kEdges_b57_154A) / sizeof(kEdges_b57_154A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_154C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x954Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9554u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_154C = {57u, 0x954Cu, 0x154Cu, 0x9554u, 1u, nullptr, 0u, kEdges_b57_154C, sizeof(kEdges_b57_154C) / sizeof(kEdges_b57_154C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_154E[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x9551u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_154E = {57u, 0x954Eu, 0x154Eu, 0xE468u, 2u, nullptr, 0u, kEdges_b57_154E, sizeof(kEdges_b57_154E) / sizeof(kEdges_b57_154E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1551[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x954Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1551 = {57u, 0x9551u, 0x1551u, 0x954Eu, 2u, nullptr, 0u, kEdges_b57_1551, sizeof(kEdges_b57_1551) / sizeof(kEdges_b57_1551[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1554[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9557u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1554 = {57u, 0x9554u, 0x1554u, 0x04BCu, 2u, nullptr, 0u, kEdges_b57_1554, sizeof(kEdges_b57_1554) / sizeof(kEdges_b57_1554[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1557[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9559u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9584u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1557 = {57u, 0x9557u, 0x1557u, 0x9584u, 1u, nullptr, 0u, kEdges_b57_1557, sizeof(kEdges_b57_1557) / sizeof(kEdges_b57_1557[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1559[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x955Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1559 = {57u, 0x9559u, 0x1559u, 0x05E8u, 2u, nullptr, 0u, kEdges_b57_1559, sizeof(kEdges_b57_1559) / sizeof(kEdges_b57_1559[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_155C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x955Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9584u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_155C = {57u, 0x955Cu, 0x155Cu, 0x9584u, 1u, nullptr, 0u, kEdges_b57_155C, sizeof(kEdges_b57_155C) / sizeof(kEdges_b57_155C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_155E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9561u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_155E = {57u, 0x955Eu, 0x155Eu, 0x05E8u, 2u, nullptr, 0u, kEdges_b57_155E, sizeof(kEdges_b57_155E) / sizeof(kEdges_b57_155E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1561[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9563u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1561 = {57u, 0x9561u, 0x1561u, 0x0040u, 1u, nullptr, 0u, kEdges_b57_1561, sizeof(kEdges_b57_1561) / sizeof(kEdges_b57_1561[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1563[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9565u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1563 = {57u, 0x9563u, 0x1563u, 0x0040u, 1u, nullptr, 0u, kEdges_b57_1563, sizeof(kEdges_b57_1563) / sizeof(kEdges_b57_1563[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1565[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9567u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9584u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1565 = {57u, 0x9565u, 0x1565u, 0x9584u, 1u, nullptr, 0u, kEdges_b57_1565, sizeof(kEdges_b57_1565) / sizeof(kEdges_b57_1565[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1567[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9569u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1567 = {57u, 0x9567u, 0x1567u, 0x001Eu, 1u, nullptr, 0u, kEdges_b57_1567, sizeof(kEdges_b57_1567) / sizeof(kEdges_b57_1567[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1569[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x956Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1569 = {57u, 0x9569u, 0x1569u, 0x05E8u, 2u, nullptr, 0u, kEdges_b57_1569, sizeof(kEdges_b57_1569) / sizeof(kEdges_b57_1569[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_156C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x956Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_156C = {57u, 0x956Cu, 0x156Cu, 0x002Eu, 1u, nullptr, 0u, kEdges_b57_156C, sizeof(kEdges_b57_156C) / sizeof(kEdges_b57_156C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_156E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9571u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_156E = {57u, 0x956Eu, 0x156Eu, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_156E, sizeof(kEdges_b57_156E) / sizeof(kEdges_b57_156E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1571[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9573u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x957Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1571 = {57u, 0x9571u, 0x1571u, 0x957Fu, 1u, nullptr, 0u, kEdges_b57_1571, sizeof(kEdges_b57_1571) / sizeof(kEdges_b57_1571[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1573[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9575u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1573 = {57u, 0x9573u, 0x1573u, 0x0024u, 1u, nullptr, 0u, kEdges_b57_1573, sizeof(kEdges_b57_1573) / sizeof(kEdges_b57_1573[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1575[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9578u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1575 = {57u, 0x9575u, 0x1575u, 0x0458u, 2u, nullptr, 0u, kEdges_b57_1575, sizeof(kEdges_b57_1575) / sizeof(kEdges_b57_1575[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1578[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x957Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1578 = {57u, 0x9578u, 0x1578u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1578, sizeof(kEdges_b57_1578) / sizeof(kEdges_b57_1578[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_157A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x957Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_157A = {57u, 0x957Au, 0x157Au, 0x0034u, 1u, nullptr, 0u, kEdges_b57_157A, sizeof(kEdges_b57_157A) / sizeof(kEdges_b57_157A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_157C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x957Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_157C = {57u, 0x957Cu, 0x157Cu, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_157C, sizeof(kEdges_b57_157C) / sizeof(kEdges_b57_157C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_157F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9581u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_157F = {57u, 0x957Fu, 0x157Fu, 0x0062u, 1u, nullptr, 0u, kEdges_b57_157F, sizeof(kEdges_b57_157F) / sizeof(kEdges_b57_157F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1581[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9584u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1581 = {57u, 0x9581u, 0x1581u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_1581, sizeof(kEdges_b57_1581) / sizeof(kEdges_b57_1581[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1584[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x9587u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1584 = {57u, 0x9584u, 0x1584u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_1584, sizeof(kEdges_b57_1584) / sizeof(kEdges_b57_1584[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1587[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x958Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1587 = {57u, 0x9587u, 0x1587u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_1587, sizeof(kEdges_b57_1587) / sizeof(kEdges_b57_1587[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_158A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x958Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x95C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_158A = {57u, 0x958Au, 0x158Au, 0x95C9u, 1u, nullptr, 0u, kEdges_b57_158A, sizeof(kEdges_b57_158A) / sizeof(kEdges_b57_158A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_158C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x958Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_158C = {57u, 0x958Cu, 0x158Cu, 0x0486u, 2u, nullptr, 0u, kEdges_b57_158C, sizeof(kEdges_b57_158C) / sizeof(kEdges_b57_158C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_158F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9590u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_158F = {57u, 0x958Fu, 0x158Fu, 0u, 0u, nullptr, 0u, kEdges_b57_158F, sizeof(kEdges_b57_158F) / sizeof(kEdges_b57_158F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1590[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9593u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1590 = {57u, 0x9590u, 0x1590u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1590, sizeof(kEdges_b57_1590) / sizeof(kEdges_b57_1590[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1593[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9595u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x95C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1593 = {57u, 0x9593u, 0x1593u, 0x95C9u, 1u, nullptr, 0u, kEdges_b57_1593, sizeof(kEdges_b57_1593) / sizeof(kEdges_b57_1593[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1595[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9597u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1595 = {57u, 0x9595u, 0x1595u, 0x000Au, 1u, nullptr, 0u, kEdges_b57_1595, sizeof(kEdges_b57_1595) / sizeof(kEdges_b57_1595[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1597[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x959Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1597 = {57u, 0x9597u, 0x1597u, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_1597, sizeof(kEdges_b57_1597) / sizeof(kEdges_b57_1597[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_159A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x959Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_159A = {57u, 0x959Au, 0x159Au, 0x00E7u, 1u, nullptr, 0u, kEdges_b57_159A, sizeof(kEdges_b57_159A) / sizeof(kEdges_b57_159A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_159C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x959Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_159C = {57u, 0x959Cu, 0x159Cu, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_159C, sizeof(kEdges_b57_159C) / sizeof(kEdges_b57_159C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_159F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95A1u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x95A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_159F = {57u, 0x959Fu, 0x159Fu, 0x95A8u, 1u, nullptr, 0u, kEdges_b57_159F, sizeof(kEdges_b57_159F) / sizeof(kEdges_b57_159F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15A1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95A3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15A1 = {57u, 0x95A1u, 0x15A1u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_15A1, sizeof(kEdges_b57_15A1) / sizeof(kEdges_b57_15A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15A3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15A3 = {57u, 0x95A3u, 0x15A3u, 0x0022u, 1u, nullptr, 0u, kEdges_b57_15A3, sizeof(kEdges_b57_15A3) / sizeof(kEdges_b57_15A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15A5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x95A8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15A5 = {57u, 0x95A5u, 0x15A5u, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_15A5, sizeof(kEdges_b57_15A5) / sizeof(kEdges_b57_15A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15A8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9530u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x95ABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15A8 = {57u, 0x95A8u, 0x15A8u, 0x9530u, 2u, nullptr, 0u, kEdges_b57_15A8, sizeof(kEdges_b57_15A8) / sizeof(kEdges_b57_15A8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15AB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15AB = {57u, 0x95ABu, 0x15ABu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_15AB, sizeof(kEdges_b57_15AB) / sizeof(kEdges_b57_15AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15AD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95AFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15AD = {57u, 0x95ADu, 0x15ADu, 0x005Bu, 1u, nullptr, 0u, kEdges_b57_15AD, sizeof(kEdges_b57_15AD) / sizeof(kEdges_b57_15AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15AF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x95B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15AF = {57u, 0x95AFu, 0x15AFu, 0xE522u, 2u, nullptr, 0u, kEdges_b57_15AF, sizeof(kEdges_b57_15AF) / sizeof(kEdges_b57_15AF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15B2[] = {
  {"behavior_reentry_relation", MM6EdgeStatus::Resolved, 57, 0x95B5u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE468u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15B2 = {57u, 0x95B2u, 0x15B2u, 0xE468u, 2u, nullptr, 0u, kEdges_b57_15B2, sizeof(kEdges_b57_15B2) / sizeof(kEdges_b57_15B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15B5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15B5 = {57u, 0x95B5u, 0x15B5u, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_15B5, sizeof(kEdges_b57_15B5) / sizeof(kEdges_b57_15B5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15B8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95BAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x95B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15B8 = {57u, 0x95B8u, 0x15B8u, 0x95B2u, 1u, nullptr, 0u, kEdges_b57_15B8, sizeof(kEdges_b57_15B8) / sizeof(kEdges_b57_15B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15BA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95BCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15BA = {57u, 0x95BAu, 0x15BAu, 0x00B4u, 1u, nullptr, 0u, kEdges_b57_15BA, sizeof(kEdges_b57_15BA) / sizeof(kEdges_b57_15BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15BC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95BFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15BC = {57u, 0x95BCu, 0x15BCu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_15BC, sizeof(kEdges_b57_15BC) / sizeof(kEdges_b57_15BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15BF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x953Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x95C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15BF = {57u, 0x95BFu, 0x15BFu, 0x953Du, 2u, nullptr, 0u, kEdges_b57_15BF, sizeof(kEdges_b57_15BF) / sizeof(kEdges_b57_15BF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15C2 = {57u, 0x95C2u, 0x15C2u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_15C2, sizeof(kEdges_b57_15C2) / sizeof(kEdges_b57_15C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15C4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15C4 = {57u, 0x95C4u, 0x15C4u, 0x005Au, 1u, nullptr, 0u, kEdges_b57_15C4, sizeof(kEdges_b57_15C4) / sizeof(kEdges_b57_15C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15C6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x95C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15C6 = {57u, 0x95C6u, 0x15C6u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_15C6, sizeof(kEdges_b57_15C6) / sizeof(kEdges_b57_15C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15C9[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9554u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15C9 = {57u, 0x95C9u, 0x15C9u, 0x9554u, 2u, nullptr, 0u, kEdges_b57_15C9, sizeof(kEdges_b57_15C9) / sizeof(kEdges_b57_15C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15EB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x95EEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15EB = {57u, 0x95EBu, 0x15EBu, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_15EB, sizeof(kEdges_b57_15EB) / sizeof(kEdges_b57_15EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15EE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9416u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x95F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15EE = {57u, 0x95EEu, 0x15EEu, 0x9416u, 2u, nullptr, 0u, kEdges_b57_15EE, sizeof(kEdges_b57_15EE) / sizeof(kEdges_b57_15EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15F1 = {57u, 0x95F1u, 0x15F1u, 0x001Cu, 1u, nullptr, 0u, kEdges_b57_15F1, sizeof(kEdges_b57_15F1) / sizeof(kEdges_b57_15F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15F3 = {57u, 0x95F3u, 0x15F3u, 0x05DEu, 2u, nullptr, 0u, kEdges_b57_15F3, sizeof(kEdges_b57_15F3) / sizeof(kEdges_b57_15F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15F6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15F6 = {57u, 0x95F6u, 0x15F6u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_15F6, sizeof(kEdges_b57_15F6) / sizeof(kEdges_b57_15F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15F8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15F8 = {57u, 0x95F8u, 0x15F8u, 0x006Cu, 1u, nullptr, 0u, kEdges_b57_15F8, sizeof(kEdges_b57_15F8) / sizeof(kEdges_b57_15F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15FA = {57u, 0x95FAu, 0x15FAu, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_15FA, sizeof(kEdges_b57_15FA) / sizeof(kEdges_b57_15FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15FC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x95FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15FC = {57u, 0x95FCu, 0x15FCu, 0x0097u, 1u, nullptr, 0u, kEdges_b57_15FC, sizeof(kEdges_b57_15FC) / sizeof(kEdges_b57_15FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_15FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9600u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_15FE = {57u, 0x95FEu, 0x15FEu, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_15FE, sizeof(kEdges_b57_15FE) / sizeof(kEdges_b57_15FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1600[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x813Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9603u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1600 = {57u, 0x9600u, 0x1600u, 0x813Fu, 2u, nullptr, 0u, kEdges_b57_1600, sizeof(kEdges_b57_1600) / sizeof(kEdges_b57_1600[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1603[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9605u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1603 = {57u, 0x9603u, 0x1603u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1603, sizeof(kEdges_b57_1603) / sizeof(kEdges_b57_1603[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1605[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9608u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1605 = {57u, 0x9605u, 0x1605u, 0x03BFu, 2u, nullptr, 0u, kEdges_b57_1605, sizeof(kEdges_b57_1605) / sizeof(kEdges_b57_1605[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1608[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x960Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1608 = {57u, 0x9608u, 0x1608u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b57_1608, sizeof(kEdges_b57_1608) / sizeof(kEdges_b57_1608[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_160B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x960Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_160B = {57u, 0x960Bu, 0x160Bu, 0x00BCu, 1u, nullptr, 0u, kEdges_b57_160B, sizeof(kEdges_b57_160B) / sizeof(kEdges_b57_160B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_160D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8114u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9610u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_160D = {57u, 0x960Du, 0x160Du, 0x8114u, 2u, nullptr, 0u, kEdges_b57_160D, sizeof(kEdges_b57_160D) / sizeof(kEdges_b57_160D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1610[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9612u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1610 = {57u, 0x9610u, 0x1610u, 0x0011u, 1u, nullptr, 0u, kEdges_b57_1610, sizeof(kEdges_b57_1610) / sizeof(kEdges_b57_1610[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1612[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9615u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1612 = {57u, 0x9612u, 0x1612u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_1612, sizeof(kEdges_b57_1612) / sizeof(kEdges_b57_1612[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1615[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9617u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1615 = {57u, 0x9615u, 0x1615u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1615, sizeof(kEdges_b57_1615) / sizeof(kEdges_b57_1615[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1617[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9619u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1617 = {57u, 0x9617u, 0x1617u, 0x0020u, 1u, nullptr, 0u, kEdges_b57_1617, sizeof(kEdges_b57_1617) / sizeof(kEdges_b57_1617[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1619[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x961Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1619 = {57u, 0x9619u, 0x1619u, 0x03BFu, 2u, nullptr, 0u, kEdges_b57_1619, sizeof(kEdges_b57_1619) / sizeof(kEdges_b57_1619[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_161C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x961Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_161C = {57u, 0x961Cu, 0x161Cu, 0x00DFu, 1u, nullptr, 0u, kEdges_b57_161C, sizeof(kEdges_b57_161C) / sizeof(kEdges_b57_161C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_161E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9621u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_161E = {57u, 0x961Eu, 0x161Eu, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_161E, sizeof(kEdges_b57_161E) / sizeof(kEdges_b57_161E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1621[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9623u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1621 = {57u, 0x9621u, 0x1621u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1621, sizeof(kEdges_b57_1621) / sizeof(kEdges_b57_1621[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1623[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9626u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1623 = {57u, 0x9623u, 0x1623u, 0x03D6u, 2u, nullptr, 0u, kEdges_b57_1623, sizeof(kEdges_b57_1623) / sizeof(kEdges_b57_1623[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1626[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9628u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1626 = {57u, 0x9626u, 0x1626u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1626, sizeof(kEdges_b57_1626) / sizeof(kEdges_b57_1626[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1628[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x962Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1628 = {57u, 0x9628u, 0x1628u, 0x0004u, 1u, nullptr, 0u, kEdges_b57_1628, sizeof(kEdges_b57_1628) / sizeof(kEdges_b57_1628[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_162A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE60Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x962Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_162A = {57u, 0x962Au, 0x162Au, 0xE60Eu, 2u, nullptr, 0u, kEdges_b57_162A, sizeof(kEdges_b57_162A) / sizeof(kEdges_b57_162A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_162D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9630u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_162D = {57u, 0x962Du, 0x162Du, 0xE1DDu, 2u, nullptr, 0u, kEdges_b57_162D, sizeof(kEdges_b57_162D) / sizeof(kEdges_b57_162D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1630[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCF4Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9633u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1630 = {57u, 0x9630u, 0x1630u, 0xCF4Au, 2u, nullptr, 0u, kEdges_b57_1630, sizeof(kEdges_b57_1630) / sizeof(kEdges_b57_1630[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1633[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9636u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1633 = {57u, 0x9633u, 0x1633u, 0xC62Bu, 2u, nullptr, 0u, kEdges_b57_1633, sizeof(kEdges_b57_1633) / sizeof(kEdges_b57_1633[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1636[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9639u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1636 = {57u, 0x9636u, 0x1636u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1636, sizeof(kEdges_b57_1636) / sizeof(kEdges_b57_1636[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1639[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x963Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1639 = {57u, 0x9639u, 0x1639u, 0x007Fu, 1u, nullptr, 0u, kEdges_b57_1639, sizeof(kEdges_b57_1639) / sizeof(kEdges_b57_1639[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_163B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x963Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9626u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_163B = {57u, 0x963Bu, 0x163Bu, 0x9626u, 1u, nullptr, 0u, kEdges_b57_163B, sizeof(kEdges_b57_163B) / sizeof(kEdges_b57_163B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_163D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x963Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_163D = {57u, 0x963Du, 0x163Du, 0x0008u, 1u, nullptr, 0u, kEdges_b57_163D, sizeof(kEdges_b57_163D) / sizeof(kEdges_b57_163D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_163F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9641u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_163F = {57u, 0x963Fu, 0x163Fu, 0x0068u, 1u, nullptr, 0u, kEdges_b57_163F, sizeof(kEdges_b57_163F) / sizeof(kEdges_b57_163F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1641[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9644u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1641 = {57u, 0x9641u, 0x1641u, 0xE522u, 2u, nullptr, 0u, kEdges_b57_1641, sizeof(kEdges_b57_1641) / sizeof(kEdges_b57_1641[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1644[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF29u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9647u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1644 = {57u, 0x9644u, 0x1644u, 0xEF29u, 2u, nullptr, 0u, kEdges_b57_1644, sizeof(kEdges_b57_1644) / sizeof(kEdges_b57_1644[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1647[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9649u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1647 = {57u, 0x9647u, 0x1647u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1647, sizeof(kEdges_b57_1647) / sizeof(kEdges_b57_1647[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1649[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x964Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1649 = {57u, 0x9649u, 0x1649u, 0x0678u, 2u, nullptr, 0u, kEdges_b57_1649, sizeof(kEdges_b57_1649) / sizeof(kEdges_b57_1649[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_164C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x964Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_164C = {57u, 0x964Cu, 0x164Cu, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_164C, sizeof(kEdges_b57_164C) / sizeof(kEdges_b57_164C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_164E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9651u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_164E = {57u, 0x964Eu, 0x164Eu, 0x0679u, 2u, nullptr, 0u, kEdges_b57_164E, sizeof(kEdges_b57_164E) / sizeof(kEdges_b57_164E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1651[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9653u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1651 = {57u, 0x9651u, 0x1651u, 0x00C1u, 1u, nullptr, 0u, kEdges_b57_1651, sizeof(kEdges_b57_1651) / sizeof(kEdges_b57_1651[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1653[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9656u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1653 = {57u, 0x9653u, 0x1653u, 0x0672u, 2u, nullptr, 0u, kEdges_b57_1653, sizeof(kEdges_b57_1653) / sizeof(kEdges_b57_1653[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1656[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9658u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1656 = {57u, 0x9656u, 0x1656u, 0x001Au, 1u, nullptr, 0u, kEdges_b57_1656, sizeof(kEdges_b57_1656) / sizeof(kEdges_b57_1656[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1658[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x965Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1658 = {57u, 0x9658u, 0x1658u, 0x0677u, 2u, nullptr, 0u, kEdges_b57_1658, sizeof(kEdges_b57_1658) / sizeof(kEdges_b57_1658[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_165B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x965Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_165B = {57u, 0x965Bu, 0x165Bu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_165B, sizeof(kEdges_b57_165B) / sizeof(kEdges_b57_165B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_165D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x965Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_165D = {57u, 0x965Du, 0x165Du, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_165D, sizeof(kEdges_b57_165D) / sizeof(kEdges_b57_165D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_165F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9662u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_165F = {57u, 0x965Fu, 0x165Fu, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_165F, sizeof(kEdges_b57_165F) / sizeof(kEdges_b57_165F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1662[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9665u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1662 = {57u, 0x9662u, 0x1662u, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_1662, sizeof(kEdges_b57_1662) / sizeof(kEdges_b57_1662[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1665[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9667u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1665 = {57u, 0x9665u, 0x1665u, 0x0007u, 1u, nullptr, 0u, kEdges_b57_1665, sizeof(kEdges_b57_1665) / sizeof(kEdges_b57_1665[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1667[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x966Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1667 = {57u, 0x9667u, 0x1667u, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_1667, sizeof(kEdges_b57_1667) / sizeof(kEdges_b57_1667[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_166A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x966Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_166A = {57u, 0x966Au, 0x166Au, 0u, 0u, nullptr, 0u, kEdges_b57_166A, sizeof(kEdges_b57_166A) / sizeof(kEdges_b57_166A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_166B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x966Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_166B = {57u, 0x966Bu, 0x166Bu, 0x977Fu, 2u, nullptr, 0u, kEdges_b57_166B, sizeof(kEdges_b57_166B) / sizeof(kEdges_b57_166B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_166E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x966Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_166E = {57u, 0x966Eu, 0x166Eu, 0u, 0u, nullptr, 0u, kEdges_b57_166E, sizeof(kEdges_b57_166E) / sizeof(kEdges_b57_166E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_166F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9672u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_166F = {57u, 0x966Fu, 0x166Fu, 0x967Cu, 2u, nullptr, 0u, kEdges_b57_166F, sizeof(kEdges_b57_166F) / sizeof(kEdges_b57_166F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1672[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9674u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1672 = {57u, 0x9672u, 0x1672u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1672, sizeof(kEdges_b57_1672) / sizeof(kEdges_b57_1672[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1674[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9677u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1674 = {57u, 0x9674u, 0x1674u, 0x967Eu, 2u, nullptr, 0u, kEdges_b57_1674, sizeof(kEdges_b57_1674) / sizeof(kEdges_b57_1674[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1677[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9679u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1677 = {57u, 0x9677u, 0x1677u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_1677, sizeof(kEdges_b57_1677) / sizeof(kEdges_b57_1677[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1679[] = {
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 57, 0x9680u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 57, 0x96D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1679 = {57u, 0x9679u, 0x1679u, 0x0008u, 2u, nullptr, 0u, kEdges_b57_1679, sizeof(kEdges_b57_1679) / sizeof(kEdges_b57_1679[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1680[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9682u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1680 = {57u, 0x9680u, 0x1680u, 0x00F3u, 1u, nullptr, 0u, kEdges_b57_1680, sizeof(kEdges_b57_1680) / sizeof(kEdges_b57_1680[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1682[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9684u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1682 = {57u, 0x9682u, 0x1682u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1682, sizeof(kEdges_b57_1682) / sizeof(kEdges_b57_1682[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1684[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9687u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1684 = {57u, 0x9684u, 0x1684u, 0x060Du, 2u, nullptr, 0u, kEdges_b57_1684, sizeof(kEdges_b57_1684) / sizeof(kEdges_b57_1684[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1687[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x968Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1687 = {57u, 0x9687u, 0x1687u, 0x0486u, 2u, nullptr, 0u, kEdges_b57_1687, sizeof(kEdges_b57_1687) / sizeof(kEdges_b57_1687[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_168A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x968Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_168A = {57u, 0x968Au, 0x168Au, 0u, 0u, nullptr, 0u, kEdges_b57_168A, sizeof(kEdges_b57_168A) / sizeof(kEdges_b57_168A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_168B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x968Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_168B = {57u, 0x968Bu, 0x168Bu, 0x0486u, 2u, nullptr, 0u, kEdges_b57_168B, sizeof(kEdges_b57_168B) / sizeof(kEdges_b57_168B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_168E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9690u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_168E = {57u, 0x968Eu, 0x168Eu, 0x0030u, 1u, nullptr, 0u, kEdges_b57_168E, sizeof(kEdges_b57_168E) / sizeof(kEdges_b57_168E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1690[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9692u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9697u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1690 = {57u, 0x9690u, 0x1690u, 0x9697u, 1u, nullptr, 0u, kEdges_b57_1690, sizeof(kEdges_b57_1690) / sizeof(kEdges_b57_1690[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1692[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9694u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1692 = {57u, 0x9692u, 0x1692u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1692, sizeof(kEdges_b57_1692) / sizeof(kEdges_b57_1692[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1694[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9697u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1694 = {57u, 0x9694u, 0x1694u, 0x060Du, 2u, nullptr, 0u, kEdges_b57_1694, sizeof(kEdges_b57_1694) / sizeof(kEdges_b57_1694[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1697[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9699u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1697 = {57u, 0x9697u, 0x1697u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_1697, sizeof(kEdges_b57_1697) / sizeof(kEdges_b57_1697[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1699[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x969Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1699 = {57u, 0x9699u, 0x1699u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_1699, sizeof(kEdges_b57_1699) / sizeof(kEdges_b57_1699[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_169C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x969Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_169C = {57u, 0x969Cu, 0x169Cu, 0x00EAu, 1u, nullptr, 0u, kEdges_b57_169C, sizeof(kEdges_b57_169C) / sizeof(kEdges_b57_169C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_169E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x96A1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_169E = {57u, 0x969Eu, 0x169Eu, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_169E, sizeof(kEdges_b57_169E) / sizeof(kEdges_b57_169E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16A1[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96A3u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x96B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16A1 = {57u, 0x96A1u, 0x16A1u, 0x96B0u, 1u, nullptr, 0u, kEdges_b57_16A1, sizeof(kEdges_b57_16A1) / sizeof(kEdges_b57_16A1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16A3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16A3 = {57u, 0x96A3u, 0x16A3u, 0x0615u, 2u, nullptr, 0u, kEdges_b57_16A3, sizeof(kEdges_b57_16A3) / sizeof(kEdges_b57_16A3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16A6 = {57u, 0x96A6u, 0x16A6u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_16A6, sizeof(kEdges_b57_16A6) / sizeof(kEdges_b57_16A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16A9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96ABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16A9 = {57u, 0x96A9u, 0x16A9u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_16A9, sizeof(kEdges_b57_16A9) / sizeof(kEdges_b57_16A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16AB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16AB = {57u, 0x96ABu, 0x16ABu, 0x0035u, 1u, nullptr, 0u, kEdges_b57_16AB, sizeof(kEdges_b57_16AB) / sizeof(kEdges_b57_16AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16AD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x96B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16AD = {57u, 0x96ADu, 0x16ADu, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_16AD, sizeof(kEdges_b57_16AD) / sizeof(kEdges_b57_16AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96B2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16B0 = {57u, 0x96B0u, 0x16B0u, 0x001Eu, 1u, nullptr, 0u, kEdges_b57_16B0, sizeof(kEdges_b57_16B0) / sizeof(kEdges_b57_16B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16B2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16B2 = {57u, 0x96B2u, 0x16B2u, 0x05D0u, 2u, nullptr, 0u, kEdges_b57_16B2, sizeof(kEdges_b57_16B2) / sizeof(kEdges_b57_16B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16B5[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x96B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16B5 = {57u, 0x96B5u, 0x16B5u, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_16B5, sizeof(kEdges_b57_16B5) / sizeof(kEdges_b57_16B5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16B8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16B8 = {57u, 0x96B8u, 0x16B8u, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_16B8, sizeof(kEdges_b57_16B8) / sizeof(kEdges_b57_16B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16BB[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96BDu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x96B5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16BB = {57u, 0x96BBu, 0x16BBu, 0x96B5u, 1u, nullptr, 0u, kEdges_b57_16BB, sizeof(kEdges_b57_16BB) / sizeof(kEdges_b57_16BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16BD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96C0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16BD = {57u, 0x96BDu, 0x16BDu, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_16BD, sizeof(kEdges_b57_16BD) / sizeof(kEdges_b57_16BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16C0[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96C2u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x969Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16C0 = {57u, 0x96C0u, 0x16C0u, 0x969Cu, 1u, nullptr, 0u, kEdges_b57_16C0, sizeof(kEdges_b57_16C0) / sizeof(kEdges_b57_16C0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16C2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x972Cu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x96C5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16C2 = {57u, 0x96C2u, 0x16C2u, 0x972Cu, 2u, nullptr, 0u, kEdges_b57_16C2, sizeof(kEdges_b57_16C2) / sizeof(kEdges_b57_16C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16C5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96C8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16C5 = {57u, 0x96C5u, 0x16C5u, 0x9720u, 2u, nullptr, 0u, kEdges_b57_16C5, sizeof(kEdges_b57_16C5) / sizeof(kEdges_b57_16C5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16C8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16C8 = {57u, 0x96C8u, 0x16C8u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_16C8, sizeof(kEdges_b57_16C8) / sizeof(kEdges_b57_16C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16CB = {57u, 0x96CBu, 0x16CBu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_16CB, sizeof(kEdges_b57_16CB) / sizeof(kEdges_b57_16CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16CD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96D0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16CD = {57u, 0x96CDu, 0x16CDu, 0x060Du, 2u, nullptr, 0u, kEdges_b57_16CD, sizeof(kEdges_b57_16CD) / sizeof(kEdges_b57_16CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16D0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16D0 = {57u, 0x96D0u, 0x16D0u, 0x005Au, 1u, nullptr, 0u, kEdges_b57_16D0, sizeof(kEdges_b57_16D0) / sizeof(kEdges_b57_16D0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16D2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16D2 = {57u, 0x96D2u, 0x16D2u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_16D2, sizeof(kEdges_b57_16D2) / sizeof(kEdges_b57_16D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16D5[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x96FCu, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 57, 0x96D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16D5 = {57u, 0x96D5u, 0x16D5u, 0x96FCu, 1u, nullptr, 0u, kEdges_b57_16D5, sizeof(kEdges_b57_16D5) / sizeof(kEdges_b57_16D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16D7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x972Cu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x96DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16D7 = {57u, 0x96D7u, 0x16D7u, 0x972Cu, 2u, nullptr, 0u, kEdges_b57_16D7, sizeof(kEdges_b57_16D7) / sizeof(kEdges_b57_16D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16DA = {57u, 0x96DAu, 0x16DAu, 0x9720u, 2u, nullptr, 0u, kEdges_b57_16DA, sizeof(kEdges_b57_16DA) / sizeof(kEdges_b57_16DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16DD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16DD = {57u, 0x96DDu, 0x16DDu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_16DD, sizeof(kEdges_b57_16DD) / sizeof(kEdges_b57_16DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16DF = {57u, 0x96DFu, 0x16DFu, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_16DF, sizeof(kEdges_b57_16DF) / sizeof(kEdges_b57_16DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16E2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC88Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x96E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16E2 = {57u, 0x96E2u, 0x16E2u, 0xC88Du, 2u, nullptr, 0u, kEdges_b57_16E2, sizeof(kEdges_b57_16E2) / sizeof(kEdges_b57_16E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16E5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96E7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16E5 = {57u, 0x96E5u, 0x16E5u, 0x0022u, 1u, nullptr, 0u, kEdges_b57_16E5, sizeof(kEdges_b57_16E5) / sizeof(kEdges_b57_16E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16E7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96E9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16E7 = {57u, 0x96E7u, 0x16E7u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_16E7, sizeof(kEdges_b57_16E7) / sizeof(kEdges_b57_16E7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16E9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16E9 = {57u, 0x96E9u, 0x16E9u, 0x0097u, 1u, nullptr, 0u, kEdges_b57_16E9, sizeof(kEdges_b57_16E9) / sizeof(kEdges_b57_16E9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16EB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96EDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16EB = {57u, 0x96EBu, 0x16EBu, 0x0009u, 1u, nullptr, 0u, kEdges_b57_16EB, sizeof(kEdges_b57_16EB) / sizeof(kEdges_b57_16EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16ED[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCC54u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x96F0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16ED = {57u, 0x96EDu, 0x16EDu, 0xCC54u, 2u, nullptr, 0u, kEdges_b57_16ED, sizeof(kEdges_b57_16ED) / sizeof(kEdges_b57_16ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16F0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16F0 = {57u, 0x96F0u, 0x16F0u, 0x9729u, 2u, nullptr, 0u, kEdges_b57_16F0, sizeof(kEdges_b57_16F0) / sizeof(kEdges_b57_16F0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96F6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16F3 = {57u, 0x96F3u, 0x16F3u, 0x060Du, 2u, nullptr, 0u, kEdges_b57_16F3, sizeof(kEdges_b57_16F3) / sizeof(kEdges_b57_16F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16F6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16F6 = {57u, 0x96F6u, 0x16F6u, 0x9725u, 2u, nullptr, 0u, kEdges_b57_16F6, sizeof(kEdges_b57_16F6) / sizeof(kEdges_b57_16F6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16F9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16F9 = {57u, 0x96F9u, 0x16F9u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_16F9, sizeof(kEdges_b57_16F9) / sizeof(kEdges_b57_16F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16FC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x96FFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16FC = {57u, 0x96FCu, 0x16FCu, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_16FC, sizeof(kEdges_b57_16FC) / sizeof(kEdges_b57_16FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_16FF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9702u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_16FF = {57u, 0x96FFu, 0x16FFu, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_16FF, sizeof(kEdges_b57_16FF) / sizeof(kEdges_b57_16FF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1702[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9704u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1702 = {57u, 0x9702u, 0x1702u, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_1702, sizeof(kEdges_b57_1702) / sizeof(kEdges_b57_1702[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1704[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9706u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x970Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1704 = {57u, 0x9704u, 0x1704u, 0x970Cu, 1u, nullptr, 0u, kEdges_b57_1704, sizeof(kEdges_b57_1704) / sizeof(kEdges_b57_1704[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1706[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9708u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1706 = {57u, 0x9706u, 0x1706u, 0x0060u, 1u, nullptr, 0u, kEdges_b57_1706, sizeof(kEdges_b57_1706) / sizeof(kEdges_b57_1706[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1708[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x970Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x971Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1708 = {57u, 0x9708u, 0x1708u, 0x971Bu, 1u, nullptr, 0u, kEdges_b57_1708, sizeof(kEdges_b57_1708) / sizeof(kEdges_b57_1708[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_170A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x970Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9710u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_170A = {57u, 0x970Au, 0x170Au, 0x9710u, 1u, nullptr, 0u, kEdges_b57_170A, sizeof(kEdges_b57_170A) / sizeof(kEdges_b57_170A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_170C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x970Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_170C = {57u, 0x970Cu, 0x170Cu, 0x00BCu, 1u, nullptr, 0u, kEdges_b57_170C, sizeof(kEdges_b57_170C) / sizeof(kEdges_b57_170C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_170E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9710u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x971Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_170E = {57u, 0x970Eu, 0x170Eu, 0x971Bu, 1u, nullptr, 0u, kEdges_b57_170E, sizeof(kEdges_b57_170E) / sizeof(kEdges_b57_170E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1710[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x974Cu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9713u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1710 = {57u, 0x9710u, 0x1710u, 0x974Cu, 2u, nullptr, 0u, kEdges_b57_1710, sizeof(kEdges_b57_1710) / sizeof(kEdges_b57_1710[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1713[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9716u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1713 = {57u, 0x9713u, 0x1713u, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_1713, sizeof(kEdges_b57_1713) / sizeof(kEdges_b57_1713[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1716[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9719u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1716 = {57u, 0x9716u, 0x1716u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_1716, sizeof(kEdges_b57_1716) / sizeof(kEdges_b57_1716[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1719[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x971Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x96FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1719 = {57u, 0x9719u, 0x1719u, 0x96FCu, 1u, nullptr, 0u, kEdges_b57_1719, sizeof(kEdges_b57_1719) / sizeof(kEdges_b57_1719[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_171B[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x965Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_171B = {57u, 0x971Bu, 0x171Bu, 0x965Fu, 2u, nullptr, 0u, kEdges_b57_171B, sizeof(kEdges_b57_171B) / sizeof(kEdges_b57_171B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_172C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x972Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_172C = {57u, 0x972Cu, 0x172Cu, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_172C, sizeof(kEdges_b57_172C) / sizeof(kEdges_b57_172C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_172F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9731u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_172F = {57u, 0x972Fu, 0x172Fu, 0x00BCu, 1u, nullptr, 0u, kEdges_b57_172F, sizeof(kEdges_b57_172F) / sizeof(kEdges_b57_172F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1731[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9733u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9736u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1731 = {57u, 0x9731u, 0x1731u, 0x9736u, 1u, nullptr, 0u, kEdges_b57_1731, sizeof(kEdges_b57_1731) / sizeof(kEdges_b57_1731[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1733[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9735u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1733 = {57u, 0x9733u, 0x1733u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1733, sizeof(kEdges_b57_1733) / sizeof(kEdges_b57_1733[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1735[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1735 = {57u, 0x9735u, 0x1735u, 0u, 0u, nullptr, 0u, kEdges_b57_1735, sizeof(kEdges_b57_1735) / sizeof(kEdges_b57_1735[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1736[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9738u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1736 = {57u, 0x9736u, 0x1736u, 0x0060u, 1u, nullptr, 0u, kEdges_b57_1736, sizeof(kEdges_b57_1736) / sizeof(kEdges_b57_1736[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1738[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x973Au, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x973Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1738 = {57u, 0x9738u, 0x1738u, 0x973Du, 1u, nullptr, 0u, kEdges_b57_1738, sizeof(kEdges_b57_1738) / sizeof(kEdges_b57_1738[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_173A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x973Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_173A = {57u, 0x973Au, 0x173Au, 0x0001u, 1u, nullptr, 0u, kEdges_b57_173A, sizeof(kEdges_b57_173A) / sizeof(kEdges_b57_173A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_173C[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_173C = {57u, 0x973Cu, 0x173Cu, 0u, 0u, nullptr, 0u, kEdges_b57_173C, sizeof(kEdges_b57_173C) / sizeof(kEdges_b57_173C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_173D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x973Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_173D = {57u, 0x973Du, 0x173Du, 0x001Eu, 1u, nullptr, 0u, kEdges_b57_173D, sizeof(kEdges_b57_173D) / sizeof(kEdges_b57_173D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_173F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9741u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_173F = {57u, 0x973Fu, 0x173Fu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_173F, sizeof(kEdges_b57_173F) / sizeof(kEdges_b57_173F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1741[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9743u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1741 = {57u, 0x9741u, 0x1741u, 0x0097u, 1u, nullptr, 0u, kEdges_b57_1741, sizeof(kEdges_b57_1741) / sizeof(kEdges_b57_1741[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1743[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9745u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1743 = {57u, 0x9743u, 0x1743u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_1743, sizeof(kEdges_b57_1743) / sizeof(kEdges_b57_1743[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1745[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCC54u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9748u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1745 = {57u, 0x9745u, 0x1745u, 0xCC54u, 2u, nullptr, 0u, kEdges_b57_1745, sizeof(kEdges_b57_1745) / sizeof(kEdges_b57_1745[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1748[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x974Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1748 = {57u, 0x9748u, 0x1748u, 0x9720u, 2u, nullptr, 0u, kEdges_b57_1748, sizeof(kEdges_b57_1748) / sizeof(kEdges_b57_1748[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_174B[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_174B = {57u, 0x974Bu, 0x174Bu, 0u, 0u, nullptr, 0u, kEdges_b57_174B, sizeof(kEdges_b57_174B) / sizeof(kEdges_b57_174B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_174C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x974Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_174C = {57u, 0x974Cu, 0x174Cu, 0x03D6u, 2u, nullptr, 0u, kEdges_b57_174C, sizeof(kEdges_b57_174C) / sizeof(kEdges_b57_174C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_174F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9751u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_174F = {57u, 0x974Fu, 0x174Fu, 0x000Au, 1u, nullptr, 0u, kEdges_b57_174F, sizeof(kEdges_b57_174F) / sizeof(kEdges_b57_174F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1751[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9754u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1751 = {57u, 0x9751u, 0x1751u, 0x03D6u, 2u, nullptr, 0u, kEdges_b57_1751, sizeof(kEdges_b57_1751) / sizeof(kEdges_b57_1751[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1754[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9757u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1754 = {57u, 0x9754u, 0x1754u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1754, sizeof(kEdges_b57_1754) / sizeof(kEdges_b57_1754[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1757[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x975Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1757 = {57u, 0x9757u, 0x1757u, 0x0615u, 2u, nullptr, 0u, kEdges_b57_1757, sizeof(kEdges_b57_1757) / sizeof(kEdges_b57_1757[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_175A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE60Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x975Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_175A = {57u, 0x975Au, 0x175Au, 0xE60Eu, 2u, nullptr, 0u, kEdges_b57_175A, sizeof(kEdges_b57_175A) / sizeof(kEdges_b57_175A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_175D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x975Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_175D = {57u, 0x975Du, 0x175Du, 0u, 0u, nullptr, 0u, kEdges_b57_175D, sizeof(kEdges_b57_175D) / sizeof(kEdges_b57_175D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_175E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9760u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_175E = {57u, 0x975Eu, 0x175Eu, 0x0007u, 1u, nullptr, 0u, kEdges_b57_175E, sizeof(kEdges_b57_175E) / sizeof(kEdges_b57_175E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1760[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9762u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9751u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1760 = {57u, 0x9760u, 0x1760u, 0x9751u, 1u, nullptr, 0u, kEdges_b57_1760, sizeof(kEdges_b57_1760) / sizeof(kEdges_b57_1760[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1762[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9764u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1762 = {57u, 0x9762u, 0x1762u, 0x00C0u, 1u, nullptr, 0u, kEdges_b57_1762, sizeof(kEdges_b57_1762) / sizeof(kEdges_b57_1762[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1764[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9765u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1764 = {57u, 0x9764u, 0x1764u, 0u, 0u, nullptr, 0u, kEdges_b57_1764, sizeof(kEdges_b57_1764) / sizeof(kEdges_b57_1764[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1765[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9768u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1765 = {57u, 0x9765u, 0x1765u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1765, sizeof(kEdges_b57_1765) / sizeof(kEdges_b57_1765[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1768[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x976Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1768 = {57u, 0x9768u, 0x1768u, 0x069Du, 2u, nullptr, 0u, kEdges_b57_1768, sizeof(kEdges_b57_1768) / sizeof(kEdges_b57_1768[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_176B[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_176B = {57u, 0x976Bu, 0x176Bu, 0u, 0u, nullptr, 0u, kEdges_b57_176B, sizeof(kEdges_b57_176B) / sizeof(kEdges_b57_176B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_178D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9790u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_178D = {57u, 0x978Du, 0x178Du, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_178D, sizeof(kEdges_b57_178D) / sizeof(kEdges_b57_178D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1790[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9792u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1790 = {57u, 0x9790u, 0x1790u, 0x0030u, 1u, nullptr, 0u, kEdges_b57_1790, sizeof(kEdges_b57_1790) / sizeof(kEdges_b57_1790[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1792[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9795u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1792 = {57u, 0x9792u, 0x1792u, 0x060Du, 2u, nullptr, 0u, kEdges_b57_1792, sizeof(kEdges_b57_1792) / sizeof(kEdges_b57_1792[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1795[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9797u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1795 = {57u, 0x9795u, 0x1795u, 0x00D2u, 1u, nullptr, 0u, kEdges_b57_1795, sizeof(kEdges_b57_1795) / sizeof(kEdges_b57_1795[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1797[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9799u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1797 = {57u, 0x9797u, 0x1797u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_1797, sizeof(kEdges_b57_1797) / sizeof(kEdges_b57_1797[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1799[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x979Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1799 = {57u, 0x9799u, 0x1799u, 0x0098u, 1u, nullptr, 0u, kEdges_b57_1799, sizeof(kEdges_b57_1799) / sizeof(kEdges_b57_1799[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_179B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x979Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_179B = {57u, 0x979Bu, 0x179Bu, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_179B, sizeof(kEdges_b57_179B) / sizeof(kEdges_b57_179B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_179D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x813Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x97A0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_179D = {57u, 0x979Du, 0x179Du, 0x813Fu, 2u, nullptr, 0u, kEdges_b57_179D, sizeof(kEdges_b57_179D) / sizeof(kEdges_b57_179D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17A0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97A2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17A0 = {57u, 0x97A0u, 0x17A0u, 0x001Du, 1u, nullptr, 0u, kEdges_b57_17A0, sizeof(kEdges_b57_17A0) / sizeof(kEdges_b57_17A0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17A2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17A2 = {57u, 0x97A2u, 0x17A2u, 0x05DEu, 2u, nullptr, 0u, kEdges_b57_17A2, sizeof(kEdges_b57_17A2) / sizeof(kEdges_b57_17A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17A5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17A5 = {57u, 0x97A5u, 0x17A5u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_17A5, sizeof(kEdges_b57_17A5) / sizeof(kEdges_b57_17A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17A7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97A9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17A7 = {57u, 0x97A7u, 0x17A7u, 0x00F1u, 1u, nullptr, 0u, kEdges_b57_17A7, sizeof(kEdges_b57_17A7) / sizeof(kEdges_b57_17A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17A9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97ABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17A9 = {57u, 0x97A9u, 0x17A9u, 0x008Eu, 1u, nullptr, 0u, kEdges_b57_17A9, sizeof(kEdges_b57_17A9) / sizeof(kEdges_b57_17A9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17AB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97AEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17AB = {57u, 0x97ABu, 0x17ABu, 0x0682u, 2u, nullptr, 0u, kEdges_b57_17AB, sizeof(kEdges_b57_17AB) / sizeof(kEdges_b57_17AB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17AE[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x97B2u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17AE = {57u, 0x97AEu, 0x17AEu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_17AE, sizeof(kEdges_b57_17AE) / sizeof(kEdges_b57_17AE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17B2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17B2 = {57u, 0x97B2u, 0x17B2u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_17B2, sizeof(kEdges_b57_17B2) / sizeof(kEdges_b57_17B2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17B4 = {57u, 0x97B4u, 0x17B4u, 0x00FAu, 1u, nullptr, 0u, kEdges_b57_17B4, sizeof(kEdges_b57_17B4) / sizeof(kEdges_b57_17B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17B6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9416u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x97B9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17B6 = {57u, 0x97B6u, 0x17B6u, 0x9416u, 2u, nullptr, 0u, kEdges_b57_17B6, sizeof(kEdges_b57_17B6) / sizeof(kEdges_b57_17B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17B9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17B9 = {57u, 0x97B9u, 0x17B9u, 0x00BFu, 1u, nullptr, 0u, kEdges_b57_17B9, sizeof(kEdges_b57_17B9) / sizeof(kEdges_b57_17B9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17BB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8110u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x97BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17BB = {57u, 0x97BBu, 0x17BBu, 0x8110u, 2u, nullptr, 0u, kEdges_b57_17BB, sizeof(kEdges_b57_17BB) / sizeof(kEdges_b57_17BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17BE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF29u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x97C1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17BE = {57u, 0x97BEu, 0x17BEu, 0xEF29u, 2u, nullptr, 0u, kEdges_b57_17BE, sizeof(kEdges_b57_17BE) / sizeof(kEdges_b57_17BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17C1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97C3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17C1 = {57u, 0x97C1u, 0x17C1u, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_17C1, sizeof(kEdges_b57_17C1) / sizeof(kEdges_b57_17C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17C3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17C3 = {57u, 0x97C3u, 0x17C3u, 0x03D6u, 2u, nullptr, 0u, kEdges_b57_17C3, sizeof(kEdges_b57_17C3) / sizeof(kEdges_b57_17C3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17C6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x97C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17C6 = {57u, 0x97C6u, 0x17C6u, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_17C6, sizeof(kEdges_b57_17C6) / sizeof(kEdges_b57_17C6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17C9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x983Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x97CCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17C9 = {57u, 0x97C9u, 0x17C9u, 0x983Eu, 2u, nullptr, 0u, kEdges_b57_17C9, sizeof(kEdges_b57_17C9) / sizeof(kEdges_b57_17C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17CC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97CEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17CC = {57u, 0x97CCu, 0x17CCu, 0x00F3u, 1u, nullptr, 0u, kEdges_b57_17CC, sizeof(kEdges_b57_17CC) / sizeof(kEdges_b57_17CC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17CE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97D0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17CE = {57u, 0x97CEu, 0x17CEu, 0x0007u, 1u, nullptr, 0u, kEdges_b57_17CE, sizeof(kEdges_b57_17CE) / sizeof(kEdges_b57_17CE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17D0[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97D2u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x97EBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17D0 = {57u, 0x97D0u, 0x17D0u, 0x97EBu, 1u, nullptr, 0u, kEdges_b57_17D0, sizeof(kEdges_b57_17D0) / sizeof(kEdges_b57_17D0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17D2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97D4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17D2 = {57u, 0x97D2u, 0x17D2u, 0x00DFu, 1u, nullptr, 0u, kEdges_b57_17D2, sizeof(kEdges_b57_17D2) / sizeof(kEdges_b57_17D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17D4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97D6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17D4 = {57u, 0x97D4u, 0x17D4u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_17D4, sizeof(kEdges_b57_17D4) / sizeof(kEdges_b57_17D4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17D6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97D7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17D6 = {57u, 0x97D6u, 0x17D6u, 0u, 0u, nullptr, 0u, kEdges_b57_17D6, sizeof(kEdges_b57_17D6) / sizeof(kEdges_b57_17D6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17D7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97D9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17D7 = {57u, 0x97D7u, 0x17D7u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_17D7, sizeof(kEdges_b57_17D7) / sizeof(kEdges_b57_17D7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17D9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97DAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17D9 = {57u, 0x97D9u, 0x17D9u, 0u, 0u, nullptr, 0u, kEdges_b57_17D9, sizeof(kEdges_b57_17D9) / sizeof(kEdges_b57_17D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17DA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17DA = {57u, 0x97DAu, 0x17DAu, 0x9855u, 2u, nullptr, 0u, kEdges_b57_17DA, sizeof(kEdges_b57_17DA) / sizeof(kEdges_b57_17DA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17DD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97DFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17DD = {57u, 0x97DDu, 0x17DDu, 0x00F9u, 1u, nullptr, 0u, kEdges_b57_17DD, sizeof(kEdges_b57_17DD) / sizeof(kEdges_b57_17DD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17DF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97E1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17DF = {57u, 0x97DFu, 0x17DFu, 0x00BFu, 1u, nullptr, 0u, kEdges_b57_17DF, sizeof(kEdges_b57_17DF) / sizeof(kEdges_b57_17DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17E1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17E1 = {57u, 0x97E1u, 0x17E1u, 0u, 0u, nullptr, 0u, kEdges_b57_17E1, sizeof(kEdges_b57_17E1) / sizeof(kEdges_b57_17E1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97E5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17E2 = {57u, 0x97E2u, 0x17E2u, 0x9855u, 2u, nullptr, 0u, kEdges_b57_17E2, sizeof(kEdges_b57_17E2) / sizeof(kEdges_b57_17E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17E5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97E8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17E5 = {57u, 0x97E5u, 0x17E5u, 0x0672u, 2u, nullptr, 0u, kEdges_b57_17E5, sizeof(kEdges_b57_17E5) / sizeof(kEdges_b57_17E5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17E8[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x97F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17E8 = {57u, 0x97E8u, 0x17E8u, 0x97F8u, 2u, nullptr, 0u, kEdges_b57_17E8, sizeof(kEdges_b57_17E8) / sizeof(kEdges_b57_17E8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17EB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97EDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17EB = {57u, 0x97EBu, 0x17EBu, 0x0003u, 1u, nullptr, 0u, kEdges_b57_17EB, sizeof(kEdges_b57_17EB) / sizeof(kEdges_b57_17EB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17ED[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97EFu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x97F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17ED = {57u, 0x97EDu, 0x17EDu, 0x97F8u, 1u, nullptr, 0u, kEdges_b57_17ED, sizeof(kEdges_b57_17ED) / sizeof(kEdges_b57_17ED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17EF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17EF = {57u, 0x97EFu, 0x17EFu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_17EF, sizeof(kEdges_b57_17EF) / sizeof(kEdges_b57_17EF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17F1 = {57u, 0x97F1u, 0x17F1u, 0x00F9u, 1u, nullptr, 0u, kEdges_b57_17F1, sizeof(kEdges_b57_17F1) / sizeof(kEdges_b57_17F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97F5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17F3 = {57u, 0x97F3u, 0x17F3u, 0x00BFu, 1u, nullptr, 0u, kEdges_b57_17F3, sizeof(kEdges_b57_17F3) / sizeof(kEdges_b57_17F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17F5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97F8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17F5 = {57u, 0x97F5u, 0x17F5u, 0x0672u, 2u, nullptr, 0u, kEdges_b57_17F5, sizeof(kEdges_b57_17F5) / sizeof(kEdges_b57_17F5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17F8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97FAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17F8 = {57u, 0x97F8u, 0x17F8u, 0x0077u, 1u, nullptr, 0u, kEdges_b57_17F8, sizeof(kEdges_b57_17F8) / sizeof(kEdges_b57_17F8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17FA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97FBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17FA = {57u, 0x97FAu, 0x17FAu, 0u, 0u, nullptr, 0u, kEdges_b57_17FA, sizeof(kEdges_b57_17FA) / sizeof(kEdges_b57_17FA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17FB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x97FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17FB = {57u, 0x97FBu, 0x17FBu, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_17FB, sizeof(kEdges_b57_17FB) / sizeof(kEdges_b57_17FB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_17FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9801u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_17FE = {57u, 0x97FEu, 0x17FEu, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_17FE, sizeof(kEdges_b57_17FE) / sizeof(kEdges_b57_17FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1801[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9803u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1801 = {57u, 0x9801u, 0x1801u, 0x00F3u, 1u, nullptr, 0u, kEdges_b57_1801, sizeof(kEdges_b57_1801) / sizeof(kEdges_b57_1801[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1803[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9805u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1803 = {57u, 0x9803u, 0x1803u, 0x003Fu, 1u, nullptr, 0u, kEdges_b57_1803, sizeof(kEdges_b57_1803) / sizeof(kEdges_b57_1803[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1805[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9807u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9811u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1805 = {57u, 0x9805u, 0x1805u, 0x9811u, 1u, nullptr, 0u, kEdges_b57_1805, sizeof(kEdges_b57_1805) / sizeof(kEdges_b57_1805[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1807[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x98C2u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x980Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1807 = {57u, 0x9807u, 0x1807u, 0x98C2u, 2u, nullptr, 0u, kEdges_b57_1807, sizeof(kEdges_b57_1807) / sizeof(kEdges_b57_1807[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_180A[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x980Cu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9811u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_180A = {57u, 0x980Au, 0x180Au, 0x9811u, 1u, nullptr, 0u, kEdges_b57_180A, sizeof(kEdges_b57_180A) / sizeof(kEdges_b57_180A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_180C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x980Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_180C = {57u, 0x980Cu, 0x180Cu, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_180C, sizeof(kEdges_b57_180C) / sizeof(kEdges_b57_180C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_180E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9811u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_180E = {57u, 0x980Eu, 0x180Eu, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_180E, sizeof(kEdges_b57_180E) / sizeof(kEdges_b57_180E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1811[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9814u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1811 = {57u, 0x9811u, 0x1811u, 0x0615u, 2u, nullptr, 0u, kEdges_b57_1811, sizeof(kEdges_b57_1811) / sizeof(kEdges_b57_1811[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1814[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9816u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1814 = {57u, 0x9814u, 0x1814u, 0x0018u, 1u, nullptr, 0u, kEdges_b57_1814, sizeof(kEdges_b57_1814) / sizeof(kEdges_b57_1814[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1816[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9818u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x981Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1816 = {57u, 0x9816u, 0x1816u, 0x981Bu, 1u, nullptr, 0u, kEdges_b57_1816, sizeof(kEdges_b57_1816) / sizeof(kEdges_b57_1816[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1818[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9832u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x981Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1818 = {57u, 0x9818u, 0x1818u, 0x9832u, 2u, nullptr, 0u, kEdges_b57_1818, sizeof(kEdges_b57_1818) / sizeof(kEdges_b57_1818[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_181B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x981Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_181B = {57u, 0x981Bu, 0x181Bu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_181B, sizeof(kEdges_b57_181B) / sizeof(kEdges_b57_181B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_181D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9820u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_181D = {57u, 0x981Du, 0x181Du, 0x060Du, 2u, nullptr, 0u, kEdges_b57_181D, sizeof(kEdges_b57_181D) / sizeof(kEdges_b57_181D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1820[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9822u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x982Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1820 = {57u, 0x9820u, 0x1820u, 0x982Fu, 1u, nullptr, 0u, kEdges_b57_1820, sizeof(kEdges_b57_1820) / sizeof(kEdges_b57_1820[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1822[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9832u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9825u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1822 = {57u, 0x9822u, 0x1822u, 0x9832u, 2u, nullptr, 0u, kEdges_b57_1822, sizeof(kEdges_b57_1822) / sizeof(kEdges_b57_1822[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1825[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9827u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1825 = {57u, 0x9825u, 0x1825u, 0x0030u, 1u, nullptr, 0u, kEdges_b57_1825, sizeof(kEdges_b57_1825) / sizeof(kEdges_b57_1825[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1827[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x982Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1827 = {57u, 0x9827u, 0x1827u, 0x060Du, 2u, nullptr, 0u, kEdges_b57_1827, sizeof(kEdges_b57_1827) / sizeof(kEdges_b57_1827[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_182A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x982Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_182A = {57u, 0x982Au, 0x182Au, 0x00EDu, 1u, nullptr, 0u, kEdges_b57_182A, sizeof(kEdges_b57_182A) / sizeof(kEdges_b57_182A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_182C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x982Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_182C = {57u, 0x982Cu, 0x182Cu, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_182C, sizeof(kEdges_b57_182C) / sizeof(kEdges_b57_182C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_182F[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x97C6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_182F = {57u, 0x982Fu, 0x182Fu, 0x97C6u, 2u, nullptr, 0u, kEdges_b57_182F, sizeof(kEdges_b57_182F) / sizeof(kEdges_b57_182F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1832[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9834u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1832 = {57u, 0x9832u, 0x1832u, 0x00DFu, 1u, nullptr, 0u, kEdges_b57_1832, sizeof(kEdges_b57_1832) / sizeof(kEdges_b57_1832[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1834[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9836u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1834 = {57u, 0x9834u, 0x1834u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1834, sizeof(kEdges_b57_1834) / sizeof(kEdges_b57_1834[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1836[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9837u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1836 = {57u, 0x9836u, 0x1836u, 0u, 0u, nullptr, 0u, kEdges_b57_1836, sizeof(kEdges_b57_1836) / sizeof(kEdges_b57_1836[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1837[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x983Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1837 = {57u, 0x9837u, 0x1837u, 0x9859u, 2u, nullptr, 0u, kEdges_b57_1837, sizeof(kEdges_b57_1837) / sizeof(kEdges_b57_1837[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_183A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x983Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_183A = {57u, 0x983Au, 0x183Au, 0x03D6u, 2u, nullptr, 0u, kEdges_b57_183A, sizeof(kEdges_b57_183A) / sizeof(kEdges_b57_183A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_183D[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_183D = {57u, 0x983Du, 0x183Du, 0u, 0u, nullptr, 0u, kEdges_b57_183D, sizeof(kEdges_b57_183D) / sizeof(kEdges_b57_183D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_183E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9841u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_183E = {57u, 0x983Eu, 0x183Eu, 0x03D6u, 2u, nullptr, 0u, kEdges_b57_183E, sizeof(kEdges_b57_183E) / sizeof(kEdges_b57_183E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1841[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9842u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1841 = {57u, 0x9841u, 0x1841u, 0u, 0u, nullptr, 0u, kEdges_b57_1841, sizeof(kEdges_b57_1841) / sizeof(kEdges_b57_1841[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1842[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9845u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1842 = {57u, 0x9842u, 0x1842u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1842, sizeof(kEdges_b57_1842) / sizeof(kEdges_b57_1842[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1845[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9847u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1845 = {57u, 0x9845u, 0x1845u, 0x0037u, 1u, nullptr, 0u, kEdges_b57_1845, sizeof(kEdges_b57_1845) / sizeof(kEdges_b57_1845[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1847[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9849u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x984Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1847 = {57u, 0x9847u, 0x1847u, 0x984Bu, 1u, nullptr, 0u, kEdges_b57_1847, sizeof(kEdges_b57_1847) / sizeof(kEdges_b57_1847[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1849[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x984Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1849 = {57u, 0x9849u, 0x1849u, 0x0037u, 1u, nullptr, 0u, kEdges_b57_1849, sizeof(kEdges_b57_1849) / sizeof(kEdges_b57_1849[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_184B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x984Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_184B = {57u, 0x984Bu, 0x184Bu, 0x0078u, 1u, nullptr, 0u, kEdges_b57_184B, sizeof(kEdges_b57_184B) / sizeof(kEdges_b57_184B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_184D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x984Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9851u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_184D = {57u, 0x984Du, 0x184Du, 0x9851u, 1u, nullptr, 0u, kEdges_b57_184D, sizeof(kEdges_b57_184D) / sizeof(kEdges_b57_184D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_184F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9851u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_184F = {57u, 0x984Fu, 0x184Fu, 0x0077u, 1u, nullptr, 0u, kEdges_b57_184F, sizeof(kEdges_b57_184F) / sizeof(kEdges_b57_184F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1851[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9854u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1851 = {57u, 0x9851u, 0x1851u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1851, sizeof(kEdges_b57_1851) / sizeof(kEdges_b57_1851[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1854[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1854 = {57u, 0x9854u, 0x1854u, 0u, 0u, nullptr, 0u, kEdges_b57_1854, sizeof(kEdges_b57_1854) / sizeof(kEdges_b57_1854[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1861[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9864u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1861 = {57u, 0x9861u, 0x1861u, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_1861, sizeof(kEdges_b57_1861) / sizeof(kEdges_b57_1861[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1864[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9867u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1864 = {57u, 0x9864u, 0x1864u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1864, sizeof(kEdges_b57_1864) / sizeof(kEdges_b57_1864[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1867[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9869u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x98A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1867 = {57u, 0x9867u, 0x1867u, 0x98A5u, 1u, nullptr, 0u, kEdges_b57_1867, sizeof(kEdges_b57_1867) / sizeof(kEdges_b57_1867[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1869[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x986Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1869 = {57u, 0x9869u, 0x1869u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1869, sizeof(kEdges_b57_1869) / sizeof(kEdges_b57_1869[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_186B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF8AEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x986Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_186B = {57u, 0x986Bu, 0x186Bu, 0xF8AEu, 2u, nullptr, 0u, kEdges_b57_186B, sizeof(kEdges_b57_186B) / sizeof(kEdges_b57_186B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_186E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9870u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_186E = {57u, 0x986Eu, 0x186Eu, 0x0011u, 1u, nullptr, 0u, kEdges_b57_186E, sizeof(kEdges_b57_186E) / sizeof(kEdges_b57_186E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1870[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9873u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1870 = {57u, 0x9870u, 0x1870u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1870, sizeof(kEdges_b57_1870) / sizeof(kEdges_b57_1870[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1873[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9875u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1873 = {57u, 0x9873u, 0x1873u, 0x00DFu, 1u, nullptr, 0u, kEdges_b57_1873, sizeof(kEdges_b57_1873) / sizeof(kEdges_b57_1873[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1875[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9877u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1875 = {57u, 0x9875u, 0x1875u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1875, sizeof(kEdges_b57_1875) / sizeof(kEdges_b57_1875[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1877[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9879u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x988Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1877 = {57u, 0x9877u, 0x1877u, 0x988Eu, 1u, nullptr, 0u, kEdges_b57_1877, sizeof(kEdges_b57_1877) / sizeof(kEdges_b57_1877[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1879[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x98B0u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x987Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1879 = {57u, 0x9879u, 0x1879u, 0x98B0u, 2u, nullptr, 0u, kEdges_b57_1879, sizeof(kEdges_b57_1879) / sizeof(kEdges_b57_1879[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_187C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x987Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_187C = {57u, 0x987Cu, 0x187Cu, 0x0005u, 1u, nullptr, 0u, kEdges_b57_187C, sizeof(kEdges_b57_187C) / sizeof(kEdges_b57_187C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_187E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9881u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_187E = {57u, 0x987Eu, 0x187Eu, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_187E, sizeof(kEdges_b57_187E) / sizeof(kEdges_b57_187E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1881[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x98C2u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9884u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1881 = {57u, 0x9881u, 0x1881u, 0x98C2u, 2u, nullptr, 0u, kEdges_b57_1881, sizeof(kEdges_b57_1881) / sizeof(kEdges_b57_1881[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1884[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9886u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x98A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1884 = {57u, 0x9884u, 0x1884u, 0x98A5u, 1u, nullptr, 0u, kEdges_b57_1884, sizeof(kEdges_b57_1884) / sizeof(kEdges_b57_1884[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1886[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9888u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1886 = {57u, 0x9886u, 0x1886u, 0x0006u, 1u, nullptr, 0u, kEdges_b57_1886, sizeof(kEdges_b57_1886) / sizeof(kEdges_b57_1886[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1888[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x988Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1888 = {57u, 0x9888u, 0x1888u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1888, sizeof(kEdges_b57_1888) / sizeof(kEdges_b57_1888[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_188B[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x98A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_188B = {57u, 0x988Bu, 0x188Bu, 0x98A5u, 2u, nullptr, 0u, kEdges_b57_188B, sizeof(kEdges_b57_188B) / sizeof(kEdges_b57_188B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_188E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x98B0u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9891u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_188E = {57u, 0x988Eu, 0x188Eu, 0x98B0u, 2u, nullptr, 0u, kEdges_b57_188E, sizeof(kEdges_b57_188E) / sizeof(kEdges_b57_188E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1891[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x98C2u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9894u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1891 = {57u, 0x9891u, 0x1891u, 0x98C2u, 2u, nullptr, 0u, kEdges_b57_1891, sizeof(kEdges_b57_1891) / sizeof(kEdges_b57_1891[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1894[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9896u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x98A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1894 = {57u, 0x9894u, 0x1894u, 0x98A5u, 1u, nullptr, 0u, kEdges_b57_1894, sizeof(kEdges_b57_1894) / sizeof(kEdges_b57_1894[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1896[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9898u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1896 = {57u, 0x9896u, 0x1896u, 0x0005u, 1u, nullptr, 0u, kEdges_b57_1896, sizeof(kEdges_b57_1896) / sizeof(kEdges_b57_1896[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1898[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x989Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1898 = {57u, 0x9898u, 0x1898u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1898, sizeof(kEdges_b57_1898) / sizeof(kEdges_b57_1898[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_189B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x98C2u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x989Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_189B = {57u, 0x989Bu, 0x189Bu, 0x98C2u, 2u, nullptr, 0u, kEdges_b57_189B, sizeof(kEdges_b57_189B) / sizeof(kEdges_b57_189B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_189E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98A0u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x98A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_189E = {57u, 0x989Eu, 0x189Eu, 0x98A5u, 1u, nullptr, 0u, kEdges_b57_189E, sizeof(kEdges_b57_189E) / sizeof(kEdges_b57_189E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18A0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98A2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18A0 = {57u, 0x98A0u, 0x18A0u, 0x0006u, 1u, nullptr, 0u, kEdges_b57_18A0, sizeof(kEdges_b57_18A0) / sizeof(kEdges_b57_18A0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18A2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18A2 = {57u, 0x98A2u, 0x18A2u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_18A2, sizeof(kEdges_b57_18A2) / sizeof(kEdges_b57_18A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18A5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18A5 = {57u, 0x98A5u, 0x18A5u, 0x0007u, 1u, nullptr, 0u, kEdges_b57_18A5, sizeof(kEdges_b57_18A5) / sizeof(kEdges_b57_18A5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18A7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE60Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x98AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18A7 = {57u, 0x98A7u, 0x18A7u, 0xE60Eu, 2u, nullptr, 0u, kEdges_b57_18A7, sizeof(kEdges_b57_18A7) / sizeof(kEdges_b57_18A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18AA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEA6Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x98ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18AA = {57u, 0x98AAu, 0x18AAu, 0xEA6Au, 2u, nullptr, 0u, kEdges_b57_18AA, sizeof(kEdges_b57_18AA) / sizeof(kEdges_b57_18AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18AD[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x98A5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18AD = {57u, 0x98ADu, 0x18ADu, 0x98A5u, 2u, nullptr, 0u, kEdges_b57_18AD, sizeof(kEdges_b57_18AD) / sizeof(kEdges_b57_18AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98B3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18B0 = {57u, 0x98B0u, 0x18B0u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_18B0, sizeof(kEdges_b57_18B0) / sizeof(kEdges_b57_18B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18B3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18B3 = {57u, 0x98B3u, 0x18B3u, 0u, 0u, nullptr, 0u, kEdges_b57_18B3, sizeof(kEdges_b57_18B3) / sizeof(kEdges_b57_18B3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98B6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18B4 = {57u, 0x98B4u, 0x18B4u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_18B4, sizeof(kEdges_b57_18B4) / sizeof(kEdges_b57_18B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18B6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18B6 = {57u, 0x98B6u, 0x18B6u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_18B6, sizeof(kEdges_b57_18B6) / sizeof(kEdges_b57_18B6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18B8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98BAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18B8 = {57u, 0x98B8u, 0x18B8u, 0x0005u, 1u, nullptr, 0u, kEdges_b57_18B8, sizeof(kEdges_b57_18B8) / sizeof(kEdges_b57_18B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18BA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18BA = {57u, 0x98BAu, 0x18BAu, 0u, 0u, nullptr, 0u, kEdges_b57_18BA, sizeof(kEdges_b57_18BA) / sizeof(kEdges_b57_18BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18BB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98BDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18BB = {57u, 0x98BBu, 0x18BBu, 0x0002u, 1u, nullptr, 0u, kEdges_b57_18BB, sizeof(kEdges_b57_18BB) / sizeof(kEdges_b57_18BB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18BD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98BFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18BD = {57u, 0x98BDu, 0x18BDu, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_18BD, sizeof(kEdges_b57_18BD) / sizeof(kEdges_b57_18BD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18BF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98C1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18BF = {57u, 0x98BFu, 0x18BFu, 0x0006u, 1u, nullptr, 0u, kEdges_b57_18BF, sizeof(kEdges_b57_18BF) / sizeof(kEdges_b57_18BF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18C1[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18C1 = {57u, 0x98C1u, 0x18C1u, 0u, 0u, nullptr, 0u, kEdges_b57_18C1, sizeof(kEdges_b57_18C1) / sizeof(kEdges_b57_18C1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98C4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18C2 = {57u, 0x98C2u, 0x18C2u, 0x00ECu, 1u, nullptr, 0u, kEdges_b57_18C2, sizeof(kEdges_b57_18C2) / sizeof(kEdges_b57_18C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18C4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x98C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18C4 = {57u, 0x98C4u, 0x18C4u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_18C4, sizeof(kEdges_b57_18C4) / sizeof(kEdges_b57_18C4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18C7[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98C9u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x98D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18C7 = {57u, 0x98C7u, 0x18C7u, 0x98D1u, 1u, nullptr, 0u, kEdges_b57_18C7, sizeof(kEdges_b57_18C7) / sizeof(kEdges_b57_18C7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98CBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18C9 = {57u, 0x98C9u, 0x18C9u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_18C9, sizeof(kEdges_b57_18C9) / sizeof(kEdges_b57_18C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18CB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98CDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18CB = {57u, 0x98CBu, 0x18CBu, 0x0003u, 1u, nullptr, 0u, kEdges_b57_18CB, sizeof(kEdges_b57_18CB) / sizeof(kEdges_b57_18CB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18CD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x98D0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18CD = {57u, 0x98CDu, 0x18CDu, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_18CD, sizeof(kEdges_b57_18CD) / sizeof(kEdges_b57_18CD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18D0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98D1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18D0 = {57u, 0x98D0u, 0x18D0u, 0u, 0u, nullptr, 0u, kEdges_b57_18D0, sizeof(kEdges_b57_18D0) / sizeof(kEdges_b57_18D0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18D1[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18D1 = {57u, 0x98D1u, 0x18D1u, 0u, 0u, nullptr, 0u, kEdges_b57_18D1, sizeof(kEdges_b57_18D1) / sizeof(kEdges_b57_18D1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18DF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x98E2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18DF = {57u, 0x98DFu, 0x18DFu, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_18DF, sizeof(kEdges_b57_18DF) / sizeof(kEdges_b57_18DF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18E2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98E4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18E2 = {57u, 0x98E2u, 0x18E2u, 0x009Du, 1u, nullptr, 0u, kEdges_b57_18E2, sizeof(kEdges_b57_18E2) / sizeof(kEdges_b57_18E2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18E4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98E7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18E4 = {57u, 0x98E4u, 0x18E4u, 0x05C8u, 2u, nullptr, 0u, kEdges_b57_18E4, sizeof(kEdges_b57_18E4) / sizeof(kEdges_b57_18E4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18E7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98E9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18E7 = {57u, 0x98E7u, 0x18E7u, 0x0020u, 1u, nullptr, 0u, kEdges_b57_18E7, sizeof(kEdges_b57_18E7) / sizeof(kEdges_b57_18E7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18E9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98ECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18E9 = {57u, 0x98E9u, 0x18E9u, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_18E9, sizeof(kEdges_b57_18E9) / sizeof(kEdges_b57_18E9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18EC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98EEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18EC = {57u, 0x98ECu, 0x18ECu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_18EC, sizeof(kEdges_b57_18EC) / sizeof(kEdges_b57_18EC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18EE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98F1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18EE = {57u, 0x98EEu, 0x18EEu, 0x060Du, 2u, nullptr, 0u, kEdges_b57_18EE, sizeof(kEdges_b57_18EE) / sizeof(kEdges_b57_18EE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18F1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98F3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18F1 = {57u, 0x98F1u, 0x18F1u, 0x00E5u, 1u, nullptr, 0u, kEdges_b57_18F1, sizeof(kEdges_b57_18F1) / sizeof(kEdges_b57_18F1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18F3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98F5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18F3 = {57u, 0x98F3u, 0x18F3u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_18F3, sizeof(kEdges_b57_18F3) / sizeof(kEdges_b57_18F3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18F5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98F7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18F5 = {57u, 0x98F5u, 0x18F5u, 0x0099u, 1u, nullptr, 0u, kEdges_b57_18F5, sizeof(kEdges_b57_18F5) / sizeof(kEdges_b57_18F5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18F7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98F9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18F7 = {57u, 0x98F7u, 0x18F7u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_18F7, sizeof(kEdges_b57_18F7) / sizeof(kEdges_b57_18F7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18F9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x813Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x98FCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18F9 = {57u, 0x98F9u, 0x18F9u, 0x813Fu, 2u, nullptr, 0u, kEdges_b57_18F9, sizeof(kEdges_b57_18F9) / sizeof(kEdges_b57_18F9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18FC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x98FEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18FC = {57u, 0x98FCu, 0x18FCu, 0x00AEu, 1u, nullptr, 0u, kEdges_b57_18FC, sizeof(kEdges_b57_18FC) / sizeof(kEdges_b57_18FC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_18FE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9901u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_18FE = {57u, 0x98FEu, 0x18FEu, 0x0672u, 2u, nullptr, 0u, kEdges_b57_18FE, sizeof(kEdges_b57_18FE) / sizeof(kEdges_b57_18FE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1901[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9903u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1901 = {57u, 0x9901u, 0x1901u, 0x0016u, 1u, nullptr, 0u, kEdges_b57_1901, sizeof(kEdges_b57_1901) / sizeof(kEdges_b57_1901[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1903[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9906u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1903 = {57u, 0x9903u, 0x1903u, 0x0677u, 2u, nullptr, 0u, kEdges_b57_1903, sizeof(kEdges_b57_1903) / sizeof(kEdges_b57_1903[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1906[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9908u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1906 = {57u, 0x9906u, 0x1906u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1906, sizeof(kEdges_b57_1906) / sizeof(kEdges_b57_1906[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1908[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x990Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1908 = {57u, 0x9908u, 0x1908u, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_1908, sizeof(kEdges_b57_1908) / sizeof(kEdges_b57_1908[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_190A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x990Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_190A = {57u, 0x990Au, 0x190Au, 0x00C9u, 1u, nullptr, 0u, kEdges_b57_190A, sizeof(kEdges_b57_190A) / sizeof(kEdges_b57_190A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_190C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8114u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x990Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_190C = {57u, 0x990Cu, 0x190Cu, 0x8114u, 2u, nullptr, 0u, kEdges_b57_190C, sizeof(kEdges_b57_190C) / sizeof(kEdges_b57_190C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_190F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF29u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9912u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_190F = {57u, 0x990Fu, 0x190Fu, 0xEF29u, 2u, nullptr, 0u, kEdges_b57_190F, sizeof(kEdges_b57_190F) / sizeof(kEdges_b57_190F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1912[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9914u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1912 = {57u, 0x9912u, 0x1912u, 0x0087u, 1u, nullptr, 0u, kEdges_b57_1912, sizeof(kEdges_b57_1912) / sizeof(kEdges_b57_1912[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1914[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9917u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1914 = {57u, 0x9914u, 0x1914u, 0x05BAu, 2u, nullptr, 0u, kEdges_b57_1914, sizeof(kEdges_b57_1914) / sizeof(kEdges_b57_1914[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1917[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x991Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1917 = {57u, 0x9917u, 0x1917u, 0x0574u, 2u, nullptr, 0u, kEdges_b57_1917, sizeof(kEdges_b57_1917) / sizeof(kEdges_b57_1917[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_191A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x991Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_191A = {57u, 0x991Au, 0x191Au, 0x0014u, 1u, nullptr, 0u, kEdges_b57_191A, sizeof(kEdges_b57_191A) / sizeof(kEdges_b57_191A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_191C[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x991Eu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9929u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_191C = {57u, 0x991Cu, 0x191Cu, 0x9929u, 1u, nullptr, 0u, kEdges_b57_191C, sizeof(kEdges_b57_191C) / sizeof(kEdges_b57_191C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_191E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9921u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_191E = {57u, 0x991Eu, 0x191Eu, 0x0615u, 2u, nullptr, 0u, kEdges_b57_191E, sizeof(kEdges_b57_191E) / sizeof(kEdges_b57_191E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1921[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9923u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1921 = {57u, 0x9921u, 0x1921u, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_1921, sizeof(kEdges_b57_1921) / sizeof(kEdges_b57_1921[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1923[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9926u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1923 = {57u, 0x9923u, 0x1923u, 0x0615u, 2u, nullptr, 0u, kEdges_b57_1923, sizeof(kEdges_b57_1923) / sizeof(kEdges_b57_1923[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1926[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9929u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1926 = {57u, 0x9926u, 0x1926u, 0x0615u, 2u, nullptr, 0u, kEdges_b57_1926, sizeof(kEdges_b57_1926) / sizeof(kEdges_b57_1926[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1929[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x992Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1929 = {57u, 0x9929u, 0x1929u, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_1929, sizeof(kEdges_b57_1929) / sizeof(kEdges_b57_1929[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_192C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x992Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_192C = {57u, 0x992Cu, 0x192Cu, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_192C, sizeof(kEdges_b57_192C) / sizeof(kEdges_b57_192C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_192F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9930u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_192F = {57u, 0x992Fu, 0x192Fu, 0u, 0u, nullptr, 0u, kEdges_b57_192F, sizeof(kEdges_b57_192F) / sizeof(kEdges_b57_192F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1930[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9933u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1930 = {57u, 0x9930u, 0x1930u, 0x9A04u, 2u, nullptr, 0u, kEdges_b57_1930, sizeof(kEdges_b57_1930) / sizeof(kEdges_b57_1930[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1933[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9934u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1933 = {57u, 0x9933u, 0x1933u, 0u, 0u, nullptr, 0u, kEdges_b57_1933, sizeof(kEdges_b57_1933) / sizeof(kEdges_b57_1933[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1934[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9936u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1934 = {57u, 0x9934u, 0x1934u, 0x0080u, 1u, nullptr, 0u, kEdges_b57_1934, sizeof(kEdges_b57_1934) / sizeof(kEdges_b57_1934[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1936[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9939u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1936 = {57u, 0x9936u, 0x1936u, 0x069Du, 2u, nullptr, 0u, kEdges_b57_1936, sizeof(kEdges_b57_1936) / sizeof(kEdges_b57_1936[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1939[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x993Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1939 = {57u, 0x9939u, 0x1939u, 0x0078u, 1u, nullptr, 0u, kEdges_b57_1939, sizeof(kEdges_b57_1939) / sizeof(kEdges_b57_1939[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_193B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x993Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_193B = {57u, 0x993Bu, 0x193Bu, 0u, 0u, nullptr, 0u, kEdges_b57_193B, sizeof(kEdges_b57_193B) / sizeof(kEdges_b57_193B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_193C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x993Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_193C = {57u, 0x993Cu, 0x193Cu, 0x9A46u, 2u, nullptr, 0u, kEdges_b57_193C, sizeof(kEdges_b57_193C) / sizeof(kEdges_b57_193C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_193F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9942u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_193F = {57u, 0x993Fu, 0x193Fu, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_193F, sizeof(kEdges_b57_193F) / sizeof(kEdges_b57_193F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1942[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9945u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1942 = {57u, 0x9942u, 0x1942u, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_1942, sizeof(kEdges_b57_1942) / sizeof(kEdges_b57_1942[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1945[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9946u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1945 = {57u, 0x9945u, 0x1945u, 0u, 0u, nullptr, 0u, kEdges_b57_1945, sizeof(kEdges_b57_1945) / sizeof(kEdges_b57_1945[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1946[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9949u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1946 = {57u, 0x9946u, 0x1946u, 0x060Du, 2u, nullptr, 0u, kEdges_b57_1946, sizeof(kEdges_b57_1946) / sizeof(kEdges_b57_1946[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1949[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x994Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9954u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1949 = {57u, 0x9949u, 0x1949u, 0x9954u, 1u, nullptr, 0u, kEdges_b57_1949, sizeof(kEdges_b57_1949) / sizeof(kEdges_b57_1949[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_194B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x994Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_194B = {57u, 0x994Bu, 0x194Bu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_194B, sizeof(kEdges_b57_194B) / sizeof(kEdges_b57_194B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_194D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9950u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_194D = {57u, 0x994Du, 0x194Du, 0x060Du, 2u, nullptr, 0u, kEdges_b57_194D, sizeof(kEdges_b57_194D) / sizeof(kEdges_b57_194D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1950[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9952u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1950 = {57u, 0x9950u, 0x1950u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1950, sizeof(kEdges_b57_1950) / sizeof(kEdges_b57_1950[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1952[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x995Fu, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 57, 0x9954u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1952 = {57u, 0x9952u, 0x1952u, 0x995Fu, 1u, nullptr, 0u, kEdges_b57_1952, sizeof(kEdges_b57_1952) / sizeof(kEdges_b57_1952[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1954[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9956u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1954 = {57u, 0x9954u, 0x1954u, 0x0042u, 1u, nullptr, 0u, kEdges_b57_1954, sizeof(kEdges_b57_1954) / sizeof(kEdges_b57_1954[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1956[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9958u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x995Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1956 = {57u, 0x9956u, 0x1956u, 0x995Fu, 1u, nullptr, 0u, kEdges_b57_1956, sizeof(kEdges_b57_1956) / sizeof(kEdges_b57_1956[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1958[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x995Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1958 = {57u, 0x9958u, 0x1958u, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_1958, sizeof(kEdges_b57_1958) / sizeof(kEdges_b57_1958[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_195A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x995Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_195A = {57u, 0x995Au, 0x195Au, 0x060Du, 2u, nullptr, 0u, kEdges_b57_195A, sizeof(kEdges_b57_195A) / sizeof(kEdges_b57_195A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_195D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x995Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_195D = {57u, 0x995Du, 0x195Du, 0x0041u, 1u, nullptr, 0u, kEdges_b57_195D, sizeof(kEdges_b57_195D) / sizeof(kEdges_b57_195D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_195F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9962u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_195F = {57u, 0x995Fu, 0x195Fu, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_195F, sizeof(kEdges_b57_195F) / sizeof(kEdges_b57_195F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1962[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x99A2u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9965u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1962 = {57u, 0x9962u, 0x1962u, 0x99A2u, 2u, nullptr, 0u, kEdges_b57_1962, sizeof(kEdges_b57_1962) / sizeof(kEdges_b57_1962[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1965[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9967u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1965 = {57u, 0x9965u, 0x1965u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1965, sizeof(kEdges_b57_1965) / sizeof(kEdges_b57_1965[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1967[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF8AEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x996Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1967 = {57u, 0x9967u, 0x1967u, 0xF8AEu, 2u, nullptr, 0u, kEdges_b57_1967, sizeof(kEdges_b57_1967) / sizeof(kEdges_b57_1967[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_196A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x996Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_196A = {57u, 0x996Au, 0x196Au, 0x0011u, 1u, nullptr, 0u, kEdges_b57_196A, sizeof(kEdges_b57_196A) / sizeof(kEdges_b57_196A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_196C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x996Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_196C = {57u, 0x996Cu, 0x196Cu, 0u, 0u, nullptr, 0u, kEdges_b57_196C, sizeof(kEdges_b57_196C) / sizeof(kEdges_b57_196C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_196D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x996Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_196D = {57u, 0x996Du, 0x196Du, 0u, 0u, nullptr, 0u, kEdges_b57_196D, sizeof(kEdges_b57_196D) / sizeof(kEdges_b57_196D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_196E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9971u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_196E = {57u, 0x996Eu, 0x196Eu, 0x99DDu, 2u, nullptr, 0u, kEdges_b57_196E, sizeof(kEdges_b57_196E) / sizeof(kEdges_b57_196E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1971[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9974u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1971 = {57u, 0x9971u, 0x1971u, 0x05B1u, 2u, nullptr, 0u, kEdges_b57_1971, sizeof(kEdges_b57_1971) / sizeof(kEdges_b57_1971[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1974[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9976u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x997Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1974 = {57u, 0x9974u, 0x1974u, 0x997Du, 1u, nullptr, 0u, kEdges_b57_1974, sizeof(kEdges_b57_1974) / sizeof(kEdges_b57_1974[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1976[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9977u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1976 = {57u, 0x9976u, 0x1976u, 0u, 0u, nullptr, 0u, kEdges_b57_1976, sizeof(kEdges_b57_1976) / sizeof(kEdges_b57_1976[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1977[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9979u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1977 = {57u, 0x9977u, 0x1977u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_1977, sizeof(kEdges_b57_1977) / sizeof(kEdges_b57_1977[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1979[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x997Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1979 = {57u, 0x9979u, 0x1979u, 0u, 0u, nullptr, 0u, kEdges_b57_1979, sizeof(kEdges_b57_1979) / sizeof(kEdges_b57_1979[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_197A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE522u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x997Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_197A = {57u, 0x997Au, 0x197Au, 0xE522u, 2u, nullptr, 0u, kEdges_b57_197A, sizeof(kEdges_b57_197A) / sizeof(kEdges_b57_197A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_197D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9980u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_197D = {57u, 0x997Du, 0x197Du, 0x05BAu, 2u, nullptr, 0u, kEdges_b57_197D, sizeof(kEdges_b57_197D) / sizeof(kEdges_b57_197D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1980[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9982u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9917u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1980 = {57u, 0x9980u, 0x1980u, 0x9917u, 1u, nullptr, 0u, kEdges_b57_1980, sizeof(kEdges_b57_1980) / sizeof(kEdges_b57_1980[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1982[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9988u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9985u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1982 = {57u, 0x9982u, 0x1982u, 0x9988u, 2u, nullptr, 0u, kEdges_b57_1982, sizeof(kEdges_b57_1982) / sizeof(kEdges_b57_1982[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1985[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9912u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1985 = {57u, 0x9985u, 0x1985u, 0x9912u, 2u, nullptr, 0u, kEdges_b57_1985, sizeof(kEdges_b57_1985) / sizeof(kEdges_b57_1985[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1988[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x998Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1988 = {57u, 0x9988u, 0x1988u, 0x00D4u, 1u, nullptr, 0u, kEdges_b57_1988, sizeof(kEdges_b57_1988) / sizeof(kEdges_b57_1988[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_198A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x998Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_198A = {57u, 0x998Au, 0x198Au, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_198A, sizeof(kEdges_b57_198A) / sizeof(kEdges_b57_198A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_198D[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x998Fu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x999Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_198D = {57u, 0x998Du, 0x198Du, 0x999Bu, 1u, nullptr, 0u, kEdges_b57_198D, sizeof(kEdges_b57_198D) / sizeof(kEdges_b57_198D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_198F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9991u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_198F = {57u, 0x998Fu, 0x198Fu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_198F, sizeof(kEdges_b57_198F) / sizeof(kEdges_b57_198F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1991[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9994u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1991 = {57u, 0x9991u, 0x1991u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1991, sizeof(kEdges_b57_1991) / sizeof(kEdges_b57_1991[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1994[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9996u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1994 = {57u, 0x9994u, 0x1994u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1994, sizeof(kEdges_b57_1994) / sizeof(kEdges_b57_1994[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1996[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9998u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1996 = {57u, 0x9996u, 0x1996u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_1996, sizeof(kEdges_b57_1996) / sizeof(kEdges_b57_1996[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1998[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1998 = {57u, 0x9998u, 0x1998u, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_1998, sizeof(kEdges_b57_1998) / sizeof(kEdges_b57_1998[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_199B[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_199B = {57u, 0x999Bu, 0x199Bu, 0u, 0u, nullptr, 0u, kEdges_b57_199B, sizeof(kEdges_b57_199B) / sizeof(kEdges_b57_199B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19A2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19A2 = {57u, 0x99A2u, 0x19A2u, 0x0002u, 1u, nullptr, 0u, kEdges_b57_19A2, sizeof(kEdges_b57_19A2) / sizeof(kEdges_b57_19A2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19A4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99A6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19A4 = {57u, 0x99A4u, 0x19A4u, 0x0080u, 1u, nullptr, 0u, kEdges_b57_19A4, sizeof(kEdges_b57_19A4) / sizeof(kEdges_b57_19A4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19A6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99A7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19A6 = {57u, 0x99A6u, 0x19A6u, 0u, 0u, nullptr, 0u, kEdges_b57_19A6, sizeof(kEdges_b57_19A6) / sizeof(kEdges_b57_19A6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19A7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99AAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19A7 = {57u, 0x99A7u, 0x19A7u, 0x069Du, 2u, nullptr, 0u, kEdges_b57_19A7, sizeof(kEdges_b57_19A7) / sizeof(kEdges_b57_19A7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19AA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99ADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19AA = {57u, 0x99AAu, 0x19AAu, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_19AA, sizeof(kEdges_b57_19AA) / sizeof(kEdges_b57_19AA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19AD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99B0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19AD = {57u, 0x99ADu, 0x19ADu, 0x99DAu, 2u, nullptr, 0u, kEdges_b57_19AD, sizeof(kEdges_b57_19AD) / sizeof(kEdges_b57_19AD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19B0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99B1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19B0 = {57u, 0x99B0u, 0x19B0u, 0u, 0u, nullptr, 0u, kEdges_b57_19B0, sizeof(kEdges_b57_19B0) / sizeof(kEdges_b57_19B0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19B1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99B4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19B1 = {57u, 0x99B1u, 0x19B1u, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_19B1, sizeof(kEdges_b57_19B1) / sizeof(kEdges_b57_19B1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19B4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99B7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19B4 = {57u, 0x99B4u, 0x19B4u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_19B4, sizeof(kEdges_b57_19B4) / sizeof(kEdges_b57_19B4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19B7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99B8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19B7 = {57u, 0x99B7u, 0x19B7u, 0u, 0u, nullptr, 0u, kEdges_b57_19B7, sizeof(kEdges_b57_19B7) / sizeof(kEdges_b57_19B7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19B8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99BAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x99A4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19B8 = {57u, 0x99B8u, 0x19B8u, 0x99A4u, 1u, nullptr, 0u, kEdges_b57_19B8, sizeof(kEdges_b57_19B8) / sizeof(kEdges_b57_19B8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19BA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99BCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19BA = {57u, 0x99BAu, 0x19BAu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_19BA, sizeof(kEdges_b57_19BA) / sizeof(kEdges_b57_19BA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19BC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99BEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19BC = {57u, 0x99BCu, 0x19BCu, 0x0080u, 1u, nullptr, 0u, kEdges_b57_19BC, sizeof(kEdges_b57_19BC) / sizeof(kEdges_b57_19BC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19BE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99BFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19BE = {57u, 0x99BEu, 0x19BEu, 0u, 0u, nullptr, 0u, kEdges_b57_19BE, sizeof(kEdges_b57_19BE) / sizeof(kEdges_b57_19BE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19BF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99C2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19BF = {57u, 0x99BFu, 0x19BFu, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_19BF, sizeof(kEdges_b57_19BF) / sizeof(kEdges_b57_19BF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19C2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99C5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19C2 = {57u, 0x99C2u, 0x19C2u, 0x060Cu, 2u, nullptr, 0u, kEdges_b57_19C2, sizeof(kEdges_b57_19C2) / sizeof(kEdges_b57_19C2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19C5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99C8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19C5 = {57u, 0x99C5u, 0x19C5u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_19C5, sizeof(kEdges_b57_19C5) / sizeof(kEdges_b57_19C5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19C8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99C9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19C8 = {57u, 0x99C8u, 0x19C8u, 0u, 0u, nullptr, 0u, kEdges_b57_19C8, sizeof(kEdges_b57_19C8) / sizeof(kEdges_b57_19C8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19C9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99CAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19C9 = {57u, 0x99C9u, 0x19C9u, 0u, 0u, nullptr, 0u, kEdges_b57_19C9, sizeof(kEdges_b57_19C9) / sizeof(kEdges_b57_19C9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19CA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99CCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19CA = {57u, 0x99CAu, 0x19CAu, 0x0040u, 1u, nullptr, 0u, kEdges_b57_19CA, sizeof(kEdges_b57_19CA) / sizeof(kEdges_b57_19CA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19CC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99CFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19CC = {57u, 0x99CCu, 0x19CCu, 0x0491u, 2u, nullptr, 0u, kEdges_b57_19CC, sizeof(kEdges_b57_19CC) / sizeof(kEdges_b57_19CC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19CF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99D2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19CF = {57u, 0x99CFu, 0x19CFu, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_19CF, sizeof(kEdges_b57_19CF) / sizeof(kEdges_b57_19CF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19D2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99D3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19D2 = {57u, 0x99D2u, 0x19D2u, 0u, 0u, nullptr, 0u, kEdges_b57_19D2, sizeof(kEdges_b57_19D2) / sizeof(kEdges_b57_19D2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19D3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99D5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19D3 = {57u, 0x99D3u, 0x19D3u, 0x0030u, 1u, nullptr, 0u, kEdges_b57_19D3, sizeof(kEdges_b57_19D3) / sizeof(kEdges_b57_19D3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19D5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99D6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19D5 = {57u, 0x99D5u, 0x19D5u, 0u, 0u, nullptr, 0u, kEdges_b57_19D5, sizeof(kEdges_b57_19D5) / sizeof(kEdges_b57_19D5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19D6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x99D9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19D6 = {57u, 0x99D6u, 0x19D6u, 0x04D6u, 2u, nullptr, 0u, kEdges_b57_19D6, sizeof(kEdges_b57_19D6) / sizeof(kEdges_b57_19D6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_19D9[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_19D9 = {57u, 0x99D9u, 0x19D9u, 0u, 0u, nullptr, 0u, kEdges_b57_19D9, sizeof(kEdges_b57_19D9) / sizeof(kEdges_b57_19D9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AC4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9AC6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AC4 = {57u, 0x9AC4u, 0x1AC4u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1AC4, sizeof(kEdges_b57_1AC4) / sizeof(kEdges_b57_1AC4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AC6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F0u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9AC9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AC6 = {57u, 0x9AC6u, 0x1AC6u, 0xC5F0u, 2u, nullptr, 0u, kEdges_b57_1AC6, sizeof(kEdges_b57_1AC6) / sizeof(kEdges_b57_1AC6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AC9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ACBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AC9 = {57u, 0x9AC9u, 0x1AC9u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1AC9, sizeof(kEdges_b57_1AC9) / sizeof(kEdges_b57_1AC9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ACB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ACDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ACB = {57u, 0x9ACBu, 0x1ACBu, 0x009Eu, 1u, nullptr, 0u, kEdges_b57_1ACB, sizeof(kEdges_b57_1ACB) / sizeof(kEdges_b57_1ACB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ACD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ACFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ACD = {57u, 0x9ACDu, 0x1ACDu, 0x009Bu, 1u, nullptr, 0u, kEdges_b57_1ACD, sizeof(kEdges_b57_1ACD) / sizeof(kEdges_b57_1ACD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ACF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9AD2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ACF = {57u, 0x9ACFu, 0x1ACFu, 0x9AF2u, 2u, nullptr, 0u, kEdges_b57_1ACF, sizeof(kEdges_b57_1ACF) / sizeof(kEdges_b57_1ACF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AD2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9AD5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AD2 = {57u, 0x9AD2u, 0x1AD2u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_1AD2, sizeof(kEdges_b57_1AD2) / sizeof(kEdges_b57_1AD2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AD5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9AD7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AD5 = {57u, 0x9AD5u, 0x1AD5u, 0x00AEu, 1u, nullptr, 0u, kEdges_b57_1AD5, sizeof(kEdges_b57_1AD5) / sizeof(kEdges_b57_1AD5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AD7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9ADAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AD7 = {57u, 0x9AD7u, 0x1AD7u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_1AD7, sizeof(kEdges_b57_1AD7) / sizeof(kEdges_b57_1AD7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ADA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ADDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ADA = {57u, 0x9ADAu, 0x1ADAu, 0x0699u, 2u, nullptr, 0u, kEdges_b57_1ADA, sizeof(kEdges_b57_1ADA) / sizeof(kEdges_b57_1ADA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ADD[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ADFu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9AE5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ADD = {57u, 0x9ADDu, 0x1ADDu, 0x9AE5u, 1u, nullptr, 0u, kEdges_b57_1ADD, sizeof(kEdges_b57_1ADD) / sizeof(kEdges_b57_1ADD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ADF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9AE2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ADF = {57u, 0x9ADFu, 0x1ADFu, 0xF708u, 2u, nullptr, 0u, kEdges_b57_1ADF, sizeof(kEdges_b57_1ADF) / sizeof(kEdges_b57_1ADF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AE2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9AE5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AE2 = {57u, 0x9AE2u, 0x1AE2u, 0xCAA4u, 2u, nullptr, 0u, kEdges_b57_1AE2, sizeof(kEdges_b57_1AE2) / sizeof(kEdges_b57_1AE2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AE5[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AE5 = {57u, 0x9AE5u, 0x1AE5u, 0u, 0u, nullptr, 0u, kEdges_b57_1AE5, sizeof(kEdges_b57_1AE5) / sizeof(kEdges_b57_1AE5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AE6[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE01Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9AE9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AE6 = {57u, 0x9AE6u, 0x1AE6u, 0xE01Bu, 2u, nullptr, 0u, kEdges_b57_1AE6, sizeof(kEdges_b57_1AE6) / sizeof(kEdges_b57_1AE6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AE9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xDC66u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9AECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AE9 = {57u, 0x9AE9u, 0x1AE9u, 0xDC66u, 2u, nullptr, 0u, kEdges_b57_1AE9, sizeof(kEdges_b57_1AE9) / sizeof(kEdges_b57_1AE9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AEC[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA89u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9AEFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AEC = {57u, 0x9AECu, 0x1AECu, 0xCA89u, 2u, nullptr, 0u, kEdges_b57_1AEC, sizeof(kEdges_b57_1AEC) / sizeof(kEdges_b57_1AEC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AEF[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE0BBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AEF = {57u, 0x9AEFu, 0x1AEFu, 0xE0BBu, 2u, nullptr, 0u, kEdges_b57_1AEF, sizeof(kEdges_b57_1AEF) / sizeof(kEdges_b57_1AEF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1AFE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B01u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1AFE = {57u, 0x9AFEu, 0x1AFEu, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_1AFE, sizeof(kEdges_b57_1AFE) / sizeof(kEdges_b57_1AFE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B01[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B03u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B01 = {57u, 0x9B01u, 0x1B01u, 0x0014u, 1u, nullptr, 0u, kEdges_b57_1B01, sizeof(kEdges_b57_1B01) / sizeof(kEdges_b57_1B01[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B03[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B06u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B03 = {57u, 0x9B03u, 0x1B03u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_1B03, sizeof(kEdges_b57_1B03) / sizeof(kEdges_b57_1B03[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B06[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B08u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B06 = {57u, 0x9B06u, 0x1B06u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1B06, sizeof(kEdges_b57_1B06) / sizeof(kEdges_b57_1B06[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B08[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B08 = {57u, 0x9B08u, 0x1B08u, 0x00F1u, 1u, nullptr, 0u, kEdges_b57_1B08, sizeof(kEdges_b57_1B08) / sizeof(kEdges_b57_1B08[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B0A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B0Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B0A = {57u, 0x9B0Au, 0x1B0Au, 0x008Bu, 1u, nullptr, 0u, kEdges_b57_1B0A, sizeof(kEdges_b57_1B0A) / sizeof(kEdges_b57_1B0A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B0C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B0Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B0C = {57u, 0x9B0Cu, 0x1B0Cu, 0x0682u, 2u, nullptr, 0u, kEdges_b57_1B0C, sizeof(kEdges_b57_1B0C) / sizeof(kEdges_b57_1B0C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B0F[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 60, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x9B13u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B0F = {57u, 0x9B0Fu, 0x1B0Fu, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_1B0F, sizeof(kEdges_b57_1B0F) / sizeof(kEdges_b57_1B0F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B13[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B15u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B13 = {57u, 0x9B13u, 0x1B13u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1B13, sizeof(kEdges_b57_1B13) / sizeof(kEdges_b57_1B13[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B15[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B15 = {57u, 0x9B15u, 0x1B15u, 0x0678u, 2u, nullptr, 0u, kEdges_b57_1B15, sizeof(kEdges_b57_1B15) / sizeof(kEdges_b57_1B15[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B18[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B1Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B18 = {57u, 0x9B18u, 0x1B18u, 0x0679u, 2u, nullptr, 0u, kEdges_b57_1B18, sizeof(kEdges_b57_1B18) / sizeof(kEdges_b57_1B18[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B1B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B1Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B1B = {57u, 0x9B1Bu, 0x1B1Bu, 0x0019u, 1u, nullptr, 0u, kEdges_b57_1B1B, sizeof(kEdges_b57_1B1B) / sizeof(kEdges_b57_1B1B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B1D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B20u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B1D = {57u, 0x9B1Du, 0x1B1Du, 0x0677u, 2u, nullptr, 0u, kEdges_b57_1B1D, sizeof(kEdges_b57_1B1D) / sizeof(kEdges_b57_1B1D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B20[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B22u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B20 = {57u, 0x9B20u, 0x1B20u, 0x00C1u, 1u, nullptr, 0u, kEdges_b57_1B20, sizeof(kEdges_b57_1B20) / sizeof(kEdges_b57_1B20[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B22[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B25u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B22 = {57u, 0x9B22u, 0x1B22u, 0x0672u, 2u, nullptr, 0u, kEdges_b57_1B22, sizeof(kEdges_b57_1B22) / sizeof(kEdges_b57_1B22[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B25[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B27u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B25 = {57u, 0x9B25u, 0x1B25u, 0x00FEu, 1u, nullptr, 0u, kEdges_b57_1B25, sizeof(kEdges_b57_1B25) / sizeof(kEdges_b57_1B25[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B27[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B29u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B27 = {57u, 0x9B27u, 0x1B27u, 0x00F9u, 1u, nullptr, 0u, kEdges_b57_1B27, sizeof(kEdges_b57_1B27) / sizeof(kEdges_b57_1B27[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B29[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B29 = {57u, 0x9B29u, 0x1B29u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1B29, sizeof(kEdges_b57_1B29) / sizeof(kEdges_b57_1B29[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B2B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B2Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B2B = {57u, 0x9B2Bu, 0x1B2Bu, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_1B2B, sizeof(kEdges_b57_1B2B) / sizeof(kEdges_b57_1B2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B2D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B2Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B2D = {57u, 0x9B2Du, 0x1B2Du, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1B2D, sizeof(kEdges_b57_1B2D) / sizeof(kEdges_b57_1B2D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B2F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B31u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B2F = {57u, 0x9B2Fu, 0x1B2Fu, 0x00FAu, 1u, nullptr, 0u, kEdges_b57_1B2F, sizeof(kEdges_b57_1B2F) / sizeof(kEdges_b57_1B2F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B31[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B33u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B31 = {57u, 0x9B31u, 0x1B31u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1B31, sizeof(kEdges_b57_1B31) / sizeof(kEdges_b57_1B31[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B33[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B35u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B33 = {57u, 0x9B33u, 0x1B33u, 0x00D6u, 1u, nullptr, 0u, kEdges_b57_1B33, sizeof(kEdges_b57_1B33) / sizeof(kEdges_b57_1B33[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B35[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B37u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B35 = {57u, 0x9B35u, 0x1B35u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_1B35, sizeof(kEdges_b57_1B35) / sizeof(kEdges_b57_1B35[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B37[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B39u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B37 = {57u, 0x9B37u, 0x1B37u, 0x009Du, 1u, nullptr, 0u, kEdges_b57_1B37, sizeof(kEdges_b57_1B37) / sizeof(kEdges_b57_1B37[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B39[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B3Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B39 = {57u, 0x9B39u, 0x1B39u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_1B39, sizeof(kEdges_b57_1B39) / sizeof(kEdges_b57_1B39[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B3B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x813Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B3Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B3B = {57u, 0x9B3Bu, 0x1B3Bu, 0x813Fu, 2u, nullptr, 0u, kEdges_b57_1B3B, sizeof(kEdges_b57_1B3B) / sizeof(kEdges_b57_1B3B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B3E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B40u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B3E = {57u, 0x9B3Eu, 0x1B3Eu, 0x00CCu, 1u, nullptr, 0u, kEdges_b57_1B3E, sizeof(kEdges_b57_1B3E) / sizeof(kEdges_b57_1B3E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B40[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B43u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B40 = {57u, 0x9B40u, 0x1B40u, 0x062Cu, 2u, nullptr, 0u, kEdges_b57_1B40, sizeof(kEdges_b57_1B40) / sizeof(kEdges_b57_1B40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B43[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x8114u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B46u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B43 = {57u, 0x9B43u, 0x1B43u, 0x8114u, 2u, nullptr, 0u, kEdges_b57_1B43, sizeof(kEdges_b57_1B43) / sizeof(kEdges_b57_1B43[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B46[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF29u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B49u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B46 = {57u, 0x9B46u, 0x1B46u, 0xEF29u, 2u, nullptr, 0u, kEdges_b57_1B46, sizeof(kEdges_b57_1B46) / sizeof(kEdges_b57_1B46[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B49[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B4Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B49 = {57u, 0x9B49u, 0x1B49u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1B49, sizeof(kEdges_b57_1B49) / sizeof(kEdges_b57_1B49[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B4B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B4Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B4B = {57u, 0x9B4Bu, 0x1B4Bu, 0x0679u, 2u, nullptr, 0u, kEdges_b57_1B4B, sizeof(kEdges_b57_1B4B) / sizeof(kEdges_b57_1B4B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B4E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B50u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B4E = {57u, 0x9B4Eu, 0x1B4Eu, 0x0018u, 1u, nullptr, 0u, kEdges_b57_1B4E, sizeof(kEdges_b57_1B4E) / sizeof(kEdges_b57_1B4E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B50[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CCDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B53u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B50 = {57u, 0x9B50u, 0x1B50u, 0x9CCDu, 2u, nullptr, 0u, kEdges_b57_1B50, sizeof(kEdges_b57_1B50) / sizeof(kEdges_b57_1B50[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B53[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9BB3u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B56u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B53 = {57u, 0x9B53u, 0x1B53u, 0x9BB3u, 2u, nullptr, 0u, kEdges_b57_1B53, sizeof(kEdges_b57_1B53) / sizeof(kEdges_b57_1B53[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B56[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9C9Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B59u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B56 = {57u, 0x9B56u, 0x1B56u, 0x9C9Bu, 2u, nullptr, 0u, kEdges_b57_1B56, sizeof(kEdges_b57_1B56) / sizeof(kEdges_b57_1B56[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B59[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B5Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B59 = {57u, 0x9B59u, 0x1B59u, 0x0018u, 1u, nullptr, 0u, kEdges_b57_1B59, sizeof(kEdges_b57_1B59) / sizeof(kEdges_b57_1B59[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B5B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CCDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B5Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B5B = {57u, 0x9B5Bu, 0x1B5Bu, 0x9CCDu, 2u, nullptr, 0u, kEdges_b57_1B5B, sizeof(kEdges_b57_1B5B) / sizeof(kEdges_b57_1B5B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B5E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D10u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B61u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B5E = {57u, 0x9B5Eu, 0x1B5Eu, 0x9D10u, 2u, nullptr, 0u, kEdges_b57_1B5E, sizeof(kEdges_b57_1B5E) / sizeof(kEdges_b57_1B5E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B61[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9C21u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B64u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B61 = {57u, 0x9B61u, 0x1B61u, 0x9C21u, 2u, nullptr, 0u, kEdges_b57_1B61, sizeof(kEdges_b57_1B61) / sizeof(kEdges_b57_1B61[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B64[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9C9Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B67u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B64 = {57u, 0x9B64u, 0x1B64u, 0x9C9Bu, 2u, nullptr, 0u, kEdges_b57_1B64, sizeof(kEdges_b57_1B64) / sizeof(kEdges_b57_1B64[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B67[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B69u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B67 = {57u, 0x9B67u, 0x1B67u, 0x0018u, 1u, nullptr, 0u, kEdges_b57_1B67, sizeof(kEdges_b57_1B67) / sizeof(kEdges_b57_1B67[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B69[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CCDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B6Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B69 = {57u, 0x9B69u, 0x1B69u, 0x9CCDu, 2u, nullptr, 0u, kEdges_b57_1B69, sizeof(kEdges_b57_1B69) / sizeof(kEdges_b57_1B69[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B6C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D10u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B6Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B6C = {57u, 0x9B6Cu, 0x1B6Cu, 0x9D10u, 2u, nullptr, 0u, kEdges_b57_1B6C, sizeof(kEdges_b57_1B6C) / sizeof(kEdges_b57_1B6C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B6F[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9B53u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B6F = {57u, 0x9B6Fu, 0x1B6Fu, 0x9B53u, 2u, nullptr, 0u, kEdges_b57_1B6F, sizeof(kEdges_b57_1B6F) / sizeof(kEdges_b57_1B6F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B72[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B72 = {57u, 0x9B72u, 0x1B72u, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_1B72, sizeof(kEdges_b57_1B72) / sizeof(kEdges_b57_1B72[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B74[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B77u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B74 = {57u, 0x9B74u, 0x1B74u, 0x0679u, 2u, nullptr, 0u, kEdges_b57_1B74, sizeof(kEdges_b57_1B74) / sizeof(kEdges_b57_1B74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B77[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B79u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B77 = {57u, 0x9B77u, 0x1B77u, 0x0097u, 1u, nullptr, 0u, kEdges_b57_1B77, sizeof(kEdges_b57_1B77) / sizeof(kEdges_b57_1B77[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B79[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B7Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B79 = {57u, 0x9B79u, 0x1B79u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1B79, sizeof(kEdges_b57_1B79) / sizeof(kEdges_b57_1B79[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B7B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B7Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B7B = {57u, 0x9B7Bu, 0x1B7Bu, 0x009Bu, 1u, nullptr, 0u, kEdges_b57_1B7B, sizeof(kEdges_b57_1B7B) / sizeof(kEdges_b57_1B7B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B7D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B7Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B7D = {57u, 0x9B7Du, 0x1B7Du, 0x0009u, 1u, nullptr, 0u, kEdges_b57_1B7D, sizeof(kEdges_b57_1B7D) / sizeof(kEdges_b57_1B7D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B7F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCC54u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9B82u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B7F = {57u, 0x9B7Fu, 0x1B7Fu, 0xCC54u, 2u, nullptr, 0u, kEdges_b57_1B7F, sizeof(kEdges_b57_1B7F) / sizeof(kEdges_b57_1B7F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B82[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B85u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B82 = {57u, 0x9B82u, 0x1B82u, 0x9B91u, 2u, nullptr, 0u, kEdges_b57_1B82, sizeof(kEdges_b57_1B82) / sizeof(kEdges_b57_1B82[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B85[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B88u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B85 = {57u, 0x9B85u, 0x1B85u, 0x05E8u, 2u, nullptr, 0u, kEdges_b57_1B85, sizeof(kEdges_b57_1B85) / sizeof(kEdges_b57_1B85[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B88[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B8Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B88 = {57u, 0x9B88u, 0x1B88u, 0x9B94u, 2u, nullptr, 0u, kEdges_b57_1B88, sizeof(kEdges_b57_1B88) / sizeof(kEdges_b57_1B88[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B8B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B8Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B8B = {57u, 0x9B8Bu, 0x1B8Bu, 0x05FFu, 2u, nullptr, 0u, kEdges_b57_1B8B, sizeof(kEdges_b57_1B8B) / sizeof(kEdges_b57_1B8B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B8E[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9BBDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B8E = {57u, 0x9B8Eu, 0x1B8Eu, 0x9BBDu, 2u, nullptr, 0u, kEdges_b57_1B8E, sizeof(kEdges_b57_1B8E) / sizeof(kEdges_b57_1B8E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B9A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B9Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B9A = {57u, 0x9B9Au, 0x1B9Au, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1B9A, sizeof(kEdges_b57_1B9A) / sizeof(kEdges_b57_1B9A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B9D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9B9Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B9D = {57u, 0x9B9Du, 0x1B9Du, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1B9D, sizeof(kEdges_b57_1B9D) / sizeof(kEdges_b57_1B9D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1B9F[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BA1u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9BB2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1B9F = {57u, 0x9B9Fu, 0x1B9Fu, 0x9BB2u, 1u, nullptr, 0u, kEdges_b57_1B9F, sizeof(kEdges_b57_1B9F) / sizeof(kEdges_b57_1B9F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BA1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BA1 = {57u, 0x9BA1u, 0x1BA1u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1BA1, sizeof(kEdges_b57_1BA1) / sizeof(kEdges_b57_1BA1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BA3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BA6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BA3 = {57u, 0x9BA3u, 0x1BA3u, 0x05E8u, 2u, nullptr, 0u, kEdges_b57_1BA3, sizeof(kEdges_b57_1BA3) / sizeof(kEdges_b57_1BA3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BA6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BA9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BA6 = {57u, 0x9BA6u, 0x1BA6u, 0x05FFu, 2u, nullptr, 0u, kEdges_b57_1BA6, sizeof(kEdges_b57_1BA6) / sizeof(kEdges_b57_1BA6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BA9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BA9 = {57u, 0x9BA9u, 0x1BA9u, 0x0616u, 2u, nullptr, 0u, kEdges_b57_1BA9, sizeof(kEdges_b57_1BA9) / sizeof(kEdges_b57_1BA9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BAC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BAFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BAC = {57u, 0x9BACu, 0x1BACu, 0x062Du, 2u, nullptr, 0u, kEdges_b57_1BAC, sizeof(kEdges_b57_1BAC) / sizeof(kEdges_b57_1BAC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BAF[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9BC0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BAF = {57u, 0x9BAFu, 0x1BAFu, 0x9BC0u, 2u, nullptr, 0u, kEdges_b57_1BAF, sizeof(kEdges_b57_1BAF) / sizeof(kEdges_b57_1BAF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BB2[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BB2 = {57u, 0x9BB2u, 0x1BB2u, 0u, 0u, nullptr, 0u, kEdges_b57_1BB2, sizeof(kEdges_b57_1BB2) / sizeof(kEdges_b57_1BB2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BB3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BB5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BB3 = {57u, 0x9BB3u, 0x1BB3u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1BB3, sizeof(kEdges_b57_1BB3) / sizeof(kEdges_b57_1BB3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BB5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BB8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BB5 = {57u, 0x9BB5u, 0x1BB5u, 0x05E8u, 2u, nullptr, 0u, kEdges_b57_1BB5, sizeof(kEdges_b57_1BB5) / sizeof(kEdges_b57_1BB5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BB8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BBAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BB8 = {57u, 0x9BB8u, 0x1BB8u, 0x00FEu, 1u, nullptr, 0u, kEdges_b57_1BB8, sizeof(kEdges_b57_1BB8) / sizeof(kEdges_b57_1BB8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BBA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BBDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BBA = {57u, 0x9BBAu, 0x1BBAu, 0x05FFu, 2u, nullptr, 0u, kEdges_b57_1BBA, sizeof(kEdges_b57_1BBA) / sizeof(kEdges_b57_1BBA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BBD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9C5Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9BC0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BBD = {57u, 0x9BBDu, 0x1BBDu, 0x9C5Bu, 2u, nullptr, 0u, kEdges_b57_1BBD, sizeof(kEdges_b57_1BBD) / sizeof(kEdges_b57_1BBD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BC0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D65u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9BC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BC0 = {57u, 0x9BC0u, 0x1BC0u, 0x9D65u, 2u, nullptr, 0u, kEdges_b57_1BC0, sizeof(kEdges_b57_1BC0) / sizeof(kEdges_b57_1BC0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BC3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BC6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BC3 = {57u, 0x9BC3u, 0x1BC3u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1BC3, sizeof(kEdges_b57_1BC3) / sizeof(kEdges_b57_1BC3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BC6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BC6 = {57u, 0x9BC6u, 0x1BC6u, 0x003Au, 1u, nullptr, 0u, kEdges_b57_1BC6, sizeof(kEdges_b57_1BC6) / sizeof(kEdges_b57_1BC6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BC8[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BCAu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9BD5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BC8 = {57u, 0x9BC8u, 0x1BC8u, 0x9BD5u, 1u, nullptr, 0u, kEdges_b57_1BC8, sizeof(kEdges_b57_1BC8) / sizeof(kEdges_b57_1BC8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BCA[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D93u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9BCDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BCA = {57u, 0x9BCAu, 0x1BCAu, 0x9D93u, 2u, nullptr, 0u, kEdges_b57_1BCA, sizeof(kEdges_b57_1BCA) / sizeof(kEdges_b57_1BCA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BCD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9C70u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9BD0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BCD = {57u, 0x9BCDu, 0x1BCDu, 0x9C70u, 2u, nullptr, 0u, kEdges_b57_1BCD, sizeof(kEdges_b57_1BCD) / sizeof(kEdges_b57_1BCD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BD0[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BD2u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9BC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BD0 = {57u, 0x9BD0u, 0x1BD0u, 0x9BC3u, 1u, nullptr, 0u, kEdges_b57_1BD0, sizeof(kEdges_b57_1BD0) / sizeof(kEdges_b57_1BD0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BD2[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9D75u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BD2 = {57u, 0x9BD2u, 0x1BD2u, 0x9D75u, 2u, nullptr, 0u, kEdges_b57_1BD2, sizeof(kEdges_b57_1BD2) / sizeof(kEdges_b57_1BD2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BD5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BD7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BD5 = {57u, 0x9BD5u, 0x1BD5u, 0x003Au, 1u, nullptr, 0u, kEdges_b57_1BD5, sizeof(kEdges_b57_1BD5) / sizeof(kEdges_b57_1BD5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BD7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BDAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BD7 = {57u, 0x9BD7u, 0x1BD7u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1BD7, sizeof(kEdges_b57_1BD7) / sizeof(kEdges_b57_1BD7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BDA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BDCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BDA = {57u, 0x9BDAu, 0x1BDAu, 0x000Au, 1u, nullptr, 0u, kEdges_b57_1BDA, sizeof(kEdges_b57_1BDA) / sizeof(kEdges_b57_1BDA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BDC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BDFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BDC = {57u, 0x9BDCu, 0x1BDCu, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1BDC, sizeof(kEdges_b57_1BDC) / sizeof(kEdges_b57_1BDC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BDF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D93u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9BE2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BDF = {57u, 0x9BDFu, 0x1BDFu, 0x9D93u, 2u, nullptr, 0u, kEdges_b57_1BDF, sizeof(kEdges_b57_1BDF) / sizeof(kEdges_b57_1BDF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BE2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BE5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BE2 = {57u, 0x9BE2u, 0x1BE2u, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1BE2, sizeof(kEdges_b57_1BE2) / sizeof(kEdges_b57_1BE2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BE5[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BE7u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9BDFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BE5 = {57u, 0x9BE5u, 0x1BE5u, 0x9BDFu, 1u, nullptr, 0u, kEdges_b57_1BE5, sizeof(kEdges_b57_1BE5) / sizeof(kEdges_b57_1BE5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BE7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9BEDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9BEAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BE7 = {57u, 0x9BE7u, 0x1BE7u, 0x9BEDu, 2u, nullptr, 0u, kEdges_b57_1BE7, sizeof(kEdges_b57_1BE7) / sizeof(kEdges_b57_1BE7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BEA[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9BC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BEA = {57u, 0x9BEAu, 0x1BEAu, 0x9BC3u, 2u, nullptr, 0u, kEdges_b57_1BEA, sizeof(kEdges_b57_1BEA) / sizeof(kEdges_b57_1BEA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BED[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BEFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BED = {57u, 0x9BEDu, 0x1BEDu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1BED, sizeof(kEdges_b57_1BED) / sizeof(kEdges_b57_1BED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BEF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BF2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BEF = {57u, 0x9BEFu, 0x1BEFu, 0x05E8u, 2u, nullptr, 0u, kEdges_b57_1BEF, sizeof(kEdges_b57_1BEF) / sizeof(kEdges_b57_1BEF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BF2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BF5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BF2 = {57u, 0x9BF2u, 0x1BF2u, 0x05FFu, 2u, nullptr, 0u, kEdges_b57_1BF2, sizeof(kEdges_b57_1BF2) / sizeof(kEdges_b57_1BF2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BF5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BF8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BF5 = {57u, 0x9BF5u, 0x1BF5u, 0x0616u, 2u, nullptr, 0u, kEdges_b57_1BF5, sizeof(kEdges_b57_1BF5) / sizeof(kEdges_b57_1BF5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BF8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BFBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BF8 = {57u, 0x9BF8u, 0x1BF8u, 0x062Du, 2u, nullptr, 0u, kEdges_b57_1BF8, sizeof(kEdges_b57_1BF8) / sizeof(kEdges_b57_1BF8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BFB[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BFB = {57u, 0x9BFBu, 0x1BFBu, 0u, 0u, nullptr, 0u, kEdges_b57_1BFB, sizeof(kEdges_b57_1BFB) / sizeof(kEdges_b57_1BFB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BFC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9BFEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BFC = {57u, 0x9BFCu, 0x1BFCu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1BFC, sizeof(kEdges_b57_1BFC) / sizeof(kEdges_b57_1BFC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1BFE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C01u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1BFE = {57u, 0x9BFEu, 0x1BFEu, 0x0679u, 2u, nullptr, 0u, kEdges_b57_1BFE, sizeof(kEdges_b57_1BFE) / sizeof(kEdges_b57_1BFE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C01[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C03u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C01 = {57u, 0x9C01u, 0x1C01u, 0x0097u, 1u, nullptr, 0u, kEdges_b57_1C01, sizeof(kEdges_b57_1C01) / sizeof(kEdges_b57_1C01[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C03[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C05u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C03 = {57u, 0x9C03u, 0x1C03u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1C03, sizeof(kEdges_b57_1C03) / sizeof(kEdges_b57_1C03[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C05[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C07u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C05 = {57u, 0x9C05u, 0x1C05u, 0x009Bu, 1u, nullptr, 0u, kEdges_b57_1C05, sizeof(kEdges_b57_1C05) / sizeof(kEdges_b57_1C05[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C07[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C09u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C07 = {57u, 0x9C07u, 0x1C07u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_1C07, sizeof(kEdges_b57_1C07) / sizeof(kEdges_b57_1C07[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C09[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCC54u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9C0Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C09 = {57u, 0x9C09u, 0x1C09u, 0xCC54u, 2u, nullptr, 0u, kEdges_b57_1C09, sizeof(kEdges_b57_1C09) / sizeof(kEdges_b57_1C09[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C0C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C0Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C0C = {57u, 0x9C0Cu, 0x1C0Cu, 0x9C1Bu, 2u, nullptr, 0u, kEdges_b57_1C0C, sizeof(kEdges_b57_1C0C) / sizeof(kEdges_b57_1C0C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C0F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C12u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C0F = {57u, 0x9C0Fu, 0x1C0Fu, 0x05E8u, 2u, nullptr, 0u, kEdges_b57_1C0F, sizeof(kEdges_b57_1C0F) / sizeof(kEdges_b57_1C0F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C12[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C15u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C12 = {57u, 0x9C12u, 0x1C12u, 0x9C1Eu, 2u, nullptr, 0u, kEdges_b57_1C12, sizeof(kEdges_b57_1C12) / sizeof(kEdges_b57_1C12[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C15[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C18u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C15 = {57u, 0x9C15u, 0x1C15u, 0x05FFu, 2u, nullptr, 0u, kEdges_b57_1C15, sizeof(kEdges_b57_1C15) / sizeof(kEdges_b57_1C15[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C18[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9C2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C18 = {57u, 0x9C18u, 0x1C18u, 0x9C2Bu, 2u, nullptr, 0u, kEdges_b57_1C18, sizeof(kEdges_b57_1C18) / sizeof(kEdges_b57_1C18[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C21[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C23u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C21 = {57u, 0x9C21u, 0x1C21u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1C21, sizeof(kEdges_b57_1C21) / sizeof(kEdges_b57_1C21[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C23[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C26u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C23 = {57u, 0x9C23u, 0x1C23u, 0x05E8u, 2u, nullptr, 0u, kEdges_b57_1C23, sizeof(kEdges_b57_1C23) / sizeof(kEdges_b57_1C23[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C26[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C26 = {57u, 0x9C26u, 0x1C26u, 0x0002u, 1u, nullptr, 0u, kEdges_b57_1C26, sizeof(kEdges_b57_1C26) / sizeof(kEdges_b57_1C26[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C28[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C28 = {57u, 0x9C28u, 0x1C28u, 0x05FFu, 2u, nullptr, 0u, kEdges_b57_1C28, sizeof(kEdges_b57_1C28) / sizeof(kEdges_b57_1C28[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C2B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D65u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9C2Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C2B = {57u, 0x9C2Bu, 0x1C2Bu, 0x9D65u, 2u, nullptr, 0u, kEdges_b57_1C2B, sizeof(kEdges_b57_1C2B) / sizeof(kEdges_b57_1C2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C2E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9C5Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9C31u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C2E = {57u, 0x9C2Eu, 0x1C2Eu, 0x9C5Bu, 2u, nullptr, 0u, kEdges_b57_1C2E, sizeof(kEdges_b57_1C2E) / sizeof(kEdges_b57_1C2E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C31[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C34u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C31 = {57u, 0x9C31u, 0x1C31u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1C31, sizeof(kEdges_b57_1C31) / sizeof(kEdges_b57_1C31[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C34[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C36u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C34 = {57u, 0x9C34u, 0x1C34u, 0x00CAu, 1u, nullptr, 0u, kEdges_b57_1C34, sizeof(kEdges_b57_1C34) / sizeof(kEdges_b57_1C34[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C36[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C38u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9C43u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C36 = {57u, 0x9C36u, 0x1C36u, 0x9C43u, 1u, nullptr, 0u, kEdges_b57_1C36, sizeof(kEdges_b57_1C36) / sizeof(kEdges_b57_1C36[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C38[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D93u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9C3Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C38 = {57u, 0x9C38u, 0x1C38u, 0x9D93u, 2u, nullptr, 0u, kEdges_b57_1C38, sizeof(kEdges_b57_1C38) / sizeof(kEdges_b57_1C38[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C3B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9C70u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9C3Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C3B = {57u, 0x9C3Bu, 0x1C3Bu, 0x9C70u, 2u, nullptr, 0u, kEdges_b57_1C3B, sizeof(kEdges_b57_1C3B) / sizeof(kEdges_b57_1C3B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C3E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C40u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9C31u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C3E = {57u, 0x9C3Eu, 0x1C3Eu, 0x9C31u, 1u, nullptr, 0u, kEdges_b57_1C3E, sizeof(kEdges_b57_1C3E) / sizeof(kEdges_b57_1C3E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C40[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9D75u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C40 = {57u, 0x9C40u, 0x1C40u, 0x9D75u, 2u, nullptr, 0u, kEdges_b57_1C40, sizeof(kEdges_b57_1C40) / sizeof(kEdges_b57_1C40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C43[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C45u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C43 = {57u, 0x9C43u, 0x1C43u, 0x00C9u, 1u, nullptr, 0u, kEdges_b57_1C43, sizeof(kEdges_b57_1C43) / sizeof(kEdges_b57_1C43[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C45[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C48u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C45 = {57u, 0x9C45u, 0x1C45u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1C45, sizeof(kEdges_b57_1C45) / sizeof(kEdges_b57_1C45[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C48[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C4Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C48 = {57u, 0x9C48u, 0x1C48u, 0x000Au, 1u, nullptr, 0u, kEdges_b57_1C48, sizeof(kEdges_b57_1C48) / sizeof(kEdges_b57_1C48[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C4A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C4Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C4A = {57u, 0x9C4Au, 0x1C4Au, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1C4A, sizeof(kEdges_b57_1C4A) / sizeof(kEdges_b57_1C4A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C4D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D93u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9C50u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C4D = {57u, 0x9C4Du, 0x1C4Du, 0x9D93u, 2u, nullptr, 0u, kEdges_b57_1C4D, sizeof(kEdges_b57_1C4D) / sizeof(kEdges_b57_1C4D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C50[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C53u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C50 = {57u, 0x9C50u, 0x1C50u, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1C50, sizeof(kEdges_b57_1C50) / sizeof(kEdges_b57_1C50[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C53[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C55u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9C4Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C53 = {57u, 0x9C53u, 0x1C53u, 0x9C4Du, 1u, nullptr, 0u, kEdges_b57_1C53, sizeof(kEdges_b57_1C53) / sizeof(kEdges_b57_1C53[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C55[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9BEDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9C58u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C55 = {57u, 0x9C55u, 0x1C55u, 0x9BEDu, 2u, nullptr, 0u, kEdges_b57_1C55, sizeof(kEdges_b57_1C55) / sizeof(kEdges_b57_1C55[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C58[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9C31u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C58 = {57u, 0x9C58u, 0x1C58u, 0x9C31u, 2u, nullptr, 0u, kEdges_b57_1C58, sizeof(kEdges_b57_1C58) / sizeof(kEdges_b57_1C58[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C5B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C5Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C5B = {57u, 0x9C5Bu, 0x1C5Bu, 0x0009u, 1u, nullptr, 0u, kEdges_b57_1C5B, sizeof(kEdges_b57_1C5B) / sizeof(kEdges_b57_1C5B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C5D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C5Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C5D = {57u, 0x9C5Du, 0x1C5Du, 0x00D0u, 1u, nullptr, 0u, kEdges_b57_1C5D, sizeof(kEdges_b57_1C5D) / sizeof(kEdges_b57_1C5D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C5F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C62u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C5F = {57u, 0x9C5Fu, 0x1C5Fu, 0x060Du, 2u, nullptr, 0u, kEdges_b57_1C5F, sizeof(kEdges_b57_1C5F) / sizeof(kEdges_b57_1C5F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C62[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C64u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C62 = {57u, 0x9C62u, 0x1C62u, 0x00FAu, 1u, nullptr, 0u, kEdges_b57_1C62, sizeof(kEdges_b57_1C62) / sizeof(kEdges_b57_1C62[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C64[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C67u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C64 = {57u, 0x9C64u, 0x1C64u, 0x0624u, 2u, nullptr, 0u, kEdges_b57_1C64, sizeof(kEdges_b57_1C64) / sizeof(kEdges_b57_1C64[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C67[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C69u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C67 = {57u, 0x9C67u, 0x1C67u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1C67, sizeof(kEdges_b57_1C67) / sizeof(kEdges_b57_1C67[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C69[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C6Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C69 = {57u, 0x9C69u, 0x1C69u, 0x049Du, 2u, nullptr, 0u, kEdges_b57_1C69, sizeof(kEdges_b57_1C69) / sizeof(kEdges_b57_1C69[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C6C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C6Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C6C = {57u, 0x9C6Cu, 0x1C6Cu, 0x04E2u, 2u, nullptr, 0u, kEdges_b57_1C6C, sizeof(kEdges_b57_1C6C) / sizeof(kEdges_b57_1C6C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C6F[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C6F = {57u, 0x9C6Fu, 0x1C6Fu, 0u, 0u, nullptr, 0u, kEdges_b57_1C6F, sizeof(kEdges_b57_1C6F) / sizeof(kEdges_b57_1C6F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C70[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C72u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C70 = {57u, 0x9C70u, 0x1C70u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_1C70, sizeof(kEdges_b57_1C70) / sizeof(kEdges_b57_1C70[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C72[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C72 = {57u, 0x9C72u, 0x1C72u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1C72, sizeof(kEdges_b57_1C72) / sizeof(kEdges_b57_1C72[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C74[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C77u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C74 = {57u, 0x9C74u, 0x1C74u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1C74, sizeof(kEdges_b57_1C74) / sizeof(kEdges_b57_1C74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C77[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C7Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C77 = {57u, 0x9C77u, 0x1C77u, 0x05DFu, 2u, nullptr, 0u, kEdges_b57_1C77, sizeof(kEdges_b57_1C77) / sizeof(kEdges_b57_1C77[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C7A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C7Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C7A = {57u, 0x9C7Au, 0x1C7Au, 0x00EBu, 1u, nullptr, 0u, kEdges_b57_1C7A, sizeof(kEdges_b57_1C7A) / sizeof(kEdges_b57_1C7A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C7C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C7Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C7C = {57u, 0x9C7Cu, 0x1C7Cu, 0x05F6u, 2u, nullptr, 0u, kEdges_b57_1C7C, sizeof(kEdges_b57_1C7C) / sizeof(kEdges_b57_1C7C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C7F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C81u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C7F = {57u, 0x9C7Fu, 0x1C7Fu, 0x00EDu, 1u, nullptr, 0u, kEdges_b57_1C7F, sizeof(kEdges_b57_1C7F) / sizeof(kEdges_b57_1C7F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C81[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C83u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C81 = {57u, 0x9C81u, 0x1C81u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_1C81, sizeof(kEdges_b57_1C81) / sizeof(kEdges_b57_1C81[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C83[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEE9Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9C86u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C83 = {57u, 0x9C83u, 0x1C83u, 0xEE9Au, 2u, nullptr, 0u, kEdges_b57_1C83, sizeof(kEdges_b57_1C83) / sizeof(kEdges_b57_1C83[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C86[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE4D1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9C89u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C86 = {57u, 0x9C86u, 0x1C86u, 0xE4D1u, 2u, nullptr, 0u, kEdges_b57_1C86, sizeof(kEdges_b57_1C86) / sizeof(kEdges_b57_1C86[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C89[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C8Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C89 = {57u, 0x9C89u, 0x1C89u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_1C89, sizeof(kEdges_b57_1C89) / sizeof(kEdges_b57_1C89[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C8C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C8Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C8C = {57u, 0x9C8Cu, 0x1C8Cu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1C8C, sizeof(kEdges_b57_1C8C) / sizeof(kEdges_b57_1C8C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C8E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C90u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9C9Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C8E = {57u, 0x9C8Eu, 0x1C8Eu, 0x9C9Au, 1u, nullptr, 0u, kEdges_b57_1C8E, sizeof(kEdges_b57_1C8E) / sizeof(kEdges_b57_1C8E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C90[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C92u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C90 = {57u, 0x9C90u, 0x1C90u, 0x0060u, 1u, nullptr, 0u, kEdges_b57_1C90, sizeof(kEdges_b57_1C90) / sizeof(kEdges_b57_1C90[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C92[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C94u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C92 = {57u, 0x9C92u, 0x1C92u, 0x00DCu, 1u, nullptr, 0u, kEdges_b57_1C92, sizeof(kEdges_b57_1C92) / sizeof(kEdges_b57_1C92[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C94[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C96u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C94 = {57u, 0x9C94u, 0x1C94u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1C94, sizeof(kEdges_b57_1C94) / sizeof(kEdges_b57_1C94[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C96[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C99u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C96 = {57u, 0x9C96u, 0x1C96u, 0x04CBu, 2u, nullptr, 0u, kEdges_b57_1C96, sizeof(kEdges_b57_1C96) / sizeof(kEdges_b57_1C96[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C99[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9C9Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C99 = {57u, 0x9C99u, 0x1C99u, 0u, 0u, nullptr, 0u, kEdges_b57_1C99, sizeof(kEdges_b57_1C99) / sizeof(kEdges_b57_1C99[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C9A[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C9A = {57u, 0x9C9Au, 0x1C9Au, 0u, 0u, nullptr, 0u, kEdges_b57_1C9A, sizeof(kEdges_b57_1C9A) / sizeof(kEdges_b57_1C9A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C9B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D65u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9C9Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C9B = {57u, 0x9C9Bu, 0x1C9Bu, 0x9D65u, 2u, nullptr, 0u, kEdges_b57_1C9B, sizeof(kEdges_b57_1C9B) / sizeof(kEdges_b57_1C9B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1C9E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CA0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1C9E = {57u, 0x9C9Eu, 0x1C9Eu, 0x0040u, 1u, nullptr, 0u, kEdges_b57_1C9E, sizeof(kEdges_b57_1C9E) / sizeof(kEdges_b57_1C9E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CA0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CA0 = {57u, 0x9CA0u, 0x1CA0u, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1CA0, sizeof(kEdges_b57_1CA0) / sizeof(kEdges_b57_1CA0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CA3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D93u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9CA6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CA3 = {57u, 0x9CA3u, 0x1CA3u, 0x9D93u, 2u, nullptr, 0u, kEdges_b57_1CA3, sizeof(kEdges_b57_1CA3) / sizeof(kEdges_b57_1CA3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CA6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CA8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CA6 = {57u, 0x9CA6u, 0x1CA6u, 0x00F3u, 1u, nullptr, 0u, kEdges_b57_1CA6, sizeof(kEdges_b57_1CA6) / sizeof(kEdges_b57_1CA6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CA8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CAAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CA8 = {57u, 0x9CA8u, 0x1CA8u, 0x0007u, 1u, nullptr, 0u, kEdges_b57_1CA8, sizeof(kEdges_b57_1CA8) / sizeof(kEdges_b57_1CA8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CAA[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CACu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9CB3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CAA = {57u, 0x9CAAu, 0x1CAAu, 0x9CB3u, 1u, nullptr, 0u, kEdges_b57_1CAA, sizeof(kEdges_b57_1CAA) / sizeof(kEdges_b57_1CAA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CAC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CAEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CAC = {57u, 0x9CACu, 0x1CACu, 0x00F9u, 1u, nullptr, 0u, kEdges_b57_1CAC, sizeof(kEdges_b57_1CAC) / sizeof(kEdges_b57_1CAC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CAE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CB1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CAE = {57u, 0x9CAEu, 0x1CAEu, 0x0672u, 2u, nullptr, 0u, kEdges_b57_1CAE, sizeof(kEdges_b57_1CAE) / sizeof(kEdges_b57_1CAE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CB1[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CB3u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9CBCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CB1 = {57u, 0x9CB1u, 0x1CB1u, 0x9CBCu, 1u, nullptr, 0u, kEdges_b57_1CB1, sizeof(kEdges_b57_1CB1) / sizeof(kEdges_b57_1CB1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CB3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CB5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CB3 = {57u, 0x9CB3u, 0x1CB3u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_1CB3, sizeof(kEdges_b57_1CB3) / sizeof(kEdges_b57_1CB3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CB5[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CB7u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9CBCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CB5 = {57u, 0x9CB5u, 0x1CB5u, 0x9CBCu, 1u, nullptr, 0u, kEdges_b57_1CB5, sizeof(kEdges_b57_1CB5) / sizeof(kEdges_b57_1CB5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CB7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CB9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CB7 = {57u, 0x9CB7u, 0x1CB7u, 0x00F9u, 1u, nullptr, 0u, kEdges_b57_1CB7, sizeof(kEdges_b57_1CB7) / sizeof(kEdges_b57_1CB7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CB9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CBCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CB9 = {57u, 0x9CB9u, 0x1CB9u, 0x0672u, 2u, nullptr, 0u, kEdges_b57_1CB9, sizeof(kEdges_b57_1CB9) / sizeof(kEdges_b57_1CB9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CBC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CBFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CBC = {57u, 0x9CBCu, 0x1CBCu, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1CBC, sizeof(kEdges_b57_1CBC) / sizeof(kEdges_b57_1CBC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CBF[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CC1u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9CA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CBF = {57u, 0x9CBFu, 0x1CBFu, 0x9CA3u, 1u, nullptr, 0u, kEdges_b57_1CBF, sizeof(kEdges_b57_1CBF) / sizeof(kEdges_b57_1CBF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CC1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CC1 = {57u, 0x9CC1u, 0x1CC1u, 0x00BFu, 1u, nullptr, 0u, kEdges_b57_1CC1, sizeof(kEdges_b57_1CC1) / sizeof(kEdges_b57_1CC1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CC3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CC6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CC3 = {57u, 0x9CC3u, 0x1CC3u, 0x0672u, 2u, nullptr, 0u, kEdges_b57_1CC3, sizeof(kEdges_b57_1CC3) / sizeof(kEdges_b57_1CC3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CC6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CC8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CC6 = {57u, 0x9CC6u, 0x1CC6u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1CC6, sizeof(kEdges_b57_1CC6) / sizeof(kEdges_b57_1CC6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CC8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CCAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CC8 = {57u, 0x9CC8u, 0x1CC8u, 0x00F9u, 1u, nullptr, 0u, kEdges_b57_1CC8, sizeof(kEdges_b57_1CC8) / sizeof(kEdges_b57_1CC8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CCA[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9D75u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CCA = {57u, 0x9CCAu, 0x1CCAu, 0x9D75u, 2u, nullptr, 0u, kEdges_b57_1CCA, sizeof(kEdges_b57_1CCA) / sizeof(kEdges_b57_1CCA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CCD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CD0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CCD = {57u, 0x9CCDu, 0x1CCDu, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1CCD, sizeof(kEdges_b57_1CCD) / sizeof(kEdges_b57_1CCD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CD0[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D65u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9CD3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CD0 = {57u, 0x9CD0u, 0x1CD0u, 0x9D65u, 2u, nullptr, 0u, kEdges_b57_1CD0, sizeof(kEdges_b57_1CD0) / sizeof(kEdges_b57_1CD0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CD3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D93u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9CD6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CD3 = {57u, 0x9CD3u, 0x1CD3u, 0x9D93u, 2u, nullptr, 0u, kEdges_b57_1CD3, sizeof(kEdges_b57_1CD3) / sizeof(kEdges_b57_1CD3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CD6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CD9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CD6 = {57u, 0x9CD6u, 0x1CD6u, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1CD6, sizeof(kEdges_b57_1CD6) / sizeof(kEdges_b57_1CD6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CD9[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CDBu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9CD3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CD9 = {57u, 0x9CD9u, 0x1CD9u, 0x9CD3u, 1u, nullptr, 0u, kEdges_b57_1CD9, sizeof(kEdges_b57_1CD9) / sizeof(kEdges_b57_1CD9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CDB[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9D75u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CDB = {57u, 0x9CDBu, 0x1CDBu, 0x9D75u, 2u, nullptr, 0u, kEdges_b57_1CDB, sizeof(kEdges_b57_1CDB) / sizeof(kEdges_b57_1CDB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CDE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CE1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CDE = {57u, 0x9CDEu, 0x1CDEu, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1CDE, sizeof(kEdges_b57_1CDE) / sizeof(kEdges_b57_1CDE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CE1[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D65u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9CE4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CE1 = {57u, 0x9CE1u, 0x1CE1u, 0x9D65u, 2u, nullptr, 0u, kEdges_b57_1CE1, sizeof(kEdges_b57_1CE1) / sizeof(kEdges_b57_1CE1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CE4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D7Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9CE7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CE4 = {57u, 0x9CE4u, 0x1CE4u, 0x9D7Eu, 2u, nullptr, 0u, kEdges_b57_1CE4, sizeof(kEdges_b57_1CE4) / sizeof(kEdges_b57_1CE4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CE7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CEAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CE7 = {57u, 0x9CE7u, 0x1CE7u, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1CE7, sizeof(kEdges_b57_1CE7) / sizeof(kEdges_b57_1CE7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CEA[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CECu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9CE4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CEA = {57u, 0x9CEAu, 0x1CEAu, 0x9CE4u, 1u, nullptr, 0u, kEdges_b57_1CEA, sizeof(kEdges_b57_1CEA) / sizeof(kEdges_b57_1CEA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CEC[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9D75u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CEC = {57u, 0x9CECu, 0x1CECu, 0x9D75u, 2u, nullptr, 0u, kEdges_b57_1CEC, sizeof(kEdges_b57_1CEC) / sizeof(kEdges_b57_1CEC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CEF[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D65u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9CF2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CEF = {57u, 0x9CEFu, 0x1CEFu, 0x9D65u, 2u, nullptr, 0u, kEdges_b57_1CEF, sizeof(kEdges_b57_1CEF) / sizeof(kEdges_b57_1CEF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CF2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CF4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CF2 = {57u, 0x9CF2u, 0x1CF2u, 0x00F0u, 1u, nullptr, 0u, kEdges_b57_1CF2, sizeof(kEdges_b57_1CF2) / sizeof(kEdges_b57_1CF2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CF4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9CF7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CF4 = {57u, 0x9CF4u, 0x1CF4u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_1CF4, sizeof(kEdges_b57_1CF4) / sizeof(kEdges_b57_1CF4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CF7[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CF9u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9D0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CF7 = {57u, 0x9CF7u, 0x1CF7u, 0x9D0Au, 1u, nullptr, 0u, kEdges_b57_1CF7, sizeof(kEdges_b57_1CF7) / sizeof(kEdges_b57_1CF7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CF9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CFBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CF9 = {57u, 0x9CF9u, 0x1CF9u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1CF9, sizeof(kEdges_b57_1CF9) / sizeof(kEdges_b57_1CF9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CFB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9CFDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CFB = {57u, 0x9CFBu, 0x1CFBu, 0x0003u, 1u, nullptr, 0u, kEdges_b57_1CFB, sizeof(kEdges_b57_1CFB) / sizeof(kEdges_b57_1CFB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1CFD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9D00u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1CFD = {57u, 0x9CFDu, 0x1CFDu, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_1CFD, sizeof(kEdges_b57_1CFD) / sizeof(kEdges_b57_1CFD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D00[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D02u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D00 = {57u, 0x9D00u, 0x1D00u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1D00, sizeof(kEdges_b57_1D00) / sizeof(kEdges_b57_1D00[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D02[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF8AEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9D05u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D02 = {57u, 0x9D02u, 0x1D02u, 0xF8AEu, 2u, nullptr, 0u, kEdges_b57_1D02, sizeof(kEdges_b57_1D02) / sizeof(kEdges_b57_1D02[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D05[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D07u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D05 = {57u, 0x9D05u, 0x1D05u, 0x0011u, 1u, nullptr, 0u, kEdges_b57_1D05, sizeof(kEdges_b57_1D05) / sizeof(kEdges_b57_1D05[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D07[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D07 = {57u, 0x9D07u, 0x1D07u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1D07, sizeof(kEdges_b57_1D07) / sizeof(kEdges_b57_1D07[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D0A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D0Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D0A = {57u, 0x9D0Au, 0x1D0Au, 0x05E9u, 2u, nullptr, 0u, kEdges_b57_1D0A, sizeof(kEdges_b57_1D0A) / sizeof(kEdges_b57_1D0A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D0D[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9D57u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D0D = {57u, 0x9D0Du, 0x1D0Du, 0x9D57u, 2u, nullptr, 0u, kEdges_b57_1D0D, sizeof(kEdges_b57_1D0D) / sizeof(kEdges_b57_1D0D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D10[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D65u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9D13u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D10 = {57u, 0x9D10u, 0x1D10u, 0x9D65u, 2u, nullptr, 0u, kEdges_b57_1D10, sizeof(kEdges_b57_1D10) / sizeof(kEdges_b57_1D10[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D13[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D15u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D13 = {57u, 0x9D13u, 0x1D13u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1D13, sizeof(kEdges_b57_1D13) / sizeof(kEdges_b57_1D13[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D15[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D17u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D15 = {57u, 0x9D15u, 0x1D15u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1D15, sizeof(kEdges_b57_1D15) / sizeof(kEdges_b57_1D15[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D17[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF8AEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9D1Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D17 = {57u, 0x9D17u, 0x1D17u, 0xF8AEu, 2u, nullptr, 0u, kEdges_b57_1D17, sizeof(kEdges_b57_1D17) / sizeof(kEdges_b57_1D17[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D1A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D1Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D1A = {57u, 0x9D1Au, 0x1D1Au, 0x0011u, 1u, nullptr, 0u, kEdges_b57_1D1A, sizeof(kEdges_b57_1D1A) / sizeof(kEdges_b57_1D1A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D1C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D1Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D1C = {57u, 0x9D1Cu, 0x1D1Cu, 0u, 0u, nullptr, 0u, kEdges_b57_1D1C, sizeof(kEdges_b57_1D1C) / sizeof(kEdges_b57_1D1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D1D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D1Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D1D = {57u, 0x9D1Du, 0x1D1Du, 0u, 0u, nullptr, 0u, kEdges_b57_1D1D, sizeof(kEdges_b57_1D1D) / sizeof(kEdges_b57_1D1D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D1E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D21u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D1E = {57u, 0x9D1Eu, 0x1D1Eu, 0x05BBu, 2u, nullptr, 0u, kEdges_b57_1D1E, sizeof(kEdges_b57_1D1E) / sizeof(kEdges_b57_1D1E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D21[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D23u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D21 = {57u, 0x9D21u, 0x1D21u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_1D21, sizeof(kEdges_b57_1D21) / sizeof(kEdges_b57_1D21[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D23[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D26u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D23 = {57u, 0x9D23u, 0x1D23u, 0x05D2u, 2u, nullptr, 0u, kEdges_b57_1D23, sizeof(kEdges_b57_1D23) / sizeof(kEdges_b57_1D23[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D26[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D26 = {57u, 0x9D26u, 0x1D26u, 0x00F0u, 1u, nullptr, 0u, kEdges_b57_1D26, sizeof(kEdges_b57_1D26) / sizeof(kEdges_b57_1D26[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D28[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE5ABu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9D2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D28 = {57u, 0x9D28u, 0x1D28u, 0xE5ABu, 2u, nullptr, 0u, kEdges_b57_1D28, sizeof(kEdges_b57_1D28) / sizeof(kEdges_b57_1D28[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D2B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D2Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9D42u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D2B = {57u, 0x9D2Bu, 0x1D2Bu, 0x9D42u, 1u, nullptr, 0u, kEdges_b57_1D2B, sizeof(kEdges_b57_1D2B) / sizeof(kEdges_b57_1D2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D2D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D30u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D2D = {57u, 0x9D2Du, 0x1D2Du, 0x05BBu, 2u, nullptr, 0u, kEdges_b57_1D2D, sizeof(kEdges_b57_1D2D) / sizeof(kEdges_b57_1D2D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D30[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D32u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D30 = {57u, 0x9D30u, 0x1D30u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_1D30, sizeof(kEdges_b57_1D30) / sizeof(kEdges_b57_1D30[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D32[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D35u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D32 = {57u, 0x9D32u, 0x1D32u, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1D32, sizeof(kEdges_b57_1D32) / sizeof(kEdges_b57_1D32[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D35[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D38u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D35 = {57u, 0x9D35u, 0x1D35u, 0x05BBu, 2u, nullptr, 0u, kEdges_b57_1D35, sizeof(kEdges_b57_1D35) / sizeof(kEdges_b57_1D35[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D38[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D3Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D38 = {57u, 0x9D38u, 0x1D38u, 0x05BBu, 2u, nullptr, 0u, kEdges_b57_1D38, sizeof(kEdges_b57_1D38) / sizeof(kEdges_b57_1D38[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D3B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D3Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D3B = {57u, 0x9D3Bu, 0x1D3Bu, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1D3B, sizeof(kEdges_b57_1D3B) / sizeof(kEdges_b57_1D3B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D3D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D3Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D3D = {57u, 0x9D3Du, 0x1D3Du, 0x0003u, 1u, nullptr, 0u, kEdges_b57_1D3D, sizeof(kEdges_b57_1D3D) / sizeof(kEdges_b57_1D3D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D3F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9D42u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D3F = {57u, 0x9D3Fu, 0x1D3Fu, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_1D3F, sizeof(kEdges_b57_1D3F) / sizeof(kEdges_b57_1D3F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D42[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D45u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D42 = {57u, 0x9D42u, 0x1D42u, 0x05E9u, 2u, nullptr, 0u, kEdges_b57_1D42, sizeof(kEdges_b57_1D42) / sizeof(kEdges_b57_1D42[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D45[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D47u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D45 = {57u, 0x9D45u, 0x1D45u, 0x0018u, 1u, nullptr, 0u, kEdges_b57_1D45, sizeof(kEdges_b57_1D45) / sizeof(kEdges_b57_1D45[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D47[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D4Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D47 = {57u, 0x9D47u, 0x1D47u, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1D47, sizeof(kEdges_b57_1D47) / sizeof(kEdges_b57_1D47[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D4A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D93u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9D4Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D4A = {57u, 0x9D4Au, 0x1D4Au, 0x9D93u, 2u, nullptr, 0u, kEdges_b57_1D4A, sizeof(kEdges_b57_1D4A) / sizeof(kEdges_b57_1D4A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D4D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D50u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D4D = {57u, 0x9D4Du, 0x1D4Du, 0x05B9u, 2u, nullptr, 0u, kEdges_b57_1D4D, sizeof(kEdges_b57_1D4D) / sizeof(kEdges_b57_1D4D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D50[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D52u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9D4Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D50 = {57u, 0x9D50u, 0x1D50u, 0x9D4Au, 1u, nullptr, 0u, kEdges_b57_1D50, sizeof(kEdges_b57_1D50) / sizeof(kEdges_b57_1D50[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D52[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D55u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D52 = {57u, 0x9D52u, 0x1D52u, 0x05D2u, 2u, nullptr, 0u, kEdges_b57_1D52, sizeof(kEdges_b57_1D52) / sizeof(kEdges_b57_1D52[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D55[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D57u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9D26u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D55 = {57u, 0x9D55u, 0x1D55u, 0x9D26u, 1u, nullptr, 0u, kEdges_b57_1D55, sizeof(kEdges_b57_1D55) / sizeof(kEdges_b57_1D55[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D57[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D93u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9D5Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D57 = {57u, 0x9D57u, 0x1D57u, 0x9D93u, 2u, nullptr, 0u, kEdges_b57_1D57, sizeof(kEdges_b57_1D57) / sizeof(kEdges_b57_1D57[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D5A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D5Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D5A = {57u, 0x9D5Au, 0x1D5Au, 0x05E9u, 2u, nullptr, 0u, kEdges_b57_1D5A, sizeof(kEdges_b57_1D5A) / sizeof(kEdges_b57_1D5A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D5D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D60u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D5D = {57u, 0x9D5Du, 0x1D5Du, 0x03A0u, 2u, nullptr, 0u, kEdges_b57_1D5D, sizeof(kEdges_b57_1D5D) / sizeof(kEdges_b57_1D5D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D60[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D62u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9D57u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D60 = {57u, 0x9D60u, 0x1D60u, 0x9D57u, 1u, nullptr, 0u, kEdges_b57_1D60, sizeof(kEdges_b57_1D60) / sizeof(kEdges_b57_1D60[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D62[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9D75u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D62 = {57u, 0x9D62u, 0x1D62u, 0x9D75u, 2u, nullptr, 0u, kEdges_b57_1D62, sizeof(kEdges_b57_1D62) / sizeof(kEdges_b57_1D62[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D65[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D66u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D65 = {57u, 0x9D65u, 0x1D65u, 0u, 0u, nullptr, 0u, kEdges_b57_1D65, sizeof(kEdges_b57_1D65) / sizeof(kEdges_b57_1D65[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D66[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D69u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D66 = {57u, 0x9D66u, 0x1D66u, 0x0104u, 2u, nullptr, 0u, kEdges_b57_1D66, sizeof(kEdges_b57_1D66) / sizeof(kEdges_b57_1D66[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D69[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D6Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D69 = {57u, 0x9D69u, 0x1D69u, 0x0623u, 2u, nullptr, 0u, kEdges_b57_1D69, sizeof(kEdges_b57_1D69) / sizeof(kEdges_b57_1D69[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D6C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D6Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D6C = {57u, 0x9D6Cu, 0x1D6Cu, 0x0103u, 2u, nullptr, 0u, kEdges_b57_1D6C, sizeof(kEdges_b57_1D6C) / sizeof(kEdges_b57_1D6C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D6F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D72u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D6F = {57u, 0x9D6Fu, 0x1D6Fu, 0x063Au, 2u, nullptr, 0u, kEdges_b57_1D6F, sizeof(kEdges_b57_1D6F) / sizeof(kEdges_b57_1D6F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D72[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D72 = {57u, 0x9D72u, 0x1D72u, 0x0009u, 1u, nullptr, 0u, kEdges_b57_1D72, sizeof(kEdges_b57_1D72) / sizeof(kEdges_b57_1D72[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D74[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D74 = {57u, 0x9D74u, 0x1D74u, 0u, 0u, nullptr, 0u, kEdges_b57_1D74, sizeof(kEdges_b57_1D74) / sizeof(kEdges_b57_1D74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D75[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D78u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D75 = {57u, 0x9D75u, 0x1D75u, 0x0623u, 2u, nullptr, 0u, kEdges_b57_1D75, sizeof(kEdges_b57_1D75) / sizeof(kEdges_b57_1D75[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D78[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D79u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D78 = {57u, 0x9D78u, 0x1D78u, 0u, 0u, nullptr, 0u, kEdges_b57_1D78, sizeof(kEdges_b57_1D78) / sizeof(kEdges_b57_1D78[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D79[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D7Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D79 = {57u, 0x9D79u, 0x1D79u, 0x063Au, 2u, nullptr, 0u, kEdges_b57_1D79, sizeof(kEdges_b57_1D79) / sizeof(kEdges_b57_1D79[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D7C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D7Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D7C = {57u, 0x9D7Cu, 0x1D7Cu, 0u, 0u, nullptr, 0u, kEdges_b57_1D7C, sizeof(kEdges_b57_1D7C) / sizeof(kEdges_b57_1D7C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D7D[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D7D = {57u, 0x9D7Du, 0x1D7Du, 0u, 0u, nullptr, 0u, kEdges_b57_1D7D, sizeof(kEdges_b57_1D7D) / sizeof(kEdges_b57_1D7D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D7E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D80u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D7E = {57u, 0x9D7Eu, 0x1D7Eu, 0x0080u, 1u, nullptr, 0u, kEdges_b57_1D7E, sizeof(kEdges_b57_1D7E) / sizeof(kEdges_b57_1D7E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D80[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D81u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D80 = {57u, 0x9D80u, 0x1D80u, 0u, 0u, nullptr, 0u, kEdges_b57_1D80, sizeof(kEdges_b57_1D80) / sizeof(kEdges_b57_1D80[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D81[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D81 = {57u, 0x9D81u, 0x1D81u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1D81, sizeof(kEdges_b57_1D81) / sizeof(kEdges_b57_1D81[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D84[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D87u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D84 = {57u, 0x9D84u, 0x1D84u, 0x069Du, 2u, nullptr, 0u, kEdges_b57_1D84, sizeof(kEdges_b57_1D84) / sizeof(kEdges_b57_1D84[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D87[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D89u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D87 = {57u, 0x9D87u, 0x1D87u, 0x0097u, 1u, nullptr, 0u, kEdges_b57_1D87, sizeof(kEdges_b57_1D87) / sizeof(kEdges_b57_1D87[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D89[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D8Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D89 = {57u, 0x9D89u, 0x1D89u, 0u, 0u, nullptr, 0u, kEdges_b57_1D89, sizeof(kEdges_b57_1D89) / sizeof(kEdges_b57_1D89[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D8A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D8Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D8A = {57u, 0x9D8Au, 0x1D8Au, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1D8A, sizeof(kEdges_b57_1D8A) / sizeof(kEdges_b57_1D8A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D8D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D90u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D8D = {57u, 0x9D8Du, 0x1D8Du, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_1D8D, sizeof(kEdges_b57_1D8D) / sizeof(kEdges_b57_1D8D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D90[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D90 = {57u, 0x9D90u, 0x1D90u, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_1D90, sizeof(kEdges_b57_1D90) / sizeof(kEdges_b57_1D90[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D93[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D95u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D93 = {57u, 0x9D93u, 0x1D93u, 0x00BAu, 1u, nullptr, 0u, kEdges_b57_1D93, sizeof(kEdges_b57_1D93) / sizeof(kEdges_b57_1D93[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D95[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D96u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D95 = {57u, 0x9D95u, 0x1D95u, 0u, 0u, nullptr, 0u, kEdges_b57_1D95, sizeof(kEdges_b57_1D95) / sizeof(kEdges_b57_1D95[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D96[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D99u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D96 = {57u, 0x9D96u, 0x1D96u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1D96, sizeof(kEdges_b57_1D96) / sizeof(kEdges_b57_1D96[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D99[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D9Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D99 = {57u, 0x9D99u, 0x1D99u, 0x069Du, 2u, nullptr, 0u, kEdges_b57_1D99, sizeof(kEdges_b57_1D99) / sizeof(kEdges_b57_1D99[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D9C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D9Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D9C = {57u, 0x9D9Cu, 0x1D9Cu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1D9C, sizeof(kEdges_b57_1D9C) / sizeof(kEdges_b57_1D9C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D9E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9D9Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D9E = {57u, 0x9D9Eu, 0x1D9Eu, 0u, 0u, nullptr, 0u, kEdges_b57_1D9E, sizeof(kEdges_b57_1D9E) / sizeof(kEdges_b57_1D9E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1D9F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DA2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1D9F = {57u, 0x9D9Fu, 0x1D9Fu, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1D9F, sizeof(kEdges_b57_1D9F) / sizeof(kEdges_b57_1D9F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DA2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DA5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DA2 = {57u, 0x9DA2u, 0x1DA2u, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_1DA2, sizeof(kEdges_b57_1DA2) / sizeof(kEdges_b57_1DA2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DA5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DA7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DA5 = {57u, 0x9DA5u, 0x1DA5u, 0x0005u, 1u, nullptr, 0u, kEdges_b57_1DA5, sizeof(kEdges_b57_1DA5) / sizeof(kEdges_b57_1DA5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DA7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DAAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DA7 = {57u, 0x9DA7u, 0x1DA7u, 0x03A8u, 2u, nullptr, 0u, kEdges_b57_1DA7, sizeof(kEdges_b57_1DA7) / sizeof(kEdges_b57_1DA7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DAA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DACu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DAA = {57u, 0x9DAAu, 0x1DAAu, 0x00F1u, 1u, nullptr, 0u, kEdges_b57_1DAA, sizeof(kEdges_b57_1DAA) / sizeof(kEdges_b57_1DAA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DAC[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DAEu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9DB0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DAC = {57u, 0x9DACu, 0x1DACu, 0x9DB0u, 1u, nullptr, 0u, kEdges_b57_1DAC, sizeof(kEdges_b57_1DAC) / sizeof(kEdges_b57_1DAC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DAE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DB0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DAE = {57u, 0x9DAEu, 0x1DAEu, 0x0002u, 1u, nullptr, 0u, kEdges_b57_1DAE, sizeof(kEdges_b57_1DAE) / sizeof(kEdges_b57_1DAE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DB0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DB3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DB0 = {57u, 0x9DB0u, 0x1DB0u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1DB0, sizeof(kEdges_b57_1DB0) / sizeof(kEdges_b57_1DB0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DB3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DB4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DB3 = {57u, 0x9DB3u, 0x1DB3u, 0u, 0u, nullptr, 0u, kEdges_b57_1DB3, sizeof(kEdges_b57_1DB3) / sizeof(kEdges_b57_1DB3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DB4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DB7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DB4 = {57u, 0x9DB4u, 0x1DB4u, 0x9DCAu, 2u, nullptr, 0u, kEdges_b57_1DB4, sizeof(kEdges_b57_1DB4) / sizeof(kEdges_b57_1DB4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DB7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DBAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DB7 = {57u, 0x9DB7u, 0x1DB7u, 0x048Fu, 2u, nullptr, 0u, kEdges_b57_1DB7, sizeof(kEdges_b57_1DB7) / sizeof(kEdges_b57_1DB7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DBA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DBDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DBA = {57u, 0x9DBAu, 0x1DBAu, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1DBA, sizeof(kEdges_b57_1DBA) / sizeof(kEdges_b57_1DBA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DBD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DBEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DBD = {57u, 0x9DBDu, 0x1DBDu, 0u, 0u, nullptr, 0u, kEdges_b57_1DBD, sizeof(kEdges_b57_1DBD) / sizeof(kEdges_b57_1DBD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DBE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DC1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DBE = {57u, 0x9DBEu, 0x1DBEu, 0x9DD0u, 2u, nullptr, 0u, kEdges_b57_1DBE, sizeof(kEdges_b57_1DBE) / sizeof(kEdges_b57_1DBE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DC1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DC4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DC1 = {57u, 0x9DC1u, 0x1DC1u, 0x04D4u, 2u, nullptr, 0u, kEdges_b57_1DC1, sizeof(kEdges_b57_1DC1) / sizeof(kEdges_b57_1DC1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DC4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DC5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DC4 = {57u, 0x9DC4u, 0x1DC4u, 0u, 0u, nullptr, 0u, kEdges_b57_1DC4, sizeof(kEdges_b57_1DC4) / sizeof(kEdges_b57_1DC4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DC5[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9DC7u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9DB0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DC5 = {57u, 0x9DC5u, 0x1DC5u, 0x9DB0u, 1u, nullptr, 0u, kEdges_b57_1DC5, sizeof(kEdges_b57_1DC5) / sizeof(kEdges_b57_1DC5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1DC7[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xEF60u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1DC7 = {57u, 0x9DC7u, 0x1DC7u, 0xEF60u, 2u, nullptr, 0u, kEdges_b57_1DC7, sizeof(kEdges_b57_1DC7) / sizeof(kEdges_b57_1DC7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E07[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E07 = {57u, 0x9E07u, 0x1E07u, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_1E07, sizeof(kEdges_b57_1E07) / sizeof(kEdges_b57_1E07[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E0A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E0Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E0A = {57u, 0x9E0Au, 0x1E0Au, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1E0A, sizeof(kEdges_b57_1E0A) / sizeof(kEdges_b57_1E0A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E0C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE60Eu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E0Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E0C = {57u, 0x9E0Cu, 0x1E0Cu, 0xE60Eu, 2u, nullptr, 0u, kEdges_b57_1E0C, sizeof(kEdges_b57_1E0C) / sizeof(kEdges_b57_1E0C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E0F[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE9D3u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E12u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E0F = {57u, 0x9E0Fu, 0x1E0Fu, 0xE9D3u, 2u, nullptr, 0u, kEdges_b57_1E0F, sizeof(kEdges_b57_1E0F) / sizeof(kEdges_b57_1E0F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E12[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9E0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E12 = {57u, 0x9E12u, 0x1E12u, 0x9E0Au, 2u, nullptr, 0u, kEdges_b57_1E12, sizeof(kEdges_b57_1E12) / sizeof(kEdges_b57_1E12[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E1B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E1Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E1B = {57u, 0x9E1Bu, 0x1E1Bu, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_1E1B, sizeof(kEdges_b57_1E1B) / sizeof(kEdges_b57_1E1B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E1E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E20u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E1E = {57u, 0x9E1Eu, 0x1E1Eu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1E1E, sizeof(kEdges_b57_1E1E) / sizeof(kEdges_b57_1E1E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E20[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E22u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E20 = {57u, 0x9E20u, 0x1E20u, 0x006Au, 1u, nullptr, 0u, kEdges_b57_1E20, sizeof(kEdges_b57_1E20) / sizeof(kEdges_b57_1E20[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E22[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E24u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E22 = {57u, 0x9E22u, 0x1E22u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_1E22, sizeof(kEdges_b57_1E22) / sizeof(kEdges_b57_1E22[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E24[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E26u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E24 = {57u, 0x9E24u, 0x1E24u, 0x009Eu, 1u, nullptr, 0u, kEdges_b57_1E24, sizeof(kEdges_b57_1E24) / sizeof(kEdges_b57_1E24[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E26[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E26 = {57u, 0x9E26u, 0x1E26u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_1E26, sizeof(kEdges_b57_1E26) / sizeof(kEdges_b57_1E26[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E28[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x813Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E2Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E28 = {57u, 0x9E28u, 0x1E28u, 0x813Fu, 2u, nullptr, 0u, kEdges_b57_1E28, sizeof(kEdges_b57_1E28) / sizeof(kEdges_b57_1E28[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E2B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E2Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E2B = {57u, 0x9E2Bu, 0x1E2Bu, 0x00BAu, 1u, nullptr, 0u, kEdges_b57_1E2B, sizeof(kEdges_b57_1E2B) / sizeof(kEdges_b57_1E2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E2D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E2Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E2D = {57u, 0x9E2Du, 0x1E2Du, 0u, 0u, nullptr, 0u, kEdges_b57_1E2D, sizeof(kEdges_b57_1E2D) / sizeof(kEdges_b57_1E2D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E2E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E31u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E2E = {57u, 0x9E2Eu, 0x1E2Eu, 0x069Du, 2u, nullptr, 0u, kEdges_b57_1E2E, sizeof(kEdges_b57_1E2E) / sizeof(kEdges_b57_1E2E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E31[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E34u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E31 = {57u, 0x9E31u, 0x1E31u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1E31, sizeof(kEdges_b57_1E31) / sizeof(kEdges_b57_1E31[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E34[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E36u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E34 = {57u, 0x9E34u, 0x1E34u, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1E34, sizeof(kEdges_b57_1E34) / sizeof(kEdges_b57_1E34[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E36[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E37u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E36 = {57u, 0x9E36u, 0x1E36u, 0u, 0u, nullptr, 0u, kEdges_b57_1E36, sizeof(kEdges_b57_1E36) / sizeof(kEdges_b57_1E36[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E37[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E3Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E37 = {57u, 0x9E37u, 0x1E37u, 0x069Cu, 2u, nullptr, 0u, kEdges_b57_1E37, sizeof(kEdges_b57_1E37) / sizeof(kEdges_b57_1E37[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E3A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E3Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E3A = {57u, 0x9E3Au, 0x1E3Au, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1E3A, sizeof(kEdges_b57_1E3A) / sizeof(kEdges_b57_1E3A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E3D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E3Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E3D = {57u, 0x9E3Du, 0x1E3Du, 0x00CCu, 1u, nullptr, 0u, kEdges_b57_1E3D, sizeof(kEdges_b57_1E3D) / sizeof(kEdges_b57_1E3D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E3F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E42u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E3F = {57u, 0x9E3Fu, 0x1E3Fu, 0x062Cu, 2u, nullptr, 0u, kEdges_b57_1E3F, sizeof(kEdges_b57_1E3F) / sizeof(kEdges_b57_1E3F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E42[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9D93u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E45u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E42 = {57u, 0x9E42u, 0x1E42u, 0x9D93u, 2u, nullptr, 0u, kEdges_b57_1E42, sizeof(kEdges_b57_1E42) / sizeof(kEdges_b57_1E42[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E45[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF29u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E48u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E45 = {57u, 0x9E45u, 0x1E45u, 0xEF29u, 2u, nullptr, 0u, kEdges_b57_1E45, sizeof(kEdges_b57_1E45) / sizeof(kEdges_b57_1E45[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E48[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9B9Au, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E4Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E48 = {57u, 0x9E48u, 0x1E48u, 0x9B9Au, 2u, nullptr, 0u, kEdges_b57_1E48, sizeof(kEdges_b57_1E48) / sizeof(kEdges_b57_1E48[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E4B[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9B72u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E4Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E4B = {57u, 0x9E4Bu, 0x1E4Bu, 0x9B72u, 2u, nullptr, 0u, kEdges_b57_1E4B, sizeof(kEdges_b57_1E4B) / sizeof(kEdges_b57_1E4B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E4E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9C9Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E51u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E4E = {57u, 0x9E4Eu, 0x1E4Eu, 0x9C9Bu, 2u, nullptr, 0u, kEdges_b57_1E4E, sizeof(kEdges_b57_1E4E) / sizeof(kEdges_b57_1E4E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E51[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E53u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E51 = {57u, 0x9E51u, 0x1E51u, 0x0018u, 1u, nullptr, 0u, kEdges_b57_1E51, sizeof(kEdges_b57_1E51) / sizeof(kEdges_b57_1E51[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E53[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CCDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E56u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E53 = {57u, 0x9E53u, 0x1E53u, 0x9CCDu, 2u, nullptr, 0u, kEdges_b57_1E53, sizeof(kEdges_b57_1E53) / sizeof(kEdges_b57_1E53[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E56[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CEFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E59u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E56 = {57u, 0x9E56u, 0x1E56u, 0x9CEFu, 2u, nullptr, 0u, kEdges_b57_1E56, sizeof(kEdges_b57_1E56) / sizeof(kEdges_b57_1E56[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E59[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9BFCu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E5Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E59 = {57u, 0x9E59u, 0x1E59u, 0x9BFCu, 2u, nullptr, 0u, kEdges_b57_1E59, sizeof(kEdges_b57_1E59) / sizeof(kEdges_b57_1E59[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E5C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9C9Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E5Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E5C = {57u, 0x9E5Cu, 0x1E5Cu, 0x9C9Bu, 2u, nullptr, 0u, kEdges_b57_1E5C, sizeof(kEdges_b57_1E5C) / sizeof(kEdges_b57_1E5C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E5F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E61u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E5F = {57u, 0x9E5Fu, 0x1E5Fu, 0x0018u, 1u, nullptr, 0u, kEdges_b57_1E5F, sizeof(kEdges_b57_1E5F) / sizeof(kEdges_b57_1E5F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E61[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CCDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E64u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E61 = {57u, 0x9E61u, 0x1E61u, 0x9CCDu, 2u, nullptr, 0u, kEdges_b57_1E61, sizeof(kEdges_b57_1E61) / sizeof(kEdges_b57_1E61[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E64[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CEFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E67u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E64 = {57u, 0x9E64u, 0x1E64u, 0x9CEFu, 2u, nullptr, 0u, kEdges_b57_1E64, sizeof(kEdges_b57_1E64) / sizeof(kEdges_b57_1E64[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E67[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9E4Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E67 = {57u, 0x9E67u, 0x1E67u, 0x9E4Bu, 2u, nullptr, 0u, kEdges_b57_1E67, sizeof(kEdges_b57_1E67) / sizeof(kEdges_b57_1E67[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E89[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEBD1u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E8Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E89 = {57u, 0x9E89u, 0x1E89u, 0xEBD1u, 2u, nullptr, 0u, kEdges_b57_1E89, sizeof(kEdges_b57_1E89) / sizeof(kEdges_b57_1E89[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E8C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E8Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E8C = {57u, 0x9E8Cu, 0x1E8Cu, 0x008Fu, 1u, nullptr, 0u, kEdges_b57_1E8C, sizeof(kEdges_b57_1E8C) / sizeof(kEdges_b57_1E8C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E8E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E90u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E8E = {57u, 0x9E8Eu, 0x1E8Eu, 0x00C6u, 1u, nullptr, 0u, kEdges_b57_1E8E, sizeof(kEdges_b57_1E8E) / sizeof(kEdges_b57_1E8E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E90[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E92u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E90 = {57u, 0x9E90u, 0x1E90u, 0x000Eu, 1u, nullptr, 0u, kEdges_b57_1E90, sizeof(kEdges_b57_1E90) / sizeof(kEdges_b57_1E90[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E92[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E94u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E92 = {57u, 0x9E92u, 0x1E92u, 0x00E1u, 1u, nullptr, 0u, kEdges_b57_1E92, sizeof(kEdges_b57_1E92) / sizeof(kEdges_b57_1E92[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E94[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E96u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E94 = {57u, 0x9E94u, 0x1E94u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_1E94, sizeof(kEdges_b57_1E94) / sizeof(kEdges_b57_1E94[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E96[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x813Fu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9E99u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E96 = {57u, 0x9E96u, 0x1E96u, 0x813Fu, 2u, nullptr, 0u, kEdges_b57_1E96, sizeof(kEdges_b57_1E96) / sizeof(kEdges_b57_1E96[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E99[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E9Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E99 = {57u, 0x9E99u, 0x1E99u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1E99, sizeof(kEdges_b57_1E99) / sizeof(kEdges_b57_1E99[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E9B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9E9Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E9B = {57u, 0x9E9Bu, 0x1E9Bu, 0x03BFu, 2u, nullptr, 0u, kEdges_b57_1E9B, sizeof(kEdges_b57_1E9B) / sizeof(kEdges_b57_1E9B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1E9E[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xEF29u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9EA1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1E9E = {57u, 0x9E9Eu, 0x1E9Eu, 0xEF29u, 2u, nullptr, 0u, kEdges_b57_1E9E, sizeof(kEdges_b57_1E9E) / sizeof(kEdges_b57_1E9E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EA1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EA1 = {57u, 0x9EA1u, 0x1EA1u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1EA1, sizeof(kEdges_b57_1EA1) / sizeof(kEdges_b57_1EA1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EA3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EA5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EA3 = {57u, 0x9EA3u, 0x1EA3u, 0x00FAu, 1u, nullptr, 0u, kEdges_b57_1EA3, sizeof(kEdges_b57_1EA3) / sizeof(kEdges_b57_1EA3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EA5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EA7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EA5 = {57u, 0x9EA5u, 0x1EA5u, 0x00FFu, 1u, nullptr, 0u, kEdges_b57_1EA5, sizeof(kEdges_b57_1EA5) / sizeof(kEdges_b57_1EA5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EA7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EAAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EA7 = {57u, 0x9EA7u, 0x1EA7u, 0x0615u, 2u, nullptr, 0u, kEdges_b57_1EA7, sizeof(kEdges_b57_1EA7) / sizeof(kEdges_b57_1EA7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EAA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EADu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EAA = {57u, 0x9EAAu, 0x1EAAu, 0x0477u, 2u, nullptr, 0u, kEdges_b57_1EAA, sizeof(kEdges_b57_1EAA) / sizeof(kEdges_b57_1EAA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EAD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EAFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EAD = {57u, 0x9EADu, 0x1EADu, 0x00CCu, 1u, nullptr, 0u, kEdges_b57_1EAD, sizeof(kEdges_b57_1EAD) / sizeof(kEdges_b57_1EAD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EAF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EB2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EAF = {57u, 0x9EAFu, 0x1EAFu, 0x062Cu, 2u, nullptr, 0u, kEdges_b57_1EAF, sizeof(kEdges_b57_1EAF) / sizeof(kEdges_b57_1EAF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EB2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EB4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EB2 = {57u, 0x9EB2u, 0x1EB2u, 0x005Au, 1u, nullptr, 0u, kEdges_b57_1EB2, sizeof(kEdges_b57_1EB2) / sizeof(kEdges_b57_1EB2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EB4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CDEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9EB7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EB4 = {57u, 0x9EB4u, 0x1EB4u, 0x9CDEu, 2u, nullptr, 0u, kEdges_b57_1EB4, sizeof(kEdges_b57_1EB4) / sizeof(kEdges_b57_1EB4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EB7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EB9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EB7 = {57u, 0x9EB7u, 0x1EB7u, 0x00F5u, 1u, nullptr, 0u, kEdges_b57_1EB7, sizeof(kEdges_b57_1EB7) / sizeof(kEdges_b57_1EB7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EB9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9EBCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EB9 = {57u, 0x9EB9u, 0x1EB9u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_1EB9, sizeof(kEdges_b57_1EB9) / sizeof(kEdges_b57_1EB9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EBC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EBEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EBC = {57u, 0x9EBCu, 0x1EBCu, 0x00DFu, 1u, nullptr, 0u, kEdges_b57_1EBC, sizeof(kEdges_b57_1EBC) / sizeof(kEdges_b57_1EBC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EBE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EC0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EBE = {57u, 0x9EBEu, 0x1EBEu, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_1EBE, sizeof(kEdges_b57_1EBE) / sizeof(kEdges_b57_1EBE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EC0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EC3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EC0 = {57u, 0x9EC0u, 0x1EC0u, 0x0615u, 2u, nullptr, 0u, kEdges_b57_1EC0, sizeof(kEdges_b57_1EC0) / sizeof(kEdges_b57_1EC0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EC3[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EC5u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9EC9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EC3 = {57u, 0x9EC3u, 0x1EC3u, 0x9EC9u, 1u, nullptr, 0u, kEdges_b57_1EC3, sizeof(kEdges_b57_1EC3) / sizeof(kEdges_b57_1EC3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EC5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EC7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EC5 = {57u, 0x9EC5u, 0x1EC5u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1EC5, sizeof(kEdges_b57_1EC5) / sizeof(kEdges_b57_1EC5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EC7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EC9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EC7 = {57u, 0x9EC7u, 0x1EC7u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_1EC7, sizeof(kEdges_b57_1EC7) / sizeof(kEdges_b57_1EC7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EC9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ECAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EC9 = {57u, 0x9EC9u, 0x1EC9u, 0u, 0u, nullptr, 0u, kEdges_b57_1EC9, sizeof(kEdges_b57_1EC9) / sizeof(kEdges_b57_1EC9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ECA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ECDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ECA = {57u, 0x9ECAu, 0x1ECAu, 0x0615u, 2u, nullptr, 0u, kEdges_b57_1ECA, sizeof(kEdges_b57_1ECA) / sizeof(kEdges_b57_1ECA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ECD[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ECFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ECD = {57u, 0x9ECDu, 0x1ECDu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1ECD, sizeof(kEdges_b57_1ECD) / sizeof(kEdges_b57_1ECD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ECF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ED2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ECF = {57u, 0x9ECFu, 0x1ECFu, 0x03BFu, 2u, nullptr, 0u, kEdges_b57_1ECF, sizeof(kEdges_b57_1ECF) / sizeof(kEdges_b57_1ECF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ED2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ED5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ED2 = {57u, 0x9ED2u, 0x1ED2u, 0x9F2Bu, 2u, nullptr, 0u, kEdges_b57_1ED2, sizeof(kEdges_b57_1ED2) / sizeof(kEdges_b57_1ED2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ED5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9ED8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ED5 = {57u, 0x9ED5u, 0x1ED5u, 0x048Eu, 2u, nullptr, 0u, kEdges_b57_1ED5, sizeof(kEdges_b57_1ED5) / sizeof(kEdges_b57_1ED5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1ED8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EDBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1ED8 = {57u, 0x9ED8u, 0x1ED8u, 0x9F3Bu, 2u, nullptr, 0u, kEdges_b57_1ED8, sizeof(kEdges_b57_1ED8) / sizeof(kEdges_b57_1ED8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EDB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EDEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EDB = {57u, 0x9EDBu, 0x1EDBu, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1EDB, sizeof(kEdges_b57_1EDB) / sizeof(kEdges_b57_1EDB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EDE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EE0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EDE = {57u, 0x9EDEu, 0x1EDEu, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1EDE, sizeof(kEdges_b57_1EDE) / sizeof(kEdges_b57_1EDE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EE0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EE2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EE0 = {57u, 0x9EE0u, 0x1EE0u, 0x00FAu, 1u, nullptr, 0u, kEdges_b57_1EE0, sizeof(kEdges_b57_1EE0) / sizeof(kEdges_b57_1EE0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EE2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EE4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EE2 = {57u, 0x9EE2u, 0x1EE2u, 0x0017u, 1u, nullptr, 0u, kEdges_b57_1EE2, sizeof(kEdges_b57_1EE2) / sizeof(kEdges_b57_1EE2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EE4[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9EE7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EE4 = {57u, 0x9EE4u, 0x1EE4u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_1EE4, sizeof(kEdges_b57_1EE4) / sizeof(kEdges_b57_1EE4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EE7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EE9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EE7 = {57u, 0x9EE7u, 0x1EE7u, 0x0014u, 1u, nullptr, 0u, kEdges_b57_1EE7, sizeof(kEdges_b57_1EE7) / sizeof(kEdges_b57_1EE7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EE9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CDEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9EECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EE9 = {57u, 0x9EE9u, 0x1EE9u, 0x9CDEu, 2u, nullptr, 0u, kEdges_b57_1EE9, sizeof(kEdges_b57_1EE9) / sizeof(kEdges_b57_1EE9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EEC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EEEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EEC = {57u, 0x9EECu, 0x1EECu, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_1EEC, sizeof(kEdges_b57_1EEC) / sizeof(kEdges_b57_1EEC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EEE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9EF1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EEE = {57u, 0x9EEEu, 0x1EEEu, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_1EEE, sizeof(kEdges_b57_1EEE) / sizeof(kEdges_b57_1EEE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EF1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EF3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EF1 = {57u, 0x9EF1u, 0x1EF1u, 0x00CCu, 1u, nullptr, 0u, kEdges_b57_1EF1, sizeof(kEdges_b57_1EF1) / sizeof(kEdges_b57_1EF1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EF3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9EF6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EF3 = {57u, 0x9EF3u, 0x1EF3u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_1EF3, sizeof(kEdges_b57_1EF3) / sizeof(kEdges_b57_1EF3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EF6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EF8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EF6 = {57u, 0x9EF6u, 0x1EF6u, 0x0057u, 1u, nullptr, 0u, kEdges_b57_1EF6, sizeof(kEdges_b57_1EF6) / sizeof(kEdges_b57_1EF6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EF8[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EFBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EF8 = {57u, 0x9EF8u, 0x1EF8u, 0x0477u, 2u, nullptr, 0u, kEdges_b57_1EF8, sizeof(kEdges_b57_1EF8) / sizeof(kEdges_b57_1EF8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EFB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9EFDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EFB = {57u, 0x9EFBu, 0x1EFBu, 0x0037u, 1u, nullptr, 0u, kEdges_b57_1EFB, sizeof(kEdges_b57_1EFB) / sizeof(kEdges_b57_1EFB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1EFD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CDEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9F00u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1EFD = {57u, 0x9EFDu, 0x1EFDu, 0x9CDEu, 2u, nullptr, 0u, kEdges_b57_1EFD, sizeof(kEdges_b57_1EFD) / sizeof(kEdges_b57_1EFD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F00[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9F4Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9F03u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F00 = {57u, 0x9F00u, 0x1F00u, 0x9F4Bu, 2u, nullptr, 0u, kEdges_b57_1F00, sizeof(kEdges_b57_1F00) / sizeof(kEdges_b57_1F00[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F03[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F05u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F03 = {57u, 0x9F03u, 0x1F03u, 0x003Cu, 1u, nullptr, 0u, kEdges_b57_1F03, sizeof(kEdges_b57_1F03) / sizeof(kEdges_b57_1F03[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F05[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CDEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9F08u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F05 = {57u, 0x9F05u, 0x1F05u, 0x9CDEu, 2u, nullptr, 0u, kEdges_b57_1F05, sizeof(kEdges_b57_1F05) / sizeof(kEdges_b57_1F05[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F08[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F0Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F08 = {57u, 0x9F08u, 0x1F08u, 0x0477u, 2u, nullptr, 0u, kEdges_b57_1F08, sizeof(kEdges_b57_1F08) / sizeof(kEdges_b57_1F08[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F0B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F0Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F0B = {57u, 0x9F0Bu, 0x1F0Bu, 0x0018u, 1u, nullptr, 0u, kEdges_b57_1F0B, sizeof(kEdges_b57_1F0B) / sizeof(kEdges_b57_1F0B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F0D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9F10u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F0D = {57u, 0x9F0Du, 0x1F0Du, 0xC5C7u, 2u, nullptr, 0u, kEdges_b57_1F0D, sizeof(kEdges_b57_1F0D) / sizeof(kEdges_b57_1F0D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F10[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F12u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F10 = {57u, 0x9F10u, 0x1F10u, 0x000Fu, 1u, nullptr, 0u, kEdges_b57_1F10, sizeof(kEdges_b57_1F10) / sizeof(kEdges_b57_1F10[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F12[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CDEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9F15u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F12 = {57u, 0x9F12u, 0x1F12u, 0x9CDEu, 2u, nullptr, 0u, kEdges_b57_1F12, sizeof(kEdges_b57_1F12) / sizeof(kEdges_b57_1F12[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F15[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F17u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F15 = {57u, 0x9F15u, 0x1F15u, 0x0001u, 1u, nullptr, 0u, kEdges_b57_1F15, sizeof(kEdges_b57_1F15) / sizeof(kEdges_b57_1F15[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F17[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F1Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F17 = {57u, 0x9F17u, 0x1F17u, 0x03BFu, 2u, nullptr, 0u, kEdges_b57_1F17, sizeof(kEdges_b57_1F17) / sizeof(kEdges_b57_1F17[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F1A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F1Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F1A = {57u, 0x9F1Au, 0x1F1Au, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1F1A, sizeof(kEdges_b57_1F1A) / sizeof(kEdges_b57_1F1A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F1C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F1Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F1C = {57u, 0x9F1Cu, 0x1F1Cu, 0x00FAu, 1u, nullptr, 0u, kEdges_b57_1F1C, sizeof(kEdges_b57_1F1C) / sizeof(kEdges_b57_1F1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F1E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F20u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F1E = {57u, 0x9F1Eu, 0x1F1Eu, 0x0097u, 1u, nullptr, 0u, kEdges_b57_1F1E, sizeof(kEdges_b57_1F1E) / sizeof(kEdges_b57_1F1E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F20[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F23u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F20 = {57u, 0x9F20u, 0x1F20u, 0x04D3u, 2u, nullptr, 0u, kEdges_b57_1F20, sizeof(kEdges_b57_1F20) / sizeof(kEdges_b57_1F20[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F23[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F25u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F23 = {57u, 0x9F23u, 0x1F23u, 0x002Du, 1u, nullptr, 0u, kEdges_b57_1F23, sizeof(kEdges_b57_1F23) / sizeof(kEdges_b57_1F23[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F25[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x9CDEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9F28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F25 = {57u, 0x9F25u, 0x1F25u, 0x9CDEu, 2u, nullptr, 0u, kEdges_b57_1F25, sizeof(kEdges_b57_1F25) / sizeof(kEdges_b57_1F25[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F28[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 57, 0x9EBCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F28 = {57u, 0x9F28u, 0x1F28u, 0x9EBCu, 2u, nullptr, 0u, kEdges_b57_1F28, sizeof(kEdges_b57_1F28) / sizeof(kEdges_b57_1F28[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F4B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F4Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F4B = {57u, 0x9F4Bu, 0x1F4Bu, 0x03ACu, 2u, nullptr, 0u, kEdges_b57_1F4B, sizeof(kEdges_b57_1F4B) / sizeof(kEdges_b57_1F4B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F4E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F51u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F4E = {57u, 0x9F4Eu, 0x1F4Eu, 0x03ADu, 2u, nullptr, 0u, kEdges_b57_1F4E, sizeof(kEdges_b57_1F4E) / sizeof(kEdges_b57_1F4E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F51[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F54u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F51 = {57u, 0x9F51u, 0x1F51u, 0x03AEu, 2u, nullptr, 0u, kEdges_b57_1F51, sizeof(kEdges_b57_1F51) / sizeof(kEdges_b57_1F51[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F54[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F57u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F54 = {57u, 0x9F54u, 0x1F54u, 0x03AFu, 2u, nullptr, 0u, kEdges_b57_1F54, sizeof(kEdges_b57_1F54) / sizeof(kEdges_b57_1F54[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F57[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F59u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9F92u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F57 = {57u, 0x9F57u, 0x1F57u, 0x9F92u, 1u, nullptr, 0u, kEdges_b57_1F57, sizeof(kEdges_b57_1F57) / sizeof(kEdges_b57_1F57[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F59[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F5Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F59 = {57u, 0x9F59u, 0x1F59u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1F59, sizeof(kEdges_b57_1F59) / sizeof(kEdges_b57_1F59[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F5B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F5Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F5B = {57u, 0x9F5Bu, 0x1F5Bu, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1F5B, sizeof(kEdges_b57_1F5B) / sizeof(kEdges_b57_1F5B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F5D[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF8AEu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9F60u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F5D = {57u, 0x9F5Du, 0x1F5Du, 0xF8AEu, 2u, nullptr, 0u, kEdges_b57_1F5D, sizeof(kEdges_b57_1F5D) / sizeof(kEdges_b57_1F5D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F60[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F62u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F60 = {57u, 0x9F60u, 0x1F60u, 0x0011u, 1u, nullptr, 0u, kEdges_b57_1F60, sizeof(kEdges_b57_1F60) / sizeof(kEdges_b57_1F60[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F62[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F65u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F62 = {57u, 0x9F62u, 0x1F62u, 0xE1B6u, 2u, nullptr, 0u, kEdges_b57_1F62, sizeof(kEdges_b57_1F62) / sizeof(kEdges_b57_1F62[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F65[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F66u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F65 = {57u, 0x9F65u, 0x1F65u, 0u, 0u, nullptr, 0u, kEdges_b57_1F65, sizeof(kEdges_b57_1F65) / sizeof(kEdges_b57_1F65[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F66[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F68u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F66 = {57u, 0x9F66u, 0x1F66u, 0x0004u, 1u, nullptr, 0u, kEdges_b57_1F66, sizeof(kEdges_b57_1F66) / sizeof(kEdges_b57_1F66[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F68[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F6Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F68 = {57u, 0x9F68u, 0x1F68u, 0x0007u, 1u, nullptr, 0u, kEdges_b57_1F68, sizeof(kEdges_b57_1F68) / sizeof(kEdges_b57_1F68[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F6A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F6Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F6A = {57u, 0x9F6Au, 0x1F6Au, 0x00F3u, 1u, nullptr, 0u, kEdges_b57_1F6A, sizeof(kEdges_b57_1F6A) / sizeof(kEdges_b57_1F6A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F6C[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9F70u, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 57, 0x9F6Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F6C = {57u, 0x9F6Cu, 0x1F6Cu, 0x9F70u, 1u, nullptr, 0u, kEdges_b57_1F6C, sizeof(kEdges_b57_1F6C) / sizeof(kEdges_b57_1F6C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F6E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F70u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F6E = {57u, 0x9F6Eu, 0x1F6Eu, 0x00F0u, 1u, nullptr, 0u, kEdges_b57_1F6E, sizeof(kEdges_b57_1F6E) / sizeof(kEdges_b57_1F6E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F70[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F71u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F70 = {57u, 0x9F70u, 0x1F70u, 0u, 0u, nullptr, 0u, kEdges_b57_1F70, sizeof(kEdges_b57_1F70) / sizeof(kEdges_b57_1F70[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F71[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F73u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F71 = {57u, 0x9F71u, 0x1F71u, 0x0003u, 1u, nullptr, 0u, kEdges_b57_1F71, sizeof(kEdges_b57_1F71) / sizeof(kEdges_b57_1F71[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F73[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F74u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F73 = {57u, 0x9F73u, 0x1F73u, 0u, 0u, nullptr, 0u, kEdges_b57_1F73, sizeof(kEdges_b57_1F73) / sizeof(kEdges_b57_1F73[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F74[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F76u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F74 = {57u, 0x9F74u, 0x1F74u, 0x000Cu, 1u, nullptr, 0u, kEdges_b57_1F74, sizeof(kEdges_b57_1F74) / sizeof(kEdges_b57_1F74[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F76[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F77u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F76 = {57u, 0x9F76u, 0x1F76u, 0u, 0u, nullptr, 0u, kEdges_b57_1F76, sizeof(kEdges_b57_1F76) / sizeof(kEdges_b57_1F76[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F77[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 57, 0x9F7Bu, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F77 = {57u, 0x9F77u, 0x1F77u, 0xCB28u, 2u, nullptr, 0u, kEdges_b57_1F77, sizeof(kEdges_b57_1F77) / sizeof(kEdges_b57_1F77[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F7B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F7Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F7B = {57u, 0x9F7Bu, 0x1F7Bu, 0x0036u, 1u, nullptr, 0u, kEdges_b57_1F7B, sizeof(kEdges_b57_1F7B) / sizeof(kEdges_b57_1F7B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F7D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F7Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F7D = {57u, 0x9F7Du, 0x1F7Du, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1F7D, sizeof(kEdges_b57_1F7D) / sizeof(kEdges_b57_1F7D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F7F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F80u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F7F = {57u, 0x9F7Fu, 0x1F7Fu, 0u, 0u, nullptr, 0u, kEdges_b57_1F7F, sizeof(kEdges_b57_1F7F) / sizeof(kEdges_b57_1F7F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F80[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F82u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F80 = {57u, 0x9F80u, 0x1F80u, 0x0000u, 1u, nullptr, 0u, kEdges_b57_1F80, sizeof(kEdges_b57_1F80) / sizeof(kEdges_b57_1F80[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F82[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F84u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F82 = {57u, 0x9F82u, 0x1F82u, 0x0008u, 1u, nullptr, 0u, kEdges_b57_1F82, sizeof(kEdges_b57_1F82) / sizeof(kEdges_b57_1F82[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F84[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE8FDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9F87u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F84 = {57u, 0x9F84u, 0x1F84u, 0xE8FDu, 2u, nullptr, 0u, kEdges_b57_1F84, sizeof(kEdges_b57_1F84) / sizeof(kEdges_b57_1F84[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F87[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F8Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F87 = {57u, 0x9F87u, 0x1F87u, 0xE1A6u, 2u, nullptr, 0u, kEdges_b57_1F87, sizeof(kEdges_b57_1F87) / sizeof(kEdges_b57_1F87[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F8A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F8Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F8A = {57u, 0x9F8Au, 0x1F8Au, 0x03CEu, 2u, nullptr, 0u, kEdges_b57_1F8A, sizeof(kEdges_b57_1F8A) / sizeof(kEdges_b57_1F8A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F8D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F8Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F8D = {57u, 0x9F8Du, 0x1F8Du, 0u, 0u, nullptr, 0u, kEdges_b57_1F8D, sizeof(kEdges_b57_1F8D) / sizeof(kEdges_b57_1F8D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F8E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F90u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F8E = {57u, 0x9F8Eu, 0x1F8Eu, 0x0007u, 1u, nullptr, 0u, kEdges_b57_1F8E, sizeof(kEdges_b57_1F8E) / sizeof(kEdges_b57_1F8E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F90[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F92u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 57, 0x9F6Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F90 = {57u, 0x9F90u, 0x1F90u, 0x9F6Eu, 1u, nullptr, 0u, kEdges_b57_1F90, sizeof(kEdges_b57_1F90) / sizeof(kEdges_b57_1F90[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F92[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F92 = {57u, 0x9F92u, 0x1F92u, 0u, 0u, nullptr, 0u, kEdges_b57_1F92, sizeof(kEdges_b57_1F92) / sizeof(kEdges_b57_1F92[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F93[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F95u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F93 = {57u, 0x9F93u, 0x1F93u, 0x00F4u, 1u, nullptr, 0u, kEdges_b57_1F93, sizeof(kEdges_b57_1F93) / sizeof(kEdges_b57_1F93[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F95[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9F98u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F95 = {57u, 0x9F95u, 0x1F95u, 0xC9EFu, 2u, nullptr, 0u, kEdges_b57_1F95, sizeof(kEdges_b57_1F95) / sizeof(kEdges_b57_1F95[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F98[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 57, 0x9F9Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F98 = {57u, 0x9F98u, 0x1F98u, 0x00CCu, 1u, nullptr, 0u, kEdges_b57_1F98, sizeof(kEdges_b57_1F98) / sizeof(kEdges_b57_1F98[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F9A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 57, 0x810Cu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 57, 0x9F9Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F9A = {57u, 0x9F9Au, 0x1F9Au, 0x810Cu, 2u, nullptr, 0u, kEdges_b57_1F9A, sizeof(kEdges_b57_1F9A) / sizeof(kEdges_b57_1F9A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b57_1F9D[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b57_1F9D = {57u, 0x9F9Du, 0x1F9Du, 0xC5E6u, 2u, nullptr, 0u, kEdges_b57_1F9D, sizeof(kEdges_b57_1F9D) / sizeof(kEdges_b57_1F9D[0])};

} // namespace

MM6ExecResult mm6_dispatch_bank_57(MM6Runtime* rt, std::uint16_t cpu_pc) {
  switch (cpu_pc) {
    case 0x8000u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0000);
    case 0x8003u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0003);
    case 0x8006u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0006);
    case 0x8008u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0008);
    case 0x800Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_000B);
    case 0x800Eu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_000E);
    case 0x8011u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_0011);
    case 0x8013u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0013);
    case 0x8016u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0016);
    case 0x8018u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0018);
    case 0x801Bu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_001B);
    case 0x8024u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0024);
    case 0x8027u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_0027);
    case 0x8029u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0029);
    case 0x802Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_002B);
    case 0x802Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_002D);
    case 0x802Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_002F);
    case 0x8031u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0031);
    case 0x8034u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0034);
    case 0x8036u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0036);
    case 0x8039u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_0039);
    case 0x803Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_003B);
    case 0x803Du: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_003D);
    case 0x8040u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0040);
    case 0x8043u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_0043);
    case 0x8046u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0046);
    case 0x8048u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0048);
    case 0x804Au: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_004A);
    case 0x804Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_004C);
    case 0x804Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_004F);
    case 0x8051u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_0051);
    case 0x8053u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_0053);
    case 0x8054u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_0054);
    case 0x8057u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0057);
    case 0x8059u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_0059);
    case 0x805Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_005C);
    case 0x805Eu: return mm6_exec_op_6C_JMP_Ind(rt, kCtx_b57_005E);
    case 0x8065u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0065);
    case 0x8067u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0067);
    case 0x8069u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0069);
    case 0x806Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_006C);
    case 0x806Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_006E);
    case 0x8071u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0071);
    case 0x8074u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_0074);
    case 0x8077u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0077);
    case 0x8079u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0079);
    case 0x807Bu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_007B);
    case 0x807Eu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_007E);
    case 0x8080u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0080);
    case 0x8083u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_0083);
    case 0x8085u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0085);
    case 0x8088u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0088);
    case 0x808Au: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_008A);
    case 0x808Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_008C);
    case 0x8090u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0090);
    case 0x8092u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_0092);
    case 0x8094u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0094);
    case 0x8097u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b57_0097);
    case 0x809Au: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_009A);
    case 0x809Bu: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b57_009B);
    case 0x809Eu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_009E);
    case 0x80A0u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_00A0);
    case 0x80A2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_00A2);
    case 0x80A6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_00A6);
    case 0x80A8u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_00A8);
    case 0x80AAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_00AA);
    case 0x80ADu: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b57_00AD);
    case 0x80B0u: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b57_00B0);
    case 0x80B1u: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b57_00B1);
    case 0x80B4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_00B4);
    case 0x80B7u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_00B7);
    case 0x80BAu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_00BA);
    case 0x80BCu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_00BC);
    case 0x80BEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_00BE);
    case 0x80C1u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_00C1);
    case 0x80C4u: return mm6_exec_op_0D_ORA_Abs(rt, kCtx_b57_00C4);
    case 0x80C7u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_00C7);
    case 0x80C9u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_00C9);
    case 0x80CCu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_00CC);
    case 0x80CEu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_00CE);
    case 0x80D0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_00D0);
    case 0x80D3u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_00D3);
    case 0x80D5u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_00D5);
    case 0x80D7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_00D7);
    case 0x80DBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_00DB);
    case 0x80DDu: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_00DD);
    case 0x80DFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_00DF);
    case 0x80E2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_00E2);
    case 0x80E5u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_00E5);
    case 0x80E8u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_00E8);
    case 0x80EAu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_00EA);
    case 0x810Cu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_010C);
    case 0x810Eu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_010E);
    case 0x8110u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0110);
    case 0x8112u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_0112);
    case 0x8114u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0114);
    case 0x8116u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0116);
    case 0x8119u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0119);
    case 0x811Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_011C);
    case 0x811Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_011F);
    case 0x8121u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0121);
    case 0x8123u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_0123);
    case 0x8126u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0126);
    case 0x8128u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_0128);
    case 0x812Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_012B);
    case 0x812Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_012D);
    case 0x8130u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0130);
    case 0x8133u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0133);
    case 0x8136u: return mm6_exec_op_6C_JMP_Ind(rt, kCtx_b57_0136);
    case 0x813Fu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_013F);
    case 0x8141u: return mm6_exec_op_98_TYA_Imp(rt, kCtx_b57_0141);
    case 0x8142u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b57_0142);
    case 0x8143u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_0143);
    case 0x8145u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_0145);
    case 0x8147u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_0147);
    case 0x8149u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_0149);
    case 0x814Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_014A);
    case 0x814Eu: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b57_014E);
    case 0x814Fu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_014F);
    case 0x8150u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_0150);
    case 0x8151u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_0151);
    case 0x8153u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0153);
    case 0x8156u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_0156);
    case 0x8157u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_0157);
    case 0x8159u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0159);
    case 0x815Cu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_015C);
    case 0x815Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_015E);
    case 0x8161u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_0161);
    case 0x8162u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_0162);
    case 0x8164u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0164);
    case 0x8167u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_0167);
    case 0x8168u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_0168);
    case 0x816Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_016A);
    case 0x816Du: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_016D);
    case 0x816Eu: return mm6_exec_op_98_TYA_Imp(rt, kCtx_b57_016E);
    case 0x816Fu: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b57_016F);
    case 0x8170u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_0170);
    case 0x8172u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_0172);
    case 0x8173u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0173);
    case 0x8176u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b57_0176);
    case 0x8177u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_0177);
    case 0x8178u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b57_0178);
    case 0x8179u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_0179);
    case 0x817Au: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_017A);
    case 0x817Cu: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b57_017C);
    case 0x817Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_017D);
    case 0x8180u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_0180);
    case 0x8182u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_0182);
    case 0x8189u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0189);
    case 0x818Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_018C);
    case 0x818Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_018E);
    case 0x8191u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0191);
    case 0x8193u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0193);
    case 0x8196u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0196);
    case 0x8199u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0199);
    case 0x81A2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_01A2);
    case 0x81A5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_01A5);
    case 0x81A7u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_01A7);
    case 0x81AAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_01AA);
    case 0x81ACu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_01AC);
    case 0x81AFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_01AF);
    case 0x81B1u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_01B1);
    case 0x81B4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_01B4);
    case 0x81B6u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_01B6);
    case 0x81B9u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_01B9);
    case 0x81BAu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_01BA);
    case 0x81BDu: return mm6_exec_op_FD_SBC_AbsX(rt, kCtx_b57_01BD);
    case 0x81C0u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b57_01C0);
    case 0x81C2u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b57_01C2);
    case 0x81C4u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_01C4);
    case 0x81C6u: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b57_01C6);
    case 0x81C8u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_01C8);
    case 0x81CAu: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b57_01CA);
    case 0x81CBu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_01CB);
    case 0x81CEu: return mm6_exec_op_1E_ASL_AbsXW(rt, kCtx_b57_01CE);
    case 0x81D1u: return mm6_exec_op_3E_ROL_AbsXW(rt, kCtx_b57_01D1);
    case 0x81D4u: return mm6_exec_op_1E_ASL_AbsXW(rt, kCtx_b57_01D4);
    case 0x81D7u: return mm6_exec_op_3E_ROL_AbsXW(rt, kCtx_b57_01D7);
    case 0x81DAu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_01DA);
    case 0x81DDu: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b57_01DD);
    case 0x81DFu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_01DF);
    case 0x81E2u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_01E2);
    case 0x81E5u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b57_01E5);
    case 0x81E7u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_01E7);
    case 0x81EAu: return mm6_exec_op_FE_INC_AbsXW(rt, kCtx_b57_01EA);
    case 0x81EDu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_01ED);
    case 0x81EFu: return mm6_exec_op_FE_INC_AbsXW(rt, kCtx_b57_01EF);
    case 0x81F2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_01F2);
    case 0x81F5u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_01F5);
    case 0x81F8u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_01F8);
    case 0x81FAu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_01FA);
    case 0x81FDu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_01FD);
    case 0x81FFu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_01FF);
    case 0x8201u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0201);
    case 0x8204u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0204);
    case 0x8207u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0207);
    case 0x8209u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0209);
    case 0x820Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_020B);
    case 0x820Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_020D);
    case 0x820Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_020F);
    case 0x8212u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_0212);
    case 0x8214u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_0214);
    case 0x8216u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0216);
    case 0x8218u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0218);
    case 0x821Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_021C);
    case 0x821Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_021E);
    case 0x8221u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0221);
    case 0x8224u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_0224);
    case 0x8227u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_0227);
    case 0x8229u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_0229);
    case 0x822Bu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_022B);
    case 0x822Du: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_022D);
    case 0x822Fu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_022F);
    case 0x8231u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0231);
    case 0x8235u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0235);
    case 0x8237u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_0237);
    case 0x8239u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0239);
    case 0x823Cu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_023C);
    case 0x8244u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0244);
    case 0x824Du: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_024D);
    case 0x8250u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_0250);
    case 0x8251u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_0251);
    case 0x8254u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0254);
    case 0x8256u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_0256);
    case 0x8259u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0259);
    case 0x825Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_025B);
    case 0x825Du: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_025D);
    case 0x8260u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0260);
    case 0x8262u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_0262);
    case 0x8264u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0264);
    case 0x8266u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_0266);
    case 0x8268u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0268);
    case 0x826Au: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_026A);
    case 0x826Bu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_026B);
    case 0x826Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_026D);
    case 0x826Fu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_026F);
    case 0x8270u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_0270);
    case 0x8272u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0272);
    case 0x8274u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_0274);
    case 0x8275u: return mm6_exec_op_98_TYA_Imp(rt, kCtx_b57_0275);
    case 0x8276u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0276);
    case 0x8279u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0279);
    case 0x827Cu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_027C);
    case 0x827Eu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_027E);
    case 0x8281u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_0281);
    case 0x8282u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_0282);
    case 0x8283u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_0283);
    case 0x8284u: return mm6_exec_op_84_STY_Zero(rt, kCtx_b57_0284);
    case 0x8286u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_0286);
    case 0x8287u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_0287);
    case 0x8289u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_0289);
    case 0x828Bu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_028B);
    case 0x828Du: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b57_028D);
    case 0x828Fu: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b57_028F);
    case 0x8290u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_0290);
    case 0x8293u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0293);
    case 0x8295u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_0295);
    case 0x8298u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0298);
    case 0x829Au: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_029A);
    case 0x829Bu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_029B);
    case 0x829Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_029D);
    case 0x829Fu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_029F);
    case 0x82A0u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_02A0);
    case 0x82A2u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_02A2);
    case 0x82A4u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_02A4);
    case 0x82A7u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_02A7);
    case 0x82A8u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_02A8);
    case 0x82AAu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_02AA);
    case 0x82ADu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_02AD);
    case 0x82AFu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_02AF);
    case 0x82B1u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_02B1);
    case 0x82B3u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_02B3);
    case 0x82B6u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_02B6);
    case 0x82B7u: return mm6_exec_op_84_STY_Zero(rt, kCtx_b57_02B7);
    case 0x82B9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_02B9);
    case 0x82BCu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_02BC);
    case 0x82BEu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_02BE);
    case 0x82C0u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_02C0);
    case 0x82C3u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_02C3);
    case 0x82C4u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_02C4);
    case 0x82C6u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_02C6);
    case 0x82C8u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_02C8);
    case 0x82CAu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_02CA);
    case 0x82CBu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b57_02CB);
    case 0x82CDu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_02CD);
    case 0x82CFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_02CF);
    case 0x82D2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_02D2);
    case 0x82D5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_02D5);
    case 0x82D8u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_02D8);
    case 0x82DAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_02DA);
    case 0x82DCu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_02DC);
    case 0x82DFu: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b57_02DF);
    case 0x82E2u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_02E2);
    case 0x82E4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_02E4);
    case 0x82E6u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_02E6);
    case 0x82E8u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_02E8);
    case 0x8416u: return mm6_exec_op_C5_CMP_Zero(rt, kCtx_b57_0416);
    case 0x8418u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0418);
    case 0x841Au: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_041A);
    case 0x841Du: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_041D);
    case 0x8420u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0420);
    case 0x8423u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0423);
    case 0x8426u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0426);
    case 0x8429u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_0429);
    case 0x849Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_049B);
    case 0x849Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_049D);
    case 0x84A0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_04A0);
    case 0x84A3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_04A3);
    case 0x84A5u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_04A5);
    case 0x84A7u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_04A7);
    case 0x84A9u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_04A9);
    case 0x84ACu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_04AC);
    case 0x84AFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_04AF);
    case 0x84B2u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_04B2);
    case 0x84B4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_04B4);
    case 0x84B6u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_04B6);
    case 0x84B8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_04B8);
    case 0x84BAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_04BA);
    case 0x84BDu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_04BD);
    case 0x84FCu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_04FC);
    case 0x84FEu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_04FE);
    case 0x8501u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0501);
    case 0x8504u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0504);
    case 0x852Eu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_052E);
    case 0x8530u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0530);
    case 0x8551u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0551);
    case 0x8553u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0553);
    case 0x8555u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0555);
    case 0x8557u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0557);
    case 0x855Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_055A);
    case 0x855Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_055D);
    case 0x855Fu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_055F);
    case 0x8562u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0562);
    case 0x8564u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0564);
    case 0x8567u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0567);
    case 0x8569u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0569);
    case 0x856Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_056C);
    case 0x856Eu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_056E);
    case 0x8570u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0570);
    case 0x8572u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0572);
    case 0x8574u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0574);
    case 0x8578u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0578);
    case 0x857Bu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_057B);
    case 0x857Eu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_057E);
    case 0x8580u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0580);
    case 0x8582u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0582);
    case 0x8585u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0585);
    case 0x8588u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0588);
    case 0x858Au: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_058A);
    case 0x858Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_058D);
    case 0x858Fu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_058F);
    case 0x85A1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_05A1);
    case 0x85A3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_05A3);
    case 0x85A6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_05A6);
    case 0x85A8u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_05A8);
    case 0x85ABu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_05AB);
    case 0x85AEu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_05AE);
    case 0x85B4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_05B4);
    case 0x85B6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_05B6);
    case 0x85B9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_05B9);
    case 0x85BBu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_05BB);
    case 0x85BEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_05BE);
    case 0x85C1u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_05C1);
    case 0x85D8u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_05D8);
    case 0x85DAu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_05DA);
    case 0x85DCu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_05DC);
    case 0x85DEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_05DE);
    case 0x85E1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_05E1);
    case 0x85E3u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_05E3);
    case 0x85E6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_05E6);
    case 0x85E8u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_05E8);
    case 0x85EBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_05EB);
    case 0x85EDu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_05ED);
    case 0x85EFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_05EF);
    case 0x85F1u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_05F1);
    case 0x85F4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_05F4);
    case 0x85F6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_05F6);
    case 0x85F9u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_05F9);
    case 0x8603u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0603);
    case 0x8605u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0605);
    case 0x8611u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0611);
    case 0x8613u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0613);
    case 0x8616u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0616);
    case 0x8618u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0618);
    case 0x861Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_061B);
    case 0x861Du: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_061D);
    case 0x8620u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0620);
    case 0x8623u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_0623);
    case 0x8626u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0626);
    case 0x8628u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0628);
    case 0x862Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_062A);
    case 0x862Du: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_062D);
    case 0x862Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_062F);
    case 0x8632u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0632);
    case 0x8635u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0635);
    case 0x8638u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0638);
    case 0x863Bu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_063B);
    case 0x863Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_063E);
    case 0x8641u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0641);
    case 0x8643u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0643);
    case 0x8646u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0646);
    case 0x8648u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0648);
    case 0x864Bu: return mm6_exec_op_8E_STX_Abs(rt, kCtx_b57_064B);
    case 0x864Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_064E);
    case 0x8651u: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b57_0651);
    case 0x8654u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_0654);
    case 0x8657u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0657);
    case 0x8659u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0659);
    case 0x865Cu: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b57_065C);
    case 0x865Fu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_065F);
    case 0x8662u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0662);
    case 0x8666u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0666);
    case 0x8669u: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b57_0669);
    case 0x866Cu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_066C);
    case 0x866Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_066F);
    case 0x8673u: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b57_0673);
    case 0x8676u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0676);
    case 0x8679u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0679);
    case 0x867Cu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_067C);
    case 0x86C0u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_06C0);
    case 0x86C2u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_06C2);
    case 0x86C4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_06C4);
    case 0x86C6u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_06C6);
    case 0x86C9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_06C9);
    case 0x86CBu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_06CB);
    case 0x86CEu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_06CE);
    case 0x86D0u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_06D0);
    case 0x86D2u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_06D2);
    case 0x8733u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0733);
    case 0x8735u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0735);
    case 0x8738u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0738);
    case 0x873Bu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_073B);
    case 0x8755u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0755);
    case 0x8757u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0757);
    case 0x8759u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0759);
    case 0x875Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_075D);
    case 0x875Fu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_075F);
    case 0x8762u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0762);
    case 0x8765u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0765);
    case 0x8768u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0768);
    case 0x876Au: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_076A);
    case 0x876Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_076C);
    case 0x876Fu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_076F);
    case 0x8771u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0771);
    case 0x8774u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0774);
    case 0x8777u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0777);
    case 0x8779u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0779);
    case 0x877Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_077C);
    case 0x877Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_077E);
    case 0x8781u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0781);
    case 0x8784u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0784);
    case 0x8786u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0786);
    case 0x8789u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0789);
    case 0x878Bu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_078B);
    case 0x878Eu: return mm6_exec_op_8E_STX_Abs(rt, kCtx_b57_078E);
    case 0x8791u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0791);
    case 0x87A6u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_07A6);
    case 0x87A8u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_07A8);
    case 0x87AAu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_07AA);
    case 0x87ACu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_07AC);
    case 0x87AFu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_07AF);
    case 0x87B0u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_07B0);
    case 0x87B2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_07B2);
    case 0x87B5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_07B5);
    case 0x87B7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_07B7);
    case 0x87BAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_07BA);
    case 0x87BCu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_07BC);
    case 0x87BFu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_07BF);
    case 0x87C1u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_07C1);
    case 0x87C3u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_07C3);
    case 0x87C5u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_07C5);
    case 0x87C7u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_07C7);
    case 0x87C9u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_07C9);
    case 0x87CBu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_07CB);
    case 0x87CDu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_07CD);
    case 0x87CFu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_07CF);
    case 0x87D1u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_07D1);
    case 0x87D4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_07D4);
    case 0x87D7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_07D7);
    case 0x87D9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_07D9);
    case 0x87DCu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_07DC);
    case 0x8810u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0810);
    case 0x8812u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0812);
    case 0x8815u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_0815);
    case 0x8820u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0820);
    case 0x8822u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0822);
    case 0x8833u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0833);
    case 0x8835u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0835);
    case 0x8838u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_0838);
    case 0x883Au: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_083A);
    case 0x883Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_083C);
    case 0x883Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_083E);
    case 0x8841u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0841);
    case 0x8844u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0844);
    case 0x8846u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0846);
    case 0x8849u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0849);
    case 0x884Bu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_084B);
    case 0x884Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_084E);
    case 0x8850u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0850);
    case 0x8853u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0853);
    case 0x8855u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0855);
    case 0x8858u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0858);
    case 0x885Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_085A);
    case 0x885Cu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_085C);
    case 0x885Eu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_085E);
    case 0x8879u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0879);
    case 0x887Bu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_087B);
    case 0x88C2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_08C2);
    case 0x88C4u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_08C4);
    case 0x88C7u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_08C7);
    case 0x88F1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_08F1);
    case 0x88F3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_08F3);
    case 0x88F6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_08F6);
    case 0x88F8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_08F8);
    case 0x88FBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_08FB);
    case 0x88FDu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_08FD);
    case 0x8900u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0900);
    case 0x8937u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0937);
    case 0x8939u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0939);
    case 0x8942u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0942);
    case 0x8944u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0944);
    case 0x8947u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0947);
    case 0x8949u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0949);
    case 0x894Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_094C);
    case 0x894Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_094F);
    case 0x8951u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0951);
    case 0x8954u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0954);
    case 0x8974u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0974);
    case 0x8976u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0976);
    case 0x897Fu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_097F);
    case 0x8981u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0981);
    case 0x8999u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0999);
    case 0x899Bu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_099B);
    case 0x89F5u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_09F5);
    case 0x89F7u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_09F7);
    case 0x89FAu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_09FA);
    case 0x89FBu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_09FB);
    case 0x8A47u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0A47);
    case 0x8A49u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0A49);
    case 0x8A55u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0A55);
    case 0x8A57u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0A57);
    case 0x8A60u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0A60);
    case 0x8A62u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0A62);
    case 0x8A65u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0A65);
    case 0x8A67u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0A67);
    case 0x8A70u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_0A70);
    case 0x8A72u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_0A72);
    case 0x8A74u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_0A74);
    case 0x8A75u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0A75);
    case 0x8A77u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0A77);
    case 0x8A7Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0A7A);
    case 0x8A7Cu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0A7C);
    case 0x8A7Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0A7F);
    case 0x8A81u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0A81);
    case 0x8A84u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0A84);
    case 0x8A86u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0A86);
    case 0x8A88u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0A88);
    case 0x8A8Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0A8A);
    case 0x8A8Du: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0A8D);
    case 0x8A8Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0A8F);
    case 0x8A92u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0A92);
    case 0x8A94u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0A94);
    case 0x8AA9u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0AA9);
    case 0x8AABu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0AAB);
    case 0x8AAEu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0AAE);
    case 0x8AB0u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0AB0);
    case 0x8AC1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0AC1);
    case 0x8AC3u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0AC3);
    case 0x8AC6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0AC6);
    case 0x8AC8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0AC8);
    case 0x8ACBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0ACB);
    case 0x8ACDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0ACD);
    case 0x8AD0u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0AD0);
    case 0x8AD2u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0AD2);
    case 0x8AD5u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0AD5);
    case 0x8ADEu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0ADE);
    case 0x8AE0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0AE0);
    case 0x8AE3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0AE3);
    case 0x8AE5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0AE5);
    case 0x8AE8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0AE8);
    case 0x8AEAu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0AEA);
    case 0x8AEDu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0AED);
    case 0x8AF3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0AF3);
    case 0x8AF5u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0AF5);
    case 0x8AFAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0AFA);
    case 0x8AFCu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0AFC);
    case 0x8AFFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0AFF);
    case 0x8B02u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0B02);
    case 0x8B0Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0B0B);
    case 0x8B0Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0B0D);
    case 0x8B10u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0B10);
    case 0x8B12u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0B12);
    case 0x8B15u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0B15);
    case 0x8B17u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0B17);
    case 0x8B24u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0B24);
    case 0x8B27u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0B27);
    case 0x8B29u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0B29);
    case 0x8B2Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0B2B);
    case 0x8B2Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0B2F);
    case 0x8B31u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0B31);
    case 0x8B34u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0B34);
    case 0x8B36u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0B36);
    case 0x8B39u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0B39);
    case 0x8B3Cu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0B3C);
    case 0x8B3Fu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0B3F);
    case 0x8B41u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0B41);
    case 0x8B43u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0B43);
    case 0x8B46u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0B46);
    case 0x8B49u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0B49);
    case 0x8B4Cu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0B4C);
    case 0x8B4Fu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0B4F);
    case 0x8B52u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0B52);
    case 0x8B55u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0B55);
    case 0x8B58u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0B58);
    case 0x8B5Bu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_0B5B);
    case 0x8B5Cu: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b57_0B5C);
    case 0x8B5Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0B5E);
    case 0x8B61u: return mm6_exec_op_8E_STX_Abs(rt, kCtx_b57_0B61);
    case 0x8B64u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0B64);
    case 0x8B67u: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b57_0B67);
    case 0x8B6Au: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_0B6A);
    case 0x8B6Du: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0B6D);
    case 0x8B6Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0B6F);
    case 0x8B71u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0B71);
    case 0x8B74u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0B74);
    case 0x8B77u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0B77);
    case 0x8B79u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0B79);
    case 0x8B8Cu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_0B8C);
    case 0x8B93u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0B93);
    case 0x8B95u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0B95);
    case 0x8B98u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0B98);
    case 0x8B9Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0B9A);
    case 0x8B9Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0B9D);
    case 0x8B9Fu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0B9F);
    case 0x8BA2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0BA2);
    case 0x8BA4u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0BA4);
    case 0x8BB3u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0BB3);
    case 0x8BB5u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0BB5);
    case 0x8BC5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0BC5);
    case 0x8BC8u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0BC8);
    case 0x8BCAu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0BCA);
    case 0x8BCCu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0BCC);
    case 0x8BD0u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0BD0);
    case 0x8BD6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0BD6);
    case 0x8BD9u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0BD9);
    case 0x8BDBu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0BDB);
    case 0x8BDDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0BDD);
    case 0x8BE1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0BE1);
    case 0x8BE3u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0BE3);
    case 0x8BE9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0BE9);
    case 0x8BEBu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0BEB);
    case 0x8BEEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0BEE);
    case 0x8BF1u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0BF1);
    case 0x8BF3u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0BF3);
    case 0x8BF5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0BF5);
    case 0x8BF9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0BF9);
    case 0x8BFCu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0BFC);
    case 0x8BFFu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0BFF);
    case 0x8C01u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0C01);
    case 0x8C03u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C03);
    case 0x8C06u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C06);
    case 0x8C08u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0C08);
    case 0x8C0Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C0B);
    case 0x8C0Du: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0C0D);
    case 0x8C10u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0C10);
    case 0x8C13u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0C13);
    case 0x8C16u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0C16);
    case 0x8C1Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C1C);
    case 0x8C1Fu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0C1F);
    case 0x8C21u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0C21);
    case 0x8C23u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C23);
    case 0x8C27u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C27);
    case 0x8C2Au: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0C2A);
    case 0x8C2Du: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0C2D);
    case 0x8C2Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C2F);
    case 0x8C31u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0C31);
    case 0x8C34u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0C34);
    case 0x8C36u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C36);
    case 0x8C39u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0C39);
    case 0x8C3Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C3B);
    case 0x8C3Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C3E);
    case 0x8C40u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0C40);
    case 0x8C43u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C43);
    case 0x8C45u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0C45);
    case 0x8C48u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0C48);
    case 0x8C4Bu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_0C4B);
    case 0x8C4Cu: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b57_0C4C);
    case 0x8C4Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0C4E);
    case 0x8C51u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0C51);
    case 0x8C54u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0C54);
    case 0x8C57u: return mm6_exec_op_8E_STX_Abs(rt, kCtx_b57_0C57);
    case 0x8C5Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C5A);
    case 0x8C5Du: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b57_0C5D);
    case 0x8C60u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C60);
    case 0x8C62u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0C62);
    case 0x8C64u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C64);
    case 0x8C67u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_0C67);
    case 0x8C6Au: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0C6A);
    case 0x8C6Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C6C);
    case 0x8C6Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0C6E);
    case 0x8C71u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0C71);
    case 0x8C74u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0C74);
    case 0x8C77u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C77);
    case 0x8C7Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C7A);
    case 0x8C7Cu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0C7C);
    case 0x8C7Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C7F);
    case 0x8C81u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C81);
    case 0x8C84u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C84);
    case 0x8C86u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C86);
    case 0x8C89u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C89);
    case 0x8C8Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0C8B);
    case 0x8C8Du: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_0C8D);
    case 0x8C8Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0C8F);
    case 0x8C91u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0C91);
    case 0x8C93u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0C93);
    case 0x8C95u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0C95);
    case 0x8C97u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0C97);
    case 0x8C9Au: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_0C9A);
    case 0x8C9Cu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0C9C);
    case 0x8C9Fu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0C9F);
    case 0x8CA1u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CA1);
    case 0x8CA4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0CA4);
    case 0x8CA6u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0CA6);
    case 0x8CA8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CA8);
    case 0x8CABu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CAB);
    case 0x8CAEu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0CAE);
    case 0x8CB1u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_0CB1);
    case 0x8CB3u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_0CB3);
    case 0x8CB5u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0CB5);
    case 0x8CB8u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b57_0CB8);
    case 0x8CBAu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0CBA);
    case 0x8CBCu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CBC);
    case 0x8CBFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CBF);
    case 0x8CC2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0CC2);
    case 0x8CC4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CC4);
    case 0x8CC7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0CC7);
    case 0x8CC9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CC9);
    case 0x8CCCu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CCC);
    case 0x8CCFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0CCF);
    case 0x8CD1u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CD1);
    case 0x8CD4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0CD4);
    case 0x8CD6u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0CD6);
    case 0x8CD9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0CD9);
    case 0x8CDBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CDB);
    case 0x8CDFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CDF);
    case 0x8CE2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0CE2);
    case 0x8CE4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CE4);
    case 0x8CE8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CE8);
    case 0x8CEBu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0CEB);
    case 0x8CEDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CED);
    case 0x8CF0u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0CF0);
    case 0x8CF2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CF2);
    case 0x8CF5u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b57_0CF5);
    case 0x8CF6u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0CF6);
    case 0x8CF8u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0CF8);
    case 0x8CFAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CFA);
    case 0x8CFDu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0CFD);
    case 0x8CFFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0CFF);
    case 0x8D02u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0D02);
    case 0x8D04u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D04);
    case 0x8D06u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0D06);
    case 0x8D09u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D09);
    case 0x8D0Bu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0D0B);
    case 0x8D0Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D0E);
    case 0x8D10u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0D10);
    case 0x8D13u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D13);
    case 0x8D15u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0D15);
    case 0x8D18u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D18);
    case 0x8D1Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0D1A);
    case 0x8D1Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D1C);
    case 0x8D1Eu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0D1E);
    case 0x8D20u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0D20);
    case 0x8D22u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D22);
    case 0x8D25u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D25);
    case 0x8D28u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D28);
    case 0x8D2Bu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0D2B);
    case 0x8D2Du: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_0D2D);
    case 0x8D30u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_0D30);
    case 0x8D32u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_0D32);
    case 0x8D34u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_0D34);
    case 0x8D37u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0D37);
    case 0x8D39u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D39);
    case 0x8D3Cu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0D3C);
    case 0x8D3Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D3E);
    case 0x8D40u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0D40);
    case 0x8D43u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0D43);
    case 0x8D45u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0D45);
    case 0x8D47u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D47);
    case 0x8D4Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D4A);
    case 0x8D4Du: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0D4D);
    case 0x8D50u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_0D50);
    case 0x8D52u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_0D52);
    case 0x8D54u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D54);
    case 0x8D56u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0D56);
    case 0x8D59u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D59);
    case 0x8D5Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D5B);
    case 0x8D5Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D5E);
    case 0x8D60u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0D60);
    case 0x8D62u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D62);
    case 0x8D64u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D64);
    case 0x8D67u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0D67);
    case 0x8D69u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D69);
    case 0x8D6Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D6C);
    case 0x8D6Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0D6E);
    case 0x8D71u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D71);
    case 0x8D73u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0D73);
    case 0x8D76u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0D76);
    case 0x8D79u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b57_0D79);
    case 0x8D7Cu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_0D7C);
    case 0x8D7Fu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_0D7F);
    case 0x8D81u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0D81);
    case 0x8D84u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_0D84);
    case 0x8D85u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_0D85);
    case 0x8D88u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0D88);
    case 0x8D8Bu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_0D8B);
    case 0x8D8Cu: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b57_0D8C);
    case 0x8D8Fu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0D8F);
    case 0x8D91u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0D91);
    case 0x8D93u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D93);
    case 0x8D96u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0D96);
    case 0x8D99u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0D99);
    case 0x8D9Bu: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b57_0D9B);
    case 0x8D9Eu: return mm6_exec_op_CC_CPY_Abs(rt, kCtx_b57_0D9E);
    case 0x8DA1u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_0DA1);
    case 0x8DA3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DA3);
    case 0x8DA5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DA5);
    case 0x8DA8u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_0DA8);
    case 0x8DABu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0DAB);
    case 0x8DADu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_0DAD);
    case 0x8DAFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DAF);
    case 0x8DB1u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0DB1);
    case 0x8DB3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DB3);
    case 0x8DB6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DB6);
    case 0x8DBAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DBA);
    case 0x8DBCu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DBC);
    case 0x8DBFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DBF);
    case 0x8DC1u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DC1);
    case 0x8DC4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DC4);
    case 0x8DC6u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0DC6);
    case 0x8DC9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DC9);
    case 0x8DCCu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DCC);
    case 0x8DCFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DCF);
    case 0x8DD2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DD2);
    case 0x8DD4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DD4);
    case 0x8DD8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DD8);
    case 0x8DDAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DDA);
    case 0x8DDDu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DDD);
    case 0x8DDFu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0DDF);
    case 0x8DE2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DE2);
    case 0x8DE4u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0DE4);
    case 0x8DE6u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0DE6);
    case 0x8DE9u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0DE9);
    case 0x8DEBu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0DEB);
    case 0x8DEEu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DEE);
    case 0x8DF0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DF0);
    case 0x8DF3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DF3);
    case 0x8DF5u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0DF5);
    case 0x8DF8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DF8);
    case 0x8DFAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0DFA);
    case 0x8DFEu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0DFE);
    case 0x8E00u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0E00);
    case 0x8E03u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_0E03);
    case 0x8E31u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0E31);
    case 0x8E33u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0E33);
    case 0x8E36u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0E36);
    case 0x8E38u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0E38);
    case 0x8EE7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0EE7);
    case 0x8EE9u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0EE9);
    case 0x8EEBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0EEB);
    case 0x8EEEu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_0EEE);
    case 0x8EF0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0EF0);
    case 0x8EF3u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0EF3);
    case 0x8EF6u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0EF6);
    case 0x8EF8u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0EF8);
    case 0x8EFAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0EFA);
    case 0x8EFDu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0EFD);
    case 0x8F00u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0F00);
    case 0x8F03u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0F03);
    case 0x8F06u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0F06);
    case 0x8F09u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_0F09);
    case 0x8F0Bu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0F0B);
    case 0x8F0Eu: return mm6_exec_op_8E_STX_Abs(rt, kCtx_b57_0F0E);
    case 0x8F11u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F11);
    case 0x8F14u: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b57_0F14);
    case 0x8F17u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0F17);
    case 0x8F19u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_0F19);
    case 0x8F1Cu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_0F1C);
    case 0x8F1Fu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0F1F);
    case 0x8F21u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0F21);
    case 0x8F23u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0F23);
    case 0x8F26u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F26);
    case 0x8F29u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0F29);
    case 0x8F2Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F2B);
    case 0x8F2Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F2E);
    case 0x8F31u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0F31);
    case 0x8F34u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_0F34);
    case 0x8F36u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_0F36);
    case 0x8F38u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F38);
    case 0x8F3Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F3B);
    case 0x8F3Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0F3E);
    case 0x8F40u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0F40);
    case 0x8F42u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b57_0F42);
    case 0x8F45u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_0F45);
    case 0x8F48u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_0F48);
    case 0x8F4Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F4A);
    case 0x8F4Du: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b57_0F4D);
    case 0x8F4Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F4F);
    case 0x8F52u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b57_0F52);
    case 0x8F54u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F54);
    case 0x8F57u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b57_0F57);
    case 0x8F59u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F59);
    case 0x8F5Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0F5C);
    case 0x8F5Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F5E);
    case 0x8F61u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0F61);
    case 0x8F63u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F63);
    case 0x8F66u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0F66);
    case 0x8F69u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0F69);
    case 0x8F6Cu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0F6C);
    case 0x8F6Fu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0F6F);
    case 0x8F72u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0F72);
    case 0x8F74u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_0F74);
    case 0x8F77u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_0F77);
    case 0x8F79u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_0F79);
    case 0x8F7Bu: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b57_0F7B);
    case 0x8F7Cu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_0F7C);
    case 0x8F7Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0F7E);
    case 0x8F80u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0F80);
    case 0x8F83u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F83);
    case 0x8F86u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F86);
    case 0x8F89u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0F89);
    case 0x8F95u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0F95);
    case 0x8F98u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_0F98);
    case 0x8F9Bu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_0F9B);
    case 0x8F9Du: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_0F9D);
    case 0x8F9Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0F9F);
    case 0x8FA1u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0FA1);
    case 0x8FA4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0FA4);
    case 0x8FA6u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0FA6);
    case 0x8FA9u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0FA9);
    case 0x8FBCu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0FBC);
    case 0x8FBEu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0FBE);
    case 0x8FC1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0FC1);
    case 0x8FC3u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0FC3);
    case 0x8FC6u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0FC6);
    case 0x8FCFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0FCF);
    case 0x8FD1u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0FD1);
    case 0x8FD4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0FD4);
    case 0x8FD6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0FD6);
    case 0x8FD9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_0FD9);
    case 0x8FDBu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_0FDB);
    case 0x8FDEu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0FDE);
    case 0x8FE4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0FE4);
    case 0x8FE7u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0FE7);
    case 0x8FE9u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0FE9);
    case 0x8FEBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0FEB);
    case 0x8FEFu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_0FEF);
    case 0x8FF5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0FF5);
    case 0x8FF8u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_0FF8);
    case 0x8FFAu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_0FFA);
    case 0x8FFCu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_0FFC);
    case 0x9000u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1000);
    case 0x9003u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1003);
    case 0x9006u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1006);
    case 0x9008u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1008);
    case 0x900Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_100A);
    case 0x900Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_100D);
    case 0x900Fu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_100F);
    case 0x9012u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1012);
    case 0x9015u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1015);
    case 0x9018u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1018);
    case 0x901Bu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_101B);
    case 0x901Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_101E);
    case 0x9021u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1021);
    case 0x9023u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1023);
    case 0x9026u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1026);
    case 0x9028u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1028);
    case 0x902Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_102B);
    case 0x902Eu: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b57_102E);
    case 0x9031u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1031);
    case 0x9034u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1034);
    case 0x9036u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1036);
    case 0x9038u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1038);
    case 0x903Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_103B);
    case 0x903Fu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_103F);
    case 0x9041u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1041);
    case 0x9043u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1043);
    case 0x9047u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1047);
    case 0x904Au: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_104A);
    case 0x904Du: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_104D);
    case 0x904Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_104F);
    case 0x9051u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1051);
    case 0x9054u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1054);
    case 0x9057u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1057);
    case 0x9059u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1059);
    case 0x905Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_105C);
    case 0x905Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_105E);
    case 0x9061u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1061);
    case 0x9064u: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b57_1064);
    case 0x9067u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1067);
    case 0x906Au: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_106A);
    case 0x906Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_106C);
    case 0x906Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_106E);
    case 0x9071u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1071);
    case 0x9075u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1075);
    case 0x9077u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1077);
    case 0x9079u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1079);
    case 0x907Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_107D);
    case 0x9080u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1080);
    case 0x9083u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1083);
    case 0x9085u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1085);
    case 0x9088u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1088);
    case 0x908Au: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_108A);
    case 0x908Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_108C);
    case 0x9090u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1090);
    case 0x9092u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1092);
    case 0x9095u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1095);
    case 0x9097u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1097);
    case 0x909Au: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_109A);
    case 0x909Du: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_109D);
    case 0x90A0u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_10A0);
    case 0x90A3u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_10A3);
    case 0x90A6u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_10A6);
    case 0x90A9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_10A9);
    case 0x90ABu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10AB);
    case 0x90AEu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_10AE);
    case 0x90B0u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_10B0);
    case 0x90B3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_10B3);
    case 0x90B5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10B5);
    case 0x90B8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10B8);
    case 0x90BBu: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b57_10BB);
    case 0x90BEu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_10BE);
    case 0x90C1u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_10C1);
    case 0x90C3u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_10C3);
    case 0x90C6u: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b57_10C6);
    case 0x90C8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_10C8);
    case 0x90CAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10CA);
    case 0x90CDu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_10CD);
    case 0x90CFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10CF);
    case 0x90D2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_10D2);
    case 0x90D4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10D4);
    case 0x90D7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10D7);
    case 0x90DAu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_10DA);
    case 0x90DDu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_10DD);
    case 0x90DFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10DF);
    case 0x90E2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10E2);
    case 0x90E5u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_10E5);
    case 0x90E7u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_10E7);
    case 0x90E9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10E9);
    case 0x90EDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_10ED);
    case 0x90F0u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_10F0);
    case 0x90F3u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_10F3);
    case 0x90F5u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b57_10F5);
    case 0x90F7u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_10F7);
    case 0x90FAu: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b57_10FA);
    case 0x90FBu: return mm6_exec_op_0A_ASL_Acc(rt, kCtx_b57_10FB);
    case 0x90FCu: return mm6_exec_op_2A_ROL_Acc(rt, kCtx_b57_10FC);
    case 0x90FDu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_10FD);
    case 0x90FFu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_10FF);
    case 0x9100u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1100);
    case 0x9103u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1103);
    case 0x9106u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1106);
    case 0x9108u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1108);
    case 0x910Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_110B);
    case 0x910Du: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_110D);
    case 0x9110u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1110);
    case 0x9112u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1112);
    case 0x9115u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1115);
    case 0x9118u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1118);
    case 0x911Bu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_111B);
    case 0x911Du: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_111D);
    case 0x911Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_111F);
    case 0x9122u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1122);
    case 0x9125u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1125);
    case 0x9127u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1127);
    case 0x9129u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1129);
    case 0x912Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_112B);
    case 0x912Eu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_112E);
    case 0x9131u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1131);
    case 0x9133u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1133);
    case 0x9135u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1135);
    case 0x9137u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1137);
    case 0x9139u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_1139);
    case 0x913Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_113B);
    case 0x913Du: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_113D);
    case 0x9140u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1140);
    case 0x9143u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1143);
    case 0x9145u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1145);
    case 0x9147u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1147);
    case 0x9149u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1149);
    case 0x914Cu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_114C);
    case 0x914Eu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_114E);
    case 0x9150u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1150);
    case 0x9152u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1152);
    case 0x9154u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1154);
    case 0x9156u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1156);
    case 0x9159u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1159);
    case 0x915Bu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_115B);
    case 0x915Eu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_115E);
    case 0x9160u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1160);
    case 0x9162u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1162);
    case 0x9165u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1165);
    case 0x9168u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1168);
    case 0x916Bu: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_116B);
    case 0x916Eu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_116E);
    case 0x9170u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1170);
    case 0x9172u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1172);
    case 0x9174u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1174);
    case 0x9177u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1177);
    case 0x9179u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1179);
    case 0x917Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_117C);
    case 0x917Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_117F);
    case 0x9182u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1182);
    case 0x9185u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1185);
    case 0x9187u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1187);
    case 0x918Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_118A);
    case 0x918Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_118C);
    case 0x918Eu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_118E);
    case 0x919Au: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_119A);
    case 0x919Bu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_119B);
    case 0x919Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_119E);
    case 0x91A1u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_11A1);
    case 0x91A5u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_11A5);
    case 0x91A7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_11A7);
    case 0x91AAu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_11AA);
    case 0x91ACu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_11AC);
    case 0x91AFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_11AF);
    case 0x91B1u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_11B1);
    case 0x91B3u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_11B3);
    case 0x91B6u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b57_11B6);
    case 0x91B9u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_11B9);
    case 0x91BCu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_11BC);
    case 0x91BFu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_11BF);
    case 0x91C2u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_11C2);
    case 0x91C4u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_11C4);
    case 0x91C7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_11C7);
    case 0x91C9u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_11C9);
    case 0x91CBu: return mm6_exec_op_86_STX_Zero(rt, kCtx_b57_11CB);
    case 0x91CDu: return mm6_exec_op_86_STX_Zero(rt, kCtx_b57_11CD);
    case 0x91CFu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_11CF);
    case 0x91D8u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b57_11D8);
    case 0x91D9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_11D9);
    case 0x91DBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_11DB);
    case 0x91DEu: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b57_11DE);
    case 0x91DFu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_11DF);
    case 0x91E1u: return mm6_exec_op_CD_CMP_Abs(rt, kCtx_b57_11E1);
    case 0x91E4u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_11E4);
    case 0x91E6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_11E6);
    case 0x91E8u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_11E8);
    case 0x91EBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_11EB);
    case 0x91EEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_11EE);
    case 0x91F1u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_11F1);
    case 0x91F3u: return mm6_exec_op_CD_CMP_Abs(rt, kCtx_b57_11F3);
    case 0x91F6u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_11F6);
    case 0x91F8u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_11F8);
    case 0x91FBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_11FB);
    case 0x91FDu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_11FD);
    case 0x9200u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1200);
    case 0x9203u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1203);
    case 0x9206u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1206);
    case 0x9208u: return mm6_exec_op_CD_CMP_Abs(rt, kCtx_b57_1208);
    case 0x920Bu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_120B);
    case 0x920Du: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_120D);
    case 0x9210u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b57_1210);
    case 0x9211u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1211);
    case 0x9213u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1213);
    case 0x9216u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b57_1216);
    case 0x9217u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1217);
    case 0x921Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_121A);
    case 0x921Du: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_121D);
    case 0x9220u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1220);
    case 0x9221u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b57_1221);
    case 0x9223u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1223);
    case 0x9226u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1226);
    case 0x9229u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1229);
    case 0x922Cu: return mm6_exec_op_8E_STX_Abs(rt, kCtx_b57_122C);
    case 0x922Fu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_122F);
    case 0x9236u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1236);
    case 0x9238u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1238);
    case 0x923Bu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_123B);
    case 0x923Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_123E);
    case 0x9241u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1241);
    case 0x9257u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1257);
    case 0x9259u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1259);
    case 0x926Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_126F);
    case 0x9271u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1271);
    case 0x9288u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1288);
    case 0x928Bu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_128B);
    case 0x928Eu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_128E);
    case 0x9290u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1290);
    case 0x9292u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1292);
    case 0x9294u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1294);
    case 0x9296u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1296);
    case 0x9299u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1299);
    case 0x929Bu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_129B);
    case 0x929Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_129D);
    case 0x92A1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_12A1);
    case 0x92A3u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_12A3);
    case 0x92A6u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_12A6);
    case 0x92A8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_12A8);
    case 0x92AAu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_12AA);
    case 0x92ADu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_12AD);
    case 0x92B6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_12B6);
    case 0x92B9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_12B9);
    case 0x92BBu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_12BB);
    case 0x92BEu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_12BE);
    case 0x92C0u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_12C0);
    case 0x92C3u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_12C3);
    case 0x92C5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_12C5);
    case 0x92C7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_12C7);
    case 0x92C9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_12C9);
    case 0x92CBu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_12CB);
    case 0x92CDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_12CD);
    case 0x92D0u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_12D0);
    case 0x92D2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_12D2);
    case 0x92D5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_12D5);
    case 0x92D8u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_12D8);
    case 0x92DAu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_12DA);
    case 0x92DCu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_12DC);
    case 0x92DFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_12DF);
    case 0x92E2u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_12E2);
    case 0x92E4u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_12E4);
    case 0x92E6u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_12E6);
    case 0x92E8u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_12E8);
    case 0x92EAu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_12EA);
    case 0x92ECu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_12EC);
    case 0x92EFu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_12EF);
    case 0x92F1u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_12F1);
    case 0x92F3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_12F3);
    case 0x92F6u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_12F6);
    case 0x92F8u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_12F8);
    case 0x92FBu: return mm6_exec_op_FE_INC_AbsXW(rt, kCtx_b57_12FB);
    case 0x92FEu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_12FE);
    case 0x9300u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_1300);
    case 0x9301u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1301);
    case 0x9304u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_1304);
    case 0x9305u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1305);
    case 0x9308u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1308);
    case 0x930Au: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_130A);
    case 0x930Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_130D);
    case 0x930Fu: return mm6_exec_op_6C_JMP_Ind(rt, kCtx_b57_130F);
    case 0x9328u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1328);
    case 0x932Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_132A);
    case 0x932Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_132D);
    case 0x9330u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_1330);
    case 0x9333u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1333);
    case 0x9335u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1335);
    case 0x9338u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1338);
    case 0x933Au: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_133A);
    case 0x933Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_133C);
    case 0x933Fu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_133F);
    case 0x9341u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1341);
    case 0x9344u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1344);
    case 0x9346u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_1346);
    case 0x9348u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1348);
    case 0x934Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_134A);
    case 0x934Du: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_134D);
    case 0x9350u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1350);
    case 0x9352u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1352);
    case 0x9354u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1354);
    case 0x9357u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1357);
    case 0x9359u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1359);
    case 0x935Cu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_135C);
    case 0x935Eu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_135E);
    case 0x9360u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1360);
    case 0x9362u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1362);
    case 0x9365u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1365);
    case 0x936Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_136E);
    case 0x9371u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1371);
    case 0x9373u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1373);
    case 0x9376u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1376);
    case 0x9378u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1378);
    case 0x937Bu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_137B);
    case 0x937Eu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_137E);
    case 0x937Fu: return mm6_exec_op_FE_INC_AbsXW(rt, kCtx_b57_137F);
    case 0x9382u: return mm6_exec_op_FE_INC_AbsXW(rt, kCtx_b57_1382);
    case 0x9385u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1385);
    case 0x9388u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_1388);
    case 0x938Au: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_138A);
    case 0x938Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_138C);
    case 0x9390u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1390);
    case 0x9392u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1392);
    case 0x9395u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1395);
    case 0x9398u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1398);
    case 0x939Bu: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_139B);
    case 0x939Cu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_139C);
    case 0x939Fu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_139F);
    case 0x93A2u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b57_13A2);
    case 0x93A3u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_13A3);
    case 0x93A5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_13A5);
    case 0x93A8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_13A8);
    case 0x93ABu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_13AB);
    case 0x93AEu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_13AE);
    case 0x93B0u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_13B0);
    case 0x93B2u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_13B2);
    case 0x93B4u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_13B4);
    case 0x93B6u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_13B6);
    case 0x93B8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_13B8);
    case 0x93BCu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_13BC);
    case 0x93BEu: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_13BE);
    case 0x93C0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_13C0);
    case 0x93C3u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_13C3);
    case 0x93C6u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_13C6);
    case 0x93C9u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_13C9);
    case 0x93CBu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_13CB);
    case 0x93CDu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_13CD);
    case 0x93CFu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_13CF);
    case 0x93D1u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_13D1);
    case 0x93D4u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_13D4);
    case 0x93D6u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_13D6);
    case 0x93D9u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_13D9);
    case 0x93DBu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_13DB);
    case 0x93DEu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_13DE);
    case 0x93E1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_13E1);
    case 0x93E3u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_13E3);
    case 0x93E6u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_13E6);
    case 0x93E9u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_13E9);
    case 0x93EBu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_13EB);
    case 0x9416u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1416);
    case 0x9418u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1418);
    case 0x941Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_141A);
    case 0x941Cu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_141C);
    case 0x941Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_141F);
    case 0x9421u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1421);
    case 0x9424u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1424);
    case 0x9426u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1426);
    case 0x9428u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1428);
    case 0x942Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_142F);
    case 0x9432u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1432);
    case 0x9434u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1434);
    case 0x9437u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_1437);
    case 0x9439u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1439);
    case 0x943Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_143B);
    case 0x943Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_143D);
    case 0x943Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_143F);
    case 0x9441u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1441);
    case 0x9444u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1444);
    case 0x9446u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1446);
    case 0x9449u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1449);
    case 0x944Bu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_144B);
    case 0x944Eu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_144E);
    case 0x9450u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_1450);
    case 0x9453u: return mm6_exec_op_FE_INC_AbsXW(rt, kCtx_b57_1453);
    case 0x9456u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b57_1456);
    case 0x9457u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_1457);
    case 0x9459u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1459);
    case 0x945Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_145B);
    case 0x945Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_145D);
    case 0x9460u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1460);
    case 0x9462u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1462);
    case 0x9464u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1464);
    case 0x9467u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1467);
    case 0x946Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_146A);
    case 0x946Du: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_146D);
    case 0x946Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_146F);
    case 0x9471u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1471);
    case 0x9474u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1474);
    case 0x9476u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1476);
    case 0x9479u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1479);
    case 0x947Cu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_147C);
    case 0x947Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_147E);
    case 0x9481u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1481);
    case 0x9484u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1484);
    case 0x9486u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1486);
    case 0x9488u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1488);
    case 0x948Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_148B);
    case 0x948Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_148D);
    case 0x9490u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1490);
    case 0x9493u: return mm6_exec_op_0D_ORA_Abs(rt, kCtx_b57_1493);
    case 0x9496u: return mm6_exec_op_0D_ORA_Abs(rt, kCtx_b57_1496);
    case 0x9499u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1499);
    case 0x949Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_149B);
    case 0x949Eu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_149E);
    case 0x94A1u: return mm6_exec_op_CD_CMP_Abs(rt, kCtx_b57_14A1);
    case 0x94A4u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_14A4);
    case 0x94A6u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_14A6);
    case 0x94A9u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_14A9);
    case 0x94ABu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_14AB);
    case 0x94ADu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_14AD);
    case 0x94B0u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_14B0);
    case 0x94B3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_14B3);
    case 0x94B5u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_14B5);
    case 0x94B8u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_14B8);
    case 0x94BBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_14BB);
    case 0x94BDu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_14BD);
    case 0x94C0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_14C0);
    case 0x94C3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_14C3);
    case 0x94C6u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_14C6);
    case 0x94C9u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_14C9);
    case 0x94CBu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_14CB);
    case 0x94CDu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_14CD);
    case 0x94CFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_14CF);
    case 0x94D2u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_14D2);
    case 0x94D5u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_14D5);
    case 0x94D7u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_14D7);
    case 0x94DAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_14DA);
    case 0x94DDu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_14DD);
    case 0x94E0u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_14E0);
    case 0x94E2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_14E2);
    case 0x94E5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_14E5);
    case 0x94E8u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_14E8);
    case 0x94EBu: return mm6_exec_op_CD_CMP_Abs(rt, kCtx_b57_14EB);
    case 0x94EEu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_14EE);
    case 0x94F0u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_14F0);
    case 0x94F3u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_14F3);
    case 0x94F5u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_14F5);
    case 0x94F7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_14F7);
    case 0x94FAu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_14FA);
    case 0x94FDu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_14FD);
    case 0x9500u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1500);
    case 0x9503u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_1503);
    case 0x9505u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1505);
    case 0x9507u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1507);
    case 0x950Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_150A);
    case 0x950Du: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_150D);
    case 0x950Fu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_150F);
    case 0x9511u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1511);
    case 0x9513u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1513);
    case 0x9515u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1515);
    case 0x9518u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1518);
    case 0x951Au: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_151A);
    case 0x951Bu: return mm6_exec_op_FD_SBC_AbsX(rt, kCtx_b57_151B);
    case 0x951Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_151E);
    case 0x9521u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b57_1521);
    case 0x9522u: return mm6_exec_op_E0_CPX_Imm(rt, kCtx_b57_1522);
    case 0x9524u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1524);
    case 0x9526u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1526);
    case 0x9528u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1528);
    case 0x9529u: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_1529);
    case 0x952Cu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_152C);
    case 0x952Fu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_152F);
    case 0x9530u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1530);
    case 0x9532u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1532);
    case 0x9534u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1534);
    case 0x9537u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b57_1537);
    case 0x9538u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1538);
    case 0x953Au: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_153A);
    case 0x953Du: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_153D);
    case 0x953Fu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_153F);
    case 0x9541u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1541);
    case 0x9544u: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b57_1544);
    case 0x9545u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1545);
    case 0x9547u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1547);
    case 0x954Au: return mm6_exec_op_E0_CPX_Imm(rt, kCtx_b57_154A);
    case 0x954Cu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_154C);
    case 0x954Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_154E);
    case 0x9551u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1551);
    case 0x9554u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1554);
    case 0x9557u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1557);
    case 0x9559u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1559);
    case 0x955Cu: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_155C);
    case 0x955Eu: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b57_155E);
    case 0x9561u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1561);
    case 0x9563u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1563);
    case 0x9565u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_1565);
    case 0x9567u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1567);
    case 0x9569u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1569);
    case 0x956Cu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_156C);
    case 0x956Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_156E);
    case 0x9571u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1571);
    case 0x9573u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1573);
    case 0x9575u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1575);
    case 0x9578u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1578);
    case 0x957Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_157A);
    case 0x957Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_157C);
    case 0x957Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_157F);
    case 0x9581u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1581);
    case 0x9584u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1584);
    case 0x9587u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_1587);
    case 0x958Au: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_158A);
    case 0x958Cu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_158C);
    case 0x958Fu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_158F);
    case 0x9590u: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_1590);
    case 0x9593u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1593);
    case 0x9595u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1595);
    case 0x9597u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1597);
    case 0x959Au: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_159A);
    case 0x959Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_159C);
    case 0x959Fu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_159F);
    case 0x95A1u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_15A1);
    case 0x95A3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_15A3);
    case 0x95A5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_15A5);
    case 0x95A8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_15A8);
    case 0x95ABu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_15AB);
    case 0x95ADu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_15AD);
    case 0x95AFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_15AF);
    case 0x95B2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_15B2);
    case 0x95B5u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_15B5);
    case 0x95B8u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_15B8);
    case 0x95BAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_15BA);
    case 0x95BCu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_15BC);
    case 0x95BFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_15BF);
    case 0x95C2u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_15C2);
    case 0x95C4u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_15C4);
    case 0x95C6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_15C6);
    case 0x95C9u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_15C9);
    case 0x95EBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_15EB);
    case 0x95EEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_15EE);
    case 0x95F1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_15F1);
    case 0x95F3u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_15F3);
    case 0x95F6u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_15F6);
    case 0x95F8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_15F8);
    case 0x95FAu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_15FA);
    case 0x95FCu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_15FC);
    case 0x95FEu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_15FE);
    case 0x9600u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1600);
    case 0x9603u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1603);
    case 0x9605u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1605);
    case 0x9608u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1608);
    case 0x960Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_160B);
    case 0x960Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_160D);
    case 0x9610u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1610);
    case 0x9612u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1612);
    case 0x9615u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_1615);
    case 0x9617u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1617);
    case 0x9619u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1619);
    case 0x961Cu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_161C);
    case 0x961Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_161E);
    case 0x9621u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1621);
    case 0x9623u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1623);
    case 0x9626u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1626);
    case 0x9628u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1628);
    case 0x962Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_162A);
    case 0x962Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_162D);
    case 0x9630u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1630);
    case 0x9633u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1633);
    case 0x9636u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1636);
    case 0x9639u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1639);
    case 0x963Bu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_163B);
    case 0x963Du: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_163D);
    case 0x963Fu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_163F);
    case 0x9641u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1641);
    case 0x9644u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1644);
    case 0x9647u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1647);
    case 0x9649u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1649);
    case 0x964Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_164C);
    case 0x964Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_164E);
    case 0x9651u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1651);
    case 0x9653u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1653);
    case 0x9656u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1656);
    case 0x9658u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1658);
    case 0x965Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_165B);
    case 0x965Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_165D);
    case 0x965Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_165F);
    case 0x9662u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1662);
    case 0x9665u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1665);
    case 0x9667u: return mm6_exec_op_FE_INC_AbsXW(rt, kCtx_b57_1667);
    case 0x966Au: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_166A);
    case 0x966Bu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_166B);
    case 0x966Eu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_166E);
    case 0x966Fu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_166F);
    case 0x9672u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1672);
    case 0x9674u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1674);
    case 0x9677u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1677);
    case 0x9679u: return mm6_exec_op_6C_JMP_Ind(rt, kCtx_b57_1679);
    case 0x9680u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1680);
    case 0x9682u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1682);
    case 0x9684u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1684);
    case 0x9687u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1687);
    case 0x968Au: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_168A);
    case 0x968Bu: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_168B);
    case 0x968Eu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_168E);
    case 0x9690u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1690);
    case 0x9692u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1692);
    case 0x9694u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1694);
    case 0x9697u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1697);
    case 0x9699u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1699);
    case 0x969Cu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_169C);
    case 0x969Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_169E);
    case 0x96A1u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_16A1);
    case 0x96A3u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_16A3);
    case 0x96A6u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_16A6);
    case 0x96A9u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_16A9);
    case 0x96ABu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_16AB);
    case 0x96ADu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_16AD);
    case 0x96B0u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_16B0);
    case 0x96B2u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_16B2);
    case 0x96B5u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_16B5);
    case 0x96B8u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_16B8);
    case 0x96BBu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_16BB);
    case 0x96BDu: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_16BD);
    case 0x96C0u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_16C0);
    case 0x96C2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_16C2);
    case 0x96C5u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_16C5);
    case 0x96C8u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_16C8);
    case 0x96CBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_16CB);
    case 0x96CDu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_16CD);
    case 0x96D0u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_16D0);
    case 0x96D2u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_16D2);
    case 0x96D5u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_16D5);
    case 0x96D7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_16D7);
    case 0x96DAu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_16DA);
    case 0x96DDu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_16DD);
    case 0x96DFu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_16DF);
    case 0x96E2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_16E2);
    case 0x96E5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_16E5);
    case 0x96E7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_16E7);
    case 0x96E9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_16E9);
    case 0x96EBu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_16EB);
    case 0x96EDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_16ED);
    case 0x96F0u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_16F0);
    case 0x96F3u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_16F3);
    case 0x96F6u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_16F6);
    case 0x96F9u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_16F9);
    case 0x96FCu: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b57_16FC);
    case 0x96FFu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_16FF);
    case 0x9702u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1702);
    case 0x9704u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1704);
    case 0x9706u: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b57_1706);
    case 0x9708u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_1708);
    case 0x970Au: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_170A);
    case 0x970Cu: return mm6_exec_op_C0_CPY_Imm(rt, kCtx_b57_170C);
    case 0x970Eu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_170E);
    case 0x9710u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1710);
    case 0x9713u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1713);
    case 0x9716u: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_1716);
    case 0x9719u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1719);
    case 0x971Bu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_171B);
    case 0x972Cu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_172C);
    case 0x972Fu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_172F);
    case 0x9731u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_1731);
    case 0x9733u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1733);
    case 0x9735u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1735);
    case 0x9736u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1736);
    case 0x9738u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1738);
    case 0x973Au: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_173A);
    case 0x973Cu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_173C);
    case 0x973Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_173D);
    case 0x973Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_173F);
    case 0x9741u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1741);
    case 0x9743u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1743);
    case 0x9745u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1745);
    case 0x9748u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1748);
    case 0x974Bu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_174B);
    case 0x974Cu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_174C);
    case 0x974Fu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_174F);
    case 0x9751u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1751);
    case 0x9754u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1754);
    case 0x9757u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b57_1757);
    case 0x975Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_175A);
    case 0x975Du: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b57_175D);
    case 0x975Eu: return mm6_exec_op_E0_CPX_Imm(rt, kCtx_b57_175E);
    case 0x9760u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1760);
    case 0x9762u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1762);
    case 0x9764u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1764);
    case 0x9765u: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_1765);
    case 0x9768u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1768);
    case 0x976Bu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_176B);
    case 0x978Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_178D);
    case 0x9790u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1790);
    case 0x9792u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1792);
    case 0x9795u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1795);
    case 0x9797u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1797);
    case 0x9799u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1799);
    case 0x979Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_179B);
    case 0x979Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_179D);
    case 0x97A0u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17A0);
    case 0x97A2u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_17A2);
    case 0x97A5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17A5);
    case 0x97A7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_17A7);
    case 0x97A9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17A9);
    case 0x97ABu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_17AB);
    case 0x97AEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_17AE);
    case 0x97B2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17B2);
    case 0x97B4u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_17B4);
    case 0x97B6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_17B6);
    case 0x97B9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17B9);
    case 0x97BBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_17BB);
    case 0x97BEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_17BE);
    case 0x97C1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17C1);
    case 0x97C3u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_17C3);
    case 0x97C6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_17C6);
    case 0x97C9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_17C9);
    case 0x97CCu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_17CC);
    case 0x97CEu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_17CE);
    case 0x97D0u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_17D0);
    case 0x97D2u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_17D2);
    case 0x97D4u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_17D4);
    case 0x97D6u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_17D6);
    case 0x97D7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17D7);
    case 0x97D9u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_17D9);
    case 0x97DAu: return mm6_exec_op_F9_SBC_AbsY(rt, kCtx_b57_17DA);
    case 0x97DDu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_17DD);
    case 0x97DFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17DF);
    case 0x97E1u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_17E1);
    case 0x97E2u: return mm6_exec_op_79_ADC_AbsY(rt, kCtx_b57_17E2);
    case 0x97E5u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_17E5);
    case 0x97E8u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_17E8);
    case 0x97EBu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_17EB);
    case 0x97EDu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_17ED);
    case 0x97EFu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17EF);
    case 0x97F1u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_17F1);
    case 0x97F3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17F3);
    case 0x97F5u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_17F5);
    case 0x97F8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_17F8);
    case 0x97FAu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_17FA);
    case 0x97FBu: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_17FB);
    case 0x97FEu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_17FE);
    case 0x9801u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1801);
    case 0x9803u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1803);
    case 0x9805u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1805);
    case 0x9807u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1807);
    case 0x980Au: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_180A);
    case 0x980Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_180C);
    case 0x980Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_180E);
    case 0x9811u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1811);
    case 0x9814u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1814);
    case 0x9816u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1816);
    case 0x9818u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1818);
    case 0x981Bu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_181B);
    case 0x981Du: return mm6_exec_op_DE_DEC_AbsXW(rt, kCtx_b57_181D);
    case 0x9820u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1820);
    case 0x9822u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1822);
    case 0x9825u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1825);
    case 0x9827u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1827);
    case 0x982Au: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_182A);
    case 0x982Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_182C);
    case 0x982Fu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_182F);
    case 0x9832u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1832);
    case 0x9834u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1834);
    case 0x9836u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_1836);
    case 0x9837u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1837);
    case 0x983Au: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_183A);
    case 0x983Du: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_183D);
    case 0x983Eu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_183E);
    case 0x9841u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_1841);
    case 0x9842u: return mm6_exec_op_6D_ADC_Abs(rt, kCtx_b57_1842);
    case 0x9845u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1845);
    case 0x9847u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1847);
    case 0x9849u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1849);
    case 0x984Bu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_184B);
    case 0x984Du: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_184D);
    case 0x984Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_184F);
    case 0x9851u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1851);
    case 0x9854u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1854);
    case 0x9861u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1861);
    case 0x9864u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1864);
    case 0x9867u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_1867);
    case 0x9869u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1869);
    case 0x986Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_186B);
    case 0x986Eu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_186E);
    case 0x9870u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1870);
    case 0x9873u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1873);
    case 0x9875u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1875);
    case 0x9877u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_1877);
    case 0x9879u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1879);
    case 0x987Cu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_187C);
    case 0x987Eu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_187E);
    case 0x9881u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1881);
    case 0x9884u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1884);
    case 0x9886u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1886);
    case 0x9888u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1888);
    case 0x988Bu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_188B);
    case 0x988Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_188E);
    case 0x9891u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1891);
    case 0x9894u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1894);
    case 0x9896u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1896);
    case 0x9898u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1898);
    case 0x989Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_189B);
    case 0x989Eu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_189E);
    case 0x98A0u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_18A0);
    case 0x98A2u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_18A2);
    case 0x98A5u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_18A5);
    case 0x98A7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_18A7);
    case 0x98AAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_18AA);
    case 0x98ADu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_18AD);
    case 0x98B0u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_18B0);
    case 0x98B3u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_18B3);
    case 0x98B4u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b57_18B4);
    case 0x98B6u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_18B6);
    case 0x98B8u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_18B8);
    case 0x98BAu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_18BA);
    case 0x98BBu: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b57_18BB);
    case 0x98BDu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_18BD);
    case 0x98BFu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_18BF);
    case 0x98C1u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_18C1);
    case 0x98C2u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_18C2);
    case 0x98C4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_18C4);
    case 0x98C7u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_18C7);
    case 0x98C9u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_18C9);
    case 0x98CBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_18CB);
    case 0x98CDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_18CD);
    case 0x98D0u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_18D0);
    case 0x98D1u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_18D1);
    case 0x98DFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_18DF);
    case 0x98E2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_18E2);
    case 0x98E4u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_18E4);
    case 0x98E7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_18E7);
    case 0x98E9u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_18E9);
    case 0x98ECu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_18EC);
    case 0x98EEu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_18EE);
    case 0x98F1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_18F1);
    case 0x98F3u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_18F3);
    case 0x98F5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_18F5);
    case 0x98F7u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_18F7);
    case 0x98F9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_18F9);
    case 0x98FCu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_18FC);
    case 0x98FEu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_18FE);
    case 0x9901u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1901);
    case 0x9903u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1903);
    case 0x9906u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1906);
    case 0x9908u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1908);
    case 0x990Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_190A);
    case 0x990Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_190C);
    case 0x990Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_190F);
    case 0x9912u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1912);
    case 0x9914u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1914);
    case 0x9917u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1917);
    case 0x991Au: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_191A);
    case 0x991Cu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_191C);
    case 0x991Eu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_191E);
    case 0x9921u: return mm6_exec_op_49_EOR_Imm(rt, kCtx_b57_1921);
    case 0x9923u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1923);
    case 0x9926u: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b57_1926);
    case 0x9929u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1929);
    case 0x992Cu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_192C);
    case 0x992Fu: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_192F);
    case 0x9930u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1930);
    case 0x9933u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1933);
    case 0x9934u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b57_1934);
    case 0x9936u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1936);
    case 0x9939u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1939);
    case 0x993Bu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_193B);
    case 0x993Cu: return mm6_exec_op_F9_SBC_AbsY(rt, kCtx_b57_193C);
    case 0x993Fu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_193F);
    case 0x9942u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1942);
    case 0x9945u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_1945);
    case 0x9946u: return mm6_exec_op_7D_ADC_AbsX(rt, kCtx_b57_1946);
    case 0x9949u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_1949);
    case 0x994Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_194B);
    case 0x994Du: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_194D);
    case 0x9950u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1950);
    case 0x9952u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_1952);
    case 0x9954u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1954);
    case 0x9956u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1956);
    case 0x9958u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1958);
    case 0x995Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_195A);
    case 0x995Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_195D);
    case 0x995Fu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_195F);
    case 0x9962u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1962);
    case 0x9965u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1965);
    case 0x9967u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1967);
    case 0x996Au: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_196A);
    case 0x996Cu: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b57_196C);
    case 0x996Du: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_196D);
    case 0x996Eu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_196E);
    case 0x9971u: return mm6_exec_op_DD_CMP_AbsX(rt, kCtx_b57_1971);
    case 0x9974u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_1974);
    case 0x9976u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_1976);
    case 0x9977u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1977);
    case 0x9979u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_1979);
    case 0x997Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_197A);
    case 0x997Du: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_197D);
    case 0x9980u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1980);
    case 0x9982u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1982);
    case 0x9985u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1985);
    case 0x9988u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1988);
    case 0x998Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_198A);
    case 0x998Du: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_198D);
    case 0x998Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_198F);
    case 0x9991u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1991);
    case 0x9994u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1994);
    case 0x9996u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1996);
    case 0x9998u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1998);
    case 0x999Bu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_199B);
    case 0x99A2u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_19A2);
    case 0x99A4u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_19A4);
    case 0x99A6u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_19A6);
    case 0x99A7u: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_19A7);
    case 0x99AAu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_19AA);
    case 0x99ADu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_19AD);
    case 0x99B0u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_19B0);
    case 0x99B1u: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_19B1);
    case 0x99B4u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_19B4);
    case 0x99B7u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b57_19B7);
    case 0x99B8u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_19B8);
    case 0x99BAu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_19BA);
    case 0x99BCu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_19BC);
    case 0x99BEu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_19BE);
    case 0x99BFu: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_19BF);
    case 0x99C2u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_19C2);
    case 0x99C5u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_19C5);
    case 0x99C8u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b57_19C8);
    case 0x99C9u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_19C9);
    case 0x99CAu: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b57_19CA);
    case 0x99CCu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_19CC);
    case 0x99CFu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_19CF);
    case 0x99D2u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_19D2);
    case 0x99D3u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b57_19D3);
    case 0x99D5u: return mm6_exec_op_4A_LSR_Acc(rt, kCtx_b57_19D5);
    case 0x99D6u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_19D6);
    case 0x99D9u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_19D9);
    case 0x9AC4u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1AC4);
    case 0x9AC6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1AC6);
    case 0x9AC9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1AC9);
    case 0x9ACBu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1ACB);
    case 0x9ACDu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_1ACD);
    case 0x9ACFu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1ACF);
    case 0x9AD2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1AD2);
    case 0x9AD5u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1AD5);
    case 0x9AD7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1AD7);
    case 0x9ADAu: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b57_1ADA);
    case 0x9ADDu: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b57_1ADD);
    case 0x9ADFu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1ADF);
    case 0x9AE2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1AE2);
    case 0x9AE5u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1AE5);
    case 0x9AE6u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1AE6);
    case 0x9AE9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1AE9);
    case 0x9AECu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1AEC);
    case 0x9AEFu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1AEF);
    case 0x9AFEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1AFE);
    case 0x9B01u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1B01);
    case 0x9B03u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B03);
    case 0x9B06u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B06);
    case 0x9B08u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1B08);
    case 0x9B0Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B0A);
    case 0x9B0Cu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1B0C);
    case 0x9B0Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B0F);
    case 0x9B13u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B13);
    case 0x9B15u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1B15);
    case 0x9B18u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1B18);
    case 0x9B1Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B1B);
    case 0x9B1Du: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1B1D);
    case 0x9B20u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B20);
    case 0x9B22u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1B22);
    case 0x9B25u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B25);
    case 0x9B27u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1B27);
    case 0x9B29u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B29);
    case 0x9B2Bu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1B2B);
    case 0x9B2Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B2D);
    case 0x9B2Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1B2F);
    case 0x9B31u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_1B31);
    case 0x9B33u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B33);
    case 0x9B35u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1B35);
    case 0x9B37u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B37);
    case 0x9B39u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1B39);
    case 0x9B3Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B3B);
    case 0x9B3Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B3E);
    case 0x9B40u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1B40);
    case 0x9B43u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B43);
    case 0x9B46u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B46);
    case 0x9B49u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B49);
    case 0x9B4Bu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1B4B);
    case 0x9B4Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B4E);
    case 0x9B50u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B50);
    case 0x9B53u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B53);
    case 0x9B56u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B56);
    case 0x9B59u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B59);
    case 0x9B5Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B5B);
    case 0x9B5Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B5E);
    case 0x9B61u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B61);
    case 0x9B64u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B64);
    case 0x9B67u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B67);
    case 0x9B69u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B69);
    case 0x9B6Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B6C);
    case 0x9B6Fu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1B6F);
    case 0x9B72u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B72);
    case 0x9B74u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1B74);
    case 0x9B77u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B77);
    case 0x9B79u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1B79);
    case 0x9B7Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1B7B);
    case 0x9B7Du: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1B7D);
    case 0x9B7Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1B7F);
    case 0x9B82u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1B82);
    case 0x9B85u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1B85);
    case 0x9B88u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1B88);
    case 0x9B8Bu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1B8B);
    case 0x9B8Eu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1B8E);
    case 0x9B9Au: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1B9A);
    case 0x9B9Du: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1B9D);
    case 0x9B9Fu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1B9F);
    case 0x9BA1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1BA1);
    case 0x9BA3u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BA3);
    case 0x9BA6u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BA6);
    case 0x9BA9u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BA9);
    case 0x9BACu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BAC);
    case 0x9BAFu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1BAF);
    case 0x9BB2u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1BB2);
    case 0x9BB3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1BB3);
    case 0x9BB5u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BB5);
    case 0x9BB8u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1BB8);
    case 0x9BBAu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BBA);
    case 0x9BBDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1BBD);
    case 0x9BC0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1BC0);
    case 0x9BC3u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1BC3);
    case 0x9BC6u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1BC6);
    case 0x9BC8u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_1BC8);
    case 0x9BCAu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1BCA);
    case 0x9BCDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1BCD);
    case 0x9BD0u: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_1BD0);
    case 0x9BD2u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1BD2);
    case 0x9BD5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1BD5);
    case 0x9BD7u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BD7);
    case 0x9BDAu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1BDA);
    case 0x9BDCu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BDC);
    case 0x9BDFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1BDF);
    case 0x9BE2u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1BE2);
    case 0x9BE5u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1BE5);
    case 0x9BE7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1BE7);
    case 0x9BEAu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1BEA);
    case 0x9BEDu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1BED);
    case 0x9BEFu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BEF);
    case 0x9BF2u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BF2);
    case 0x9BF5u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BF5);
    case 0x9BF8u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BF8);
    case 0x9BFBu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1BFB);
    case 0x9BFCu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1BFC);
    case 0x9BFEu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1BFE);
    case 0x9C01u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C01);
    case 0x9C03u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1C03);
    case 0x9C05u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C05);
    case 0x9C07u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1C07);
    case 0x9C09u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1C09);
    case 0x9C0Cu: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1C0C);
    case 0x9C0Fu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1C0F);
    case 0x9C12u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1C12);
    case 0x9C15u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1C15);
    case 0x9C18u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1C18);
    case 0x9C21u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C21);
    case 0x9C23u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1C23);
    case 0x9C26u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C26);
    case 0x9C28u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1C28);
    case 0x9C2Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1C2B);
    case 0x9C2Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1C2E);
    case 0x9C31u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1C31);
    case 0x9C34u: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1C34);
    case 0x9C36u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1C36);
    case 0x9C38u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1C38);
    case 0x9C3Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1C3B);
    case 0x9C3Eu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_1C3E);
    case 0x9C40u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1C40);
    case 0x9C43u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C43);
    case 0x9C45u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1C45);
    case 0x9C48u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C48);
    case 0x9C4Au: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1C4A);
    case 0x9C4Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1C4D);
    case 0x9C50u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1C50);
    case 0x9C53u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1C53);
    case 0x9C55u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1C55);
    case 0x9C58u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1C58);
    case 0x9C5Bu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1C5B);
    case 0x9C5Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C5D);
    case 0x9C5Fu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1C5F);
    case 0x9C62u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C62);
    case 0x9C64u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1C64);
    case 0x9C67u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C67);
    case 0x9C69u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1C69);
    case 0x9C6Cu: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1C6C);
    case 0x9C6Fu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1C6F);
    case 0x9C70u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1C70);
    case 0x9C72u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C72);
    case 0x9C74u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1C74);
    case 0x9C77u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1C77);
    case 0x9C7Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1C7A);
    case 0x9C7Cu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1C7C);
    case 0x9C7Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1C7F);
    case 0x9C81u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1C81);
    case 0x9C83u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1C83);
    case 0x9C86u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1C86);
    case 0x9C89u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1C89);
    case 0x9C8Cu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1C8C);
    case 0x9C8Eu: return mm6_exec_op_90_BCC_Rel(rt, kCtx_b57_1C8E);
    case 0x9C90u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C90);
    case 0x9C92u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1C92);
    case 0x9C94u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C94);
    case 0x9C96u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1C96);
    case 0x9C99u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1C99);
    case 0x9C9Au: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1C9A);
    case 0x9C9Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1C9B);
    case 0x9C9Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1C9E);
    case 0x9CA0u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1CA0);
    case 0x9CA3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1CA3);
    case 0x9CA6u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1CA6);
    case 0x9CA8u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1CA8);
    case 0x9CAAu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1CAA);
    case 0x9CACu: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b57_1CAC);
    case 0x9CAEu: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b57_1CAE);
    case 0x9CB1u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1CB1);
    case 0x9CB3u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1CB3);
    case 0x9CB5u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1CB5);
    case 0x9CB7u: return mm6_exec_op_E6_INC_Zero(rt, kCtx_b57_1CB7);
    case 0x9CB9u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1CB9);
    case 0x9CBCu: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1CBC);
    case 0x9CBFu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1CBF);
    case 0x9CC1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1CC1);
    case 0x9CC3u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1CC3);
    case 0x9CC6u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1CC6);
    case 0x9CC8u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1CC8);
    case 0x9CCAu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1CCA);
    case 0x9CCDu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1CCD);
    case 0x9CD0u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1CD0);
    case 0x9CD3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1CD3);
    case 0x9CD6u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1CD6);
    case 0x9CD9u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1CD9);
    case 0x9CDBu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1CDB);
    case 0x9CDEu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1CDE);
    case 0x9CE1u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1CE1);
    case 0x9CE4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1CE4);
    case 0x9CE7u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1CE7);
    case 0x9CEAu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1CEA);
    case 0x9CECu: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1CEC);
    case 0x9CEFu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1CEF);
    case 0x9CF2u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1CF2);
    case 0x9CF4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1CF4);
    case 0x9CF7u: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1CF7);
    case 0x9CF9u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1CF9);
    case 0x9CFBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1CFB);
    case 0x9CFDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1CFD);
    case 0x9D00u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1D00);
    case 0x9D02u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1D02);
    case 0x9D05u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1D05);
    case 0x9D07u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1D07);
    case 0x9D0Au: return mm6_exec_op_8E_STX_Abs(rt, kCtx_b57_1D0A);
    case 0x9D0Du: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1D0D);
    case 0x9D10u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1D10);
    case 0x9D13u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1D13);
    case 0x9D15u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1D15);
    case 0x9D17u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1D17);
    case 0x9D1Au: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_1D1A);
    case 0x9D1Cu: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b57_1D1C);
    case 0x9D1Du: return mm6_exec_op_88_DEY_Imp(rt, kCtx_b57_1D1D);
    case 0x9D1Eu: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b57_1D1E);
    case 0x9D21u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1D21);
    case 0x9D23u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1D23);
    case 0x9D26u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1D26);
    case 0x9D28u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1D28);
    case 0x9D2Bu: return mm6_exec_op_B0_BCS_Rel(rt, kCtx_b57_1D2B);
    case 0x9D2Du: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1D2D);
    case 0x9D30u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1D30);
    case 0x9D32u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1D32);
    case 0x9D35u: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b57_1D35);
    case 0x9D38u: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b57_1D38);
    case 0x9D3Bu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1D3B);
    case 0x9D3Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1D3D);
    case 0x9D3Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1D3F);
    case 0x9D42u: return mm6_exec_op_8E_STX_Abs(rt, kCtx_b57_1D42);
    case 0x9D45u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1D45);
    case 0x9D47u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1D47);
    case 0x9D4Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1D4A);
    case 0x9D4Du: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1D4D);
    case 0x9D50u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1D50);
    case 0x9D52u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1D52);
    case 0x9D55u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1D55);
    case 0x9D57u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1D57);
    case 0x9D5Au: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b57_1D5A);
    case 0x9D5Du: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1D5D);
    case 0x9D60u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1D60);
    case 0x9D62u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1D62);
    case 0x9D65u: return mm6_exec_op_BA_TSX_Imp(rt, kCtx_b57_1D65);
    case 0x9D66u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1D66);
    case 0x9D69u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1D69);
    case 0x9D6Cu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1D6C);
    case 0x9D6Fu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1D6F);
    case 0x9D72u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1D72);
    case 0x9D74u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1D74);
    case 0x9D75u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1D75);
    case 0x9D78u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b57_1D78);
    case 0x9D79u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1D79);
    case 0x9D7Cu: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b57_1D7C);
    case 0x9D7Du: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1D7D);
    case 0x9D7Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1D7E);
    case 0x9D80u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1D80);
    case 0x9D81u: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_1D81);
    case 0x9D84u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1D84);
    case 0x9D87u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1D87);
    case 0x9D89u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1D89);
    case 0x9D8Au: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_1D8A);
    case 0x9D8Du: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1D8D);
    case 0x9D90u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1D90);
    case 0x9D93u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1D93);
    case 0x9D95u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1D95);
    case 0x9D96u: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_1D96);
    case 0x9D99u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1D99);
    case 0x9D9Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1D9C);
    case 0x9D9Eu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1D9E);
    case 0x9D9Fu: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_1D9F);
    case 0x9DA2u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1DA2);
    case 0x9DA5u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1DA5);
    case 0x9DA7u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1DA7);
    case 0x9DAAu: return mm6_exec_op_C9_CMP_Imm(rt, kCtx_b57_1DAA);
    case 0x9DACu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1DAC);
    case 0x9DAEu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1DAE);
    case 0x9DB0u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1DB0);
    case 0x9DB3u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_1DB3);
    case 0x9DB4u: return mm6_exec_op_7D_ADC_AbsX(rt, kCtx_b57_1DB4);
    case 0x9DB7u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1DB7);
    case 0x9DBAu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1DBA);
    case 0x9DBDu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_1DBD);
    case 0x9DBEu: return mm6_exec_op_7D_ADC_AbsX(rt, kCtx_b57_1DBE);
    case 0x9DC1u: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1DC1);
    case 0x9DC4u: return mm6_exec_op_CA_DEX_Imp(rt, kCtx_b57_1DC4);
    case 0x9DC5u: return mm6_exec_op_10_BPL_Rel(rt, kCtx_b57_1DC5);
    case 0x9DC7u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1DC7);
    case 0x9E07u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E07);
    case 0x9E0Au: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1E0A);
    case 0x9E0Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E0C);
    case 0x9E0Fu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E0F);
    case 0x9E12u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1E12);
    case 0x9E1Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E1B);
    case 0x9E1Eu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_1E1E);
    case 0x9E20u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1E20);
    case 0x9E22u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1E22);
    case 0x9E24u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1E24);
    case 0x9E26u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1E26);
    case 0x9E28u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E28);
    case 0x9E2Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1E2B);
    case 0x9E2Du: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1E2D);
    case 0x9E2Eu: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_1E2E);
    case 0x9E31u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1E31);
    case 0x9E34u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1E34);
    case 0x9E36u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b57_1E36);
    case 0x9E37u: return mm6_exec_op_ED_SBC_Abs(rt, kCtx_b57_1E37);
    case 0x9E3Au: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1E3A);
    case 0x9E3Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1E3D);
    case 0x9E3Fu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1E3F);
    case 0x9E42u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E42);
    case 0x9E45u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E45);
    case 0x9E48u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E48);
    case 0x9E4Bu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E4B);
    case 0x9E4Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E4E);
    case 0x9E51u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1E51);
    case 0x9E53u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E53);
    case 0x9E56u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E56);
    case 0x9E59u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E59);
    case 0x9E5Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E5C);
    case 0x9E5Fu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1E5F);
    case 0x9E61u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E61);
    case 0x9E64u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E64);
    case 0x9E67u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1E67);
    case 0x9E89u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E89);
    case 0x9E8Cu: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b57_1E8C);
    case 0x9E8Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1E8E);
    case 0x9E90u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1E90);
    case 0x9E92u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1E92);
    case 0x9E94u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1E94);
    case 0x9E96u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E96);
    case 0x9E99u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1E99);
    case 0x9E9Bu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1E9B);
    case 0x9E9Eu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1E9E);
    case 0x9EA1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1EA1);
    case 0x9EA3u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1EA3);
    case 0x9EA5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1EA5);
    case 0x9EA7u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1EA7);
    case 0x9EAAu: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1EAA);
    case 0x9EADu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1EAD);
    case 0x9EAFu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1EAF);
    case 0x9EB2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1EB2);
    case 0x9EB4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1EB4);
    case 0x9EB7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1EB7);
    case 0x9EB9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1EB9);
    case 0x9EBCu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1EBC);
    case 0x9EBEu: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1EBE);
    case 0x9EC0u: return mm6_exec_op_CD_CMP_Abs(rt, kCtx_b57_1EC0);
    case 0x9EC3u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1EC3);
    case 0x9EC5u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b57_1EC5);
    case 0x9EC7u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1EC7);
    case 0x9EC9u: return mm6_exec_op_A8_TAY_Imp(rt, kCtx_b57_1EC9);
    case 0x9ECAu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1ECA);
    case 0x9ECDu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1ECD);
    case 0x9ECFu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1ECF);
    case 0x9ED2u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1ED2);
    case 0x9ED5u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1ED5);
    case 0x9ED8u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1ED8);
    case 0x9EDBu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1EDB);
    case 0x9EDEu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1EDE);
    case 0x9EE0u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1EE0);
    case 0x9EE2u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1EE2);
    case 0x9EE4u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1EE4);
    case 0x9EE7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1EE7);
    case 0x9EE9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1EE9);
    case 0x9EECu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1EEC);
    case 0x9EEEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1EEE);
    case 0x9EF1u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1EF1);
    case 0x9EF3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1EF3);
    case 0x9EF6u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b57_1EF6);
    case 0x9EF8u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1EF8);
    case 0x9EFBu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1EFB);
    case 0x9EFDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1EFD);
    case 0x9F00u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1F00);
    case 0x9F03u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1F03);
    case 0x9F05u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1F05);
    case 0x9F08u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b57_1F08);
    case 0x9F0Bu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1F0B);
    case 0x9F0Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1F0D);
    case 0x9F10u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1F10);
    case 0x9F12u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1F12);
    case 0x9F15u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1F15);
    case 0x9F17u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1F17);
    case 0x9F1Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1F1A);
    case 0x9F1Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1F1C);
    case 0x9F1Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1F1E);
    case 0x9F20u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b57_1F20);
    case 0x9F23u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1F23);
    case 0x9F25u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1F25);
    case 0x9F28u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1F28);
    case 0x9F4Bu: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b57_1F4B);
    case 0x9F4Eu: return mm6_exec_op_0D_ORA_Abs(rt, kCtx_b57_1F4E);
    case 0x9F51u: return mm6_exec_op_0D_ORA_Abs(rt, kCtx_b57_1F51);
    case 0x9F54u: return mm6_exec_op_0D_ORA_Abs(rt, kCtx_b57_1F54);
    case 0x9F57u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1F57);
    case 0x9F59u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b57_1F59);
    case 0x9F5Bu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1F5B);
    case 0x9F5Du: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1F5D);
    case 0x9F60u: return mm6_exec_op_A4_LDY_Zero(rt, kCtx_b57_1F60);
    case 0x9F62u: return mm6_exec_op_B9_LDA_AbsY(rt, kCtx_b57_1F62);
    case 0x9F65u: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b57_1F65);
    case 0x9F66u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1F66);
    case 0x9F68u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b57_1F68);
    case 0x9F6Au: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1F6A);
    case 0x9F6Cu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1F6C);
    case 0x9F6Eu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1F6E);
    case 0x9F70u: return mm6_exec_op_8A_TXA_Imp(rt, kCtx_b57_1F70);
    case 0x9F71u: return mm6_exec_op_29_AND_Imm(rt, kCtx_b57_1F71);
    case 0x9F73u: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_1F73);
    case 0x9F74u: return mm6_exec_op_69_ADC_Imm(rt, kCtx_b57_1F74);
    case 0x9F76u: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b57_1F76);
    case 0x9F77u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1F77);
    case 0x9F7Bu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1F7B);
    case 0x9F7Du: return mm6_exec_op_86_STX_Zero(rt, kCtx_b57_1F7D);
    case 0x9F7Fu: return mm6_exec_op_18_CLC_Imp(rt, kCtx_b57_1F7F);
    case 0x9F80u: return mm6_exec_op_65_ADC_Zero(rt, kCtx_b57_1F80);
    case 0x9F82u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b57_1F82);
    case 0x9F84u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1F84);
    case 0x9F87u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b57_1F87);
    case 0x9F8Au: return mm6_exec_op_9D_STA_AbsXW(rt, kCtx_b57_1F8A);
    case 0x9F8Du: return mm6_exec_op_E8_INX_Imp(rt, kCtx_b57_1F8D);
    case 0x9F8Eu: return mm6_exec_op_C6_DEC_Zero(rt, kCtx_b57_1F8E);
    case 0x9F90u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b57_1F90);
    case 0x9F92u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b57_1F92);
    case 0x9F93u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1F93);
    case 0x9F95u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1F95);
    case 0x9F98u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b57_1F98);
    case 0x9F9Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b57_1F9A);
    case 0x9F9Du: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b57_1F9D);
    default: return mm6_trap_dispatch_miss(rt, 57u, cpu_pc);
  }
}
