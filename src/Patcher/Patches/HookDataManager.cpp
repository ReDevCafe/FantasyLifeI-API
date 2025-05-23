#include "Patcher/Patches/HookDataManager.hpp"

#include <iostream>

std::atomic<uintptr_t> HookDataManager::_ptr = 0;

void __fastcall HookDataManager::_getDataManager(uintptr_t dataManager) {
    _ptr.store(dataManager);
}

bool HookDataManager::apply(uintptr_t baseAddress) const
{
    DWORD oldProtect;
    void *targetAddress = (void *) (baseAddress + _target);
    void *freeZoneAddress = (void *) (baseAddress + freeZoneOffset);
    if (!VirtualProtect(targetAddress, 8, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    uintptr_t relative = freeZoneOffset - (_target + 8);
    unsigned char modifiedPatch[sizeof(patch)];
    memcpy(modifiedPatch, patch, sizeof(patch));
    memcpy(modifiedPatch + 4,  &relative, 4);
    memcpy(targetAddress, modifiedPatch, 8);
    if (!VirtualProtect(targetAddress, 8, oldProtect, &oldProtect))
        return false;
    unsigned char modifiedTrampoline[sizeof(trampoline)];
    memcpy(modifiedTrampoline, trampoline, sizeof(trampoline));
    memcpy(modifiedTrampoline + 2, &_hook, 8);
    oldProtect = 0;
    if (!VirtualProtect(freeZoneAddress, 13, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(freeZoneAddress, modifiedTrampoline, 13);
    if (!VirtualProtect(freeZoneAddress, 13, oldProtect, &oldProtect))
        return false;
    return true;
}