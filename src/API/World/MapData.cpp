#include "API/World/MapData.hpp"
#include "API/Engine/FName.hpp"
#include "API/Common/Common.hpp"

std::string MapData::GetMapViewName(int index)
{
    if(index < 0 || index >= this->_object.MapViewDataArray.Count)
    {
        throw std::out_of_range("GetMapViewName");
    }

    return this->_object.MapViewDataArray.Data[index].mapName.ToString();
}

void MapData::SetMapViewName(int index, FString name)
{
    if(index < 0 || index >= this->_object.MapViewDataArray.Count)
    {
        throw std::out_of_range("SetMapViewName");
    }

    this->_object.MapViewDataArray.Data[index].mapName = name;
}


std::string MapData::GetName(LANG lang)
{
    return NAME_GET(lang, GetNameIdentifier());
}

void MapData::SetName(LANG lang, FString string)
{
    NAME_SET(lang, GetNameIdentifier(), string);
}

MapDataSubMapData MapData::GetSubMap(int index)
{
    if(index < 0 || index >= this->_object.subMapDataList.Data.Count)
    {
        throw std::out_of_range("GetSubMap");
    }

    return MapDataSubMapData{this->_object.subMapDataList.Data[index].Value.Second};
}