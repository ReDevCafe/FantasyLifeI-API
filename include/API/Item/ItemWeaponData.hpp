#ifndef ITEMWEAPONDATA_HPP
    #define ITEMWEAPONDATA_HPP

    #include "ItemUniqueSkillEquipData.hpp"
    #include "Game/Item/UGDSItemWeaponData.hpp"
    #include <vector>

class ItemWeaponData : public ItemUniqueSkillEquipData
{
    public:
        ItemWeaponData(FGDItemWeaponData& data) : ItemUniqueSkillEquipData(data){};

        void    GetPhysicalOffenses();
};

#endif // !ITEMWeaponDATA_HPP