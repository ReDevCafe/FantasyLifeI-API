#include "API/Common/CommonPickParamData.hpp"
#include "Utils.hpp"

std::string& CommonPickParamData::GetIdentifier()
{
    return Utils::FNameToString(this->_object.ID);
}

std::string& CommonPickParamData::GetGotIdentifier()
{
    return Utils::FNameToString(this->_object.gotId);
}