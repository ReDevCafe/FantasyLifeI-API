#ifndef ITEMARMORDATA_HPP
    #define ITEMARMORDATA_HPP

    #include "ItemUniqueSkillEquipData.hpp"
    #include "API/Common/CommonElementAttrParam.hpp"
    #include <vector>
    #include <memory>

class ML_API ItemArmorData : public ItemUniqueSkillEquipData
{
    public:
        ItemArmorData(FGDItemArmorData& data) : ItemUniqueSkillEquipData(data){};
        ItemArmorData(ItemData data) : ItemUniqueSkillEquipData(data.getObject()){};

        bool    GetDisableBurial()                          { return  static_cast<FGDItemArmorData&>(this->_object).disableBurial; }
        void    SetDisableBurial(bool value)                { static_cast<FGDItemArmorData&>(this->_object).disableBurial = value; }

        int32_t GetPhysicalDefense(int index)               { return static_cast<FGDItemArmorData&>(this->_object).physicalDefenseList[index]; }
        void    SetPhysicalDefense(int index, int32_t def)  { static_cast<FGDItemArmorData&>(this->_object).physicalDefenseList[index]  = def; }

        int32_t GetMagicDefense(int index)                  { return static_cast<FGDItemArmorData&>(this->_object).magicDefenseList[index]; }
        void    SetMagicDefense(int index, int32_t def)     { static_cast<FGDItemArmorData&>(this->_object).magicDefenseList[index]  = def; }

        CommonElementAttrParam GetAttrResist()              {  return CommonElementAttrParam(static_cast<FGDItemArmorData&>(this->_object).attrResist); }
};

#endif // !ITEMARMORDATA_HPP