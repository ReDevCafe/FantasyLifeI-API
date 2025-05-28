#include "API/Item/ItemData.hpp"
#include "ModLoader.hpp"
#include "GameData.hpp"

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
    return ModLoader::gameData->_cacheNounInfo.at(Utils::FNameToString(this->_object.nameId))->nounSingularForm_en.ToString();
}

void ItemData::SetName(LANG lang, FString string)
{
    ModLoader::gameData->_cacheNounInfo.at(Utils::FNameToString(this->_object.nameId))->nounSingularForm_en = string;
}