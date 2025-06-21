#ifndef MEMORYHELPER_HPP_
    #define MEMORYHELPER_HPP_

    #include <cstdint>
    #include <limits>
    #include <stdexcept>
    
    #define NOMINMAX
    #include <windows.h>

class MemoryHelper {
    public:
        static uintptr_t findFreeMemory(uintptr_t address, uint8_t length);
        static uintptr_t findPattern(uintptr_t start, size_t rangeSize, const uint8_t* pattern, const char* mask);
        static bool isReadable(void *ptr);
        static bool isFree(uintptr_t address,  uint8_t length);
        static CONTEXT getPreviousFrame(CONTEXT originalCtx, uint8_t nth);
    protected:
    private:
};

#endif /* !MEMORYHELPER_HPP_ */
