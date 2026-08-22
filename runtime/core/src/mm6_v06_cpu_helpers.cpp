#include "mm6_v06_runtime.h"

#include <cstring>

namespace {

bool has_trap(const MM6Runtime* rt) { return !rt || rt->trap.code != MM6TrapCode::None; }

MM6ExecResult identity_trap(MM6Runtime* rt, const MM6InstructionContext& ctx, const char* reason) {
  return mm6_v06_raise_trap(rt, MM6TrapCode::StaticIdentityMismatch, ctx.physical_bank,
                            ctx.cpu_pc, ctx.cpu_pc, "V04/V05/V06", reason);
}

bool begin_instruction(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if (!rt || has_trap(rt)) return false;
  if (rt->cpu.pc != ctx.cpu_pc) {
    identity_trap(rt, ctx, "specialized helper invoked when runtime PC does not equal its static identity PC");
    return false;
  }
  std::uint8_t mapped = 0;
  if (!mm6_v06_resolve_prg_bank(rt, ctx.cpu_pc, &mapped)) return false;
  if (mapped != ctx.physical_bank) {
    identity_trap(rt, ctx, "active MMC3 mapping does not expose the generated instruction's physical PRG bank");
    return false;
  }
  std::uint8_t ignored = 0;
  // The byte is cycle-visible only. It is NEVER used to choose semantics.
  return mm6_v06_cpu_read(rt, ctx.cpu_pc, "CODE_OPCODE_CYCLE_STATIC_IDENTITY", &ignored);
}

bool code_read(MM6Runtime* rt, std::uint16_t address, const char* tag) {
  std::uint8_t ignored = 0;
  return mm6_v06_cpu_read(rt, address, tag, &ignored);
}

const MM6FlowEdgeSpec* find_edge(const MM6InstructionContext& ctx, const char* kind) {
  for (std::size_t i = 0; i < ctx.edge_count; ++i) {
    if (std::strcmp(ctx.edges[i].kind, kind) == 0) return &ctx.edges[i];
  }
  return nullptr;
}

bool validate_resolved_target(MM6Runtime* rt, const MM6InstructionContext& ctx,
                              const MM6FlowEdgeSpec& edge, std::uint16_t target) {
  if (edge.status == MM6EdgeStatus::Unresolved) {
    mm6_trap_unresolved(rt, edge.unresolved_id, ctx.physical_bank, ctx.cpu_pc);
    return false;
  }
  if (edge.status == MM6EdgeStatus::Resolved && edge.target_pc != target) {
    identity_trap(rt, ctx, "runtime-selected target disagrees with the generated resolved edge");
    return false;
  }
  if (edge.status == MM6EdgeStatus::Resolved && edge.physical_bank >= 0 && target >= 0x8000u) {
    std::uint8_t mapped = 0;
    if (!mm6_v06_resolve_prg_bank(rt, target, &mapped)) return false;
    if (mapped != static_cast<std::uint8_t>(edge.physical_bank)) {
      identity_trap(rt, ctx, "runtime mapper state does not expose the physical bank required by the selected resolved edge");
      return false;
    }
  }
  return true;
}

MM6ExecResult commit_named(MM6Runtime* rt, const MM6InstructionContext& ctx,
                           const char* kind, std::uint16_t target) {
  // A single static instruction can have more than one finite resolved physical-bank
  // alternative for the same CPU target (Mega Man 6 CB28's shared JSR $8000 is the
  // canonical case).  Select only among generated alternatives that match both the CPU
  // target and the current mapper state; do not accept an unproved runtime bank.
  const MM6FlowEdgeSpec* unresolved = nullptr;
  bool saw_kind = false;
  bool saw_resolved_target = false;
  std::uint8_t mapped = 0;
  bool have_mapped = false;
  for (std::size_t i = 0; i < ctx.edge_count; ++i) {
    const auto& edge = ctx.edges[i];
    if (std::strcmp(edge.kind, kind) != 0) continue;
    saw_kind = true;
    if (edge.status == MM6EdgeStatus::Unresolved) {
      if (!unresolved) unresolved = &edge;
      continue;
    }
    if (edge.status != MM6EdgeStatus::Resolved || edge.target_pc != target) continue;
    saw_resolved_target = true;
    if (edge.physical_bank >= 0 && target >= 0x8000u) {
      if (!have_mapped) {
        if (!mm6_v06_resolve_prg_bank(rt, target, &mapped)) return MM6ExecResult::Trap;
        have_mapped = true;
      }
      if (mapped != static_cast<std::uint8_t>(edge.physical_bank)) continue;
    }
    rt->cpu.pc = target;
    return MM6ExecResult::Continue;
  }
  if (unresolved) {
    mm6_trap_unresolved(rt, unresolved->unresolved_id, ctx.physical_bank, ctx.cpu_pc);
    return MM6ExecResult::Trap;
  }
  if (!saw_kind) return identity_trap(rt, ctx, "required generated control-flow edge is absent");
  if (!saw_resolved_target) return identity_trap(rt, ctx, "runtime-selected target disagrees with every generated resolved edge");
  return identity_trap(rt, ctx, "runtime mapper state does not match any generated physical-bank alternative for the resolved edge");
}

MM6ExecResult commit_seq(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  const std::uint16_t next = static_cast<std::uint16_t>(ctx.cpu_pc + 1u + ctx.operand_width);
  return commit_named(rt, ctx, "sequential_fallthrough", next);
}

void set_nz(MM6Runtime* rt, std::uint8_t v) {
  rt->cpu.p = static_cast<std::uint8_t>(rt->cpu.p & ~(MM6Runtime::FlagN | MM6Runtime::FlagZ));
  if (v == 0) rt->cpu.p = static_cast<std::uint8_t>(rt->cpu.p | MM6Runtime::FlagZ);
  if (v & 0x80u) rt->cpu.p = static_cast<std::uint8_t>(rt->cpu.p | MM6Runtime::FlagN);
  rt->cpu.p = static_cast<std::uint8_t>((rt->cpu.p | MM6Runtime::FlagU) & ~MM6Runtime::FlagB);
}

void set_flag(MM6Runtime* rt, std::uint8_t flag, bool set) {
  if (set) rt->cpu.p = static_cast<std::uint8_t>(rt->cpu.p | flag);
  else rt->cpu.p = static_cast<std::uint8_t>(rt->cpu.p & ~flag);
  rt->cpu.p = static_cast<std::uint8_t>((rt->cpu.p | MM6Runtime::FlagU) & ~MM6Runtime::FlagB);
}

// Read/ALU semantics. These are direct semantic functions, not an opcode table.
void op_ora(MM6Runtime* rt, std::uint8_t v) { rt->cpu.a = static_cast<std::uint8_t>(rt->cpu.a | v); set_nz(rt, rt->cpu.a); }
void op_and(MM6Runtime* rt, std::uint8_t v) { rt->cpu.a = static_cast<std::uint8_t>(rt->cpu.a & v); set_nz(rt, rt->cpu.a); }
void op_eor(MM6Runtime* rt, std::uint8_t v) { rt->cpu.a = static_cast<std::uint8_t>(rt->cpu.a ^ v); set_nz(rt, rt->cpu.a); }
void op_lda(MM6Runtime* rt, std::uint8_t v) { rt->cpu.a = v; set_nz(rt, v); }
void op_ldx(MM6Runtime* rt, std::uint8_t v) { rt->cpu.x = v; set_nz(rt, v); }
void op_ldy(MM6Runtime* rt, std::uint8_t v) { rt->cpu.y = v; set_nz(rt, v); }

void op_adc(MM6Runtime* rt, std::uint8_t v) {
  const std::uint8_t a = rt->cpu.a;
  const std::uint16_t sum = static_cast<std::uint16_t>(a) + v + ((rt->cpu.p & MM6Runtime::FlagC) ? 1u : 0u);
  const std::uint8_t r = static_cast<std::uint8_t>(sum);
  set_flag(rt, MM6Runtime::FlagC, sum > 0xFFu);
  set_flag(rt, MM6Runtime::FlagV, ((~(a ^ v) & (a ^ r)) & 0x80u) != 0);
  rt->cpu.a = r;
  set_nz(rt, r);
}

void op_sbc(MM6Runtime* rt, std::uint8_t v) {
  const std::uint8_t a = rt->cpu.a;
  const std::uint16_t sum = static_cast<std::uint16_t>(a) + static_cast<std::uint8_t>(v ^ 0xFFu) +
                            ((rt->cpu.p & MM6Runtime::FlagC) ? 1u : 0u);
  const std::uint8_t r = static_cast<std::uint8_t>(sum);
  set_flag(rt, MM6Runtime::FlagC, sum > 0xFFu);
  set_flag(rt, MM6Runtime::FlagV, (((a ^ r) & (a ^ v)) & 0x80u) != 0);
  rt->cpu.a = r;
  set_nz(rt, r);
}

void compare_value(MM6Runtime* rt, std::uint8_t reg, std::uint8_t v) {
  const std::uint8_t r = static_cast<std::uint8_t>(reg - v);
  set_flag(rt, MM6Runtime::FlagC, reg >= v);
  set_nz(rt, r);
}
void op_cmp(MM6Runtime* rt, std::uint8_t v) { compare_value(rt, rt->cpu.a, v); }
void op_cpx(MM6Runtime* rt, std::uint8_t v) { compare_value(rt, rt->cpu.x, v); }
void op_cpy(MM6Runtime* rt, std::uint8_t v) { compare_value(rt, rt->cpu.y, v); }
void op_bit(MM6Runtime* rt, std::uint8_t v) {
  set_flag(rt, MM6Runtime::FlagZ, (rt->cpu.a & v) == 0);
  set_flag(rt, MM6Runtime::FlagN, (v & 0x80u) != 0);
  set_flag(rt, MM6Runtime::FlagV, (v & 0x40u) != 0);
}
void op_nop_read(MM6Runtime*, std::uint8_t) {}
void op_anc(MM6Runtime* rt, std::uint8_t v) {
  rt->cpu.a = static_cast<std::uint8_t>(rt->cpu.a & v);
  set_nz(rt, rt->cpu.a);
  set_flag(rt, MM6Runtime::FlagC, (rt->cpu.a & 0x80u) != 0);
}

std::uint8_t rmw_asl(MM6Runtime* rt, std::uint8_t v) { set_flag(rt, MM6Runtime::FlagC, v & 0x80u); v = static_cast<std::uint8_t>(v << 1); set_nz(rt, v); return v; }
std::uint8_t rmw_lsr(MM6Runtime* rt, std::uint8_t v) { set_flag(rt, MM6Runtime::FlagC, v & 1u); v = static_cast<std::uint8_t>(v >> 1); set_nz(rt, v); return v; }
std::uint8_t rmw_rol(MM6Runtime* rt, std::uint8_t v) { const bool c = (rt->cpu.p & MM6Runtime::FlagC) != 0; set_flag(rt, MM6Runtime::FlagC, v & 0x80u); v = static_cast<std::uint8_t>((v << 1) | (c ? 1u : 0u)); set_nz(rt, v); return v; }
std::uint8_t rmw_ror(MM6Runtime* rt, std::uint8_t v) { const bool c = (rt->cpu.p & MM6Runtime::FlagC) != 0; set_flag(rt, MM6Runtime::FlagC, v & 1u); v = static_cast<std::uint8_t>((v >> 1) | (c ? 0x80u : 0u)); set_nz(rt, v); return v; }
std::uint8_t rmw_dec(MM6Runtime* rt, std::uint8_t v) { v = static_cast<std::uint8_t>(v - 1u); set_nz(rt, v); return v; }
std::uint8_t rmw_inc(MM6Runtime* rt, std::uint8_t v) { v = static_cast<std::uint8_t>(v + 1u); set_nz(rt, v); return v; }
std::uint8_t rmw_isc(MM6Runtime* rt, std::uint8_t v) {
  v = static_cast<std::uint8_t>(v + 1u);
  op_sbc(rt, v);
  return v;
}
std::uint8_t rmw_slo(MM6Runtime* rt, std::uint8_t v) {
  v = rmw_asl(rt, v);
  op_ora(rt, v);
  return v;
}

std::uint8_t store_a(MM6Runtime* rt) { return rt->cpu.a; }
std::uint8_t store_x(MM6Runtime* rt) { return rt->cpu.x; }
std::uint8_t store_y(MM6Runtime* rt) { return rt->cpu.y; }

bool read_zero(MM6Runtime* rt, const MM6InstructionContext& ctx, std::uint8_t* v) {
  if (!begin_instruction(rt, ctx)) return false;
  if (!code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 1u), "CODE_OPERAND_LOW_FETCH")) return false;
  return mm6_v06_cpu_read(rt, static_cast<std::uint8_t>(ctx.operand), "DATA_READ_EFFECTIVE", v);
}

