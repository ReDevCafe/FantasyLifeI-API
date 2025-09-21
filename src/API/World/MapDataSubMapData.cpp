#include "API/World/MapDataSubMapData.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"
#include "Engine/FNamePool.hpp"

std::string MapDataSubMapData::GetSubMapIdentifier()
{
    return FNameUtils::GetString(this->_object.subMapId);
}

MapSubLevel MapDataSubMapData::GetSubMap()
{
    return ModLoader::gameCache->GetSubLevel(GetSubMapIdentifier());
}

std::string MapDataSubMapData::GetAreaID()
{
    return  FNameUtils::GetString(this->_object.AreaID);
}