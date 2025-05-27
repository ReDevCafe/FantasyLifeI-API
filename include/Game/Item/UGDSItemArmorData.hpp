#ifndef UGDSITEMARMORDATA_HPP
    #define UGDSITEMARMORDATA_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"
    #include "Game/Item/FGDItemData.hpp"
    #include "Game/FGDStCommon.hpp"



struct FGDItemArmorData : FGDItemUniqueSkillEquipData
{
    bool                            disableBurial;
    unsigned char                   unknown[0x7];
    TArray<int32_t>                 physicalDefenseList;
    TArray<int32_t>                 magicDefenseList;
    FGDStCommon_ElementAttrParam    attrResist;
};

class UGDSItemArmorData : public UGameDataAsset
{
    public:
	TMap<FName, FGDItemArmorData>   m_dataMap; 
    unsigned char                   unknown[0x50];
};

#endif // !UGDSITEMARMORDATA_HPP