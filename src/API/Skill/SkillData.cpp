#include "API/Skill/SkillData.hpp"
#include "API/Engine/FName.hpp"
#include "API/Common/Common.hpp"

std::string SkillData::GetIdentifier()
{
    return this->_object.ID.Name.ToString();
}

std::string SkillData::GetNameIdentifier()
{
    return this->_object.nameTextID.ToString();
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
    return this->_object.descTextID.ToString();
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
    auto raw = this->_object.skillEffectInfoList.Get(index);
    return SkillEffectInfo(raw);
}

void SkillData::SetSkillEffect(int index, SkillEffectInfo value)
{
    this->_object.skillEffectInfoList.Set(index, value.getObject());
}

void SkillData::AddSkillEffect(SkillEffectInfo data)
{
    this->_object.skillEffectInfoList.Add(data.getObject());
}