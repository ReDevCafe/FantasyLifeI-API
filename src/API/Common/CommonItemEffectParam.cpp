#include "API/Common/CommonItemEffectParam.hpp"
#include "Utils.hpp"
#include "Common.hpp"

std::string CommonItemEffectParam::getDescIdentifier()
{
    return Utils::FNameToString(this->_object.effDescId);
}

std::string CommonItemEffectParam::GetDescription(LANG lang)
{
    return DESC_GET(lang, getDescIdentifier());
}
