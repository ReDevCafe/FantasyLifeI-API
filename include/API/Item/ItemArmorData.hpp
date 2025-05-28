#ifndef ITEMARMORDATA_HPP
    #define ITEMARMORDATA_HPP

    #include "ItemUniqueSkillEquipData.hpp"
    #include "Game/Item/UGDSItemArmorData.hpp"
    #include <vector>

class ItemArmorData : public ItemUniqueSkillEquipData
{
    public:
        ItemArmorData(FGDItemArmorData& data) : ItemUniqueSkillEquipData(data){};

        void    GetPhysicalDefenses();
};

#endif // !ITEMARMORDATA_HPP