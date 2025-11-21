#include "API/Item/ItemEquipData.hpp"
#include "API/Engine/FName.hpp"
#include "API/Engine/TArrayHelper.hpp"
#include "Utils.hpp"
#include "ModLoader.hpp"

std::string ItemEquipData::GetModelIdentifier()
{
    return static_cast<API_FName>(static_cast<FGDItemEquipData&>(this->_object).modelID).ToString();
}

void ItemEquipData::SetModel(ItemEquipData item)
{
    static_cast<FGDItemEquipData&>(this->_object).modelID = static_cast<FGDItemEquipData&>(this->_object).modelID;
}

TArray<FGDAddSkillLotTable_AddSkillInfo>& ItemEquipData::GetAddSkillLot(int rarity)
{
    auto skillIdRaw = TArrayHelper<FName>::Get(static_cast<FGDItemEquipData&>(this->_object).addSkillLotTableList, rarity);
    std::string skillId = static_cast<API_FName>(skillIdRaw).ToString();
    return ModLoader::gameCache->GetAddSkillTable(skillId);
}

void ItemEquipData::SetAddSkillTable(int rarity, FName value)
{
    TArrayHelper<FName>::Set(static_cast<FGDItemEquipData&>(this->_object).addSkillLotTableList, rarity, value);
}