#include "API/Common/CommonItemEffectParam.hpp"
#include "API/Common/Common.hpp"

std::string CommonItemEffectParam::GetDescription(LANG lang)
{
    return DESC_GET(lang, getDescIdentifier());
}
