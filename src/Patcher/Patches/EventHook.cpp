#include "Patcher/Patches/EventHook.hpp"

bool EventHook::apply(uintptr_t baseAddress) {
    if (!Patch::apply(baseAddress))
        return false;
    EventHandler::addEvent(_type, _createdTrampoline);
    return true;
}
