#ifndef MAPSUBLEVEL_HPP
    #define MAPSUBLEVEL_HPP

    #include "SDK.h"
    #include "API/GameObjectProxy.hpp"
    #include "Export.h"

class ML_API MapSubLevel : public GameObjectProxy<FGDMapSubLevel>
{
    public:
    MapSubLevel(FGDMapSubLevel& data) : GameObjectProxy(data)
    {};

    std::string         GetIdentifier() const { return this->_object.SubLevelID.ToString(); };

    EMapSublevelType    GetLevelType() const { return this->_object.SubLevelType; }
    void                SetLevelType(EMapSublevelType type) { this->_object.SubLevelType = type; }

    std::string         GetMapSubIdentifier() const { return this->_object.mapSubId.ToString(); };
    std::string         GetPath() const { return this->_object.SubLevelInfo.SubLevelPath.ToString(); };

    // IMPLEMENT VALID CONDITION
}; 

#endif // !MAPSUBLEVEL_HPP