bool read_zerox(MM6Runtime* rt, const MM6InstructionContext& ctx, std::uint8_t* v) {
  if (!begin_instruction(rt, ctx)) return false;
  if (!code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 1u), "CODE_OPERAND_LOW_FETCH")) return false;
  std::uint8_t ignored = 0;
  const std::uint8_t base = static_cast<std::uint8_t>(ctx.operand);
  if (!mm6_v06_cpu_read(rt, base, "DUMMY_READ_ZERO_PAGE_BASE", &ignored)) return false;
  return mm6_v06_cpu_read(rt, static_cast<std::uint8_t>(base + rt->cpu.x), "DATA_READ_EFFECTIVE", v);
}

bool read_zeroy(MM6Runtime* rt, const MM6InstructionContext& ctx, std::uint8_t* v) {
  if (!begin_instruction(rt, ctx)) return false;
  if (!code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 1u), "CODE_OPERAND_LOW_FETCH")) return false;
  std::uint8_t ignored = 0;
  const std::uint8_t base = static_cast<std::uint8_t>(ctx.operand);
  if (!mm6_v06_cpu_read(rt, base, "DUMMY_READ_ZERO_PAGE_BASE", &ignored)) return false;
  return mm6_v06_cpu_read(rt, static_cast<std::uint8_t>(base + rt->cpu.y), "DATA_READ_EFFECTIVE", v);
}

bool fetch_abs_prefix(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if (!begin_instruction(rt, ctx)) return false;
  if (!code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 1u), "CODE_OPERAND_LOW_FETCH")) return false;
  return code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 2u), "CODE_OPERAND_HIGH_FETCH");
}

bool read_abs(MM6Runtime* rt, const MM6InstructionContext& ctx, std::uint8_t* v) {
  if (!fetch_abs_prefix(rt, ctx)) return false;
  return mm6_v06_cpu_read(rt, ctx.operand, "DATA_READ_EFFECTIVE", v);
}

bool read_abs_indexed(MM6Runtime* rt, const MM6InstructionContext& ctx, std::uint8_t index, std::uint8_t* v) {
  if (!fetch_abs_prefix(rt, ctx)) return false;
  const std::uint16_t base = ctx.operand;
  const std::uint16_t eff = static_cast<std::uint16_t>(base + index);
  const std::uint16_t unc = static_cast<std::uint16_t>((base & 0xFF00u) | (eff & 0x00FFu));
  if (!mm6_v06_cpu_read(rt, unc, "DATA_READ_INDEXED_OR_DUMMY_IF_PAGE_CROSS", v)) return false;
  if ((base & 0xFF00u) != (eff & 0xFF00u)) {
    if (!mm6_v06_cpu_read(rt, eff, "DATA_READ_CORRECTED_IF_PAGE_CROSS", v)) return false;
  }
  return true;
}

