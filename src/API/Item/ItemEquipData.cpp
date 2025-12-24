#include "API/Item/ItemEquipData.hpp"
#include "API/Engine/FName.hpp"
#include "ModLoader.hpp"

std::string ItemEquipData::GetModelIdentifier()
{
    return static_cast<FGDItemEquipData&>(this->_object).modelID.ToString();
}

void ItemEquipData::SetModel(ItemEquipData item)
{
    static_cast<FGDItemEquipData&>(this->_object).modelID = static_cast<FGDItemEquipData&>(this->_object).modelID;
}

TArray<FGDAddSkillLotTable_AddSkillInfo>& ItemEquipData::GetAddSkillLot(int rarity)
{
    auto skillIdRaw = static_cast<FGDItemEquipData&>(this->_object).addSkillLotTableList.Get(rarity);
    return ModLoader::gameCache->GetAddSkillTable(skillIdRaw.ToString());
}

void ItemEquipData::SetAddSkillTable(int rarity, FName value)
{
    static_cast<FGDItemEquipData&>(this->_object).addSkillLotTableList.Set(rarity, value);
}