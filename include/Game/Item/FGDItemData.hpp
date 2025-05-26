#ifndef FGDITEMDATA_HPP_
    #define FGDITEMDATA_HPP_

    #include "Engine/FName.hpp"
    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"

	#include "Item.hpp"
    #include "Game/Types.hpp"

class FGDAuto { 
    public:
        uint32_t m_offset;
        uint32_t m_dataSize;
        UGameDataAsset *m_pAsset;
};

class FGDStCommon_CondCmd {
    public:
        FName Cmd;
        TArray<FGDAuto> arg;
};

class FGDStCommon_PriceInfo {
    public:
        TArray<int32_t> priceBuyRichList;
        TArray<int32_t> priceSellRichList;
        TArray<int32_t> priceBuySparkleList;
        TArray<int32_t> priceBuyTourCoinList;
        TArray<int32_t> priceBuyGoddessSeedList;
        TArray<int32_t> priceBuyShineGoddessSeedList;
        TArray<int32_t> priceBuyRainbowGoddessSeedList;
        TArray<int32_t> priceTradeRebuildStoneList;
        TArray<int32_t> priceBuyChestnut;
};

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

class FGDItemTitleData : public FTableRowBase {
	public:
		EItemTitleType itemTitleType;
		FName titleText;
		FName iconID;
};

class UGDSItemTitleData : public UGameDataAsset {
	public:
		TMap<char, FGDItemTitleData> m_dataMap;
};

#endif /* !FGDITEMDATA_HPP_ */

