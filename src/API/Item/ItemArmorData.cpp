#include "API/Item/ItemArmorData.hpp"
#include "Logger/ModLoaderLogger.hpp"

void ItemArmorData::SetPhysicalDefense(int index, int32_t def)
{
    if(index >= _physicalDefense.size() || index <= 0) 
    {
        mlLogger.warn(GetName(LANG::ENGLISH), "Invalid SetPhysicalDefense (listSize: ",  _physicalDefense.size(), ")");
        return;
    }
    
    reinterpret_cast<FGDItemArmorData*>(&this->_object)->physicalDefenseList.Data[index] = _physicalDefense[index] = def;
}

void ItemArmorData::SetMagicDefense(int index, int32_t def)
{
    if(index >= _magicDefense.size() || index <= 0) 
    {
        mlLogger.warn(GetName(LANG::ENGLISH), "Invalid SetMagicDefense (listSize: ",  _magicDefense.size(), ")");
        return;
    }
    
    reinterpret_cast<FGDItemArmorData*>(&this->_object)->magicDefenseList.Data[index] = _magicDefense[index] = def;
}