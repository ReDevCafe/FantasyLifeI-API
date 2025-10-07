#include "API/Common/Common.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

std::string Common::NounSingular(LANG lang, std::string& identifier)
{
    if(identifier == "None") return nullptr;
    auto text = ModLoader::gameCache->GetNoun(identifier);
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

void Common::NounSingularSet(LANG lang, std::string& identifier, FString value)
{
    if(identifier == "None") 
    {
        ModLoader::logger->warn("Invalide Noun Set, identifier is None");
        return;
    }
    
    auto text = ModLoader::gameCache->GetNoun(identifier);
    switch(lang)
    {
        case LANG::JAPANESE: text->nounSingularForm = value;
        case LANG::ENGLISH: text->nounSingularForm_en = value;
        case LANG::FRENCH: text->nounSingularForm_fr = value;
        case LANG::ESPAGNOL: text->nounSingularForm_es = value;
        case LANG::DEUTSCH: text->nounSingularForm_de = value;
        case LANG::ITALIAN: text->nounSingularForm_it = value;
        case LANG::TZH: text->nounSingularForm_tzh = value;
        case LANG::CZH: text->nounSingularForm_czh = value;
        case LANG::KO: text->nounSingularForm_ko = value;
    }
}

std::string Common::Description(LANG lang, std::string& identifier)
{
    auto text = ModLoader::gameCache->GetText(identifier);
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

void Common::DescriptionSet(LANG lang, std::string &identifier, FString value)
{
    if(identifier == "desc_itm_common") 
    {
        ModLoader::logger->warn("Invalid description modification <", identifier, ">");
        return;
    }

    auto text = ModLoader::gameCache->GetText(identifier);
    switch(lang)
    {
        case LANG::JAPANESE: text->Text = value;
        case LANG::ENGLISH:  text->text_en = value;
        case LANG::FRENCH:   text->text_fr = value;
        case LANG::ESPAGNOL: text->text_es = value;
        case LANG::DEUTSCH:  text->text_de = value;
        case LANG::ITALIAN:  text->text_de = value;
        case LANG::TZH:      text->text_tzh = value;
        case LANG::CZH:      text->text_czh = value;
        case LANG::KO :      text->text_ko = value;
    }
}