#ifndef ITEMEQUIPDATA_HPP
    #define ITEMEQUIPDATA_HPP

    #include "ItemData.hpp"
    #include <vector>

class ML_API ItemEquipData : public ItemData
{
    public:
        ItemEquipData(FGDItemEquipData& data) : ItemData(data){}
        ItemEquipData(ItemData data) : ItemData(data.getObject()){};

        std::string GetModelIdentifier();
        std::string GetModel();
        void SetModel(ItemEquipData item);
        void SetModel(FName value)                                           { static_cast<FGDItemEquipData&>(this->_object).modelID = value; }

        bool GetNotAggregated()                                              { return static_cast<FGDItemEquipData&>(this->_object).notAggregated; }
        void SetNotAggretated(bool value)                                    { static_cast<FGDItemEquipData&>(this->_object).notAggregated = value; }

        TArray<FGDAddSkillLotTable_AddSkillInfo>& GetAddSkillLot(int rarity);
        void  SetAddSkillTable(int rarity, FName value);
};

#endif // !ITEMEQUIPDATA_HPP