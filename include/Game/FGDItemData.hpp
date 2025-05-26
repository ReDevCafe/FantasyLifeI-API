#ifndef FGDITEMDATA_HPP_
    #define FGDITEMDATA_HPP_

    #include "../Engine/FName.hpp"
    #include "../Engine/DataTable.hpp"
    #include "../Engine/TMap.hpp"
    #include "../Engine/UGameDataAsset.hpp"

enum class EItemTitleType : uint8_t {
	None = 0,
	Rag = 1,
	Normal = 2,
	Masterpiece = 3,
	Supreme = 4,
	Legend = 5
};

enum class ERarityType : uint8_t {
	None = 0,
	Rarity = 1,
	Rarity3 = 2,
	Rarity4 = 3,
	Rarity5 = 4,
	Rarity6 = 5
};

enum class EItemType : uint8_t {
	None = 0,
	Evidence = 10,
	Battle_Offence = 20,
	Battle_Deffence = 21,
	Battle_Special = 22,
	Weapon_Batton = 30,
	Weapon_Gun = 31,
	Armor = 40,
	Accessory = 50
};

enum class EItemEffectType : uint8_t
{
	None = 0,
	Hp = 1,
	Sp = 2,
	HpPercent = 3,
	SpPercent = 4,
	AutoHealHp = 5,
	Revival = 6,
	AllHealStatus = 7,
	HealPoison = 8,
	HealParalysis = 9,
	HealFrostbite = 10,
	HealBurn = 11,
	OffenseUp = 12,
	DefenseUp = 13,
	DefenseDown = 14,
	MagicOffenseUp = 15,
	MagicDefenseUp = 16,
	KnockbackDisable   = 17,
	TensionGaugeGainUp = 18,
	CiriticalRateUp = 19,
	DamageCut = 20,
	Invincible = 21,
	MeatCook = 22,
	FishCook = 23,
	EggCook = 24,
	DessertCook = 25,
	VegetablesCook = 26,
	PotCook = 27,
	ComboCook = 28,
	Other = 29
};

enum class EItemQualityType : uint8_t {
	Quality = 0,
	Quality2 = 1,
	Quality3 = 2,
	Quality4 = 3
};

enum class EItemCategory : uint8_t {
	None = 0,
	Evidence = 1,
	Weapon = 2,
	Armor = 3,
	Accessory = 4,
	Battle = 5,
	PlantDungeonBranch = 6
};

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

