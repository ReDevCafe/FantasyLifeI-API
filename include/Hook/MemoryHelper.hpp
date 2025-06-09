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
        static bool isFree(uintptr_t address,  uint8_t length);
        static CONTEXT getPreviousFrame(CONTEXT originalCtx, uint8_t nth);
    protected:
    private:
};

#endif /* !MEMORYHELPER_HPP_ */
