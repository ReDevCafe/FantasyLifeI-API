#include "API/World/MapSubLevel.hpp"
#include "API/Engine/FName.hpp"

std::string MapSubLevel::GetIdentifier()
{
    return this->_object.SubLevelID.ToString();
}

std::string MapSubLevel::GetMapSubIdentifier()
{
    return this->_object.mapSubId.ToString();
}

std::string MapSubLevel::GetPath()
{
    return this->_object.SubLevelInfo.SubLevelPath.ToString();
}