bool read_indy(MM6Runtime* rt, const MM6InstructionContext& ctx, std::uint8_t* v) {
  if (!begin_instruction(rt, ctx)) return false;
  if (!code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 1u), "CODE_OPERAND_LOW_FETCH")) return false;
  const std::uint8_t zp = static_cast<std::uint8_t>(ctx.operand);
  std::uint8_t lo = 0, hi = 0;
  if (!mm6_v06_cpu_read(rt, zp, "POINTER_LOW_READ_ZERO_PAGE", &lo)) return false;
  if (!mm6_v06_cpu_read(rt, static_cast<std::uint8_t>(zp + 1u), "POINTER_HIGH_READ_ZERO_PAGE_WRAP", &hi)) return false;
  const std::uint16_t base = static_cast<std::uint16_t>(lo | (static_cast<std::uint16_t>(hi) << 8));
  const std::uint16_t eff = static_cast<std::uint16_t>(base + rt->cpu.y);
  const std::uint16_t unc = static_cast<std::uint16_t>((base & 0xFF00u) | (eff & 0x00FFu));
  if (!mm6_v06_cpu_read(rt, unc, "DATA_READ_INDEXED_OR_DUMMY_IF_PAGE_CROSS", v)) return false;
  if ((base & 0xFF00u) != (eff & 0xFF00u)) {
    if (!mm6_v06_cpu_read(rt, eff, "DATA_READ_CORRECTED_IF_PAGE_CROSS", v)) return false;
  }
  return true;
}

bool read_indx(MM6Runtime* rt, const MM6InstructionContext& ctx, std::uint8_t* v) {
  if (!begin_instruction(rt, ctx)) return false;
  if (!code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 1u), "CODE_OPERAND_LOW_FETCH")) return false;
  const std::uint8_t zp = static_cast<std::uint8_t>(ctx.operand);
  std::uint8_t ignored=0, lo=0, hi=0;
  if (!mm6_v06_cpu_read(rt, zp, "DUMMY_READ_ZERO_PAGE_BASE", &ignored)) return false;
  const std::uint8_t ptr = static_cast<std::uint8_t>(zp + rt->cpu.x);
  if (!mm6_v06_cpu_read(rt, ptr, "POINTER_LOW_READ_ZERO_PAGE_INDEXED", &lo)) return false;
  if (!mm6_v06_cpu_read(rt, static_cast<std::uint8_t>(ptr + 1u), "POINTER_HIGH_READ_ZERO_PAGE_INDEXED_WRAP", &hi)) return false;
  const std::uint16_t eff=static_cast<std::uint16_t>(lo | (static_cast<std::uint16_t>(hi)<<8));
  return mm6_v06_cpu_read(rt, eff, "DATA_READ_EFFECTIVE", v);
}

template<void (*Op)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_imm(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if (!begin_instruction(rt, ctx)) return MM6ExecResult::Trap;
  if (!code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 1u), "CODE_IMMEDIATE_FETCH")) return MM6ExecResult::Trap;
  Op(rt, static_cast<std::uint8_t>(ctx.operand));
  return commit_seq(rt, ctx);
}

template<void (*Op)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_zero_read(MM6Runtime* rt, const MM6InstructionContext& ctx) { std::uint8_t v=0; if(!read_zero(rt,ctx,&v)) return MM6ExecResult::Trap; Op(rt,v); return commit_seq(rt,ctx); }
template<void (*Op)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_zerox_read(MM6Runtime* rt, const MM6InstructionContext& ctx) { std::uint8_t v=0; if(!read_zerox(rt,ctx,&v)) return MM6ExecResult::Trap; Op(rt,v); return commit_seq(rt,ctx); }
template<void (*Op)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_zeroy_read(MM6Runtime* rt, const MM6InstructionContext& ctx) { std::uint8_t v=0; if(!read_zeroy(rt,ctx,&v)) return MM6ExecResult::Trap; Op(rt,v); return commit_seq(rt,ctx); }
template<void (*Op)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_abs_read(MM6Runtime* rt, const MM6InstructionContext& ctx) { std::uint8_t v=0; if(!read_abs(rt,ctx,&v)) return MM6ExecResult::Trap; Op(rt,v); return commit_seq(rt,ctx); }
template<void (*Op)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_absx_read(MM6Runtime* rt, const MM6InstructionContext& ctx) { std::uint8_t v=0; if(!read_abs_indexed(rt,ctx,rt->cpu.x,&v)) return MM6ExecResult::Trap; Op(rt,v); return commit_seq(rt,ctx); }
template<void (*Op)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_absy_read(MM6Runtime* rt, const MM6InstructionContext& ctx) { std::uint8_t v=0; if(!read_abs_indexed(rt,ctx,rt->cpu.y,&v)) return MM6ExecResult::Trap; Op(rt,v); return commit_seq(rt,ctx); }
template<void (*Op)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_indy_read(MM6Runtime* rt, const MM6InstructionContext& ctx) { std::uint8_t v=0; if(!read_indy(rt,ctx,&v)) return MM6ExecResult::Trap; Op(rt,v); return commit_seq(rt,ctx); }
template<void (*Op)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_indx_read(MM6Runtime* rt, const MM6InstructionContext& ctx) { std::uint8_t v=0; if(!read_indx(rt,ctx,&v)) return MM6ExecResult::Trap; Op(rt,v); return commit_seq(rt,ctx); }

template<std::uint8_t (*Value)(MM6Runtime*)>
MM6ExecResult exec_zero_store(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if (!begin_instruction(rt, ctx)) return MM6ExecResult::Trap;
  if (!code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 1u), "CODE_OPERAND_LOW_FETCH")) return MM6ExecResult::Trap;
  if (!mm6_v06_cpu_write(rt, static_cast<std::uint8_t>(ctx.operand), Value(rt), "DATA_WRITE_EFFECTIVE")) return MM6ExecResult::Trap;
  return commit_seq(rt, ctx);
}

template<std::uint8_t (*Value)(MM6Runtime*)>
MM6ExecResult exec_zerox_store(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if (!begin_instruction(rt, ctx)) return MM6ExecResult::Trap;
  if (!code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 1u), "CODE_OPERAND_LOW_FETCH")) return MM6ExecResult::Trap;
  std::uint8_t ignored=0; const std::uint8_t base=static_cast<std::uint8_t>(ctx.operand);
  if(!mm6_v06_cpu_read(rt,base,"DUMMY_READ_ZERO_PAGE_BASE",&ignored)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_write(rt,static_cast<std::uint8_t>(base+rt->cpu.x),Value(rt),"DATA_WRITE_EFFECTIVE")) return MM6ExecResult::Trap;
  return commit_seq(rt,ctx);
}

template<std::uint8_t (*Value)(MM6Runtime*)>
MM6ExecResult exec_zeroy_store(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if (!begin_instruction(rt, ctx)) return MM6ExecResult::Trap;
  if (!code_read(rt, static_cast<std::uint16_t>(ctx.cpu_pc + 1u), "CODE_OPERAND_LOW_FETCH")) return MM6ExecResult::Trap;
  std::uint8_t ignored=0; const std::uint8_t base=static_cast<std::uint8_t>(ctx.operand);
  if(!mm6_v06_cpu_read(rt,base,"DUMMY_READ_ZERO_PAGE_BASE",&ignored)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_write(rt,static_cast<std::uint8_t>(base+rt->cpu.y),Value(rt),"DATA_WRITE_EFFECTIVE")) return MM6ExecResult::Trap;
  return commit_seq(rt,ctx);
}

template<std::uint8_t (*Value)(MM6Runtime*)>
MM6ExecResult exec_abs_store(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if(!fetch_abs_prefix(rt,ctx)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_write(rt,ctx.operand,Value(rt),"DATA_WRITE_EFFECTIVE")) return MM6ExecResult::Trap;
  return commit_seq(rt,ctx);
}

