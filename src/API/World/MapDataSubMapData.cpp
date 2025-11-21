#include "API/World/MapDataSubMapData.hpp"
#include "API/Engine/FName.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

std::string MapDataSubMapData::GetSubMapIdentifier()
{
    return static_cast<API_FName>(this->_object.subMapId).ToString();
}

MapSubLevel MapDataSubMapData::GetSubMap()
{
    return ModLoader::gameCache->GetSubLevel(GetSubMapIdentifier());
}

std::string MapDataSubMapData::GetAreaID()
{
    return static_cast<API_FName>(this->_object.AreaID).ToString();
}