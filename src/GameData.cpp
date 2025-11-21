#include "GameData.hpp"
#include "API/Engine/FName.hpp"
#include "API/Entities/Player/Player.hpp"
#include "ModLoader.hpp"
#include "Offset.h"

GameData::GameData(uintptr_t baseAddress, uint32_t imageSize) : 
    _staticDataManager(nullptr), 
    _dynamicDataManager(nullptr)
{
    ModLoader::logger->verbose("Initialize GameData");
    this->_baseAddress = baseAddress;
    this->_imageSize = imageSize;
}

void GameData::init()
{
    this->_gObjects = reinterpret_cast<FUObjectArray *>(this->_baseAddress + GOBJECTS_OFFSET);
    this->_gWorld = reinterpret_cast<void *>(this->_baseAddress + GWORLD_OFFSET);
    this->_gNames = reinterpret_cast<void *>(this->_baseAddress + GNAMES_OFFSET);
    this->waitObject(&this->_gObjects);
    this->waitObject(&this->_staticDataManager, "StaticDataManager", 1);
    ModLoader::logger->verbose("Found StaticDataManager => ", std::hex, this->_staticDataManager);
    this->waitObject(&this->_dynamicDataManager, "DynamicDataManager", 1);
    ModLoader::logger->verbose("Found DynamicDataManager => ", std::hex, this->_dynamicDataManager);
}

void GameData::initOthersData() {
    this->waitObject(&this->_dynamicDataManager->GDDCharaStatus);
    this->waitObject(&this->_staticDataManager->m_CharaParameter);
    _player = std::make_unique<Player>(
        this->_staticDataManager->m_CharaParameter->m_dataMap.Data[0].Value.Second,
        static_cast<FCharaStatusP *>(this->_dynamicDataManager->GDDCharaStatus->m_permanent.m_stAvatarP.Data),
        this->_dynamicDataManager->GDDCharaStatus->m_volatile.m_stAvatarV.Data[0]
    );

    ModLoader::logger->info("OK: GameData has been initialized");
}

UObject* GameData::_getUObject(std::string_view name, bool safe, int nth = 0)
{
    API_FName apiName(name);

    UObject *object = nullptr;
    uint32_t counter = 0;
    if (safe)
        _gObjects->lock();
    for (int i = 0; i < _gObjects->ObjObjects.NumElements; ++i) {
        object = _gObjects->getObject(i);
        if (object == nullptr) continue;
        if (static_cast<API_FName>(object->NamePrivate) == apiName && ++counter > nth) break;
        object = nullptr;
    }
    if (safe)
        _gObjects->unlock();

    return object;
}

Player *GameData::getPlayer() {
    return _player.get();
}

uintptr_t GameData::getBaseAddress() {
    return _baseAddress;
}

uint32_t GameData::getImageSize()
{
    return _imageSize;
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