// Generated static authority, losslessly compacted for release 1.2.0.
// Every physical-bank/CPU-PC identity still calls its fixed semantic helper.
#include "mm6_v05_contract.h"

namespace {
static constexpr MM6FlowEdgeSpec kEdges_b61_1D00[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD01u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D00 = {61u, 0xBD00u, 0x1D00u, 0u, 0u, nullptr, 0u, kEdges_b61_1D00, sizeof(kEdges_b61_1D00) / sizeof(kEdges_b61_1D00[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D01[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD03u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D01 = {61u, 0xBD01u, 0x1D01u, 0x0090u, 1u, nullptr, 0u, kEdges_b61_1D01, sizeof(kEdges_b61_1D01) / sizeof(kEdges_b61_1D01[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D03[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD05u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D03 = {61u, 0xBD03u, 0x1D03u, 0x0002u, 1u, nullptr, 0u, kEdges_b61_1D03, sizeof(kEdges_b61_1D03) / sizeof(kEdges_b61_1D03[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D05[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F0u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBD08u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D05 = {61u, 0xBD05u, 0x1D05u, 0xC5F0u, 2u, nullptr, 0u, kEdges_b61_1D05, sizeof(kEdges_b61_1D05) / sizeof(kEdges_b61_1D05[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D08[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D08 = {61u, 0xBD08u, 0x1D08u, 0x0000u, 1u, nullptr, 0u, kEdges_b61_1D08, sizeof(kEdges_b61_1D08) / sizeof(kEdges_b61_1D08[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D0A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD0Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D0A = {61u, 0xBD0Au, 0x1D0Au, 0x00F7u, 1u, nullptr, 0u, kEdges_b61_1D0A, sizeof(kEdges_b61_1D0A) / sizeof(kEdges_b61_1D0A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D0C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD0Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D0C = {61u, 0xBD0Cu, 0x1D0Cu, 0x00F9u, 1u, nullptr, 0u, kEdges_b61_1D0C, sizeof(kEdges_b61_1D0C) / sizeof(kEdges_b61_1D0C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D0E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD11u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D0E = {61u, 0xBD0Eu, 0x1D0Eu, 0x069Du, 2u, nullptr, 0u, kEdges_b61_1D0E, sizeof(kEdges_b61_1D0E) / sizeof(kEdges_b61_1D0E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D11[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD14u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D11 = {61u, 0xBD11u, 0x1D11u, 0x069Cu, 2u, nullptr, 0u, kEdges_b61_1D11, sizeof(kEdges_b61_1D11) / sizeof(kEdges_b61_1D11[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D14[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD16u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D14 = {61u, 0xBD14u, 0x1D14u, 0x00F4u, 1u, nullptr, 0u, kEdges_b61_1D14, sizeof(kEdges_b61_1D14) / sizeof(kEdges_b61_1D14[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D16[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 61, 0xBD1Au, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D16 = {61u, 0xBD16u, 0x1D16u, 0xCB28u, 2u, nullptr, 0u, kEdges_b61_1D16, sizeof(kEdges_b61_1D16) / sizeof(kEdges_b61_1D16[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D1A[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBD1Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D1A = {61u, 0xBD1Au, 0x1D1Au, 0xE1DDu, 2u, nullptr, 0u, kEdges_b61_1D1A, sizeof(kEdges_b61_1D1A) / sizeof(kEdges_b61_1D1A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D1D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD1Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D1D = {61u, 0xBD1Du, 0x1D1Du, 0x000Du, 1u, nullptr, 0u, kEdges_b61_1D1D, sizeof(kEdges_b61_1D1D) / sizeof(kEdges_b61_1D1D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D1F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD21u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D1F = {61u, 0xBD1Fu, 0x1D1Fu, 0x00DCu, 1u, nullptr, 0u, kEdges_b61_1D1F, sizeof(kEdges_b61_1D1F) / sizeof(kEdges_b61_1D1F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D21[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD23u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D21 = {61u, 0xBD21u, 0x1D21u, 0x007Cu, 1u, nullptr, 0u, kEdges_b61_1D21, sizeof(kEdges_b61_1D21) / sizeof(kEdges_b61_1D21[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D23[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD25u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D23 = {61u, 0xBD23u, 0x1D23u, 0x0052u, 1u, nullptr, 0u, kEdges_b61_1D23, sizeof(kEdges_b61_1D23) / sizeof(kEdges_b61_1D23[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D25[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD27u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D25 = {61u, 0xBD25u, 0x1D25u, 0x00BDu, 1u, nullptr, 0u, kEdges_b61_1D25, sizeof(kEdges_b61_1D25) / sizeof(kEdges_b61_1D25[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D27[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD29u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D27 = {61u, 0xBD27u, 0x1D27u, 0x0053u, 1u, nullptr, 0u, kEdges_b61_1D27, sizeof(kEdges_b61_1D27) / sizeof(kEdges_b61_1D27[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D29[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 61, 0xBD31u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBD2Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D29 = {61u, 0xBD29u, 0x1D29u, 0xBD31u, 2u, nullptr, 0u, kEdges_b61_1D29, sizeof(kEdges_b61_1D29) / sizeof(kEdges_b61_1D29[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D2C[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 61, 0xBD30u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D2C = {61u, 0xBD2Cu, 0x1D2Cu, 0xCB28u, 2u, nullptr, 0u, kEdges_b61_1D2C, sizeof(kEdges_b61_1D2C) / sizeof(kEdges_b61_1D2C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D30[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D30 = {61u, 0xBD30u, 0x1D30u, 0u, 0u, nullptr, 0u, kEdges_b61_1D30, sizeof(kEdges_b61_1D30) / sizeof(kEdges_b61_1D30[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D31[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD33u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D31 = {61u, 0xBD31u, 0x1D31u, 0x0000u, 1u, nullptr, 0u, kEdges_b61_1D31, sizeof(kEdges_b61_1D31) / sizeof(kEdges_b61_1D31[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D33[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD36u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D33 = {61u, 0xBD33u, 0x1D33u, 0x05F6u, 2u, nullptr, 0u, kEdges_b61_1D33, sizeof(kEdges_b61_1D33) / sizeof(kEdges_b61_1D33[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D36[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD39u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D36 = {61u, 0xBD36u, 0x1D36u, 0x0624u, 2u, nullptr, 0u, kEdges_b61_1D36, sizeof(kEdges_b61_1D36) / sizeof(kEdges_b61_1D36[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D39[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD3Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D39 = {61u, 0xBD39u, 0x1D39u, 0x05F6u, 2u, nullptr, 0u, kEdges_b61_1D39, sizeof(kEdges_b61_1D39) / sizeof(kEdges_b61_1D39[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D3C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD3Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D3C = {61u, 0xBD3Cu, 0x1D3Cu, 0x0052u, 1u, nullptr, 0u, kEdges_b61_1D3C, sizeof(kEdges_b61_1D3C) / sizeof(kEdges_b61_1D3C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D3E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD40u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 61, 0xBD5Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D3E = {61u, 0xBD3Eu, 0x1D3Eu, 0xBD5Au, 1u, nullptr, 0u, kEdges_b61_1D3E, sizeof(kEdges_b61_1D3E) / sizeof(kEdges_b61_1D3E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D40[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD41u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D40 = {61u, 0xBD40u, 0x1D40u, 0u, 0u, nullptr, 0u, kEdges_b61_1D40, sizeof(kEdges_b61_1D40) / sizeof(kEdges_b61_1D40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D41[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD42u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D41 = {61u, 0xBD41u, 0x1D41u, 0u, 0u, nullptr, 0u, kEdges_b61_1D41, sizeof(kEdges_b61_1D41) / sizeof(kEdges_b61_1D41[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D42[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD44u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D42 = {61u, 0xBD42u, 0x1D42u, 0x0052u, 1u, nullptr, 0u, kEdges_b61_1D42, sizeof(kEdges_b61_1D42) / sizeof(kEdges_b61_1D42[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D44[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD45u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D44 = {61u, 0xBD44u, 0x1D44u, 0u, 0u, nullptr, 0u, kEdges_b61_1D44, sizeof(kEdges_b61_1D44) / sizeof(kEdges_b61_1D44[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D45[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD48u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D45 = {61u, 0xBD45u, 0x1D45u, 0x05F6u, 2u, nullptr, 0u, kEdges_b61_1D45, sizeof(kEdges_b61_1D45) / sizeof(kEdges_b61_1D45[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D48[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD49u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D48 = {61u, 0xBD48u, 0x1D48u, 0u, 0u, nullptr, 0u, kEdges_b61_1D48, sizeof(kEdges_b61_1D48) / sizeof(kEdges_b61_1D48[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D49[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD4Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D49 = {61u, 0xBD49u, 0x1D49u, 0xBD5Eu, 2u, nullptr, 0u, kEdges_b61_1D49, sizeof(kEdges_b61_1D49) / sizeof(kEdges_b61_1D49[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D4C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD4Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D4C = {61u, 0xBD4Cu, 0x1D4Cu, 0x0008u, 1u, nullptr, 0u, kEdges_b61_1D4C, sizeof(kEdges_b61_1D4C) / sizeof(kEdges_b61_1D4C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D4E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD51u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D4E = {61u, 0xBD4Eu, 0x1D4Eu, 0xBD6Du, 2u, nullptr, 0u, kEdges_b61_1D4E, sizeof(kEdges_b61_1D4E) / sizeof(kEdges_b61_1D4E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D51[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD53u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D51 = {61u, 0xBD51u, 0x1D51u, 0x0009u, 1u, nullptr, 0u, kEdges_b61_1D51, sizeof(kEdges_b61_1D51) / sizeof(kEdges_b61_1D51[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D53[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBD54u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D53 = {61u, 0xBD53u, 0x1D53u, 0u, 0u, nullptr, 0u, kEdges_b61_1D53, sizeof(kEdges_b61_1D53) / sizeof(kEdges_b61_1D53[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D54[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 61, 0xBD5Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBD57u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D54 = {61u, 0xBD54u, 0x1D54u, 0xBD5Bu, 2u, nullptr, 0u, kEdges_b61_1D54, sizeof(kEdges_b61_1D54) / sizeof(kEdges_b61_1D54[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D57[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 61, 0xBD39u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D57 = {61u, 0xBD57u, 0x1D57u, 0xBD39u, 2u, nullptr, 0u, kEdges_b61_1D57, sizeof(kEdges_b61_1D57) / sizeof(kEdges_b61_1D57[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D5A[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D5A = {61u, 0xBD5Au, 0x1D5Au, 0u, 0u, nullptr, 0u, kEdges_b61_1D5A, sizeof(kEdges_b61_1D5A) / sizeof(kEdges_b61_1D5A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1D5B[] = {
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 60, 0x8631u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 61, 0xBE39u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 61, 0xBE41u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 61, 0xBE5Cu, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 61, 0xBE6Au, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 61, 0xBE93u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 61, 0xBEF9u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 61, 0xBF00u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 61, 0xBF2Cu, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 61, 0xBF33u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 62, 0xC9BFu, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 62, 0xC9EFu, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 62, 0xCA89u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 62, 0xCAA4u, "", ""},
  {"finite_indirect_target", MM6EdgeStatus::Resolved, 62, 0xDEA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1D5B = {61u, 0xBD5Bu, 0x1D5Bu, 0x0008u, 2u, nullptr, 0u, kEdges_b61_1D5B, sizeof(kEdges_b61_1D5B) / sizeof(kEdges_b61_1D5B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E39[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA3Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBE3Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E39 = {61u, 0xBE39u, 0x1E39u, 0xCA3Du, 2u, nullptr, 0u, kEdges_b61_1E39, sizeof(kEdges_b61_1E39) / sizeof(kEdges_b61_1E39[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E3C[] = {
  {"cb28_exact_mapped_call", MM6EdgeStatus::Resolved, 58, 0x8000u, "", ""},
  {"cb28_inline_parameter_continuation", MM6EdgeStatus::Resolved, 61, 0xBE40u, "", ""},
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCB28u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E3C = {61u, 0xBE3Cu, 0x1E3Cu, 0xCB28u, 2u, nullptr, 0u, kEdges_b61_1E3C, sizeof(kEdges_b61_1E3C) / sizeof(kEdges_b61_1E3C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E40[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E40 = {61u, 0xBE40u, 0x1E40u, 0u, 0u, nullptr, 0u, kEdges_b61_1E40, sizeof(kEdges_b61_1E40) / sizeof(kEdges_b61_1E40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E41[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE44u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E41 = {61u, 0xBE41u, 0x1E41u, 0x05C8u, 2u, nullptr, 0u, kEdges_b61_1E41, sizeof(kEdges_b61_1E41) / sizeof(kEdges_b61_1E41[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E44[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC62Bu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBE47u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E44 = {61u, 0xBE44u, 0x1E44u, 0xC62Bu, 2u, nullptr, 0u, kEdges_b61_1E44, sizeof(kEdges_b61_1E44) / sizeof(kEdges_b61_1E44[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E47[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE49u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E47 = {61u, 0xBE47u, 0x1E47u, 0x0040u, 1u, nullptr, 0u, kEdges_b61_1E47, sizeof(kEdges_b61_1E47) / sizeof(kEdges_b61_1E47[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E49[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE4Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 61, 0xBE51u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E49 = {61u, 0xBE49u, 0x1E49u, 0xBE51u, 1u, nullptr, 0u, kEdges_b61_1E49, sizeof(kEdges_b61_1E49) / sizeof(kEdges_b61_1E49[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E4B[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE4Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E4B = {61u, 0xBE4Bu, 0x1E4Bu, 0x05C8u, 2u, nullptr, 0u, kEdges_b61_1E4B, sizeof(kEdges_b61_1E4B) / sizeof(kEdges_b61_1E4B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E4E[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE50u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 61, 0xBE44u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E4E = {61u, 0xBE4Eu, 0x1E4Eu, 0xBE44u, 1u, nullptr, 0u, kEdges_b61_1E4E, sizeof(kEdges_b61_1E4E) / sizeof(kEdges_b61_1E4E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E50[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E50 = {61u, 0xBE50u, 0x1E50u, 0u, 0u, nullptr, 0u, kEdges_b61_1E50, sizeof(kEdges_b61_1E50) / sizeof(kEdges_b61_1E50[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E51[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA3Du, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBE54u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E51 = {61u, 0xBE51u, 0x1E51u, 0xCA3Du, 2u, nullptr, 0u, kEdges_b61_1E51, sizeof(kEdges_b61_1E51) / sizeof(kEdges_b61_1E51[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E54[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE56u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E54 = {61u, 0xBE54u, 0x1E54u, 0x00F0u, 1u, nullptr, 0u, kEdges_b61_1E54, sizeof(kEdges_b61_1E54) / sizeof(kEdges_b61_1E54[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E56[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE58u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E56 = {61u, 0xBE56u, 0x1E56u, 0x00DCu, 1u, nullptr, 0u, kEdges_b61_1E56, sizeof(kEdges_b61_1E56) / sizeof(kEdges_b61_1E56[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E58[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE5Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E58 = {61u, 0xBE58u, 0x1E58u, 0x0090u, 1u, nullptr, 0u, kEdges_b61_1E58, sizeof(kEdges_b61_1E58) / sizeof(kEdges_b61_1E58[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E5A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE5Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E5A = {61u, 0xBE5Au, 0x1E5Au, 0u, 0u, nullptr, 0u, kEdges_b61_1E5A, sizeof(kEdges_b61_1E5A) / sizeof(kEdges_b61_1E5A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E5B[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E5B = {61u, 0xBE5Bu, 0x1E5Bu, 0u, 0u, nullptr, 0u, kEdges_b61_1E5B, sizeof(kEdges_b61_1E5B) / sizeof(kEdges_b61_1E5B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E5C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE5Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E5C = {61u, 0xBE5Cu, 0x1E5Cu, 0x0001u, 1u, nullptr, 0u, kEdges_b61_1E5C, sizeof(kEdges_b61_1E5C) / sizeof(kEdges_b61_1E5C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E5E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE61u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E5E = {61u, 0xBE5Eu, 0x1E5Eu, 0x069Fu, 2u, nullptr, 0u, kEdges_b61_1E5E, sizeof(kEdges_b61_1E5E) / sizeof(kEdges_b61_1E5E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E61[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 60, 0x8631u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBE64u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E61 = {61u, 0xBE61u, 0x1E61u, 0x8631u, 2u, nullptr, 0u, kEdges_b61_1E61, sizeof(kEdges_b61_1E61) / sizeof(kEdges_b61_1E61[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E64[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE66u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E64 = {61u, 0xBE64u, 0x1E64u, 0x0000u, 1u, nullptr, 0u, kEdges_b61_1E64, sizeof(kEdges_b61_1E64) / sizeof(kEdges_b61_1E64[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E66[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE69u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E66 = {61u, 0xBE66u, 0x1E66u, 0x069Fu, 2u, nullptr, 0u, kEdges_b61_1E66, sizeof(kEdges_b61_1E66) / sizeof(kEdges_b61_1E66[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E69[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E69 = {61u, 0xBE69u, 0x1E69u, 0u, 0u, nullptr, 0u, kEdges_b61_1E69, sizeof(kEdges_b61_1E69) / sizeof(kEdges_b61_1E69[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E6A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE6Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E6A = {61u, 0xBE6Au, 0x1E6Au, 0x0083u, 1u, nullptr, 0u, kEdges_b61_1E6A, sizeof(kEdges_b61_1E6A) / sizeof(kEdges_b61_1E6A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E6C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE6Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E6C = {61u, 0xBE6Cu, 0x1E6Cu, 0x000Cu, 1u, nullptr, 0u, kEdges_b61_1E6C, sizeof(kEdges_b61_1E6C) / sizeof(kEdges_b61_1E6C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E6E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE70u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E6E = {61u, 0xBE6Eu, 0x1E6Eu, 0x00BEu, 1u, nullptr, 0u, kEdges_b61_1E6E, sizeof(kEdges_b61_1E6E) / sizeof(kEdges_b61_1E6E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E70[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE72u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E70 = {61u, 0xBE70u, 0x1E70u, 0x000Du, 1u, nullptr, 0u, kEdges_b61_1E70, sizeof(kEdges_b61_1E70) / sizeof(kEdges_b61_1E70[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E72[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF254u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBE75u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E72 = {61u, 0xBE72u, 0x1E72u, 0xF254u, 2u, nullptr, 0u, kEdges_b61_1E72, sizeof(kEdges_b61_1E72) / sizeof(kEdges_b61_1E72[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E75[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E75 = {61u, 0xBE75u, 0x1E75u, 0xE1DDu, 2u, nullptr, 0u, kEdges_b61_1E75, sizeof(kEdges_b61_1E75) / sizeof(kEdges_b61_1E75[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E93[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE96u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E93 = {61u, 0xBE93u, 0x1E93u, 0x0624u, 2u, nullptr, 0u, kEdges_b61_1E93, sizeof(kEdges_b61_1E93) / sizeof(kEdges_b61_1E93[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E96[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE98u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 61, 0xBEA3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E96 = {61u, 0xBE96u, 0x1E96u, 0xBEA3u, 1u, nullptr, 0u, kEdges_b61_1E96, sizeof(kEdges_b61_1E96) / sizeof(kEdges_b61_1E96[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E98[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE9Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E98 = {61u, 0xBE98u, 0x1E98u, 0x007Fu, 1u, nullptr, 0u, kEdges_b61_1E98, sizeof(kEdges_b61_1E98) / sizeof(kEdges_b61_1E98[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E9A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE9Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E9A = {61u, 0xBE9Au, 0x1E9Au, 0x000Cu, 1u, nullptr, 0u, kEdges_b61_1E9A, sizeof(kEdges_b61_1E9A) / sizeof(kEdges_b61_1E9A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E9C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBE9Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E9C = {61u, 0xBE9Cu, 0x1E9Cu, 0x00BEu, 1u, nullptr, 0u, kEdges_b61_1E9C, sizeof(kEdges_b61_1E9C) / sizeof(kEdges_b61_1E9C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1E9E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEA0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1E9E = {61u, 0xBE9Eu, 0x1E9Eu, 0x000Du, 1u, nullptr, 0u, kEdges_b61_1E9E, sizeof(kEdges_b61_1E9E) / sizeof(kEdges_b61_1E9E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EA0[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 61, 0xBEABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EA0 = {61u, 0xBEA0u, 0x1EA0u, 0xBEABu, 2u, nullptr, 0u, kEdges_b61_1EA0, sizeof(kEdges_b61_1EA0) / sizeof(kEdges_b61_1EA0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EA3[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEA5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EA3 = {61u, 0xBEA3u, 0x1EA3u, 0x0078u, 1u, nullptr, 0u, kEdges_b61_1EA3, sizeof(kEdges_b61_1EA3) / sizeof(kEdges_b61_1EA3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EA5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEA7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EA5 = {61u, 0xBEA5u, 0x1EA5u, 0x000Cu, 1u, nullptr, 0u, kEdges_b61_1EA5, sizeof(kEdges_b61_1EA5) / sizeof(kEdges_b61_1EA5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EA7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEA9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EA7 = {61u, 0xBEA7u, 0x1EA7u, 0x00BEu, 1u, nullptr, 0u, kEdges_b61_1EA7, sizeof(kEdges_b61_1EA7) / sizeof(kEdges_b61_1EA7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EA9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEABu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EA9 = {61u, 0xBEA9u, 0x1EA9u, 0x000Du, 1u, nullptr, 0u, kEdges_b61_1EA9, sizeof(kEdges_b61_1EA9) / sizeof(kEdges_b61_1EA9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EAB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xF258u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBEAEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EAB = {61u, 0xBEABu, 0x1EABu, 0xF258u, 2u, nullptr, 0u, kEdges_b61_1EAB, sizeof(kEdges_b61_1EAB) / sizeof(kEdges_b61_1EAB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EAE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 63, 0xE1DDu, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBEB1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EAE = {61u, 0xBEAEu, 0x1EAEu, 0xE1DDu, 2u, nullptr, 0u, kEdges_b61_1EAE, sizeof(kEdges_b61_1EAE) / sizeof(kEdges_b61_1EAE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EB1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEB4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EB1 = {61u, 0xBEB1u, 0x1EB1u, 0x0624u, 2u, nullptr, 0u, kEdges_b61_1EB1, sizeof(kEdges_b61_1EB1) / sizeof(kEdges_b61_1EB1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EB4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEB6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EB4 = {61u, 0xBEB4u, 0x1EB4u, 0x0016u, 1u, nullptr, 0u, kEdges_b61_1EB4, sizeof(kEdges_b61_1EB4) / sizeof(kEdges_b61_1EB4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EB6[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5C7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EB6 = {61u, 0xBEB6u, 0x1EB6u, 0xC5C7u, 2u, nullptr, 0u, kEdges_b61_1EB6, sizeof(kEdges_b61_1EB6) / sizeof(kEdges_b61_1EB6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EB9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEBBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EB9 = {61u, 0xBEB9u, 0x1EB9u, 0x0042u, 1u, nullptr, 0u, kEdges_b61_1EB9, sizeof(kEdges_b61_1EB9) / sizeof(kEdges_b61_1EB9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EBB[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBEBEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EBB = {61u, 0xBEBBu, 0x1EBBu, 0xC5F6u, 2u, nullptr, 0u, kEdges_b61_1EBB, sizeof(kEdges_b61_1EBB) / sizeof(kEdges_b61_1EBB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EBE[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEC0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EBE = {61u, 0xBEBEu, 0x1EBEu, 0x0030u, 1u, nullptr, 0u, kEdges_b61_1EBE, sizeof(kEdges_b61_1EBE) / sizeof(kEdges_b61_1EBE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EC0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEC2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EC0 = {61u, 0xBEC0u, 0x1EC0u, 0x0049u, 1u, nullptr, 0u, kEdges_b61_1EC0, sizeof(kEdges_b61_1EC0) / sizeof(kEdges_b61_1EC0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EC2[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEC4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EC2 = {61u, 0xBEC2u, 0x1EC2u, 0x0004u, 1u, nullptr, 0u, kEdges_b61_1EC2, sizeof(kEdges_b61_1EC2) / sizeof(kEdges_b61_1EC2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EC4[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEC7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EC4 = {61u, 0xBEC4u, 0x1EC4u, 0x05B1u, 2u, nullptr, 0u, kEdges_b61_1EC4, sizeof(kEdges_b61_1EC4) / sizeof(kEdges_b61_1EC4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EC7[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEC9u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EC7 = {61u, 0xBEC7u, 0x1EC7u, 0x000Fu, 1u, nullptr, 0u, kEdges_b61_1EC7, sizeof(kEdges_b61_1EC7) / sizeof(kEdges_b61_1EC7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EC9[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBECCu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EC9 = {61u, 0xBEC9u, 0x1EC9u, 0xCA71u, 2u, nullptr, 0u, kEdges_b61_1EC9, sizeof(kEdges_b61_1EC9) / sizeof(kEdges_b61_1EC9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1ECC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBECEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1ECC = {61u, 0xBECCu, 0x1ECCu, 0x000Bu, 1u, nullptr, 0u, kEdges_b61_1ECC, sizeof(kEdges_b61_1ECC) / sizeof(kEdges_b61_1ECC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1ECE[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBED1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1ECE = {61u, 0xBECEu, 0x1ECEu, 0xCA71u, 2u, nullptr, 0u, kEdges_b61_1ECE, sizeof(kEdges_b61_1ECE) / sizeof(kEdges_b61_1ECE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1ED1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBED3u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1ED1 = {61u, 0xBED1u, 0x1ED1u, 0x0007u, 1u, nullptr, 0u, kEdges_b61_1ED1, sizeof(kEdges_b61_1ED1) / sizeof(kEdges_b61_1ED1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1ED3[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBED6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1ED3 = {61u, 0xBED3u, 0x1ED3u, 0xCA71u, 2u, nullptr, 0u, kEdges_b61_1ED3, sizeof(kEdges_b61_1ED3) / sizeof(kEdges_b61_1ED3[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1ED6[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBED8u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1ED6 = {61u, 0xBED6u, 0x1ED6u, 0x001Fu, 1u, nullptr, 0u, kEdges_b61_1ED6, sizeof(kEdges_b61_1ED6) / sizeof(kEdges_b61_1ED6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1ED8[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBEDBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1ED8 = {61u, 0xBED8u, 0x1ED8u, 0xCA71u, 2u, nullptr, 0u, kEdges_b61_1ED8, sizeof(kEdges_b61_1ED8) / sizeof(kEdges_b61_1ED8[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EDB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEDDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EDB = {61u, 0xBEDBu, 0x1EDBu, 0x001Bu, 1u, nullptr, 0u, kEdges_b61_1EDB, sizeof(kEdges_b61_1EDB) / sizeof(kEdges_b61_1EDB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EDD[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBEE0u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EDD = {61u, 0xBEDDu, 0x1EDDu, 0xCA71u, 2u, nullptr, 0u, kEdges_b61_1EDD, sizeof(kEdges_b61_1EDD) / sizeof(kEdges_b61_1EDD[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EE0[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEE2u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EE0 = {61u, 0xBEE0u, 0x1EE0u, 0x0017u, 1u, nullptr, 0u, kEdges_b61_1EE0, sizeof(kEdges_b61_1EE0) / sizeof(kEdges_b61_1EE0[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EE2[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBEE5u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EE2 = {61u, 0xBEE2u, 0x1EE2u, 0xCA71u, 2u, nullptr, 0u, kEdges_b61_1EE2, sizeof(kEdges_b61_1EE2) / sizeof(kEdges_b61_1EE2[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EE5[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEE7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EE5 = {61u, 0xBEE5u, 0x1EE5u, 0x000Cu, 1u, nullptr, 0u, kEdges_b61_1EE5, sizeof(kEdges_b61_1EE5) / sizeof(kEdges_b61_1EE5[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EE7[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBEEAu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EE7 = {61u, 0xBEE7u, 0x1EE7u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b61_1EE7, sizeof(kEdges_b61_1EE7) / sizeof(kEdges_b61_1EE7[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EEA[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEECu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EEA = {61u, 0xBEEAu, 0x1EEAu, 0x0049u, 1u, nullptr, 0u, kEdges_b61_1EEA, sizeof(kEdges_b61_1EEA) / sizeof(kEdges_b61_1EEA[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EEC[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEEDu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EEC = {61u, 0xBEECu, 0x1EECu, 0u, 0u, nullptr, 0u, kEdges_b61_1EEC, sizeof(kEdges_b61_1EEC) / sizeof(kEdges_b61_1EEC[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EED[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEEFu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EED = {61u, 0xBEEDu, 0x1EEDu, 0x0010u, 1u, nullptr, 0u, kEdges_b61_1EED, sizeof(kEdges_b61_1EED) / sizeof(kEdges_b61_1EED[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EEF[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEF1u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EEF = {61u, 0xBEEFu, 0x1EEFu, 0x0049u, 1u, nullptr, 0u, kEdges_b61_1EEF, sizeof(kEdges_b61_1EEF) / sizeof(kEdges_b61_1EEF[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EF1[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEF4u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EF1 = {61u, 0xBEF1u, 0x1EF1u, 0x05B1u, 2u, nullptr, 0u, kEdges_b61_1EF1, sizeof(kEdges_b61_1EF1) / sizeof(kEdges_b61_1EF1[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EF4[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEF6u, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 61, 0xBEC7u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EF4 = {61u, 0xBEF4u, 0x1EF4u, 0xBEC7u, 1u, nullptr, 0u, kEdges_b61_1EF4, sizeof(kEdges_b61_1EF4) / sizeof(kEdges_b61_1EF4[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EF6[] = {
  {"direct_jmp", MM6EdgeStatus::Resolved, 62, 0xC5E6u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EF6 = {61u, 0xBEF6u, 0x1EF6u, 0xC5E6u, 2u, nullptr, 0u, kEdges_b61_1EF6, sizeof(kEdges_b61_1EF6) / sizeof(kEdges_b61_1EF6[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EF9[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEFBu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EF9 = {61u, 0xBEF9u, 0x1EF9u, 0x0007u, 1u, nullptr, 0u, kEdges_b61_1EF9, sizeof(kEdges_b61_1EF9) / sizeof(kEdges_b61_1EF9[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EFB[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBEFEu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EFB = {61u, 0xBEFBu, 0x1EFBu, 0x05DFu, 2u, nullptr, 0u, kEdges_b61_1EFB, sizeof(kEdges_b61_1EFB) / sizeof(kEdges_b61_1EFB[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1EFE[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 61, 0xBF05u, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 61, 0xBF00u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1EFE = {61u, 0xBEFEu, 0x1EFEu, 0xBF05u, 1u, nullptr, 0u, kEdges_b61_1EFE, sizeof(kEdges_b61_1EFE) / sizeof(kEdges_b61_1EFE[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F00[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF02u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F00 = {61u, 0xBF00u, 0x1F00u, 0x0003u, 1u, nullptr, 0u, kEdges_b61_1F00, sizeof(kEdges_b61_1F00) / sizeof(kEdges_b61_1F00[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F02[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF05u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F02 = {61u, 0xBF02u, 0x1F02u, 0x05DFu, 2u, nullptr, 0u, kEdges_b61_1F02, sizeof(kEdges_b61_1F02) / sizeof(kEdges_b61_1F02[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F05[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF07u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F05 = {61u, 0xBF05u, 0x1F05u, 0x0005u, 1u, nullptr, 0u, kEdges_b61_1F05, sizeof(kEdges_b61_1F05) / sizeof(kEdges_b61_1F05[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F07[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF0Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F07 = {61u, 0xBF07u, 0x1F07u, 0x060Du, 2u, nullptr, 0u, kEdges_b61_1F07, sizeof(kEdges_b61_1F07) / sizeof(kEdges_b61_1F07[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F0A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF0Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F0A = {61u, 0xBF0Au, 0x1F0Au, 0x0030u, 1u, nullptr, 0u, kEdges_b61_1F0A, sizeof(kEdges_b61_1F0A) / sizeof(kEdges_b61_1F0A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F0C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF0Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F0C = {61u, 0xBF0Cu, 0x1F0Cu, 0x0049u, 1u, nullptr, 0u, kEdges_b61_1F0C, sizeof(kEdges_b61_1F0C) / sizeof(kEdges_b61_1F0C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F0E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF10u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F0E = {61u, 0xBF0Eu, 0x1F0Eu, 0x0004u, 1u, nullptr, 0u, kEdges_b61_1F0E, sizeof(kEdges_b61_1F0E) / sizeof(kEdges_b61_1F0E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F10[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF13u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F10 = {61u, 0xBF10u, 0x1F10u, 0x05B1u, 2u, nullptr, 0u, kEdges_b61_1F10, sizeof(kEdges_b61_1F10) / sizeof(kEdges_b61_1F10[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F13[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF16u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F13 = {61u, 0xBF13u, 0x1F13u, 0x05DFu, 2u, nullptr, 0u, kEdges_b61_1F13, sizeof(kEdges_b61_1F13) / sizeof(kEdges_b61_1F13[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F16[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA71u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBF19u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F16 = {61u, 0xBF16u, 0x1F16u, 0xCA71u, 2u, nullptr, 0u, kEdges_b61_1F16, sizeof(kEdges_b61_1F16) / sizeof(kEdges_b61_1F16[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F19[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF1Cu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F19 = {61u, 0xBF19u, 0x1F19u, 0x060Du, 2u, nullptr, 0u, kEdges_b61_1F19, sizeof(kEdges_b61_1F19) / sizeof(kEdges_b61_1F19[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F1C[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBF1Fu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F1C = {61u, 0xBF1Cu, 0x1F1Cu, 0xC5F6u, 2u, nullptr, 0u, kEdges_b61_1F1C, sizeof(kEdges_b61_1F1C) / sizeof(kEdges_b61_1F1C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F1F[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF21u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F1F = {61u, 0xBF1Fu, 0x1F1Fu, 0x0049u, 1u, nullptr, 0u, kEdges_b61_1F1F, sizeof(kEdges_b61_1F1F) / sizeof(kEdges_b61_1F1F[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F21[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF22u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F21 = {61u, 0xBF21u, 0x1F21u, 0u, 0u, nullptr, 0u, kEdges_b61_1F21, sizeof(kEdges_b61_1F21) / sizeof(kEdges_b61_1F21[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F22[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF24u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F22 = {61u, 0xBF22u, 0x1F22u, 0x0010u, 1u, nullptr, 0u, kEdges_b61_1F22, sizeof(kEdges_b61_1F22) / sizeof(kEdges_b61_1F22[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F24[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF26u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F24 = {61u, 0xBF24u, 0x1F24u, 0x0049u, 1u, nullptr, 0u, kEdges_b61_1F24, sizeof(kEdges_b61_1F24) / sizeof(kEdges_b61_1F24[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F26[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF29u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F26 = {61u, 0xBF26u, 0x1F26u, 0x05B1u, 2u, nullptr, 0u, kEdges_b61_1F26, sizeof(kEdges_b61_1F26) / sizeof(kEdges_b61_1F26[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F29[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF2Bu, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 61, 0xBF13u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F29 = {61u, 0xBF29u, 0x1F29u, 0xBF13u, 1u, nullptr, 0u, kEdges_b61_1F29, sizeof(kEdges_b61_1F29) / sizeof(kEdges_b61_1F29[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F2B[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F2B = {61u, 0xBF2Bu, 0x1F2Bu, 0u, 0u, nullptr, 0u, kEdges_b61_1F2B, sizeof(kEdges_b61_1F2B) / sizeof(kEdges_b61_1F2B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F2C[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF2Eu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F2C = {61u, 0xBF2Cu, 0x1F2Cu, 0x0007u, 1u, nullptr, 0u, kEdges_b61_1F2C, sizeof(kEdges_b61_1F2C) / sizeof(kEdges_b61_1F2C[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F2E[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF31u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F2E = {61u, 0xBF2Eu, 0x1F2Eu, 0x05DFu, 2u, nullptr, 0u, kEdges_b61_1F2E, sizeof(kEdges_b61_1F2E) / sizeof(kEdges_b61_1F2E[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F31[] = {
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 61, 0xBF38u, "", ""},
  {"formally_excluded_fallthrough", MM6EdgeStatus::ProvenRelation, 61, 0xBF33u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F31 = {61u, 0xBF31u, 0x1F31u, 0xBF38u, 1u, nullptr, 0u, kEdges_b61_1F31, sizeof(kEdges_b61_1F31) / sizeof(kEdges_b61_1F31[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F33[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF35u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F33 = {61u, 0xBF33u, 0x1F33u, 0x0003u, 1u, nullptr, 0u, kEdges_b61_1F33, sizeof(kEdges_b61_1F33) / sizeof(kEdges_b61_1F33[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F35[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF38u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F35 = {61u, 0xBF35u, 0x1F35u, 0x05DFu, 2u, nullptr, 0u, kEdges_b61_1F35, sizeof(kEdges_b61_1F35) / sizeof(kEdges_b61_1F35[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F38[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF3Au, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F38 = {61u, 0xBF38u, 0x1F38u, 0x0004u, 1u, nullptr, 0u, kEdges_b61_1F38, sizeof(kEdges_b61_1F38) / sizeof(kEdges_b61_1F38[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F3A[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF3Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F3A = {61u, 0xBF3Au, 0x1F3Au, 0x05B1u, 2u, nullptr, 0u, kEdges_b61_1F3A, sizeof(kEdges_b61_1F3A) / sizeof(kEdges_b61_1F3A[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F3D[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF40u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F3D = {61u, 0xBF3Du, 0x1F3Du, 0x05DFu, 2u, nullptr, 0u, kEdges_b61_1F3D, sizeof(kEdges_b61_1F3D) / sizeof(kEdges_b61_1F3D[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F40[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xCA59u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBF43u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F40 = {61u, 0xBF40u, 0x1F40u, 0xCA59u, 2u, nullptr, 0u, kEdges_b61_1F40, sizeof(kEdges_b61_1F40) / sizeof(kEdges_b61_1F40[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F43[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF45u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F43 = {61u, 0xBF43u, 0x1F43u, 0x0005u, 1u, nullptr, 0u, kEdges_b61_1F43, sizeof(kEdges_b61_1F43) / sizeof(kEdges_b61_1F43[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F45[] = {
  {"direct_jsr", MM6EdgeStatus::Resolved, 62, 0xC5F6u, "", ""},
  {"jsr_continuation", MM6EdgeStatus::Resolved, 61, 0xBF48u, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F45 = {61u, 0xBF45u, 0x1F45u, 0xC5F6u, 2u, nullptr, 0u, kEdges_b61_1F45, sizeof(kEdges_b61_1F45) / sizeof(kEdges_b61_1F45[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F48[] = {
  {"sequential_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF4Bu, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F48 = {61u, 0xBF48u, 0x1F48u, 0x05B1u, 2u, nullptr, 0u, kEdges_b61_1F48, sizeof(kEdges_b61_1F48) / sizeof(kEdges_b61_1F48[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F4B[] = {
  {"conditional_branch_fallthrough", MM6EdgeStatus::Resolved, 61, 0xBF4Du, "", ""},
  {"conditional_branch_target", MM6EdgeStatus::Resolved, 61, 0xBF3Du, "", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F4B = {61u, 0xBF4Bu, 0x1F4Bu, 0xBF3Du, 1u, nullptr, 0u, kEdges_b61_1F4B, sizeof(kEdges_b61_1F4B) / sizeof(kEdges_b61_1F4B[0])};

static constexpr MM6FlowEdgeSpec kEdges_b61_1F4D[] = {
  {"return", MM6EdgeStatus::ProvenRelation, -1, 0u, "JSR caller continuation from 6502 stack", ""},
};
static constexpr MM6InstructionContext kCtx_b61_1F4D = {61u, 0xBF4Du, 0x1F4Du, 0u, 0u, nullptr, 0u, kEdges_b61_1F4D, sizeof(kEdges_b61_1F4D) / sizeof(kEdges_b61_1F4D[0])};

} // namespace

MM6ExecResult mm6_dispatch_bank_61(MM6Runtime* rt, std::uint16_t cpu_pc) {
  switch (cpu_pc) {
    case 0xBD00u: return mm6_exec_op_BA_TSX_Imp(rt, kCtx_b61_1D00);
    case 0xBD01u: return mm6_exec_op_86_STX_Zero(rt, kCtx_b61_1D01);
    case 0xBD03u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b61_1D03);
    case 0xBD05u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1D05);
    case 0xBD08u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1D08);
    case 0xBD0Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1D0A);
    case 0xBD0Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1D0C);
    case 0xBD0Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1D0E);
    case 0xBD11u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1D11);
    case 0xBD14u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1D14);
    case 0xBD16u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1D16);
    case 0xBD1Au: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1D1A);
    case 0xBD1Du: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1D1D);
    case 0xBD1Fu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1D1F);
    case 0xBD21u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1D21);
    case 0xBD23u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1D23);
    case 0xBD25u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1D25);
    case 0xBD27u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1D27);
    case 0xBD29u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1D29);
    case 0xBD2Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1D2C);
    case 0xBD30u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b61_1D30);
    case 0xBD31u: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b61_1D31);
    case 0xBD33u: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b61_1D33);
    case 0xBD36u: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b61_1D36);
    case 0xBD39u: return mm6_exec_op_AC_LDY_Abs(rt, kCtx_b61_1D39);
    case 0xBD3Cu: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b61_1D3C);
    case 0xBD3Eu: return mm6_exec_op_30_BMI_Rel(rt, kCtx_b61_1D3E);
    case 0xBD40u: return mm6_exec_op_AA_TAX_Imp(rt, kCtx_b61_1D40);
    case 0xBD41u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b61_1D41);
    case 0xBD42u: return mm6_exec_op_B1_LDA_IndY(rt, kCtx_b61_1D42);
    case 0xBD44u: return mm6_exec_op_C8_INY_Imp(rt, kCtx_b61_1D44);
    case 0xBD45u: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b61_1D45);
    case 0xBD48u: return mm6_exec_op_48_PHA_Imp(rt, kCtx_b61_1D48);
    case 0xBD49u: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b61_1D49);
    case 0xBD4Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1D4C);
    case 0xBD4Eu: return mm6_exec_op_BD_LDA_AbsX(rt, kCtx_b61_1D4E);
    case 0xBD51u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1D51);
    case 0xBD53u: return mm6_exec_op_68_PLA_Imp(rt, kCtx_b61_1D53);
    case 0xBD54u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1D54);
    case 0xBD57u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b61_1D57);
    case 0xBD5Au: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b61_1D5A);
    case 0xBD5Bu: return mm6_exec_op_6C_JMP_Ind(rt, kCtx_b61_1D5B);
    case 0xBE39u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1E39);
    case 0xBE3Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1E3C);
    case 0xBE40u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b61_1E40);
    case 0xBE41u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1E41);
    case 0xBE44u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1E44);
    case 0xBE47u: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b61_1E47);
    case 0xBE49u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b61_1E49);
    case 0xBE4Bu: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b61_1E4B);
    case 0xBE4Eu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b61_1E4E);
    case 0xBE50u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b61_1E50);
    case 0xBE51u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1E51);
    case 0xBE54u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1E54);
    case 0xBE56u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1E56);
    case 0xBE58u: return mm6_exec_op_A6_LDX_Zero(rt, kCtx_b61_1E58);
    case 0xBE5Au: return mm6_exec_op_9A_TXS_Imp(rt, kCtx_b61_1E5A);
    case 0xBE5Bu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b61_1E5B);
    case 0xBE5Cu: return mm6_exec_op_A0_LDY_Imm(rt, kCtx_b61_1E5C);
    case 0xBE5Eu: return mm6_exec_op_8C_STY_Abs(rt, kCtx_b61_1E5E);
    case 0xBE61u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1E61);
    case 0xBE64u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1E64);
    case 0xBE66u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1E66);
    case 0xBE69u: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b61_1E69);
    case 0xBE6Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1E6A);
    case 0xBE6Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1E6C);
    case 0xBE6Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1E6E);
    case 0xBE70u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1E70);
    case 0xBE72u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1E72);
    case 0xBE75u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b61_1E75);
    case 0xBE93u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b61_1E93);
    case 0xBE96u: return mm6_exec_op_F0_BEQ_Rel(rt, kCtx_b61_1E96);
    case 0xBE98u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1E98);
    case 0xBE9Au: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1E9A);
    case 0xBE9Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1E9C);
    case 0xBE9Eu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1E9E);
    case 0xBEA0u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b61_1EA0);
    case 0xBEA3u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1EA3);
    case 0xBEA5u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1EA5);
    case 0xBEA7u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1EA7);
    case 0xBEA9u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1EA9);
    case 0xBEABu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1EAB);
    case 0xBEAEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1EAE);
    case 0xBEB1u: return mm6_exec_op_EE_INC_Abs(rt, kCtx_b61_1EB1);
    case 0xBEB4u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b61_1EB4);
    case 0xBEB6u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b61_1EB6);
    case 0xBEB9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1EB9);
    case 0xBEBBu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1EBB);
    case 0xBEBEu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1EBE);
    case 0xBEC0u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1EC0);
    case 0xBEC2u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1EC2);
    case 0xBEC4u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1EC4);
    case 0xBEC7u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b61_1EC7);
    case 0xBEC9u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1EC9);
    case 0xBECCu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b61_1ECC);
    case 0xBECEu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1ECE);
    case 0xBED1u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b61_1ED1);
    case 0xBED3u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1ED3);
    case 0xBED6u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b61_1ED6);
    case 0xBED8u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1ED8);
    case 0xBEDBu: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b61_1EDB);
    case 0xBEDDu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1EDD);
    case 0xBEE0u: return mm6_exec_op_A2_LDX_Imm(rt, kCtx_b61_1EE0);
    case 0xBEE2u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1EE2);
    case 0xBEE5u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1EE5);
    case 0xBEE7u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1EE7);
    case 0xBEEAu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b61_1EEA);
    case 0xBEECu: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b61_1EEC);
    case 0xBEEDu: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b61_1EED);
    case 0xBEEFu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1EEF);
    case 0xBEF1u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b61_1EF1);
    case 0xBEF4u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b61_1EF4);
    case 0xBEF6u: return mm6_exec_op_4C_JMP_Abs(rt, kCtx_b61_1EF6);
    case 0xBEF9u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1EF9);
    case 0xBEFBu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1EFB);
    case 0xBEFEu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b61_1EFE);
    case 0xBF00u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1F00);
    case 0xBF02u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1F02);
    case 0xBF05u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1F05);
    case 0xBF07u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1F07);
    case 0xBF0Au: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1F0A);
    case 0xBF0Cu: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1F0C);
    case 0xBF0Eu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1F0E);
    case 0xBF10u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1F10);
    case 0xBF13u: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b61_1F13);
    case 0xBF16u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1F16);
    case 0xBF19u: return mm6_exec_op_AD_LDA_Abs(rt, kCtx_b61_1F19);
    case 0xBF1Cu: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1F1C);
    case 0xBF1Fu: return mm6_exec_op_A5_LDA_Zero(rt, kCtx_b61_1F1F);
    case 0xBF21u: return mm6_exec_op_38_SEC_Imp(rt, kCtx_b61_1F21);
    case 0xBF22u: return mm6_exec_op_E9_SBC_Imm(rt, kCtx_b61_1F22);
    case 0xBF24u: return mm6_exec_op_85_STA_Zero(rt, kCtx_b61_1F24);
    case 0xBF26u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b61_1F26);
    case 0xBF29u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b61_1F29);
    case 0xBF2Bu: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b61_1F2B);
    case 0xBF2Cu: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1F2C);
    case 0xBF2Eu: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1F2E);
    case 0xBF31u: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b61_1F31);
    case 0xBF33u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1F33);
    case 0xBF35u: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1F35);
    case 0xBF38u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1F38);
    case 0xBF3Au: return mm6_exec_op_8D_STA_Abs(rt, kCtx_b61_1F3A);
    case 0xBF3Du: return mm6_exec_op_AE_LDX_Abs(rt, kCtx_b61_1F3D);
    case 0xBF40u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1F40);
    case 0xBF43u: return mm6_exec_op_A9_LDA_Imm(rt, kCtx_b61_1F43);
    case 0xBF45u: return mm6_exec_op_20_JSR_Abs(rt, kCtx_b61_1F45);
    case 0xBF48u: return mm6_exec_op_CE_DEC_Abs(rt, kCtx_b61_1F48);
    case 0xBF4Bu: return mm6_exec_op_D0_BNE_Rel(rt, kCtx_b61_1F4B);
    case 0xBF4Du: return mm6_exec_op_60_RTS_Imp(rt, kCtx_b61_1F4D);
    default: return mm6_trap_dispatch_miss(rt, 61u, cpu_pc);
  }
}
