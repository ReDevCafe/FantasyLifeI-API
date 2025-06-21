#include "Patcher/Patch.hpp"
#include "Hook/MemoryHelper.hpp"
#include "ModLoader.hpp"

Patch::Patch(Priority priority, const std::string name, uintptr_t target, const unsigned char *patch, unsigned patchSize) : _priority(priority), _name(name),  _target(target), _patch(patch), _patchSize(patchSize) {};

bool Patch::apply(uintptr_t baseAddress) {
    void *targetAddress = reinterpret_cast<void *>(baseAddress + _target);
    DWORD oldProtectFree;
    if (!VirtualProtect(targetAddress, _patchSize, PAGE_EXECUTE_READWRITE, &oldProtectFree)) {
        ModLoader::logger->error("Cannot write at ", std::hex, free);
        return false;
    }
    memcpy(targetAddress, _patch, _patchSize);
    if (!VirtualProtect(targetAddress, _patchSize, oldProtectFree, &oldProtectFree)) {
        ModLoader::logger->error("Cannot restore at  ", std::hex, free);
        return false;
    }
    return true;
}