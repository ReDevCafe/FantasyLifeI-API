#ifndef ITEMARMORDATA_HPP
    #define ITEMARMORDATA_HPP

    #include "ItemUniqueSkillEquipData.hpp"
    #include "API/Common/CommonElementAttrParam.hpp"
    #include <vector>
    #include <memory>

class ML_API ItemArmorData : public ItemUniqueSkillEquipData
{
    public:
        ItemArmorData(FGDItemArmorData& data) : 
            ItemUniqueSkillEquipData(data)
        {};

        bool GetDisableBurial()             { return  reinterpret_cast<FGDItemArmorData*>(&this->_object)->disableBurial; }
        void SetDisableBurial(bool value)   { reinterpret_cast<FGDItemArmorData*>(&this->_object)->disableBurial = value; }

        int32_t GetPhysicalDefense(int index)               { return reinterpret_cast<FGDItemArmorData*>(&this->_object)->physicalDefenseList[index]; }
        void    SetPhysicalDefense(int index, int32_t def)  { reinterpret_cast<FGDItemArmorData*>(&this->_object)->physicalDefenseList[index]  = def; }

        int32_t GetMagicDefense(int index)                  { return reinterpret_cast<FGDItemArmorData*>(&this->_object)->magicDefenseList[index]; }
        void    SetMagicDefense(int index, int32_t def)     { reinterpret_cast<FGDItemArmorData*>(&this->_object)->magicDefenseList[index]  = def; }

        CommonElementAttrParam GetAttrResist() {  return CommonElementAttrParam(reinterpret_cast<FGDItemArmorData*>(&this->_object)->attrResist); }
};

#endif // !ITEMARMORDATA_HPP