#include "Hook/MemoryHelper.hpp"
#include <stdexcept>

uintptr_t MemoryHelper::findFreeMemory(uintptr_t address, uint8_t length) {
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

bool MemoryHelper::isFree(uintptr_t address, uint8_t length) {
    unsigned char *ptr = (unsigned char *) address;
    for (int i = 0; i < length; ++i) {
        if (*(ptr + i) != 0xCC)
            return false;
    }
    return true;
}

CONTEXT MemoryHelper::getPreviousFrame(CONTEXT originalCtx, uint8_t nth) {
    DWORD64 imageBase = 0;
    CONTEXT newContext = originalCtx;
    for (int i = 0; i < nth; ++i) {
        PRUNTIME_FUNCTION runtimeFunction = RtlLookupFunctionEntry(newContext.Rip, &imageBase, NULL);
        if (!runtimeFunction)
            throw std::runtime_error("Cannot get previous frame");
        void* handlerData = nullptr;
        ULONG64 establisherFrame = 0;
        RtlVirtualUnwind(
            UNW_FLAG_NHANDLER,
            imageBase,
            newContext.Rip,
            runtimeFunction,
            &newContext,
            &handlerData,
            &establisherFrame,
            nullptr
        );
    }
    return newContext;
}