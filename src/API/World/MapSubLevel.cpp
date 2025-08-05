#include "API/World/MapSubLevel.hpp"
#include "Engine/FNamePool.hpp"

std::string MapSubLevel::GetIdentifier()
{
    return FNameUtils::getString(this->_object.SubLevelID);
}

std::string MapSubLevel::GetMapSubIdentifier()
{
    return FNameUtils::getString(this->_object.mapSubId);
}

std::string MapSubLevel::GetPath()
{
    return FNameUtils::getString(this->_object.SubLevelInfo.SubLevelPath);
}