#ifndef ITEMUNIQUUESKILLEQUIPDATA
    #define ITEMUNIQUUESKILLEQUIPDATA

    #include "ItemEquipData.hpp"

class ItemUniqueSkillEquipData : public ItemEquipData
{
    public:
        ItemUniqueSkillEquipData(FGDItemUniqueSkillEquipData& data) : ItemEquipData(data){};
};

#endif // !ITEMUNIQUUESKILLEQUIPDATA