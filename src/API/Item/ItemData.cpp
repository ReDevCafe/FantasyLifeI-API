#include "API/Item/ItemData.hpp"
#include "API/Common/Common.hpp"
#include "Utils.hpp"

std::string& ItemData::GetIdentifier()
{
    return Utils::FNameToString(this->_object.ID);
}

std::string ItemData::getNameIdentifier()
{
    return Utils::FNameToString(this->_object.nameId);
}

std::string& ItemData::GetDescIdentifier()
{
    return Utils::FNameToString(this->_object.DescId);
}

std::string ItemData::GetName(LANG lang)
{
    return NAME_GET(lang, getNameIdentifier());
    return NAME_GET(lang, getNameIdentifier());
}

void ItemData::SetName(LANG lang, FString string)
{
    NAME_SET(lang, getNameIdentifier(), string);
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

std::string& ItemData::GetOverwriteIcon()
{
    return Utils::FNameToString(this->_object.overwriteIconName);
}