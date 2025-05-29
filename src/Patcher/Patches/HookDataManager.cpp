#include "Patcher/Patches/HookDataManager.hpp"

#include <iostream>

std::atomic<uintptr_t> HookDataManager::_ptr = 0;

void __fastcall HookDataManager::_getDataManager(uintptr_t dataManager) {
    _ptr.store(dataManager);
}

bool HookDataManager::apply(uintptr_t baseAddress) const
{
    return (false);
}