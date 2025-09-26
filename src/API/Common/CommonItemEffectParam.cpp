#include "API/Common/CommonItemEffectParam.hpp"
#include "API/Common/Common.hpp"

#include "Utils.hpp"

std::string CommonItemEffectParam::getDescIdentifier()
{
    return Utils::FNameToString(this->_object.effDescId);
}

std::string CommonItemEffectParam::GetDescription(LANG lang)
{
    return DESC_GET(lang, getDescIdentifier());
}
