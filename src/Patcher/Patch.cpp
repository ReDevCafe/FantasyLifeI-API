#include "Patcher/Patch.hpp"
#include "Hook/MemoryHelper.hpp"
#include "Logger/ModLoaderLogger.hpp"

Patch::Patch(Priority priority, const std::string name, uintptr_t target, const unsigned char *patch, unsigned patchSize) : _priority(priority), _name(name),  _target(target), _patch(patch), _patchSize(patchSize) {};

bool Patch::apply(uintptr_t baseAddress) {
    void *targetAddress = reinterpret_cast<void *>(baseAddress + _target);
    DWORD oldProtectFree;
    if (!VirtualProtect(targetAddress, _patchSize, PAGE_EXECUTE_READWRITE, &oldProtectFree)) {
        mlLogger.error("Cannot write at ", std::hex, free);
        return false;
    }
    mlLogger.info(std::hex, targetAddress);
    memcpy(targetAddress, _patch, _patchSize);
    if (!VirtualProtect(targetAddress, _patchSize, oldProtectFree, &oldProtectFree)) {
        mlLogger.error("Cannot restore at  ", std::hex, free);
        return false;
    }
    return true;
}