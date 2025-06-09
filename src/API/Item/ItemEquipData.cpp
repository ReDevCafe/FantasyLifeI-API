#include "API/Item/ItemEquipData.hpp"
#include "Utils.hpp"

std::string ItemEquipData::GetModelIdentifier()
{
    return Utils::FNameToString(reinterpret_cast<FGDItemEquipData*>(&this->_object)->modelId);
}

void ItemEquipData::SetModel(ItemEquipData item)
{
    reinterpret_cast<FGDItemEquipData*>(&this->_object)->modelId = reinterpret_cast<FGDItemEquipData*>(&item.getObject())->modelId;
}
