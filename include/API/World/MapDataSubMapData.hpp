#ifndef MAPDATASUBMAPDATA_HPP
    #define MAPDATASUBMAPDATA_HPP
    
    #include "API/World/MapSubLevel.hpp"
    #include "API/World/MapAttributeInfo.hpp"
    #include "Export.h"

class ML_API MapDataSubMapData : public GameObjectProxy<FGDMapData_SubMapData>
{
    public:
    MapDataSubMapData(FGDMapData_SubMapData& data) : 
        GameObjectProxy(data)
    {};

    std::string GetSubMapIdentifier() const {  return this->_object.subMapId.ToString(); }

    public:
    MapSubLevel GetSubMap();
    void        SetSubMap(MapSubLevel level);

    EMapType    GetMapType()                            { return this->_object.Type; }
    void        SetMapType(EMapType type)               { this->_object.Type = type; }

    std::string GetAreaID() const                       { return this->_object.AreaID.ToString(); }
    MapAttributeInfo GetAttributeInfo()                 { return MapAttributeInfo(this->_object.attributeInfo); }

    float       GetShadowAmountInEvent()                { return this->_object.shadowAmountInEvent; }
    void        SetShadowAmountInEvent(float value)     { this->_object.shadowAmountInEvent = value; }

    bool        GetTimePeriod()                         { return  this->_object.timePeriod; }
    void        SetTimePeriod(bool value)               { this->_object.timePeriod = value; }

    bool        GetSeamless()                           { return  this->_object.Seamless; }
    void        SetSeamless(bool value)                 { this->_object.Seamless = value; }

    float       GetFallTroughHeight()                   { return  this->_object.fallThroughHeight; }
    void        SetFallTroughHeight(float value)        { this->_object.fallThroughHeight = value; }

    FVector4    GetSafeWarpPosition()                   { return  this->_object.safeWarpPos; }
    void        SetSafeWarpPosition(FVector4 value)     { this->_object.safeWarpPos = value; }
};

#endif // !MAPDATASUBMAPDATA_HPP
