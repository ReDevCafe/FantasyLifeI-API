#ifndef FGDITEMDATA_HPP_
    #define FGDITEMDATA_HPP_

    #include "Engine/FName.hpp"
    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"

	#include "Item.hpp"
    #include "Game/Types.hpp"
    #include <Game/FGDStCommon.hpp>

class FGDItemData : public FTableRowBase {
    public:
        FName ID;
        FName nameId;
        FName DescId;
        FName overwriteIconName;
        uint32_t sortOrder;
        uint32_t flagNo;
        EItemCategory Category;
        EItemType Type;
        char series;
        char seType;
        uint16_t StackMax;
        bool disableSolAbadon;
        bool disableUsedInventory;
        bool disableBagRegist;
        bool disablePresentToNPC;
        bool disablePresentToMultiplay;
        FGDStCommon_PriceInfo priceInfo;
        ERarityType rarity;
        EItemQualityType Quality;
        TArray<FGDStCommon_CondCmd> enablePresentReceiveCondList;
        EItemEffectType dropEffType;
};

struct FGDItemEquipData : public  FGDItemData
{
    public:
        FName			modelId;
        bool			notAggregated;
        unsigned char	unknown[0x7];
        TArray<FName>	addStatusLotTableList;
        TArray<FName>	addSkillLotTable;
};

struct FGDItemUniqueSkillEquipData : public FGDItemEquipData
{
	TArray<FName>	SkillID;
};

#endif /* !FGDITEMDATA_HPP_ */

