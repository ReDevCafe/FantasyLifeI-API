#include "API/Item/ItemData.hpp"
#include "API/Common/Common.hpp"
#include "API/Engine/FName.hpp"


std::string ItemData::GetName(LANG lang)
{
    return NAME_GET(lang, GetNameIdentifier());
}

void ItemData::SetName(LANG lang, FString string)
{
    NAME_SET(lang, GetNameIdentifier(), string);
}

std::string ItemData::GetDescription(LANG lang)
{
    return DESC_GET(lang, GetDescIdentifier());
}

void ItemData::SetDescription(LANG lang, FString string)
{
    DESC_SET(lang, GetDescIdentifier(), string);
}