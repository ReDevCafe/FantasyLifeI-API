#include "API/Common/CommonItemEffectParam.hpp"
#include "API/Common/Common.hpp"
#include "API/Engine/FName.hpp"

std::string CommonItemEffectParam::getDescIdentifier()
{
    return this->_object.effDescId.ToString();
}

std::string CommonItemEffectParam::GetDescription(LANG lang)
{
    return DESC_GET(lang, getDescIdentifier());
}
