#include "API/Item/ItemLifeToolsData.hpp"
#include "Engine/FNamePool.hpp"

std::string ItemLifeToolsData::GetSecondModel()
{
    return FNameUtils::GetString(reinterpret_cast<FGDItemLifeToolsData*>(&this->_object)->ModelId2);
}