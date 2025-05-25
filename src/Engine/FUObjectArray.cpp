#include "Engine/FUObjectArray.hpp"
#include <synchapi.h>

UObject *FUObjectArray::getObject(uint32_t index) {
    if (index >= (uint32_t) this->ObjObjects.NumElements)
        return nullptr;
    const uint32_t chunkIndex = index / NUM_ELEMENT_PER_CHUNK;
    const uint32_t withinChunkIndex = index % NUM_ELEMENT_PER_CHUNK;
    FUObjectItem *item = this->ObjObjects.Objects[chunkIndex];
    item += withinChunkIndex;
    return item->Object;
}

void FUObjectArray::lock() {
    EnterCriticalSection(&this->ObjObjectsCritical.CriticalSection);
}

void FUObjectArray::unlock() {
    LeaveCriticalSection(&this->ObjObjectsCritical.CriticalSection);
}