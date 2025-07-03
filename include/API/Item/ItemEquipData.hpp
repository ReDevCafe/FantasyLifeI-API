#ifndef ITEMEQUIPDATA_HPP
    #define ITEMEQUIPDATA_HPP

    #include "ItemData.hpp"
    #include <vector>

class ML_API ItemEquipData : public ItemData
{
    public:
        ItemEquipData(FGDItemEquipData& data) 
        : ItemData(data)
        {}

    protected:
        std::string GetModelIdentifier();
    public:
        std::string GetModel();
        void SetModel(ItemEquipData item);

        bool GetNotAggregated()             { return reinterpret_cast<FGDItemEquipData*>(&this->_object)->notAggregated; }
        void SetNotAggretated(bool value)   { reinterpret_cast<FGDItemEquipData*>(&this->_object)->notAggregated = value; }
};

#endif // !ITEMEQUIPDATA_HPP