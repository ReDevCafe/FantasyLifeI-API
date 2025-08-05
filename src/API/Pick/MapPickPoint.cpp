#include "API/Pick/MapPickPoint.hpp"
#include "Utils.hpp"

std::string MapPickPoint::GetIdentifier()
{
    return Utils::TestFNameToString(this->_object.ID);
}