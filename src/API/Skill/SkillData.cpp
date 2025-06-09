#include "API/Skill/SkillData.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"
#include "Utils.hpp"
#include "API/Common/Common.hpp"

std::string SkillData::GetIdentifier()
{
    return Utils::FNameToString(this->_object.ID.Name);
}

std::string SkillData::GetNameIdentifier()
{
    return Utils::FNameToString(this->_object.nameTextID);
}

std::string SkillData::GetName(LANG lang)
{
    return NAME_GET(lang, GetNameIdentifier());
}

void SkillData::SetName(LANG lang, FString string)
{
    NAME_SET(lang, GetNameIdentifier(), string);
}

std::string SkillData::GetDescIdentifier()
{
    return Utils::FNameToString(this->_object.dascTextId);
}

std::string SkillData::GetDescription(LANG lang)
{
    return DESC_GET(lang, GetDescIdentifier());
}

void SkillData::SetDescription(LANG lang, FString string)
{
    DESC_SET(lang, GetDescIdentifier(), string);
}

SkillEffectInfo SkillData::GetSkillEffect(int index)
{
    if(index >= this->_object.skillEffectInfoList.Count || index < 0)
    {
        mlLogger.warn("GetSkillEffect() out of range. count: ", index, " max: ", this->_object.skillEffectInfoList.Count);
        throw std::out_of_range("");
    }

    return SkillEffectInfo(this->_object.skillEffectInfoList.Data[index]);
}

void SkillData::SetSkillEffect(int index, SkillEffectInfo value)
{
    auto array = this->_object.skillEffectInfoList;
    int count = array.Count;
    if(array.Max == 0)
    {
        array.Max = 4;
        array.Data = new FGDSkillData_SkillEffectInfo[4];
    } 
    else if (count >= array.Max)
    {
        FGDSkillData_SkillEffectInfo* newData = new FGDSkillData_SkillEffectInfo[count +1];
        for(int i = 0; i < count; ++i)
            newData[i] = array.Data[i];

        delete[] array.Data;
        array.Data = newData;
        array.Max = count + 1;
    }

    array.Data[count] = value.getObject();
    array.Count = ++count;
}

void SkillData::AddSkillEffect(SkillEffectInfo data)
{
    this->SetSkillEffect(this->_object.skillEffectInfoList.Count, data);
}