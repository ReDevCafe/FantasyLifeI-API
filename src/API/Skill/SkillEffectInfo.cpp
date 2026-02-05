#include "API/Skill/SkillEffectInfo.hpp"

EffectCondition SkillEffectInfo::GetEffectCondition(int index)
{
    auto raw = this->_object.effCondList.Get(index);
    return EffectCondition(raw);
}

void SkillEffectInfo::SetEffectCondition(int index, EffectCondition value)
{
    this->_object.effCondList.Set(index, value.getObject());
}

void SkillEffectInfo::AddEffectCondition(EffectCondition value)
{
    this->_object.effCondList.Add(value.getObject());
}