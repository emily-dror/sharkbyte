# sharkbyte
This project is following the official RISC-V repo

use the following:
```
brew tap riscv-software-src/riscv
brew install riscv-tools
```

compile to a flat binary:
```
riscv64-unknown-elf-gcc -nostdlib -march=rv32i -mabi=ilp32 -o add.elf add.c
riscv64-unknown-elf-objcopy -O binary add.elf add.bin
```

view bins:
```
riscv64-unknown-elf-objdump -d add.elf
hexdump add.bin
hexdump -e '1/4 "0x%08x\n"' add.bin     # view 4 bytes at a time
```

project initial plan:
```
sharkbyte/
│
├── sim.cpp
├── interpreter/
│   ├── base.hpp
│   ├── x86.cpp
│   ├── arm.cpp
│   └── riscv.cpp
├── decoder/
│   ├── x86_decoder.cpp
│   ├── arm_decoder.cpp
│   └── riscv_decoder.cpp
├── memory/
│   ├── memory.cpp
│   └── memory.hpp
└── common/
    ├── types.hpp
    └── utils.hpp
```

In addition, the goal for the future is a fully functional SOC,
so instead of an interpreter we'll implement a simple core
