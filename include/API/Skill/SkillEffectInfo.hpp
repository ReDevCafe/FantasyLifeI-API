#ifndef SKILLEFFECTINFO_HPP
    #define SKILLEFFECTINFO_HPP

    #include "API/GameObjectProxy.hpp"
    #include "EffectCondition.hpp"
    #include "Export.h"

class ML_API SkillEffectInfo : public GameObjectProxy<FGDSkillData_SkillEffectInfo>
{
    public:
        SkillEffectInfo(FGDSkillData_SkillEffectInfo& data) : GameObjectProxy(data)
        {};

        std::string     GetEffectIdentifier();

        // ???
        int8_t          GetEffectParamIdx(int index)                            { return  this->_object.effParamIdx.Data[index]; }
        void            SetEffectParamIdx(int index, int8_t value)              { this->_object.effParamIdx.Data[index] = value; }

        EPassiveAddType GetPassiveType()                                        { return this->_object.addType; }
        void            SetPassiveType(EPassiveAddType type)                    { this->_object.addType = type; }

        int8_t          GetJudgingTime(int index)                               { return  this->_object.judgeTiming.Data[index]; }
        void            SetJudgingTime(int index, uint8_t value)                { this->_object.judgeTiming.Data[index] = value; }

        EffectCondition GetEffectCondition(int index);
        void            SetEffectCondition(int index, EffectCondition value);
        void            AddEffectCondition(EffectCondition value);
};

#endif // !SKILLEFFECTINFO_HPP