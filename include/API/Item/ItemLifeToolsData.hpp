#ifndef ITEMLIFETOOLSDATA_HPP
    #define ITEMLIFETOOLSDATA_HPP

    #include "ItemUniqueSkillEquipData.hpp"

class ML_API ItemLifeToolsData : public  ItemUniqueSkillEquipData
{
    public:
        ItemLifeToolsData(FGDItemLifeToolsData& data) : ItemUniqueSkillEquipData(data){}
        ItemLifeToolsData(ItemData data) : ItemUniqueSkillEquipData(static_cast<FGDItemUniqueSkillEquipData&>(data.getObject())){};

        bool GetDisableBurial()                             { return  static_cast<FGDItemLifeToolsData&>(this->_object).disableBurial; }
        void SetDisableBurial(bool value)                   { static_cast<FGDItemLifeToolsData&>(this->_object).disableBurial = value; }

        std::string GetSecondModel();
        void SetSecondModel(ItemEquipData item)             { static_cast<FGDItemLifeToolsData&>(this->_object).ModelId2 = static_cast<FGDItemLifeToolsData&>(item.getObject()).ModelId2; }

        // Correspond to the Life Stat per Item Rank (See RecipeData->GetRank())
        int32_t     GetLifeParam(EItemTitleType type)            { return  static_cast<FGDItemLifeToolsData&>(this->_object).lifeParamList[(uint8_t)type - 1]; }
        void        SetLifeParam(EItemTitleType type, int value) { static_cast<FGDItemLifeToolsData&>(this->_object).lifeParamList[(uint8_t)type - 1] = value; }
};

#endif // !ITEMLIFETOOLSDATA_HPP