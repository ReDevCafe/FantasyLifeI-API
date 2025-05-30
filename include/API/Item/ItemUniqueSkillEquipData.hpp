#ifndef ITEMUNIQUUESKILLEQUIPDATA
    #define ITEMUNIQUUESKILLEQUIPDATA

    #include "ItemEquipData.hpp"
    #include "Game/Skill/UGDSSkillData.hpp"

class ItemUniqueSkillEquipData : public ItemEquipData
{
    public:
        ItemUniqueSkillEquipData(FGDItemUniqueSkillEquipData& data) : ItemEquipData(data){};

        //FIXME: SEGFAULT?
        void SetSkill(int index, FName skill) { reinterpret_cast<FGDItemUniqueSkillEquipData*>(&this->_object)->SkillID.Data[index] = skill; }
};

#endif // !ITEMUNIQUUESKILLEQUIPDATA