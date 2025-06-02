#include "API/Skill/SkillData.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"
#include "Utils.hpp"

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
    if(GetNameIdentifier() == "None") return "NO_NAME";
    auto text = ModLoader::gameCache->GetNoun(GetNameIdentifier());
    switch(lang)
    {
        case LANG::JAPANESE: return text->nounSingularForm.ToString();
        case LANG::ENGLISH: return text->nounSingularForm_en.ToString();
        case LANG::FRENCH: return text->nounSingularForm_fr.ToString();
        case LANG::ESPAGNOL: return text->nounSingularForm_es.ToString();
        case LANG::DEUTSCH: return text->nounSingularForm_de.ToString();
        case LANG::ITALIAN: return text->nounSingularForm_it.ToString();
        case LANG::TZH: return text->nounSingularForm_tzh.ToString();
        case LANG::CZH: return text->nounSingularForm_czh.ToString();
        case LANG::KO: return text->nounSingularForm_ko.ToString();
    }

    return text->nounSingularForm.ToString();
}

void SkillData::SetName(LANG lang, FString string)
{
    auto text = ModLoader::gameCache->GetNoun(GetNameIdentifier());
    switch(lang)
    {
        case LANG::JAPANESE: text->nounSingularForm = string;
        case LANG::ENGLISH: text->nounSingularForm_en = string;
        case LANG::FRENCH: text->nounSingularForm_fr = string;
        case LANG::ESPAGNOL: text->nounSingularForm_es = string;
        case LANG::DEUTSCH: text->nounSingularForm_de = string;
        case LANG::ITALIAN: text->nounSingularForm_it = string;
        case LANG::TZH: text->nounSingularForm_tzh = string;
        case LANG::CZH: text->nounSingularForm_czh = string;
        case LANG::KO: text->nounSingularForm_ko = string;
    }
}

std::string SkillData::GetDescIdentifier()
{
    return Utils::FNameToString(this->_object.descTextID);
}

std::string SkillData::GetDescription(LANG lang)
{
    auto text = ModLoader::gameCache->GetText(GetDescIdentifier());
    switch(lang)
    {
        case LANG::JAPANESE: return text->Text.ToString();
        case LANG::ENGLISH:  return text->text_en.ToString();
        case LANG::FRENCH:   return text->text_fr.ToString();
        case LANG::ESPAGNOL: return text->text_es.ToString();
        case LANG::DEUTSCH:  return text->text_de.ToString();
        case LANG::ITALIAN:  return text->text_de.ToString();
        case LANG::TZH:      return text->text_tzh.ToString();
        case LANG::CZH:      return text->text_czh.ToString();
        case LANG::KO :      return text->text_ko.ToString();
    }

    return text->Text.ToString();
}

void SkillData::SetDescription(LANG lang, FString string)
{
    std::string id = GetDescIdentifier();
    if(id == "desc_itm_common") 
    {
        mlLogger.warn("Invalid description modification <\"", GetIdentifier(), "\">");
        return;
    }

    auto text = ModLoader::gameCache->GetText(id);
    switch(lang)
    {
        case LANG::JAPANESE: text->Text = string;
        case LANG::ENGLISH:  text->text_en = string;
        case LANG::FRENCH:   text->text_fr = string;
        case LANG::ESPAGNOL: text->text_es = string;
        case LANG::DEUTSCH:  text->text_de = string;
        case LANG::ITALIAN:  text->text_de = string;
        case LANG::TZH:      text->text_tzh = string;
        case LANG::CZH:      text->text_czh = string;
        case LANG::KO :      text->text_ko = string;
    }
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
    } else if (count >= array.Max)
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