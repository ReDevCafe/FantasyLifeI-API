#include "API/Common/CommonPickParamData.hpp"
#include "Engine/FNamePool.hpp"

std::string CommonPickParamData::GetIdentifier()
{
    return FNameUtils::getString(this->_object.ID);
}

std::string CommonPickParamData::GetGotIdentifier()
{
    return FNameUtils::getString(this->_object.gotId);
}