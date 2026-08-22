# Generated static translation

`static-core` contains the generated fixed C++ translation used by the
production build. It is sharded by physical PRG bank and dispatches only by
physical bank and CPU program counter. Dispatcher misses and unsupported
finite-domain states fail closed.

The generated files contain no commercial ROM image.
