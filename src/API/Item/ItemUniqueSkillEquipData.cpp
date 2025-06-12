#include "API/Item/ItemUniqueSkillEquipData.hpp"
#include "API/Engine/TArrayHelper.hpp"

void ItemUniqueSkillEquipData::AddSkill(SkillData skill)
{
    auto data = reinterpret_cast<FGDItemUniqueSkillEquipData*>(&this->_object);
    TArrayHelper<FName>::Add(data->SkillID, skill.getObject().ID.Name);
}