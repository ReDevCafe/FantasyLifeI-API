#include "API/World/MapSubLevel.hpp"
#include "Utils.hpp"

std::string MapSubLevel::GetIdentifier()
{
    return Utils::FNameToString(this->_object.SubLevelId);
}

std::string MapSubLevel::GetMapSubIdentifier()
{
    return Utils::FNameToString(this->_object.mapSubId);
}

std::string MapSubLevel::GetPath()
{
    return Utils::FNameToString(this->_object.SubLevelInfo.SubLevelPath);
}