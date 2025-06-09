#ifndef MAPSUBLEVEL_HPP
    #define MAPSUBLEVEL_HPP

    #include "API/GameObjectProxy.hpp"

class MapSubLevel : public GameObjectProxy<FGDMapSubLevel>
{
    public:
    MapSubLevel(FGDMapSubLevel& data) : GameObjectProxy(data)
    {};

    std::string         GetIdentifier();

    EMapSublevelType    GetLevelType()                      { return this->_object.SubLevelType; }
    void                SetLevelType(EMapSublevelType type) { this->_object.SubLevelType = type; }

    std::string         GetMapSubIdentifier();
    std::string         GetPath();
    
    // IMPLEMENT VALID CONDITION
}; 

#endif // !MAPSUBLEVEL_HPP