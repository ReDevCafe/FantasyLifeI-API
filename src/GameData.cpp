#include "GameData.hpp"
#include "Logger/ModLoaderLogger.hpp"

GameData::GameData(uintptr_t baseAddress) : _staticDataManager(nullptr), _dynamicDataManager(nullptr) {
    mlLogger.info("Initialize GameData");
    this->_baseAddress = baseAddress;
    this->_gObjects = reinterpret_cast<FUObjectArray *>(this->_baseAddress + GOBJECTS_OFFSET);
    this->_gWorld = reinterpret_cast<void *>(this->_baseAddress + GWORLD_OFFSET);
    this->_gNames = reinterpret_cast<void *>(this->_baseAddress + GNAMES_OFFSET);
    waitObject(&this->_gObjects);
    waitObject(&this->_staticDataManager, "StaticDataManager");
    mlLogger.info("Found StaticDataManager => ", std::hex, this->_staticDataManager);
    waitObject(&this->_dynamicDataManager, "DynamicDataManager");
    mlLogger.info("Found DynamicDataManager => ", std::hex, this->_dynamicDataManager);
    waitObject(&this->_staticDataManager->m_CharaParameter);
    _player = std::make_unique<Player>(_staticDataManager->m_CharaParameter->m_dataMap.Data[0].Value.Second);
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

void *GameData::getDynamicDataManager() {
    return _dynamicDataManager;
}