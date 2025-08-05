#include "API/World/Level.hpp"
#include "Utils.hpp"
#include "ModLoader.hpp"

Level::Level(UGDSMapPickPoint* mapPickPoint)
{
    for(int i = 0; i < mapPickPoint->m_dataMap.Data.Count; ++i)
    {
        ModLoader::logger->warn(i);
        MapPickPoint point = MapPickPoint{mapPickPoint->m_dataMap.Data[i].Value.Second};
        _pickPoint.emplace( 
                            Utils::TestFNameToString(mapPickPoint->m_dataMap.Data[i].Value.Second.ID), 
                            std::make_unique<MapPickPoint>(point));
    }
}