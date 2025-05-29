#ifndef MEMORY_HPP_
    #define MEMORY_HPP_

    #include <cstdint>
    #include <limits>
    #include <stdexcept>

class Memory {
    public:
        static uintptr_t findFreeMemory(uintptr_t address, uint8_t length);
        static bool isFree(uintptr_t address,  uint8_t length);
    protected:
    private:
};

#endif /* !MEMORY_HPP_ */
