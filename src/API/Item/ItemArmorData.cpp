#include "API/Item/ItemArmorData.hpp"
#include "Logger/ModLoaderLogger.hpp"

void ItemArmorData::GetPhysicalDefenses()
{
    auto test = reinterpret_cast<FGDItemArmorData*>(&this->_object)->physicalDefenseList;
    for(int i = 0; i < test.Count; i++)
    {
        mlLogger.warn("test:", test[i]);
    }
}