template<std::uint8_t (*Value)(MM6Runtime*)>
MM6ExecResult exec_abs_index_store(MM6Runtime* rt, const MM6InstructionContext& ctx, std::uint8_t index) {
  if(!fetch_abs_prefix(rt,ctx)) return MM6ExecResult::Trap;
  const std::uint16_t base=ctx.operand, eff=static_cast<std::uint16_t>(base+index);
  const std::uint16_t unc=static_cast<std::uint16_t>((base&0xFF00u)|(eff&0x00FFu));
  std::uint8_t ignored=0;
  if(!mm6_v06_cpu_read(rt,unc,"DUMMY_READ_UNCORRECTED_INDEXED_ADDRESS",&ignored)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_write(rt,eff,Value(rt),"DATA_WRITE_EFFECTIVE")) return MM6ExecResult::Trap;
  return commit_seq(rt,ctx);
}

template<std::uint8_t (*Value)(MM6Runtime*)>
MM6ExecResult exec_indy_store(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if(!begin_instruction(rt,ctx)) return MM6ExecResult::Trap;
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_OPERAND_LOW_FETCH")) return MM6ExecResult::Trap;
  const std::uint8_t zp=static_cast<std::uint8_t>(ctx.operand); std::uint8_t lo=0,hi=0,ignored=0;
  if(!mm6_v06_cpu_read(rt,zp,"POINTER_LOW_READ_ZERO_PAGE",&lo)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_read(rt,static_cast<std::uint8_t>(zp+1u),"POINTER_HIGH_READ_ZERO_PAGE_WRAP",&hi)) return MM6ExecResult::Trap;
  const std::uint16_t base=static_cast<std::uint16_t>(lo|(static_cast<std::uint16_t>(hi)<<8));
  const std::uint16_t eff=static_cast<std::uint16_t>(base+rt->cpu.y), unc=static_cast<std::uint16_t>((base&0xFF00u)|(eff&0x00FFu));
  if(!mm6_v06_cpu_read(rt,unc,"DUMMY_READ_UNCORRECTED_INDEXED_ADDRESS",&ignored)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_write(rt,eff,Value(rt),"DATA_WRITE_EFFECTIVE")) return MM6ExecResult::Trap;
  return commit_seq(rt,ctx);
}

template<std::uint8_t (*Transform)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_zero_rmw(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if(!begin_instruction(rt,ctx)) return MM6ExecResult::Trap;
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_OPERAND_LOW_FETCH")) return MM6ExecResult::Trap;
  const std::uint16_t addr=static_cast<std::uint8_t>(ctx.operand); std::uint8_t old=0;
  if(!mm6_v06_cpu_read(rt,addr,"DATA_READ_EFFECTIVE",&old)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_write(rt,addr,old,"DATA_WRITE_OLD_EFFECTIVE")) return MM6ExecResult::Trap;
  const std::uint8_t nv=Transform(rt,old);
  if(!mm6_v06_cpu_write(rt,addr,nv,"DATA_WRITE_NEW_EFFECTIVE")) return MM6ExecResult::Trap;
  return commit_seq(rt,ctx);
}

template<std::uint8_t (*Transform)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_zerox_rmw(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if(!begin_instruction(rt,ctx)) return MM6ExecResult::Trap;
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_OPERAND_LOW_FETCH")) return MM6ExecResult::Trap;
  const std::uint8_t base=static_cast<std::uint8_t>(ctx.operand); std::uint8_t ignored=0,old=0;
  if(!mm6_v06_cpu_read(rt,base,"DUMMY_READ_ZERO_PAGE_BASE",&ignored)) return MM6ExecResult::Trap;
  const std::uint16_t addr=static_cast<std::uint8_t>(base+rt->cpu.x);
  if(!mm6_v06_cpu_read(rt,addr,"DATA_READ_EFFECTIVE",&old)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_write(rt,addr,old,"DATA_WRITE_OLD_EFFECTIVE")) return MM6ExecResult::Trap;
  const std::uint8_t nv=Transform(rt,old);
  if(!mm6_v06_cpu_write(rt,addr,nv,"DATA_WRITE_NEW_EFFECTIVE")) return MM6ExecResult::Trap;
  return commit_seq(rt,ctx);
}

template<std::uint8_t (*Transform)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_abs_rmw(MM6Runtime* rt, const MM6InstructionContext& ctx) {
  if(!fetch_abs_prefix(rt,ctx)) return MM6ExecResult::Trap;
  std::uint8_t old=0;
  if(!mm6_v06_cpu_read(rt,ctx.operand,"DATA_READ_EFFECTIVE",&old)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_write(rt,ctx.operand,old,"DATA_WRITE_OLD_EFFECTIVE")) return MM6ExecResult::Trap;
  const std::uint8_t nv=Transform(rt,old);
  if(!mm6_v06_cpu_write(rt,ctx.operand,nv,"DATA_WRITE_NEW_EFFECTIVE")) return MM6ExecResult::Trap;
  return commit_seq(rt,ctx);
}

template<std::uint8_t (*Transform)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_abs_index_rmw(MM6Runtime* rt, const MM6InstructionContext& ctx, std::uint8_t index) {
  if(!fetch_abs_prefix(rt,ctx)) return MM6ExecResult::Trap;
  const std::uint16_t base=ctx.operand, eff=static_cast<std::uint16_t>(base+index);
  const std::uint16_t unc=static_cast<std::uint16_t>((base&0xFF00u)|(eff&0xFFu));
  std::uint8_t ignored=0,old=0;
  if(!mm6_v06_cpu_read(rt,unc,"DUMMY_READ_UNCORRECTED_INDEXED_ADDRESS",&ignored)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_read(rt,eff,"DATA_READ_EFFECTIVE",&old)) return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_write(rt,eff,old,"DATA_WRITE_OLD_EFFECTIVE")) return MM6ExecResult::Trap;
  const std::uint8_t nv=Transform(rt,old);
  if(!mm6_v06_cpu_write(rt,eff,nv,"DATA_WRITE_NEW_EFFECTIVE")) return MM6ExecResult::Trap;
  return commit_seq(rt,ctx);
}
template<std::uint8_t (*Transform)(MM6Runtime*, std::uint8_t)>
MM6ExecResult exec_absx_rmw(MM6Runtime* rt, const MM6InstructionContext& ctx) { return exec_abs_index_rmw<Transform>(rt,ctx,rt->cpu.x); }

void imp_clc(MM6Runtime* rt){set_flag(rt,MM6Runtime::FlagC,false);} void imp_sec(MM6Runtime* rt){set_flag(rt,MM6Runtime::FlagC,true);}
void imp_cli(MM6Runtime* rt){set_flag(rt,MM6Runtime::FlagI,false);} void imp_sei(MM6Runtime* rt){set_flag(rt,MM6Runtime::FlagI,true);}
void imp_cld(MM6Runtime* rt){set_flag(rt,MM6Runtime::FlagD,false);} void imp_sed(MM6Runtime* rt){set_flag(rt,MM6Runtime::FlagD,true);} void imp_nop(MM6Runtime*){}
void imp_dey(MM6Runtime* rt){rt->cpu.y=static_cast<std::uint8_t>(rt->cpu.y-1u);set_nz(rt,rt->cpu.y);} void imp_iny(MM6Runtime* rt){rt->cpu.y=static_cast<std::uint8_t>(rt->cpu.y+1u);set_nz(rt,rt->cpu.y);}
void imp_dex(MM6Runtime* rt){rt->cpu.x=static_cast<std::uint8_t>(rt->cpu.x-1u);set_nz(rt,rt->cpu.x);} void imp_inx(MM6Runtime* rt){rt->cpu.x=static_cast<std::uint8_t>(rt->cpu.x+1u);set_nz(rt,rt->cpu.x);}
void imp_txa(MM6Runtime* rt){rt->cpu.a=rt->cpu.x;set_nz(rt,rt->cpu.a);} void imp_tya(MM6Runtime* rt){rt->cpu.a=rt->cpu.y;set_nz(rt,rt->cpu.a);}
void imp_tay(MM6Runtime* rt){rt->cpu.y=rt->cpu.a;set_nz(rt,rt->cpu.y);} void imp_tax(MM6Runtime* rt){rt->cpu.x=rt->cpu.a;set_nz(rt,rt->cpu.x);}
void imp_txs(MM6Runtime* rt){rt->cpu.sp=rt->cpu.x;} void imp_tsx(MM6Runtime* rt){rt->cpu.x=rt->cpu.sp;set_nz(rt,rt->cpu.x);}
void acc_asl(MM6Runtime* rt){rt->cpu.a=rmw_asl(rt,rt->cpu.a);} void acc_lsr(MM6Runtime* rt){rt->cpu.a=rmw_lsr(rt,rt->cpu.a);}
void acc_rol(MM6Runtime* rt){rt->cpu.a=rmw_rol(rt,rt->cpu.a);} void acc_ror(MM6Runtime* rt){rt->cpu.a=rmw_ror(rt,rt->cpu.a);}

