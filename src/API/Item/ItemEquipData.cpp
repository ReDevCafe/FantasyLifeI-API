#include "API/Item/ItemEquipData.hpp"
#include "API/Engine/TArrayHelper.hpp"
#include "Utils.hpp"
#include "ModLoader.hpp"

std::string ItemEquipData::GetModelIdentifier()
{
    return Utils::FNameToString(static_cast<FGDItemEquipData&>(this->_object).modelID);
}

void ItemEquipData::SetModel(ItemEquipData item)
{
    static_cast<FGDItemEquipData&>(this->_object).modelID = static_cast<FGDItemEquipData&>(this->_object).modelID;
}

TArray<FGDAddSkillLotTable_AddSkillInfo>& ItemEquipData::GetAddSkillLot(int rarity)
{
    auto skillIdRaw = TArrayHelper<FName>::Get(static_cast<FGDItemEquipData&>(this->_object).addSkillLotTableList, rarity);
    std::string skillId = Utils::FNameToString(skillIdRaw);

    return ModLoader::gameCache->GetAddSkillTable(skillId);
}

void ItemEquipData::SetAddSkillTable(int rarity, FName value)
{
    TArrayHelper<FName>::Set(static_cast<FGDItemEquipData&>(this->_object).addSkillLotTableList, rarity, value);
}