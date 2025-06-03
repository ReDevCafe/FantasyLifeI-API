#ifndef MAPDATASUBMAPDATA_HPP
    #define MAPDATASUBMAPDATA_HPP

    #include "API/World/MapSubLevel.hpp"
    #include "API/World/MapAttributeInfo.hpp"
 
class MapDataSubMapData : GameObjectProxy<FGDMapData_SubMapData>
{
    public:
    MapDataSubMapData(FGDMapData_SubMapData& data) : 
        GameObjectProxy(data),
        _attributeInfo{data.attributeInfo}
    {};

    //protected:
    std::string GetSubMapIdentifier();

    public:
    MapSubLevel GetSubMap();
    void        SetSubMap(MapSubLevel level);

    EMapType    GetMapType()                            { return this->_object.Type; }
    void        SetMapType(EMapType type)               { this->_object.Type = type; }

    std::string GetAreaID();

    MapAttributeInfo GetAttributeInfo()                 { return _attributeInfo; }

    float       GetShadowAmountInEvent()                { return this->_object.shadowAmountInEvent; }
    void        SetShadowAmountInEvent(float value)     { this->_object.shadowAmountInEvent = value; }

    bool        GetTimePeriod()                         { return  this->_object.timePeriod; }
    void        SetTimePeriod(bool value)               { this->_object.timePeriod = value; }

    bool        GetSeamless()                           { return  this->_object.Seamless; }
    void        SetSeamless(bool value)                 { this->_object.Seamless = value; }

    float       GetFallTroughHeight()                   { return  this->_object.fallThroughHeight; }
    void        SetFallTroughHeight(float value)        { this->_object.fallThroughHeight = value; }

    private:
    MapAttributeInfo _attributeInfo;
};

#endif // !MAPDATASUBMAPDATA_HPP
