

#include "Patcher/Patcher.hpp"
#include <iostream>
#include <Logger/ModLoaderLogger.hpp>

std::priority_queue<Patch *, std::vector<Patch *>, Compare> Patcher::_queue;

void Patcher::add(Patch *patch) {
    _queue.push(std::move(patch));
}

bool Patcher::applyPatches(uintptr_t baseAddress) 
{
    mlLogger.info("Stating to load patches...");
    while (!_queue.empty()) {
        Patch *patch = _queue.top();
        if (!patch->apply(baseAddress)) 
        {
            mlLogger.error("Failed to apply patch: ", patch->getName(), " at ", baseAddress + patch->getTargetOffset());
            return false;
        }
        mlLogger.info("Patches successfully applied");
        _queue.pop();
        delete patch;
    }
    return true;
}

void Patcher::clear() {
    while (!_queue.empty()) {
        Patch *patch = _queue.top();
        _queue.pop();
        delete patch;
    }
}