template<void (*Op)(MM6Runtime*)>
MM6ExecResult exec_imp(MM6Runtime* rt,const MM6InstructionContext& ctx){if(!begin_instruction(rt,ctx))return MM6ExecResult::Trap;if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_DUMMY_FETCH"))return MM6ExecResult::Trap;Op(rt);return commit_seq(rt,ctx);}

template<bool (*Cond)(const MM6Runtime*)>
MM6ExecResult exec_branch(MM6Runtime* rt,const MM6InstructionContext& ctx){
  if(!begin_instruction(rt,ctx))return MM6ExecResult::Trap;
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_BRANCH_OFFSET_FETCH"))return MM6ExecResult::Trap;
  const std::uint16_t fall=static_cast<std::uint16_t>(ctx.cpu_pc+2u), target=ctx.operand;
  if(!Cond(rt)) return commit_named(rt,ctx,"conditional_branch_fallthrough",fall);
  std::uint8_t ignored=0;
  if(!mm6_v06_cpu_read(rt,fall,"BRANCH_TAKEN_DUMMY_READ_IF_TAKEN",&ignored))return MM6ExecResult::Trap;
  if((fall&0xFF00u)!=(target&0xFF00u)){
    const std::uint16_t unc=static_cast<std::uint16_t>((fall&0xFF00u)|(target&0x00FFu));
    if(!mm6_v06_cpu_read(rt,unc,"BRANCH_PAGE_CROSS_DUMMY_READ_IF_NEEDED",&ignored))return MM6ExecResult::Trap;
  }
  return commit_named(rt,ctx,"conditional_branch_target",target);
}

bool cond_bpl(const MM6Runtime* r){return (r->cpu.p&MM6Runtime::FlagN)==0;} bool cond_bmi(const MM6Runtime* r){return (r->cpu.p&MM6Runtime::FlagN)!=0;}
bool cond_bcc(const MM6Runtime* r){return (r->cpu.p&MM6Runtime::FlagC)==0;} bool cond_bcs(const MM6Runtime* r){return (r->cpu.p&MM6Runtime::FlagC)!=0;}
bool cond_bne(const MM6Runtime* r){return (r->cpu.p&MM6Runtime::FlagZ)==0;} bool cond_beq(const MM6Runtime* r){return (r->cpu.p&MM6Runtime::FlagZ)!=0;}

MM6ExecResult exec_pha(MM6Runtime* rt,const MM6InstructionContext& ctx,bool php){
  if(!begin_instruction(rt,ctx))return MM6ExecResult::Trap;
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_DUMMY_FETCH"))return MM6ExecResult::Trap;
  const std::uint8_t v=php?static_cast<std::uint8_t>(rt->cpu.p|MM6Runtime::FlagB|MM6Runtime::FlagU):rt->cpu.a;
  const std::uint16_t addr=static_cast<std::uint16_t>(0x0100u|rt->cpu.sp);
  if(!mm6_v06_cpu_write(rt,addr,v,"STACK_WRITE_REGISTER"))return MM6ExecResult::Trap;
  rt->cpu.sp=static_cast<std::uint8_t>(rt->cpu.sp-1u);
  return commit_seq(rt,ctx);
}

MM6ExecResult exec_pull(MM6Runtime* rt,const MM6InstructionContext& ctx,bool plp){
  if(!begin_instruction(rt,ctx))return MM6ExecResult::Trap;
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_DUMMY_FETCH"))return MM6ExecResult::Trap;
  std::uint8_t ignored=0,v=0;
  if(!mm6_v06_cpu_read(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),"STACK_DUMMY_READ",&ignored))return MM6ExecResult::Trap;
  rt->cpu.sp=static_cast<std::uint8_t>(rt->cpu.sp+1u);
  if(!mm6_v06_cpu_read(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),plp?"STACK_READ_STATUS":"STACK_READ_REGISTER",&v))return MM6ExecResult::Trap;
  if(plp) rt->cpu.p=static_cast<std::uint8_t>((v|MM6Runtime::FlagU)&~MM6Runtime::FlagB); else {rt->cpu.a=v;set_nz(rt,v);}
  return commit_seq(rt,ctx);
}

MM6ExecResult exec_jsr(MM6Runtime* rt,const MM6InstructionContext& ctx){
  if(!begin_instruction(rt,ctx))return MM6ExecResult::Trap;
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_OPERAND_LOW_FETCH"))return MM6ExecResult::Trap;
  std::uint8_t ignored=0;
  if(!mm6_v06_cpu_read(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),"STACK_DUMMY_READ",&ignored))return MM6ExecResult::Trap;
  const std::uint16_t ret=static_cast<std::uint16_t>(ctx.cpu_pc+2u);
  if(!mm6_v06_cpu_write(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),static_cast<std::uint8_t>(ret>>8),"STACK_WRITE_RETURN_PCH"))return MM6ExecResult::Trap;
  rt->cpu.sp=static_cast<std::uint8_t>(rt->cpu.sp-1u);
  if(!mm6_v06_cpu_write(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),static_cast<std::uint8_t>(ret),"STACK_WRITE_RETURN_PCL"))return MM6ExecResult::Trap;
  rt->cpu.sp=static_cast<std::uint8_t>(rt->cpu.sp-1u);
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+2u),"CODE_OPERAND_HIGH_FETCH"))return MM6ExecResult::Trap;

  // Preserve an unresolved continuation as a selected-edge guard for the later RTS.
  if(const MM6FlowEdgeSpec* cont=find_edge(ctx,"jsr_continuation")){
    if(cont->status==MM6EdgeStatus::Unresolved){auto& g=rt->return_guards[rt->cpu.sp];g.valid=true;g.continuation_pc=static_cast<std::uint16_t>(ctx.cpu_pc+3u);g.unresolved_id=cont->unresolved_id?cont->unresolved_id:"";}
  }

  const MM6FlowEdgeSpec* helper=find_edge(ctx,"stack_dispatch_helper");
  if(helper){
    if(rt->stack_dispatch_guard_active) return mm6_v06_raise_trap(rt,MM6TrapCode::UnsupportedCpuOperation,ctx.physical_bank,ctx.cpu_pc,ctx.cpu_pc,"V04/V06","nested stack-dispatch diagnostic guard is not proven by current construction graph");
    rt->stack_dispatch_guard_active=true;rt->stack_dispatch_target_count=0;rt->stack_dispatch_targets.fill(0);rt->stack_dispatch_unresolved_id.clear();
    for(std::size_t i=0;i<ctx.edge_count;++i){const auto& e=ctx.edges[i];if(std::strcmp(e.kind,"stack_dispatch_target")==0&&e.status==MM6EdgeStatus::Resolved){if(rt->stack_dispatch_target_count>=rt->stack_dispatch_targets.size()) return mm6_v06_raise_trap(rt,MM6TrapCode::UnsupportedCpuOperation,ctx.physical_bank,ctx.cpu_pc,ctx.cpu_pc,"V09","stack-dispatch target domain exceeds bounded snapshot-safe storage");rt->stack_dispatch_targets[rt->stack_dispatch_target_count++]=e.target_pc;}}
    if(const MM6FlowEdgeSpec* guard=find_edge(ctx,"stack_dispatch_selector_guard")) if(guard->unresolved_id) rt->stack_dispatch_unresolved_id=guard->unresolved_id;
    if(!validate_resolved_target(rt,ctx,*helper,ctx.operand))return MM6ExecResult::Trap;
    rt->cpu.pc=ctx.operand;return MM6ExecResult::Continue;
  }
  return commit_named(rt,ctx,"direct_jsr",ctx.operand);
}

