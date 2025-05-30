#include "Patcher/Patch.hpp"
#include "Hook/Memory.hpp"
#include "Logger/ModLoaderLogger.hpp"

Patch::Patch(Priority priority, const std::string name, uintptr_t target, uintptr_t callback) : _priority(priority), _callback(callback), _name(name),  _target(target), _trampoline(0) {};

bool Patch::apply(uintptr_t baseAddress) {
    try {
        _trampoline = Memory::findFreeMemory(baseAddress + _target + 6, 13);
    } catch (std::exception &exception) {
        mlLogger.error(exception.what());
        return false;
    }
    if (!Memory::isFree(baseAddress + _target + 1, 4)) {
        mlLogger.error("Not enough space at ", std::hex, baseAddress + _target);
        return false;
    }
    DWORD oldProtectPtr;
    DWORD oldProtectFree;
    void *ptr = reinterpret_cast<void *>(baseAddress + _target);
    void *free = reinterpret_cast<void *>(_trampoline);
    if (!VirtualProtect(free, 13, PAGE_EXECUTE_READWRITE, &oldProtectFree)) {
        mlLogger.error("Cannot write at ", std::hex, free);
        return false;
    }
    if (!VirtualProtect(ptr, 6, PAGE_EXECUTE_READWRITE, &oldProtectPtr)) {
        mlLogger.error("Cannot write at ", std::hex, ptr);
        return false;
    }
    mlLogger.info(std::hex, ptr);
    uintptr_t relative = _trampoline - baseAddress - _target - 5;
    mlLogger.info(std::hex, _trampoline);
    unsigned char customPatch[6];
    memcpy(customPatch, patch, 6);
    memcpy(customPatch + 1,  &relative, 4);
    unsigned char customTrampoline[13]; 
    memcpy(customTrampoline, trampoline, 13);
    memcpy(customTrampoline + 2, &_callback, 8);
    memcpy(ptr, customPatch, 6);
    memcpy(free, customTrampoline, 13);
    if (!VirtualProtect(free, 13, oldProtectFree, &oldProtectFree)) {
        mlLogger.error("Cannot restore at  ", std::hex, free);
        return false;
    }
    if (!VirtualProtect(ptr, 6, oldProtectPtr, &oldProtectPtr)) {
        mlLogger.error("Cannot restore at ", std::hex, ptr);
        return false;
    }
    return (true);
}