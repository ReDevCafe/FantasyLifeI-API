#include "API/Item/ItemData.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

std::string ItemData::GetIdentifier()
{
    return Utils::FNameToString(this->_object.ID);
}

std::string ItemData::GetNameIdentifier()
{
    return Utils::FNameToString(this->_object.nameId);
}

std::string ItemData::GetName(LANG lang)
{
    if(GetNameIdentifier() == "None") return "NO_NAME";
    auto text = ModLoader::gameCache->GetNoun(GetNameIdentifier());
    switch(lang)
    {
        case LANG::NONE:
        case LANG::ENGLISH: return text->nounSingularForm_en.ToString();
        case LANG::FRENCH: return text->nounSingularForm_fr.ToString();
        case LANG::ESPAGNOL: return text->nounSingularForm_es.ToString();
        case LANG::DEUTSCH: return text->nounSingularForm_de.ToString();
        case LANG::ITALIAN: return text->nounSingularForm_it.ToString();
        case LANG::TZH: return text->nounSingularForm_tzh.ToString();
        case LANG::CZH: return text->nounSingularForm_czh.ToString();
        case LANG::KO: return text->nounSingularForm_ko.ToString();
    }
}

void ItemData::SetName(LANG lang, FString string)
{
    auto text = ModLoader::gameCache->GetNoun(GetNameIdentifier());
    switch(lang)
    {
        case LANG::NONE:
        case LANG::ENGLISH: text->nounSingularForm_en = string;
        case LANG::FRENCH:  text->nounSingularForm_fr = string;
        case LANG::ESPAGNOL:  text->nounSingularForm_es = string;
        case LANG::DEUTSCH:  text->nounSingularForm_de = string;
        case LANG::ITALIAN:  text->nounSingularForm_it = string;
        case LANG::TZH:  text->nounSingularForm_tzh = string;
        case LANG::CZH:  text->nounSingularForm_czh = string;
        case LANG::KO:  text->nounSingularForm_ko = string;
    }
}