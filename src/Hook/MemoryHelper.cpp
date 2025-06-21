#include "Hook/MemoryHelper.hpp"
#include "ModLoader.hpp"

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

bool MemoryHelper::isReadable(void *ptr) {
    MEMORY_BASIC_INFORMATION mbi = {};
    if (VirtualQuery(ptr, &mbi, sizeof(mbi)) == 0)
        return false;
    DWORD protect = mbi.Protect;
    if (protect & PAGE_GUARD || protect == PAGE_NOACCESS)
        return false;
    return protect & (PAGE_READONLY | PAGE_READWRITE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE);
}

uintptr_t MemoryHelper::findPattern(uintptr_t start, size_t rangeSize, const uint8_t* pattern, const char* mask) {
    size_t patternLength = std::strlen(mask);
    for (size_t i = 0; i <= rangeSize - patternLength; ++i) {
        uintptr_t currentAddress = start + i;
        uint8_t* memory = reinterpret_cast<uint8_t*>(currentAddress);
        bool match = true;
        for (size_t j = 0; j < patternLength; ++j) {
            if (mask[j] == '?') continue;
            if (memory[j] != pattern[j]) {
                match = false;
                break;
            }
        }
        if (match)
            return currentAddress;
    }
    throw std::out_of_range("Pattern not found");
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