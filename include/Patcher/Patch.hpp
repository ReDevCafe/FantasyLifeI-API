#ifndef PATCH_HPP_
    #define PATCH_HPP_

    #include <cstdint>
    #include <windows.h>
    #include <string>

    #include "Priority.hpp"

class Patch {
    public:
        Patch(Priority priority, const std::string name, uintptr_t target, uintptr_t hook) : _priority(priority), _hook(hook), _name(name),  _target(target) {};
        ~Patch() = default;
        Priority getPriority() const { return _priority; };
        uintptr_t getHookPtr() const { return _hook; };
        uintptr_t getTargetOffset() const { return _target; };
        const std::string &getName() const { return _name; };
        virtual bool apply(uintptr_t baseAddress) const = 0;
    protected:
        Priority _priority;
        std::string _name;
        uintptr_t _hook;
        uintptr_t _target;
    private:
};

#endif /* !PATCH_HPP_ */