MM6ExecResult exec_rts(MM6Runtime* rt,const MM6InstructionContext& ctx){
  if(!begin_instruction(rt,ctx))return MM6ExecResult::Trap;
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_DUMMY_FETCH"))return MM6ExecResult::Trap;
  const std::uint8_t guard_index=rt->cpu.sp; std::uint8_t ignored=0,lo=0,hi=0;
  if(!mm6_v06_cpu_read(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),"STACK_DUMMY_READ",&ignored))return MM6ExecResult::Trap;
  rt->cpu.sp=static_cast<std::uint8_t>(rt->cpu.sp+1u); if(!mm6_v06_cpu_read(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),"STACK_READ_RETURN_PCL",&lo))return MM6ExecResult::Trap;
  rt->cpu.sp=static_cast<std::uint8_t>(rt->cpu.sp+1u); if(!mm6_v06_cpu_read(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),"STACK_READ_RETURN_PCH",&hi))return MM6ExecResult::Trap;
  const std::uint16_t stored=static_cast<std::uint16_t>(lo|(static_cast<std::uint16_t>(hi)<<8));
  if(!mm6_v06_cpu_read(rt,stored,"RETURN_DUMMY_READ_INCREMENT_PC",&ignored))return MM6ExecResult::Trap;
  const std::uint16_t target=static_cast<std::uint16_t>(stored+1u);
  auto& g=rt->return_guards[guard_index];
  if(g.valid){const bool match=g.continuation_pc==target;const std::string uid=g.unresolved_id;g={};if(match)return mm6_trap_unresolved(rt,uid.c_str(),ctx.physical_bank,ctx.cpu_pc);}
  rt->cpu.pc=target;return MM6ExecResult::Continue;
}

MM6ExecResult exec_rti(MM6Runtime* rt,const MM6InstructionContext& ctx){
  if(!begin_instruction(rt,ctx))return MM6ExecResult::Trap;
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_DUMMY_FETCH"))return MM6ExecResult::Trap;
  std::uint8_t ignored=0,p=0,lo=0,hi=0;
  if(!mm6_v06_cpu_read(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),"STACK_DUMMY_READ",&ignored))return MM6ExecResult::Trap;
  rt->cpu.sp=static_cast<std::uint8_t>(rt->cpu.sp+1u);if(!mm6_v06_cpu_read(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),"STACK_READ_STATUS",&p))return MM6ExecResult::Trap;
  rt->cpu.sp=static_cast<std::uint8_t>(rt->cpu.sp+1u);if(!mm6_v06_cpu_read(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),"STACK_READ_RETURN_PCL",&lo))return MM6ExecResult::Trap;
  rt->cpu.sp=static_cast<std::uint8_t>(rt->cpu.sp+1u);if(!mm6_v06_cpu_read(rt,static_cast<std::uint16_t>(0x0100u|rt->cpu.sp),"STACK_READ_RETURN_PCH",&hi))return MM6ExecResult::Trap;
  rt->cpu.p=static_cast<std::uint8_t>((p|MM6Runtime::FlagU)&~MM6Runtime::FlagB);rt->cpu.pc=static_cast<std::uint16_t>(lo|(static_cast<std::uint16_t>(hi)<<8));return MM6ExecResult::Continue;
}

MM6ExecResult exec_brk(MM6Runtime* rt,const MM6InstructionContext& ctx){
  if(!begin_instruction(rt,ctx)) return MM6ExecResult::Trap;
  if(!code_read(rt,static_cast<std::uint16_t>(ctx.cpu_pc+1u),"CODE_BRK_PADDING_FETCH")) return MM6ExecResult::Trap;
  const std::uint16_t ret=static_cast<std::uint16_t>(ctx.cpu_pc+2u);
  auto push_local=[&](std::uint8_t v,const char* tag){const std::uint16_t a=static_cast<std::uint16_t>(0x0100u|rt->cpu.sp);if(!mm6_v06_cpu_write(rt,a,v,tag))return false;rt->cpu.sp=static_cast<std::uint8_t>(rt->cpu.sp-1u);return true;};
  if(!push_local(static_cast<std::uint8_t>(ret>>8),"STACK_WRITE_RETURN_PCH"))return MM6ExecResult::Trap;
  if(!push_local(static_cast<std::uint8_t>(ret),"STACK_WRITE_RETURN_PCL"))return MM6ExecResult::Trap;
  if(!push_local(static_cast<std::uint8_t>(rt->cpu.p|MM6Runtime::FlagB|MM6Runtime::FlagU),"STACK_WRITE_STATUS_BRK"))return MM6ExecResult::Trap;
  set_flag(rt,MM6Runtime::FlagI,true); std::uint8_t lo=0,hi=0;
  if(!mm6_v06_cpu_read(rt,0xFFFEu,"VECTOR_LOW_READ",&lo))return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_read(rt,0xFFFFu,"VECTOR_HIGH_READ",&hi))return MM6ExecResult::Trap;
  return commit_named(rt,ctx,"brk_interrupt",static_cast<std::uint16_t>(lo|(static_cast<std::uint16_t>(hi)<<8)));
}
MM6ExecResult exec_stp(MM6Runtime* rt,const MM6InstructionContext& ctx){if(!begin_instruction(rt,ctx))return MM6ExecResult::Trap;return MM6ExecResult::Halt;}

MM6ExecResult exec_jmp_abs(MM6Runtime* rt,const MM6InstructionContext& ctx){if(!fetch_abs_prefix(rt,ctx))return MM6ExecResult::Trap;return commit_named(rt,ctx,"direct_jmp",ctx.operand);}

MM6ExecResult exec_jmp_ind(MM6Runtime* rt,const MM6InstructionContext& ctx){
  if(!fetch_abs_prefix(rt,ctx)) return MM6ExecResult::Trap;
  std::uint8_t lo=0,hi=0;
  const std::uint16_t ptr=ctx.operand,hiaddr=static_cast<std::uint16_t>((ptr&0xFF00u)|((ptr+1u)&0x00FFu));
  if(!mm6_v06_cpu_read(rt,ptr,"POINTER_LOW_READ",&lo))return MM6ExecResult::Trap;
  if(!mm6_v06_cpu_read(rt,hiaddr,"POINTER_HIGH_READ_WITH_6502_PAGE_WRAP",&hi))return MM6ExecResult::Trap;
  const std::uint16_t target=static_cast<std::uint16_t>(lo|(static_cast<std::uint16_t>(hi)<<8));
  // Indirect tables may legitimately contain the same CPU address in more than one
  // physical PRG bank.  Accept only a generated target whose physical-bank alternative
  // matches the current mapper state; do not trap merely because an earlier same-PC edge
  // belongs to a different bank.
  bool saw_resolved_target=false; std::uint8_t mapped=0; bool have_mapped=false;
  for(std::size_t i=0;i<ctx.edge_count;++i){
    const auto& e=ctx.edges[i];
    if(e.status!=MM6EdgeStatus::Resolved||e.target_pc!=target)continue;
    saw_resolved_target=true;
    if(e.physical_bank>=0&&target>=0x8000u){
      if(!have_mapped){if(!mm6_v06_resolve_prg_bank(rt,target,&mapped))return MM6ExecResult::Trap;have_mapped=true;}
      if(mapped!=static_cast<std::uint8_t>(e.physical_bank))continue;
    }
    rt->cpu.pc=target;return MM6ExecResult::Continue;
  }
  for(std::size_t i=0;i<ctx.edge_count;++i){const auto& e=ctx.edges[i];if(e.status==MM6EdgeStatus::Unresolved)return mm6_trap_unresolved(rt,e.unresolved_id,ctx.physical_bank,ctx.cpu_pc);}
  if(saw_resolved_target)return identity_trap(rt,ctx,"indirect target CPU address is proved but current mapper bank is outside every generated finite target alternative");
  // $8037 terminates the caller-specific stack-dispatch helper. Its allowed
  // targets live on the originating JSR context, not this generic helper PC.
  if(rt->stack_dispatch_guard_active){
    for(std::size_t i=0;i<rt->stack_dispatch_target_count;++i){if(rt->stack_dispatch_targets[i]==target){rt->stack_dispatch_guard_active=false;rt->stack_dispatch_target_count=0;rt->stack_dispatch_targets.fill(0);rt->stack_dispatch_unresolved_id.clear();rt->cpu.pc=target;return MM6ExecResult::Continue;}}
    const std::string uid=rt->stack_dispatch_unresolved_id;rt->stack_dispatch_guard_active=false;rt->stack_dispatch_target_count=0;rt->stack_dispatch_targets.fill(0);rt->stack_dispatch_unresolved_id.clear();return mm6_trap_unresolved(rt,uid.c_str(),ctx.physical_bank,ctx.cpu_pc);
  }
  return identity_trap(rt,ctx,"indirect target is outside every generated finite target relation");
}

} // namespace

