#include <iostream>
#include "arch/riscv.hpp"

int main (int argc, char *argv[]) {
    std::cout << "Hello, world!" << std::endl;
    std::cout << "I'm sharkbyte." << std::endl;
    uint32_t inst = 0x7F;
    auto op = get_opcode(inst);
    (void)op;
    return 0;
}
