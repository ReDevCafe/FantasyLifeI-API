#ifndef MAPDATA_HPP
    #define MAPDATA_HPP

    #include "API/World/MapDataSubMapData.hpp"
    #include "API/Language.hpp"
    #include "Export.h"

class ML_API MapData : public GameObjectProxy<FGDMapData>
{
    public:
    MapData(FGDMapData& data) : GameObjectProxy(data)
    {};

    std::string         GetIdentifier() const { return this->_object.mapId.ToString(); };
    std::string         GetPath() const { return this->_object.MapPath.ToString(); };
    std::string         GetMapViewCategory() const { return this->_object.MapViewCategory.ToString(); };

    std::string         GetMapViewName(int index);
    void                SetMapViewName(int index, FString name);
    
    std::string         GetMapSubject() const { return this->_object.MapSubject.ToString(); };
    std::string         GetNameIdentifier() const { return this->_object.MapNameID.ToString(); };

    public:
    std::string         GetName(LANG lang);
    void                SetName(LANG lang, FString name);

    std::string         GetWorldMap() const { return this->_object.WorldMapID.ToString(); };

    bool                GetIsMemorizeMap() const { return  this->_object.IsMemorizeMap; }
    void                SetIsMemorizeMap(bool value) { this->_object.IsMemorizeMap = value; }

    bool                GetTimePeriod() const { return  this->_object.timePeriod; }
    void                SetTimePeriod(bool value) { this->_object.timePeriod = value; }

    bool                GetSeamless() const { return  this->_object.Seamless; }
    void                SetSeamless(bool value) { this->_object.Seamless = value; }

    MapDataSubMapData   GetSubMap(int index);
};

#endif // !MAPDATA_HPP