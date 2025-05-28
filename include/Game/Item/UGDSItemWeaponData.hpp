#ifndef UGDSITEMWEAPONDATA_HPP
    #define UGDSITEMWEAPONDATA_HPP

    #include "FGDItemData.hpp"
    #include "Game/Element.hpp"

struct FGDItemWeaponData : FGDItemUniqueSkillEquipData
{
    public:
        bool                disableBurial;
        unsigned char       unknown1[0x7];
        TArray<int32_t>     physicalOffenseList;
        TArray<int32_t>     magicOffenseList;
        EElementAttrType    elementAttr;
        unsigned char       unknown2[0x7];
};

class UGDSItemWeaponData : public UGameDataAsset
{
    public: 
        TMap<FName, FGDItemWeaponData>      m_dataMap;
        unsigned    char                    unknown[0x50];
};

#endif // !UGDSITEMWEAPONDATA_HPP