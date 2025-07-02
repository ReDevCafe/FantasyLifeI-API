

#include "Patcher/Patcher.hpp"
#include "ModLoader.hpp"
#include <iostream>

std::priority_queue<Patch *, std::vector<Patch *>, Compare> Patcher::_queue;

void Patcher::add(Patch *patch) {
    _queue.push(std::move(patch));
}

bool Patcher::applyPatches(uintptr_t baseAddress) {
    ModLoader::logger->verbose("Starting to load patches ...");
    while (!_queue.empty()) {
        Patch *patch = _queue.top();
        if (!patch->apply(baseAddress)) {
            ModLoader::logger->error("Failed to apply patch: ", patch->getName(), " at ", std::hex, baseAddress + patch->getTarget());
            return false;
        }
        ModLoader::logger->info(patch->getName(), " successfully applied");
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