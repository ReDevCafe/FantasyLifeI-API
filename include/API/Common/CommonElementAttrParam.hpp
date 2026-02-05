#ifndef COMMONELEMENTATTRPARAM_HPP
    #define COMMONELEMENTATTRPARAM_HPP

    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"

class CommonElementAttrParam : public GameObjectProxy<FGDStCommon_ElementAttrParam>
{
    public:
        CommonElementAttrParam(FGDStCommon_ElementAttrParam& data) : 
            GameObjectProxy(data)
        {};

        int32_t GetFire() { return this->_object.fire; };
        void    SetFire(int32_t value) { this->_object.fire = value; }

        int32_t GetWater() { return this->_object.water; };
        void    SetWater(int32_t value) { this->_object.water = value; }

        int32_t GetWind() { return this->_object.wind; };
        void    SetWind(int32_t value) { this->_object.wind = value; }

        int32_t GetEarth() { return this->_object.earth; };
        void    SetEarth(int32_t value) { this->_object.earth = value; }

        int32_t GetShine() { return this->_object.shine; };
        void    SetShine(int32_t value) { this->_object.shine = value; }

        int32_t GetDark() { return this->_object.dark; };
        void    SetDark(int32_t value) { this->_object.dark = value; }
};

#endif // !COMMONELEMENTATTRPARAM