#include "API/Common/CommonPickParamData.hpp"
#include "API/Engine/FName.hpp"

std::string CommonPickParamData::GetIdentifier()
{
    return this->_object.ID.ToString();
}

std::string CommonPickParamData::GetGotIdentifier()
{
    return this->_object.gotId.ToString();
}