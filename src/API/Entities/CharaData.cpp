#include "API/Entities/CharaData.hpp"
#include "API/Common/Common.hpp"

std::string CharaData::GetName(LANG lang)
{
    return NAME_GET(lang, GetIdentifier());
}

void CharaData::SetName(LANG lang, FString string)
{
    NAME_SET(lang, GetIdentifier(), string);
}