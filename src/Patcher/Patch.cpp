#include "Patcher/Patch.hpp"
#include "Hook/MemoryHelper.hpp"
#include "ModLoader.hpp"

Patch::Patch(Priority priority, const std::string name, uintptr_t target, uintptr_t callback) : _priority(priority), _callback(callback), _name(name),  _target(target) {};

bool Patch::apply(uintptr_t baseAddress) {
    uintptr_t stubAddress;
    try {
        stubAddress = MemoryHelper::findFreeMemory(baseAddress + _target + 1 + sizeof(patch), sizeof(stub));
    } catch (std::exception &exception) {
        ModLoader::logger->error(exception.what());
        return false;
    }
    if (!MemoryHelper::isFree(baseAddress + _target + 1, sizeof(patch) - 1)) {
        ModLoader::logger->error("Not enough space at ", std::hex, baseAddress + _target);
        return false;
    }
    DWORD oldProtectPtr;
    DWORD oldProtectFree;
    void *ptr = reinterpret_cast<void *>(baseAddress + _target);
    void *stubPtr = reinterpret_cast<void *>(stubAddress);
    ModLoader::logger->info(std::hex, ptr);
    ModLoader::logger->info(std::hex, stubPtr);
    if (!VirtualProtect(free, sizeof(trampoline), PAGE_EXECUTE_READWRITE, &oldProtectFree)) {
        ModLoader::logger->error("Cannot write at ", std::hex, free);
        return false;
    }
    if (!VirtualProtect(ptr, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtectPtr)) {
        ModLoader::logger->error("Cannot write at ", std::hex, ptr);
        return false;
    }
    uintptr_t relative = stubAddress - baseAddress - _target - 5;

    void *customTrampoline = VirtualAlloc(NULL, sizeof(trampoline), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (customTrampoline == nullptr) {
        ModLoader::logger->error("Cannot alloc memory for the trampoline");
        return false;
    }
    ModLoader::logger->info(std::hex, customTrampoline);
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
        ModLoader::logger->error("Cannot restore at  ", std::hex, free);
        VirtualFree(customTrampoline, 0, MEM_RELEASE);
        return false;
    }
    if (!VirtualProtect(ptr, sizeof(patch), oldProtectPtr, &oldProtectPtr)) {
        ModLoader::logger->error("Cannot restore at ", std::hex, ptr);
        VirtualFree(customTrampoline, 0, MEM_RELEASE);
        return false;
    }
    _createdTrampoline = reinterpret_cast<uintptr_t>(customTrampoline);
    return (true);
}