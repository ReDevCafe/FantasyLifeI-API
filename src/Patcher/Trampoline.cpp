#include "Patcher/Trampoline.hpp"
#include "Hook/MemoryHelper.hpp"
#include "Logger/ModLoaderLogger.hpp"

Trampoline::Trampoline(Priority priority, const std::string name, uintptr_t target, uintptr_t callback) : Patch(priority, name, target, patch, sizeof(patch)), _callback(callback) {};

bool Trampoline::apply(uintptr_t baseAddress) {
    uintptr_t stubAddress;
    try {
        stubAddress = MemoryHelper::findFreeMemory(baseAddress + _target + 1 + sizeof(patch), sizeof(stub));
    } catch (std::exception &exception) {
        mlLogger.error(exception.what());
        return false;
    }
    if (!MemoryHelper::isFree(baseAddress + _target + 1, sizeof(patch) - 1)) {
        mlLogger.error("Not enough space at ", std::hex, baseAddress + _target);
        return false;
    }
    DWORD oldProtectPtr;
    DWORD oldProtectFree;
    void *ptr = reinterpret_cast<void *>(baseAddress + _target);
    void *stubPtr = reinterpret_cast<void *>(stubAddress);
    mlLogger.info(std::hex, ptr);
    mlLogger.info(std::hex, stubPtr);
    if (!VirtualProtect(free, sizeof(trampoline), PAGE_EXECUTE_READWRITE, &oldProtectFree)) {
        mlLogger.error("Cannot write at ", std::hex, free);
        return false;
    }
    if (!VirtualProtect(ptr, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtectPtr)) {
        mlLogger.error("Cannot write at ", std::hex, ptr);
        return false;
    }
    uintptr_t relative = stubAddress - baseAddress - _target - 5;

    void *customTrampoline = VirtualAlloc(NULL, sizeof(trampoline), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (customTrampoline == nullptr) {
        mlLogger.error("Cannot alloc memory for the trampoline");
        return false;
    }
    mlLogger.info(std::hex, customTrampoline);
    memcpy(customTrampoline, trampoline, sizeof(trampoline));
    memcpy(static_cast<char*>(customTrampoline) + 10, &_callback, 8);

    unsigned char customPatch[sizeof(patch)];
    memcpy(customPatch, patch, sizeof(patch));
    memcpy(customPatch + 1,  &relative, 4);

    unsigned char customStub[sizeof(stub)]; 
    memcpy(customStub, stub, sizeof(stub));
    memcpy(customStub + 2, &customTrampoline, 8);

    memcpy(ptr, customPatch, sizeof(patch));
    memcpy(stubPtr, customStub, sizeof(customStub));

    if (!VirtualProtect(stubPtr, sizeof(trampoline), oldProtectFree, &oldProtectFree)) {
        mlLogger.error("Cannot restore at  ", std::hex, free);
        VirtualFree(customTrampoline, 0, MEM_RELEASE);
        return false;
    }
    if (!VirtualProtect(ptr, sizeof(patch), oldProtectPtr, &oldProtectPtr)) {
        mlLogger.error("Cannot restore at ", std::hex, ptr);
        VirtualFree(customTrampoline, 0, MEM_RELEASE);
        return false;
    }
    _createdTrampoline = reinterpret_cast<uintptr_t>(customTrampoline);
    return (true);
}