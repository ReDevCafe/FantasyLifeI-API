#include "API/Skill/SkillData.hpp"
#include "API/Engine/FName.hpp"
#include "Utils.hpp"
#include "API/Common/Common.hpp"
#include "API/Engine/TArrayHelper.hpp"

std::string SkillData::GetIdentifier()
{
    return static_cast<API_FName>(this->_object.ID.Name).ToString();
}

std::string SkillData::GetNameIdentifier()
{
    return static_cast<API_FName>(this->_object.nameTextID).ToString();
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
    return static_cast<API_FName>(this->_object.descTextID).ToString();
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
    auto raw = TArrayHelper<FGDSkillData_SkillEffectInfo>::Get(this->_object.skillEffectInfoList, index);
    return SkillEffectInfo(raw);
}

void SkillData::SetSkillEffect(int index, SkillEffectInfo value)
{
    TArrayHelper<FGDSkillData_SkillEffectInfo>::Set(this->_object.skillEffectInfoList, index, value.getObject());
}

void SkillData::AddSkillEffect(SkillEffectInfo data)
{
    TArrayHelper<FGDSkillData_SkillEffectInfo>::Add(this->_object.skillEffectInfoList, data.getObject());
}