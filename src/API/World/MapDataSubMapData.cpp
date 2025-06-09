#include "API/World/MapDataSubMapData.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"
#include "Utils.hpp"

#include "Logger/ModLoaderLogger.hpp"

std::string MapDataSubMapData::GetSubMapIdentifier()
{
    return Utils::FNameToString(this->_object.subMapId);
}

MapSubLevel MapDataSubMapData::GetSubMap()
{
    return ModLoader::gameCache->GetSubLevel(GetSubMapIdentifier());
}

std::string MapDataSubMapData::GetAreaID()
{
    return  Utils::FNameToString(this->_object.AreaID);
}