#include "riscv.hpp"

opcode_e get_opcode(uint32_t instruction) {
    return static_cast<opcode_e>(instruction & 0x7F);
}
