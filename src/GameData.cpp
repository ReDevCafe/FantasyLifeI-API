#include "GameData.hpp"
#include "Logger/ModLoaderLogger.hpp"
#include "API/Life/ULifeData.hpp"
#include "API/Life/LifeData.hpp"

GameData::GameData(uintptr_t baseAddress) : _staticDataManager(nullptr), _dynamicDataManager(nullptr) {
    mlLogger.info("Initialize GameData");
    this->_baseAddress = baseAddress;
    this->_gObjects = reinterpret_cast<FUObjectArray *>(this->_baseAddress + GOBJECTS_OFFSET);
    this->_gWorld = reinterpret_cast<void *>(this->_baseAddress + GWORLD_OFFSET);
    this->_gNames = reinterpret_cast<void *>(this->_baseAddress + GNAMES_OFFSET);
    this->waitObject(&this->_gObjects);
    this->waitObject(&this->_staticDataManager, "StaticDataManager", 1);
    mlLogger.info("Found StaticDataManager => ", std::hex, this->_staticDataManager);
    this->waitObject(&this->_dynamicDataManager, "DynamicDataManager", 1);
    mlLogger.info("Found DynamicDataManager => ", std::hex, this->_dynamicDataManager);
    

    this->waitObject(&this->_staticDataManager->m_LifeData);
    this->waitObject(&this->_staticDataManager->m_LifeText_Noun);
    this->waitObject(&this->_staticDataManager->m_LifeText);

    this->waitObject(&this->_dynamicDataManager->GDDCharaStatus);
    
    /*
    this->waitObject(&this->_staticDataManager->m_CharaParameter);
    UObject *detailsInfo = this->getUObject<UObject>("CharacterDetailInfo");
    mlLogger.info(Utils::FNameToString(baseAddress, detailsInfo->ClassPrivate->NamePrivate));
    _player = std::make_unique<Player>(_staticDataManager->m_CharaParameter->m_dataMap.Data[0].Value.Second);
    */
}

Player *GameData::getPlayer() {
    return _player.get();
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

UDynamicDataManager *GameData::getDynamicDataManager() {
    return _dynamicDataManager;
}