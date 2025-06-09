#include "API/Skill/SkillEffectInfo.hpp"
#include <stdexcept>
#include "Logger/ModLoaderLogger.hpp"

EffectCondition SkillEffectInfo::GetEffectCondition(int index)
{
    if(index >= this->_object.effCondList.Count || index < 0)
    {
        mlLogger.warn("GetEffectCondition() out of range. count: ", index, " max: ", this->_object.effCondList.Count);
        throw std::out_of_range("");
    }

    return EffectCondition(this->_object.effCondList.Data[index]);
}

void SkillEffectInfo::SetEffectCondition(int index, EffectCondition value)
{
    auto array = this->_object.effCondList;
    int count = array.Count;
    if(array.Max == 0)
    {
        array.Max = 4;
        array.Data = new FGDSkillData_EffCond[4];
    } else if (count >= array.Max)
    {
        FGDSkillData_EffCond* newData = new FGDSkillData_EffCond[count + 1];
        for(int i = 0; i < count; ++i)
            newData[i] = array.Data[i];

        delete[] array.Data;
        array.Data = newData;
        array.Max = count + 1;
    }
    
    array.Data[count] = value.getObject();
    array.Count = ++count;
}

void SkillEffectInfo::AddEffectCondition(EffectCondition value)
{
    this->SetEffectCondition(this->_object.effCondList.Count, value);
}