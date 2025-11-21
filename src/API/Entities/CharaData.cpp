#include "API/Entities/CharaData.hpp"
#include "API/Common/Common.hpp"
#include "API/Engine/FName.hpp"

std::string CharaData::GetIdentifier()
{
    return static_cast<API_FName>(this->_object.ID).ToString();
}

std::string CharaData::GetNameIdentifier()
{
    return static_cast<API_FName>(this->_object.nameId).ToString();
}

std::string CharaData::GetFlag()
{
    return static_cast<API_FName>(this->_object.Flag).ToString();
}

std::string CharaData::GetName(LANG lang)
{
    return NAME_GET(lang, GetIdentifier());
}

void CharaData::SetName(LANG lang, FString string)
{
    NAME_SET(lang, GetIdentifier(), string);
}