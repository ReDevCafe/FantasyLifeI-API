#ifndef MAPATTRIBUTEINFO_HPP
    #define MAPATTRIBUTEINFO_HPP

    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"

class MapAttributeInfo : public GameObjectProxy<FGDMapData_AttributeInfo>
{
    public:
    MapAttributeInfo(FGDMapData_AttributeInfo& data) : GameObjectProxy(data)
    {};

    bool GetIndoor()                        { return  this->_object.indoor; }
    void SetIndoor(bool value)              { this->_object.indoor = value; }

    bool GetIsDisableWeaponDraw()           { return  this->_object.isDisableWeaponDraw; }
    void SetIsDisableWeaponDraw(bool value) { this->_object.isDisableWeaponDraw = value; }

    bool GetIsDungeon()                     { return  this->_object.dungeon; }
    void SetIsDungeon(bool value)           { this->_object.dungeon = value; }

    bool GetIsHuge()                        { return  this->_object.isHuge; }
    void SetIsHuge(bool value)              { this->_object.isHuge = value; }

    bool GetPartyNpcOff()                   { return  this->_object.partyNpcOff; }
    void SetPartyNpcOff(bool value)         { this->_object.partyNpcOff = value; }

    bool GetWeatherEffectOff()              { return  this->_object.weatherEffectOff; }
    void SetWeatherEffectOff(bool value)    { this->_object.weatherEffectOff = value; }

    bool GetIsDisableVehicle()              { return  this->_object.isDisableVehicle; }
    void SetIsDisableVehicle(bool value)    { this->_object.isDisableVehicle = value; }
};

#endif // !MAPATTRIBUTEINFO_HPP