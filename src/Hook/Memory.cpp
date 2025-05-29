#include "Hook/Memory.hpp"

uintptr_t Memory::findFreeMemory(uintptr_t address, uint8_t length) {
    unsigned char *ptr = (unsigned char *) address;
    for (int i = 0; i < std::numeric_limits<int>::max(); ++i) {
        if (*(ptr + i) != 0xCC) continue;
        int j = 1;
        for (; j < length; ++j)
            if (*(ptr + i + j) != 0xCC) break;
        if (j == length) return address + i;
        i += j;
    }
    throw std::out_of_range("Offset can't exceed 32 bit signed int");
}

bool Memory::isFree(uintptr_t address, uint8_t length) {
    unsigned char *ptr = (unsigned char *) address;
    for (int i = 0; i < length; ++i) {
        if (*(ptr + i) != 0xCC)
            return false;
    }
    return true;
}