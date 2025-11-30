#include "API/Life/LifeData.hpp"
#include "API/Engine/FName.hpp"
#include "API/Common/Common.hpp"

std::string LifeData::GetNameIdentifier()
{
    return this->_object.nameId.ToString();
}

std::string LifeData::GetDescIdentifier()
{
    return this->_object.DescId.ToString();
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