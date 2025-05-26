#include "API/LifeData.hpp"

const wchar_t* LifeData::getName(LANG lang)
{
    FName nameRaw  = this->_object.nameId;
    std::string nameLink = Utils::FNameToString(StaticData::BaseAddress, nameRaw); 
    TArray<TSetElement<TPair<FName, FGDLifeText_Noun>>> texts = StaticData::LifeText_Noun()->m_dataMap.Data;

    for(int i = 0; i < texts.Count; ++i)
    {
        if(Utils::FNameToString(StaticData::BaseAddress, texts.Data[i].Value.Second.ID) != nameLink) continue;

        switch(lang)
        {
            case LANG::NONE :
                return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm.c_str();
                break;
            case LANG::ENGLISH :
                return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_en.c_str();
                break;
            case LANG::FRENCH :
                return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_fr.c_str();
                break;
            case LANG::ESPAGNOL :
                return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_es.c_str();
                break;
            case LANG::DEUTSCH :
                return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_de.c_str();
                break;
            case LANG::ITALIAN :
                return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_de.c_str();
                break;
            case LANG::TZH :
                return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_tzh.c_str();
                break;
            case LANG::CZH :
                return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_czh.c_str();
                break;
            case LANG::KO :
                return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_ko.c_str();
                break;
        }
    }
    return NULL;
}

void LifeData::setName(LANG lang, FString newString)
{
    FName nameRaw  = this->_object.nameId;
    std::string nameLink = Utils::FNameToString(StaticData::BaseAddress, nameRaw); 
    TArray<TSetElement<TPair<FName, FGDLifeText_Noun>>> texts = StaticData::LifeText_Noun()->m_dataMap.Data;

    for(int i = 0; i < texts.Count; ++i)
    {
        if(Utils::FNameToString(StaticData::BaseAddress, texts.Data[i].Value.Second.ID) != nameLink) continue;

        switch(lang)
        {
            case LANG::NONE :
                texts.Data[i].Value.Second.textInfo.Data->nounSingularForm = newString;
                break;
            case LANG::ENGLISH :
                texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_en = newString;
                break;
            case LANG::FRENCH :
                texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_fr = newString;
                break;
            case LANG::ESPAGNOL :
                texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_es = newString;
                break;
            case LANG::DEUTSCH :
                texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_de = newString;
                break;
            case LANG::ITALIAN :
                texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_de = newString;
                break;
            case LANG::TZH :
                texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_tzh = newString;
                break;
            case LANG::CZH :
                texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_czh = newString;
                break;
            case LANG::KO :
                texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_ko = newString;
                break;
        }
    }
}