// Fixed specialized V10 helper definitions. Every symbol has direct semantics;
// there is no opcode table, opcode switch, fetched-opcode dispatch or fallback.
#define READ_ZERO(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_zero_read<op>(r,c);}
#define READ_ZEROX(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_zerox_read<op>(r,c);}
#define READ_ZEROY(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_zeroy_read<op>(r,c);}
#define READ_ABS(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_abs_read<op>(r,c);}
#define READ_ABSX(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_absx_read<op>(r,c);}
#define READ_ABSY(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_absy_read<op>(r,c);}
#define READ_INDY(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_indy_read<op>(r,c);}
#define READ_INDX(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_indx_read<op>(r,c);}
#define IMM(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_imm<op>(r,c);}
#define STORE_ZERO(name, val) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_zero_store<val>(r,c);}
#define STORE_ZEROX(name, val) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_zerox_store<val>(r,c);}
#define STORE_ZEROY(name, val) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_zeroy_store<val>(r,c);}
#define STORE_ABS(name, val) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_abs_store<val>(r,c);}
#define STORE_ABSX(name, val) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_abs_index_store<val>(r,c,r->cpu.x);}
#define STORE_ABSY(name, val) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_abs_index_store<val>(r,c,r->cpu.y);}
#define STORE_INDY(name, val) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_indy_store<val>(r,c);}
#define RMW_ZERO(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_zero_rmw<op>(r,c);}
#define RMW_ZEROX(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_zerox_rmw<op>(r,c);}
#define RMW_ABS(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_abs_rmw<op>(r,c);}
#define RMW_ABSX(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_absx_rmw<op>(r,c);}
#define RMW_ABSY(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_abs_index_rmw<op>(r,c,r->cpu.y);}
#define IMP(name, op) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_imp<op>(r,c);}
#define BRANCH(name, cond) MM6ExecResult name(MM6Runtime* r,const MM6InstructionContext& c){return exec_branch<cond>(r,c);}

