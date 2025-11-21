#include "API/World/MapSubLevel.hpp"
#include "API/Engine/FName.hpp"

std::string MapSubLevel::GetIdentifier()
{
    return static_cast<API_FName>(this->_object.SubLevelID).ToString();
}

std::string MapSubLevel::GetMapSubIdentifier()
{
    return static_cast<API_FName>(this->_object.mapSubId).ToString();
}

std::string MapSubLevel::GetPath()
{
    return static_cast<API_FName>(this->_object.SubLevelInfo.SubLevelPath).ToString();
}