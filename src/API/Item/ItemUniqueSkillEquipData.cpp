#include "API/Item/ItemUniqueSkillEquipData.hpp"

void ItemUniqueSkillEquipData::AddSkill(SkillData skill)
{
    reinterpret_cast<FGDItemUniqueSkillEquipData*>(&this->_object)->SkillID.Add(skill.getObject().ID.Name);
}