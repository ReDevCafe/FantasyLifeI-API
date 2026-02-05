#include "API/Item/ItemLifeToolsData.hpp"
#include "API/Engine/FName.hpp"

std::string ItemLifeToolsData::GetSecondModel()
{
    return reinterpret_cast<FGDItemLifeToolsData*>(&this->_object)->ModelId2.ToString();
}