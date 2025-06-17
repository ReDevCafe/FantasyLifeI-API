#ifndef PATCH_HPP_
    #define PATCH_HPP_

    #include <cstdint>
    #include <windows.h>
    #include <string>

    #include "Priority.hpp"

class Patch {
    public:
        Patch(Priority priority, const std::string name, uintptr_t target, const unsigned char *patch, unsigned int patchSize);
        ~Patch() = default;
        Priority getPriority() const { return _priority; };
        uintptr_t getTarget() const { return _target; };
        const std::string &getName() const { return _name; };
        const unsigned char *getBytecodes() { return _patch; };
        unsigned int getPatchSize() { return _patchSize; };
        virtual bool apply(uintptr_t baseAddress);
    protected:
        Priority _priority;
        std::string _name;
        uintptr_t _target;
        const unsigned char *_patch;
        unsigned int _patchSize;
    private:
};

#endif /* !PATCH_HPP_ */
