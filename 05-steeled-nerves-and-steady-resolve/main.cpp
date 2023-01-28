#include "main.h"
#include <iostream>

std::string memoryToString (bool* memory, int16_t size) {
    std::string memString = "";
    for (int16_t address = 0; address < size; address++) {
        memString += (memory[address] ? "1" : "0");
    }
    return memString;
}

int main() {
    std::cout << "computer memory simulator, enter 2 as a memory value to exit" << std::endl;
    std::cout << "how much vram do you buy?" << std::endl;
    std::int16_t arrSize;
    std::cin >> arrSize;
    bool* memory = new bool[arrSize];
    for (int16_t x = 0; x < arrSize; x++) {
        memory[x] = 0;
    }
    std::int8_t sentinel = 2;
    while (true) {
        // print the memory
        std::cout << memoryToString(memory, arrSize) << std::endl;
        std::cout << "choose an address (0 to " + std::to_string(arrSize - 1) + ")" << std::endl;
        std::int16_t addr;
        std::cin >> addr;
        std::cout << "choose a value (0 or 1)" << std::endl;
        std::int16_t val;
        std::cin >> val;
        if (val == 0 && (addr > 0 && addr < 300)) {
            memory[addr] = 0;
        } else if (val == 1 && (addr > 0 && addr < 300)) {
            memory[addr] = 1;
        } else {
            std::cout << "invalid address or value or something, no changes" << std::endl;
        }
        std::cout << "" << std::endl;
        if (val == sentinel) {
            break;
        }
    }
    return 0;
}