#ifndef ITEMUNIQUUESKILLEQUIPDATA
    #define ITEMUNIQUUESKILLEQUIPDATA

    #include "ItemEquipData.hpp"
    #include "API/Skill/SkillData.hpp"

class ML_API ItemUniqueSkillEquipData : public ItemEquipData
{
    public:
        ItemUniqueSkillEquipData(FGDItemUniqueSkillEquipData& data) : ItemEquipData(data){};
        ItemUniqueSkillEquipData(ItemData data) : ItemEquipData(static_cast<FGDItemEquipData&>(data.getObject())){};

        //FIXME: SEGFAULT?
        void AddSkill(SkillData skill);
};

#endif // !ITEMUNIQUUESKILLEQUIPDATA