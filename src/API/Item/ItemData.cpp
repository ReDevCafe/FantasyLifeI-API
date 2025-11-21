#include "API/Item/ItemData.hpp"
#include "API/Common/Common.hpp"
#include "API/Engine/FName.hpp"

std::string ItemData::GetIdentifier()
{
    return static_cast<API_FName>(this->_object.ID).ToString();
}

std::string ItemData::getNameIdentifier()
{
    return static_cast<API_FName>(this->_object.nameId).ToString();
}

std::string ItemData::GetDescIdentifier()
{
    return static_cast<API_FName>(this->_object.DescId).ToString();
}

std::string ItemData::GetName(LANG lang)
{
    return NAME_GET(lang, getNameIdentifier());
}

void ItemData::SetName(LANG lang, FString string)
{
    NAME_SET(lang, getNameIdentifier(), string);
}

std::string ItemData::GetDescription(LANG lang)
{
    return DESC_GET(lang, GetDescIdentifier());
}

void ItemData::SetDescription(LANG lang, FString string)
{
    DESC_SET(lang, GetDescIdentifier(), string);
}

std::string ItemData::GetOverwriteIcon()
{
    return static_cast<API_FName>(this->_object.overwriteIconName).ToString();
}