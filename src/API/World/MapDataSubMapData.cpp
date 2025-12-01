#include "API/World/MapDataSubMapData.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

MapSubLevel MapDataSubMapData::GetSubMap()
{
    return ModLoader::gameCache->GetSubLevel(GetSubMapIdentifier());
}
