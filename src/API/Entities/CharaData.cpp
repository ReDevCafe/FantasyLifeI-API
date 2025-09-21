#include "API/Entities/CharaData.hpp"
#include "GameCache.hpp"
#include "ModLoader.hpp"
#include "API/Common/Common.hpp"

std::string CharaData::GetIdentifier()
{
    return FNameUtils::GetString(this->_object.ID);
}

std::string CharaData::GetNameIdentifier()
{
    return FNameUtils::GetString(this->_object.nameId);
}

std::string CharaData::GetName(LANG lang)
{
    return NAME_GET(lang, GetIdentifier());
}

void CharaData::SetName(LANG lang, FString string)
{
    NAME_SET(lang, GetIdentifier(), string);
}