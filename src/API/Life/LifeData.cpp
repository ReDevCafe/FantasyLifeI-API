#include "API/Life/LifeData.hpp"
#include "GameData.hpp"
#include "Utils.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

std::string LifeData::GetNameIdentifier()
{
    return Utils::FNameToString(this->_object.nameId);
}

std::string LifeData::GetDescIdentifier()
{
    return Utils::FNameToString(this->_object.DescId);
}

std::string LifeData::GetName(LANG lang)
{
    if(GetNameIdentifier() == "None") return "NO_NAME";
    auto text = ModLoader::gameCache->GetNoun(GetNameIdentifier());
   
    switch(lang)
    {
        case LANG::JAPANESE: return text->nounSingularForm.ToString();
        case LANG::ENGLISH:  return text->nounSingularForm_en.ToString();
        case LANG::FRENCH:   return text->nounSingularForm_fr.ToString();
        case LANG::ESPAGNOL: return text->nounSingularForm_es.ToString();
        case LANG::DEUTSCH:  return text->nounSingularForm_de.ToString();
        case LANG::ITALIAN:  return text->nounSingularForm_de.ToString();
        case LANG::TZH:      return text->nounSingularForm_tzh.ToString();
        case LANG::CZH:      return text->nounSingularForm_czh.ToString();
        case LANG::KO :      return text->nounSingularForm_ko.ToString();
    }

    return text->nounSingularForm.ToString();
}

void LifeData::SetName(LANG lang, FString string)
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

std::string LifeData::GetDescription(LANG lang)
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

void LifeData::SetDescription(LANG lang, FString string)
{
    auto text = ModLoader::gameCache->GetText(GetDescIdentifier());

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