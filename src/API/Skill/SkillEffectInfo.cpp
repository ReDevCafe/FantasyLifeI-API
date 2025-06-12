#include "API/Skill/SkillEffectInfo.hpp"
#include <stdexcept>
#include "ModLoader.hpp"
#include "API/Engine/TArrayHelper.hpp"

EffectCondition SkillEffectInfo::GetEffectCondition(int index)
{
    auto raw = TArrayHelper<FGDSkillData_EffCond>::Get(this->_object.effCondList, index);
    return EffectCondition(raw);
}

void SkillEffectInfo::SetEffectCondition(int index, EffectCondition value)
{
    TArrayHelper<FGDSkillData_EffCond>::Set(this->_object.effCondList, index, value.getObject());
}

void SkillEffectInfo::AddEffectCondition(EffectCondition value)
{
    TArrayHelper<FGDSkillData_EffCond>::Add(this->_object.effCondList, value.getObject());
}