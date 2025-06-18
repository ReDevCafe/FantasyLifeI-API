#ifndef INVENTORYINFOEQUIP_HPP
    #define INVENTORYINFOEQUIP_HPP

    #include "InventoryInfoCore.hpp"
    #include "API/Skill/SkillData.hpp"

class InventoryInfoEquip : public InventoryInfoCore 
{
    public:
    InventoryInfoEquip(FInventoryInfoEquip& data) : InventoryInfoCore(data)
    {};

    EItemTitleType      GetTitle()                          { return  reinterpret_cast<FInventoryInfoEquip*>(&this->_object)->itemTitle; }
    void                SetTitle(EItemTitleType value)      { reinterpret_cast<FInventoryInfoEquip*>(&this->_object)->itemTitle = value; }

    EItemQualityType    GetQuality()                        { return  reinterpret_cast<FInventoryInfoEquip*>(&this->_object)->Quality; }
    void                SetQuality(EItemQualityType value)  { reinterpret_cast<FInventoryInfoEquip*>(&this->_object)->Quality = value; }

    SkillData           GetSkill(int index);
    void                SetSkill(int index, SkillData id);

    bool                GetIsBurying()                      { return  reinterpret_cast<FInventoryInfoEquip*>(&this->_object)->isBurying; }
    void                SetIsBurying(bool value)            { reinterpret_cast<FInventoryInfoEquip*>(&this->_object)->isBurying = value; }
    
    uint16_t            GetRipeningAge()                    { return  reinterpret_cast<FInventoryInfoEquip*>(&this->_object)->ripeningAge; }
    void                SetRipeningAge(uint16_t value)      { reinterpret_cast<FInventoryInfoEquip*>(&this->_object)->ripeningAge = value; }

    uint16_t            GetCreatorSign()                    { return  reinterpret_cast<FInventoryInfoEquip*>(&this->_object)->creatorSignNo; }
    void                SetCreatorSign(uint16_t value)      { reinterpret_cast<FInventoryInfoEquip*>(&this->_object)->creatorSignNo = value; }
};

#endif // !INVENTORYINFOEQUIP_HPP