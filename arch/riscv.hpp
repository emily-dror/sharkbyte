// Copyright (c) 2025, Emily Dror

#pragma once

#include <cstdint>

enum class opcode_e : uint8_t {
    LOAD      = 0b0000011,  // Load instructions
    LOAD_FP   = 0b0000111,  // Floating-point loads
    MISC_MEM  = 0b0001111,  // Memory ordering
    OP_IMM    = 0b0010011,  // Integer register-immediate operations
    AUIPC     = 0b0010111,  // Add upper immediate to PC
    OP_IMM_32 = 0b0011011,  // 32-bit immediate ops (RV64)
    STORE     = 0b0100011,  // Store instructions
    STORE_FP  = 0b0100111,  // Floating-point stores
    AMO       = 0b0101111,  // Atomic memory operations
    OP        = 0b0110011,  // Integer register-register operations
    LUI       = 0b0110111,  // Load upper immediate
    OP_32     = 0b0111011,  // 32-bit register ops (RV64)
    MADD      = 0b1000011,  // Multiply-add (RV32F/D)
    MSUB      = 0b1000111,  // Multiply-sub
    NMSUB     = 0b1001011,  // Negated multiply-sub
    NMADD     = 0b1001111,  // Negated multiply-add
    OP_FP     = 0b1010011,  // Floating-point operations
    BRANCH    = 0b1100011,  // Conditional branches
    JALR      = 0b1100111,  // Jump and link register
    JAL       = 0b1101111,  // Jump and link
    SYSTEM    = 0b1110011   // System (ecall, ebreak, CSR)
};

opcode_e get_opcode(uint32_t instruction);
