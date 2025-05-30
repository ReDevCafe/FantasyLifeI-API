#ifndef ITEMLIFETOOLSDATA_HPP
    #define ITEMLIFETOOLSDATA_HPP

    #include "ItemUniqueSkillEquipData.hpp"
    #include "Game/Item/UGDSItemLifeToolsData.hpp"


class ItemLifeToolsData : public  ItemUniqueSkillEquipData
{
    public:
        ItemLifeToolsData(FGDItemLifeToolsData& data) : ItemUniqueSkillEquipData(data){}

        bool GetDisableBurial()                             { return  reinterpret_cast<FGDItemLifeToolsData*>(&this->_object)->disableBurial; }
        void SetDisableBurial(bool value)                   { reinterpret_cast<FGDItemLifeToolsData*>(&this->_object)->disableBurial = value; }

    public:
        std::string GetSecondModel();
        void SetSecondModel(ItemEquipData item)             { reinterpret_cast<FGDItemLifeToolsData*>(&this->_object)->ModelId2 = reinterpret_cast<FGDItemLifeToolsData*>(&item.getObject())->ModelId2; }

        // Correspond to the Life Stat per Item Rank (See RecipeData->GetRank())
        int32_t     GetLifeParam(EItemTitleType type)            { return  reinterpret_cast<FGDItemLifeToolsData*>(&this->_object)->lifeParamList[(uint8_t)type - 1]; }
        void        SetLifeParam(EItemTitleType type, int value) { reinterpret_cast<FGDItemLifeToolsData*>(&this->_object)->lifeParamList[(uint8_t)type - 1] = value; }
};

#endif // !ITEMLIFETOOLSDATA_HPP