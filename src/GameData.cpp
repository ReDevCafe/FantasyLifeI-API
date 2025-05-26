#include "GameData.hpp"
#include "Logger/ModLoaderLogger.hpp"

GameData::GameData(uintptr_t baseAddress) {
    mlLogger.info("Initialize GameData");
    this->_baseAddress = baseAddress;
    this->_gObjects = reinterpret_cast<FUObjectArray *>(this->_baseAddress + GOBJECTS_OFFSET);
    this->_gWorld = reinterpret_cast<void *>(this->_baseAddress + GWORLD_OFFSET);
    this->_gNames = reinterpret_cast<void *>(this->_baseAddress + GNAMES_OFFSET);
    while (this->_gObjects == nullptr)
        Sleep(1);
    while (this->_staticDataManager == nullptr)
        this->_staticDataManager = this->getUObject<UStaticDataManager>("StaticDataManager", false);
    mlLogger.info("Found StaticDataManager => ", std::hex, this->_staticDataManager);
}

uintptr_t GameData::getBaseAddress() {
    return _baseAddress;
}

FUObjectArray *GameData::getGObjects() {
    return _gObjects;
}

void *GameData::getGNames() {
    return _gNames;
}

void *GameData::getGWorld() {
    return _gWorld;
}

UStaticDataManager *GameData::getStaticDataManager() {
    return _staticDataManager;
}