#ifndef PATCH_HPP_
    #define PATCH_HPP_

    #include <cstdint>
    #include <windows.h>
    #include <string>

    #include "Priority.hpp"

constexpr unsigned char trampoline[13] = { 0x48, 0xB8, '?', '?', '?', '?', '?', '?', '?', '?', 0xFF, 0xD0, 0xC3};
constexpr unsigned char patch[6] = { 0xE9, '?', '?', '?', '?', 0xC3 };

class Patch {
    public:
        Patch(Priority priority, const std::string name, uintptr_t target, uintptr_t callback);
        ~Patch() = default;
        Priority getPriority() const { return _priority; };
        uintptr_t getCallback() const { return _callback; };
        uintptr_t getTarget() const { return _target; };
        const std::string &getName() const { return _name; };
        virtual bool apply(uintptr_t baseAddress);
    protected:
        Priority _priority;
        std::string _name;
        uintptr_t _callback;
        uintptr_t _target;
    private:
};

#endif /* !PATCH_HPP_ */
