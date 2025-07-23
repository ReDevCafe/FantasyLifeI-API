#include "API/Item/ItemLifeToolsData.hpp"
#include "Utils.hpp"

std::string ItemLifeToolsData::GetSecondModel()
{
    return Utils::FNameToString(reinterpret_cast<FGDItemLifeToolsData*>(&this->_object)->ModelId2);
}