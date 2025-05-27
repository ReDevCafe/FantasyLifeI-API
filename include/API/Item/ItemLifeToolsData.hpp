#ifndef ITEMLIFETOOLSDATA_HPP
    #define ITEMLIFETOOLSDATA_HPP

    #include "ItemUniqueSkillEquipData.hpp"

class ItemLifeToolsData : public  ItemUniqueSkillEquipData
{
    public:
        ItemLifeToolsData(FGDItemLifeToolsData& data) : ItemUniqueSkillEquipData(data){}
};

#endif // !ITEMLIFETOOLSDATA_HPP