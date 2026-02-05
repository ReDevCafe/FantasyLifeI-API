#if !defined(COMMONITEMEFFECTPARAM_HPP)
    #define COMMONITEMEFFECTPARAM_HPP

    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"
    #include <cstdint>
    #include "API/Language.hpp"

class CommonItemEffectParam : public GameObjectProxy<FGDStCommon_ItemEffParam>
{
    public:
    CommonItemEffectParam(FGDStCommon_ItemEffParam& data) : GameObjectProxy(data){};

    void            SetStrength(int16_t value)      { this->_object.val = value; }
    int16_t         GetStrength()                   {  return this->_object.val; }

    void            SetTime(int16_t value)          { this->_object.Time = value; }
    int16_t         GetTime()                       {  return this->_object.Time; }

    void            SetIsRange(bool value)          { this->_object.isRange = value; }
    bool            GetIsRange()                    {  return this->_object.isRange; }

    void            SetEffect(EItemEffectType value){ this->_object.itemEffectType = static_cast<char>(value); }
    EItemEffectType GetEffect()                     {  return static_cast<EItemEffectType>(this->_object.itemEffectType); }

    protected:
    std::string     getDescIdentifier() const { return this->_object.effDescId.ToString(); }

    public:
    std::string     GetDescription(LANG lang);

};

#endif // COMMONITEMEFFECTPARAM_HPP