READ_ZERO(mm6_exec_op_05_ORA_Zero,op_ora)
RMW_ZERO(mm6_exec_op_06_ASL_Zero,rmw_asl)
RMW_ZERO(mm6_exec_op_07_SLO_Zero,rmw_slo)
MM6ExecResult mm6_exec_op_08_PHP_Imp(MM6Runtime*r,const MM6InstructionContext&c){return exec_pha(r,c,true);} IMM(mm6_exec_op_09_ORA_Imm,op_ora) IMP(mm6_exec_op_0A_ASL_Acc,acc_asl)
BRANCH(mm6_exec_op_10_BPL_Rel,cond_bpl) READ_INDY(mm6_exec_op_11_ORA_IndY,op_ora) READ_ZEROX(mm6_exec_op_15_ORA_ZeroX,op_ora) IMP(mm6_exec_op_18_CLC_Imp,imp_clc) READ_ABSX(mm6_exec_op_1D_ORA_AbsX,op_ora)
MM6ExecResult mm6_exec_op_20_JSR_Abs(MM6Runtime*r,const MM6InstructionContext&c){return exec_jsr(r,c);} READ_ZERO(mm6_exec_op_24_BIT_Zero,op_bit) RMW_ZERO(mm6_exec_op_26_ROL_Zero,rmw_rol)
MM6ExecResult mm6_exec_op_28_PLP_Imp(MM6Runtime*r,const MM6InstructionContext&c){return exec_pull(r,c,true);} IMM(mm6_exec_op_29_AND_Imm,op_and) IMP(mm6_exec_op_2A_ROL_Acc,acc_rol) READ_ABS(mm6_exec_op_2C_BIT_Abs,op_bit)
BRANCH(mm6_exec_op_30_BMI_Rel,cond_bmi) READ_ZEROX(mm6_exec_op_35_AND_ZeroX,op_and) RMW_ZEROX(mm6_exec_op_36_ROL_ZeroX,rmw_rol) IMP(mm6_exec_op_38_SEC_Imp,imp_sec)
MM6ExecResult mm6_exec_op_40_RTI_Imp(MM6Runtime*r,const MM6InstructionContext&c){return exec_rti(r,c);} READ_ZERO(mm6_exec_op_45_EOR_Zero,op_eor) RMW_ZERO(mm6_exec_op_46_LSR_Zero,rmw_lsr)
MM6ExecResult mm6_exec_op_48_PHA_Imp(MM6Runtime*r,const MM6InstructionContext&c){return exec_pha(r,c,false);} IMM(mm6_exec_op_49_EOR_Imm,op_eor) IMP(mm6_exec_op_4A_LSR_Acc,acc_lsr)
MM6ExecResult mm6_exec_op_4C_JMP_Abs(MM6Runtime*r,const MM6InstructionContext&c){return exec_jmp_abs(r,c);} RMW_ABS(mm6_exec_op_4E_LSR_Abs,rmw_lsr) IMP(mm6_exec_op_58_CLI_Imp,imp_cli) READ_ABSX(mm6_exec_op_5D_EOR_AbsX,op_eor)
MM6ExecResult mm6_exec_op_60_RTS_Imp(MM6Runtime*r,const MM6InstructionContext&c){return exec_rts(r,c);} READ_ZERO(mm6_exec_op_65_ADC_Zero,op_adc) RMW_ZERO(mm6_exec_op_66_ROR_Zero,rmw_ror)
MM6ExecResult mm6_exec_op_68_PLA_Imp(MM6Runtime*r,const MM6InstructionContext&c){return exec_pull(r,c,false);} IMM(mm6_exec_op_69_ADC_Imm,op_adc) IMP(mm6_exec_op_6A_ROR_Acc,acc_ror)
MM6ExecResult mm6_exec_op_6C_JMP_Ind(MM6Runtime*r,const MM6InstructionContext&c){return exec_jmp_ind(r,c);} READ_ABS(mm6_exec_op_6D_ADC_Abs,op_adc) RMW_ZEROX(mm6_exec_op_76_ROR_ZeroX,rmw_ror) IMP(mm6_exec_op_78_SEI_Imp,imp_sei) READ_ABSY(mm6_exec_op_79_ADC_AbsY,op_adc) READ_ABSX(mm6_exec_op_7D_ADC_AbsX,op_adc)
STORE_ZERO(mm6_exec_op_84_STY_Zero,store_y) STORE_ZERO(mm6_exec_op_85_STA_Zero,store_a) STORE_ZERO(mm6_exec_op_86_STX_Zero,store_x) IMP(mm6_exec_op_88_DEY_Imp,imp_dey) IMP(mm6_exec_op_8A_TXA_Imp,imp_txa)
STORE_ABS(mm6_exec_op_8C_STY_Abs,store_y) STORE_ABS(mm6_exec_op_8D_STA_Abs,store_a) STORE_ABS(mm6_exec_op_8E_STX_Abs,store_x) BRANCH(mm6_exec_op_90_BCC_Rel,cond_bcc) STORE_ZEROX(mm6_exec_op_95_STA_ZeroX,store_a) STORE_ZEROY(mm6_exec_op_96_STX_ZeroY,store_x) IMP(mm6_exec_op_98_TYA_Imp,imp_tya) STORE_ABSY(mm6_exec_op_99_STA_AbsYW,store_a) IMP(mm6_exec_op_9A_TXS_Imp,imp_txs) STORE_ABSX(mm6_exec_op_9D_STA_AbsXW,store_a)
IMM(mm6_exec_op_A0_LDY_Imm,op_ldy) IMM(mm6_exec_op_A2_LDX_Imm,op_ldx) READ_ZERO(mm6_exec_op_A4_LDY_Zero,op_ldy) READ_ZERO(mm6_exec_op_A5_LDA_Zero,op_lda) READ_ZERO(mm6_exec_op_A6_LDX_Zero,op_ldx) IMP(mm6_exec_op_A8_TAY_Imp,imp_tay) IMM(mm6_exec_op_A9_LDA_Imm,op_lda) IMP(mm6_exec_op_AA_TAX_Imp,imp_tax) READ_ABS(mm6_exec_op_AC_LDY_Abs,op_ldy) READ_ABS(mm6_exec_op_AD_LDA_Abs,op_lda) READ_ABS(mm6_exec_op_AE_LDX_Abs,op_ldx)
BRANCH(mm6_exec_op_B0_BCS_Rel,cond_bcs) READ_INDY(mm6_exec_op_B1_LDA_IndY,op_lda) READ_ZEROX(mm6_exec_op_B5_LDA_ZeroX,op_lda) READ_ZEROY(mm6_exec_op_B6_LDX_ZeroY,op_ldx) READ_ABSY(mm6_exec_op_B9_LDA_AbsY,op_lda) IMP(mm6_exec_op_BA_TSX_Imp,imp_tsx) READ_ABSX(mm6_exec_op_BC_LDY_AbsX,op_ldy) READ_ABSX(mm6_exec_op_BD_LDA_AbsX,op_lda)
IMM(mm6_exec_op_C0_CPY_Imm,op_cpy) READ_ZERO(mm6_exec_op_C4_CPY_Zero,op_cpy) READ_ZERO(mm6_exec_op_C5_CMP_Zero,op_cmp) RMW_ZERO(mm6_exec_op_C6_DEC_Zero,rmw_dec) IMP(mm6_exec_op_C8_INY_Imp,imp_iny) IMM(mm6_exec_op_C9_CMP_Imm,op_cmp) IMP(mm6_exec_op_CA_DEX_Imp,imp_dex) READ_ABS(mm6_exec_op_CD_CMP_Abs,op_cmp) RMW_ABS(mm6_exec_op_CE_DEC_Abs,rmw_dec)
BRANCH(mm6_exec_op_D0_BNE_Rel,cond_bne) READ_INDY(mm6_exec_op_D1_CMP_IndY,op_cmp) RMW_ZEROX(mm6_exec_op_D6_DEC_ZeroX,rmw_dec) IMP(mm6_exec_op_D8_CLD_Imp,imp_cld) READ_ABSY(mm6_exec_op_D9_CMP_AbsY,op_cmp) READ_ABSX(mm6_exec_op_DD_CMP_AbsX,op_cmp) RMW_ABSX(mm6_exec_op_DE_DEC_AbsXW,rmw_dec)
IMM(mm6_exec_op_E0_CPX_Imm,op_cpx) READ_ZERO(mm6_exec_op_E4_CPX_Zero,op_cpx) READ_ZERO(mm6_exec_op_E5_SBC_Zero,op_sbc) RMW_ZERO(mm6_exec_op_E6_INC_Zero,rmw_inc) IMP(mm6_exec_op_E8_INX_Imp,imp_inx) IMM(mm6_exec_op_E9_SBC_Imm,op_sbc) IMP(mm6_exec_op_EA_NOP_Imp,imp_nop) READ_ABS(mm6_exec_op_ED_SBC_Abs,op_sbc) RMW_ABS(mm6_exec_op_EE_INC_Abs,rmw_inc)
BRANCH(mm6_exec_op_F0_BEQ_Rel,cond_beq) READ_ABSY(mm6_exec_op_F9_SBC_AbsY,op_sbc) RMW_ABSX(mm6_exec_op_FE_INC_AbsXW,rmw_inc)
// V10 newly admitted specialized forms.
MM6ExecResult mm6_exec_op_00_BRK_Imp(MM6Runtime*r,const MM6InstructionContext&c){return exec_brk(r,c);}
READ_INDX(mm6_exec_op_01_ORA_IndX,op_ora)
MM6ExecResult mm6_exec_op_02_STP_None(MM6Runtime*r,const MM6InstructionContext&c){return exec_stp(r,c);}
READ_ABS(mm6_exec_op_0D_ORA_Abs,op_ora)
READ_ABSY(mm6_exec_op_19_ORA_AbsY,op_ora)
RMW_ABSX(mm6_exec_op_1E_ASL_AbsXW,rmw_asl)
READ_ZERO(mm6_exec_op_25_AND_Zero,op_and)
IMM(mm6_exec_op_2B_ANC_Imm,op_anc)
READ_ABS(mm6_exec_op_2D_AND_Abs,op_and)
READ_ABSX(mm6_exec_op_3C_NOP_AbsX,op_nop_read)
READ_ABSX(mm6_exec_op_3D_AND_AbsX,op_and)
RMW_ABSX(mm6_exec_op_3E_ROL_AbsXW,rmw_rol)
MM6ExecResult mm6_exec_op_42_STP_None(MM6Runtime*r,const MM6InstructionContext&c){return exec_stp(r,c);}
READ_INDY(mm6_exec_op_51_EOR_IndY,op_eor)
RMW_ABSX(mm6_exec_op_5E_LSR_AbsXW,rmw_lsr)
RMW_ABS(mm6_exec_op_6E_ROR_Abs,rmw_ror)
READ_INDY(mm6_exec_op_71_ADC_IndY,op_adc)
IMM(mm6_exec_op_80_NOP_Imm,op_nop_read)
STORE_INDY(mm6_exec_op_91_STA_IndYW,store_a)
STORE_ZEROX(mm6_exec_op_94_STY_ZeroX,store_y)
READ_ZEROX(mm6_exec_op_B4_LDY_ZeroX,op_ldy)
READ_ABSY(mm6_exec_op_BE_LDX_AbsY,op_ldx)
READ_ABS(mm6_exec_op_CC_CPY_Abs,op_cpy)
READ_INDY(mm6_exec_op_F1_SBC_IndY,op_sbc)
RMW_ZEROX(mm6_exec_op_F6_INC_ZeroX,rmw_inc)
IMP(mm6_exec_op_F8_SED_Imp,imp_sed)
RMW_ABSY(mm6_exec_op_FB_ISC_AbsYW,rmw_isc)
READ_ABSX(mm6_exec_op_FD_SBC_AbsX,op_sbc)
RMW_ABSX(mm6_exec_op_FF_ISC_AbsXW,rmw_isc)

#undef READ_ZERO
#undef READ_ZEROX
#undef READ_ZEROY
#undef READ_ABS
#undef READ_ABSX
#undef READ_ABSY
#undef READ_INDY
#undef READ_INDX
#undef IMM
#undef STORE_ZERO
#undef STORE_ZEROX
#undef STORE_ZEROY
#undef STORE_ABS
#undef STORE_ABSX
#undef STORE_ABSY
#undef STORE_INDY
#undef RMW_ZERO
#undef RMW_ZEROX
#undef RMW_ABS
#undef RMW_ABSX
#undef RMW_ABSY
#undef IMP
#undef BRANCH
