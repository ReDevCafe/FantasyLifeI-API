#ifndef PATCH_HPP_
    #define PATCH_HPP_

    #include <cstdint>
    #include <windows.h>
    #include <string>

    #include "Priority.hpp"

constexpr unsigned char trampoline[] = {
    0x55,
    0x48, 0x89, 0xe5,
    0x48, 0x83, 0xEC, 0x20,
    0x48, 0xB8, '?', '?', '?', '?', '?', '?', '?', '?',
    0xFF, 0xD0,
    0x48, 0x83 ,0xC4, 0x20,
    0x5d,
    0xC3,
};

constexpr unsigned char stub[] = {
    0x48, 0xB8, '?', '?', '?', '?', '?', '?', '?', '?',
    0xFF, 0xE0
};

constexpr unsigned char patch[] = {
    0xE9, '?', '?', '?', '?',
};

class Patch {
    public:
        Patch(Priority priority, const std::string name, uintptr_t target, uintptr_t callback);
        ~Patch() = default;
        Priority getPriority() const { return _priority; };
        uintptr_t getCallback() const { return _callback; };
        uintptr_t getTarget() const { return _target; };
        const std::string &getName() const { return _name; };
        uintptr_t getCreatedTrampoline() const { return _createdTrampoline; };
        virtual bool apply(uintptr_t baseAddress);
    protected:
        Priority _priority;
        std::string _name;
        uintptr_t _callback;
        uintptr_t _target;
        uintptr_t _createdTrampoline;
    private:
};

#endif /* !PATCH_HPP_ */
