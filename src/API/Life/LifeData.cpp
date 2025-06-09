#include "API/Life/LifeData.hpp"
#include "GameData.hpp"
#include "Utils.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"
#include "API/Common/Common.hpp"

std::string LifeData::GetNameIdentifier()
{
    return Utils::FNameToString(this->_object.nameId);
}

std::string LifeData::GetDescIdentifier()
{
    return Utils::FNameToString(this->_object.DescId);
}

std::string LifeData::GetName(LANG lang)
{
    return NAME_GET(lang, GetNameIdentifier());
}

void LifeData::SetName(LANG lang, FString string)
{
    NAME_SET(lang, GetNameIdentifier(), string);
}

std::string LifeData::GetDescription(LANG lang)
{
    return DESC_GET(lang, GetDescIdentifier());
}

void LifeData::SetDescription(LANG lang, FString string)
{
    DESC_SET(lang, GetDescIdentifier(), string);
}