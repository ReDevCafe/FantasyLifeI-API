#include "API/Life/LifeData.hpp"
#include "GameData.hpp"
#include "Utils.hpp"
#include "ModLoader.hpp"

static FString _____nFString(L"");

FString& LifeData::Name(LANG lang)
{
    FName nameRaw  = this->_object.nameId;
    std::string nameLink = Utils::FNameToString(nameRaw);
    auto texts = ModLoader::gameData->getStaticDataManager()->m_LifeText_Noun->m_dataMap.Data;

    for(int i = 0; i < texts.Count; ++i)
    {
        if(Utils::FNameToString(texts.Data[i].Value.Second.ID) != nameLink) continue;

        switch(lang)
        {
            case LANG::NONE:     return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm;
            case LANG::ENGLISH:  return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_en;
            case LANG::FRENCH:   return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_fr;
            case LANG::ESPAGNOL: return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_es;
            case LANG::DEUTSCH:  return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_de;
            case LANG::ITALIAN:  return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_de;
            case LANG::TZH:      return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_tzh;
            case LANG::CZH:      return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_czh;
            case LANG::KO :      return texts.Data[i].Value.Second.textInfo.Data->nounSingularForm_ko;
        }
    }
   
    return _____nFString;
}

FString& LifeData::Description(LANG lang)
{
    FName descRaw = this->_object.DescId;
    std::string descLink = Utils::FNameToString(descRaw);
    auto texts = ModLoader::gameData->getStaticDataManager()->m_LifeText->m_dataMap.Data;

    for(int i = 0; i < texts.Count; ++i)
    {
        if(Utils::FNameToString(texts.Data[i].Value.Second.ID) != descLink) continue;

        switch(lang)
        {
            case LANG::NONE:     return texts.Data[i].Value.Second.textInfo.Data->Text;
            case LANG::ENGLISH:  return texts.Data[i].Value.Second.textInfo.Data->text_en;
            case LANG::FRENCH:   return texts.Data[i].Value.Second.textInfo.Data->text_fr;
            case LANG::ESPAGNOL: return texts.Data[i].Value.Second.textInfo.Data->text_es;
            case LANG::DEUTSCH:  return texts.Data[i].Value.Second.textInfo.Data->text_de;
            case LANG::ITALIAN:  return texts.Data[i].Value.Second.textInfo.Data->text_de;
            case LANG::TZH:      return texts.Data[i].Value.Second.textInfo.Data->text_tzh;
            case LANG::CZH:      return texts.Data[i].Value.Second.textInfo.Data->text_czh;
            case LANG::KO :      return texts.Data[i].Value.Second.textInfo.Data->text_ko;
        }
    }

    return _____nFString;
}