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

    std::string         GetIdentifier();
    std::string         GetPath();
    std::string         GetMapViewCategory();

    std::string         GetMapViewName(int index);
    void                SetMapViewName(int index, FString name);
    
    std::string         GetMapSubject();

    //protected:
    std::string         GetNameIdentifier();

    public:
    std::string         GetName(LANG lang);
    void                SetName(LANG lang, FString name);

    std::string         GetWorldMap();

    bool                GetIsMemorizeMap()              { return  this->_object.IsMemorizeMap; }
    void                SetIsMemorizeMap(bool value)    { this->_object.IsMemorizeMap = value; }

    bool                GetTimePeriod()                 { return  this->_object.timePeriod; }
    void                SetTimePeriod(bool value)       { this->_object.timePeriod = value; }

    bool                GetSeamless()                   { return  this->_object.Seamless; }
    void                SetSeamless(bool value)         { this->_object.Seamless = value; }

    MapDataSubMapData   GetSubMap(int index);
};

#endif // !MAPDATA_HPP