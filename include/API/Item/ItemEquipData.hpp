#ifndef ITEMEQUIPDATA_HPP
    #define ITEMEQUIPDATA_HPP

    #include "ItemData.hpp"

class ItemEquipData : public ItemData
{
    public:
        ItemEquipData(FGDItemEquipData& data) : ItemData(data){};
    
};

#endif // !ITEMEQUIPDATA_HPP