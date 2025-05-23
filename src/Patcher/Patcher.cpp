

#include "Patcher/Patcher.hpp"
#include <iostream>

std::priority_queue<Patch *, std::vector<Patch *>, Compare> Patcher::_queue;

void Patcher::add(Patch *patch) {
    _queue.push(std::move(patch));
}

bool Patcher::applyPatches(uintptr_t baseAddress) {
    std::cout << "[FLiML] Starting to load patches ..." << std::endl;
    while (!_queue.empty()) {
        Patch *patch = _queue.top();
        if (!patch->apply(baseAddress)) {
            std::cout << "[FLiML] " << "Failed to apply patch: " << patch->getName() << " at " << baseAddress + patch->getTargetOffset() << std::endl;
            return false;
        }
        std::cout << "[FLiML] " << patch->getName() << " successfully applied" << std::endl;
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