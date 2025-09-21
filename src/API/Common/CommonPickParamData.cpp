#include "API/Common/CommonPickParamData.hpp"
#include "Engine/FNamePool.hpp"

std::string CommonPickParamData::GetIdentifier()
{
    return FNameUtils::GetString(this->_object.ID);
}

std::string CommonPickParamData::GetGotIdentifier()
{
    return FNameUtils::GetString(this->_object.gotId);
}