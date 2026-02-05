#ifndef COMMONPICKSTAATUSPARAM_HPP
    #define COMMONPICKSTAATUSPARAM_HPP

    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"
    #include "Export.h"

class ML_API  CommonPickStatusParam : public GameObjectProxy<FGDStCommon_PickStatusParam>
{
    public:
        CommonPickStatusParam(FGDStCommon_PickStatusParam& data) : GameObjectProxy(data) {};

        int32_t     GetHP()                         { return  this->_object.hp; }
        void        SetHP(int32_t value)            { this->_object.hp = value; }

        int32_t     GetOffense()                    { return  this->_object.offense; }
        void        SetOffense(int32_t value)       { this->_object.offense = value; }

        int32_t     GetDefense()                    { return  this->_object.defense; }
        void        SetDefense(int32_t value)       { this->_object.defense = value; }

        int32_t     GetCritEvasion()                { return  this->_object.criticalRateEvasion; }
        void        SetCritEvasion(int32_t value)   { this->_object.criticalRateEvasion = value; }

        uint32_t    GetExperience()                 { return  this->_object.Exp; }
        void        SetExperience(uint32_t value)   { this->_object.Exp = value; }
};

#endif // !COMMONPICKSTAATUSPARAM_HPP