# Generated static core

This directory contains the fixed, mapper-aware C++ translation used by the
production build. Each accepted instruction identity is bound to a specialized
helper. Runtime code never fetches an opcode byte to choose an implementation.
The dispatcher selects only by physical PRG bank and CPU program counter.

Every wrapper carries its ordered bus-cycle and access plan. Rejected states
and dispatcher misses call the fail-closed trap path. No commercial ROM image
is embedded here.
