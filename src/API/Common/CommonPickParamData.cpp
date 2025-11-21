#include "API/Common/CommonPickParamData.hpp"
#include "API/Engine/FName.hpp"

std::string CommonPickParamData::GetIdentifier()
{
    return static_cast<API_FName>(this->_object.ID).ToString();
}

std::string CommonPickParamData::GetGotIdentifier()
{
    return static_cast<API_FName>(this->_object.gotId).ToString();
}