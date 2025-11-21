#include "API/World/MapData.hpp"
#include "API/Engine/FName.hpp"
#include "API/Common/Common.hpp"

std::string MapData::GetIdentifier()
{
    return static_cast<API_FName>(this->_object.mapId).ToString();
}

std::string MapData::GetPath()
{
    return static_cast<API_FName>(this->_object.MapPath).ToString();
}

std::string MapData::GetMapViewCategory()
{
    return static_cast<API_FName>(this->_object.MapViewCategory).ToString();
}

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

std::string MapData::GetMapSubject()
{
    return static_cast<API_FName>(this->_object.MapSubject).ToString();
}

std::string MapData::GetNameIdentifier()
{
    return static_cast<API_FName>(this->_object.MapNameID).ToString();
}

std::string MapData::GetName(LANG lang)
{
    return NAME_GET(lang, GetNameIdentifier());
}

void MapData::SetName(LANG lang, FString string)
{
    NAME_SET(lang, GetNameIdentifier(), string);
}

std::string MapData::GetWorldMap()
{
    return static_cast<API_FName>(this->_object.WorldMapID).ToString();
}

MapDataSubMapData MapData::GetSubMap(int index)
{
    if(index < 0 || index >= this->_object.subMapDataList.Data.Count)
    {
        throw std::out_of_range("GetSubMap");
    }

    return MapDataSubMapData{this->_object.subMapDataList.Data[index].Value.Second};
}