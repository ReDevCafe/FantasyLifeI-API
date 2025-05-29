#ifndef UGDSRECIPEDATA_HPP_
    #define UGDSRECIPEDATA_HPP_

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/Item/FGDItemData.hpp"
    #include "Game/FGDStCommon.hpp"
	#include "Game/Recipe/Recipe.hpp"
	#include "Game/Types.hpp"
	#include "Game/Life/Life.hpp"

enum class ERecipeItemSeries : uint8_t {
	Invalid = 0,
	MetalWeapon = 10,
	MetalLifeTool = 11,
	MetalArmor  = 12,
	ScaleArmor = 13,
	BlacksmithObject = 14,
	ClothArmor = 30,
	ClothFashion = 31,
	Cloak = 32,
	Rug = 33,
	SewingObject = 34,
	WoodWeapon   = 50,
	WoodLifeTool = 51,
	WoodFurniture = 52,
	CarpenterObject  = 53,
	FoodMeat = 70,
	FoodPot  = 71,
	FoodFish = 72,
	FoodAssort   = 73,
	FoodEgg  = 74,
	FoodDessert  = 75,
	FoodVegetable= 76,
	Flask= 90,
	AccessoryGlasses = 91,
	AccessoryRing = 92,
	AccessoryNecklace = 93,
	Bomb = 94,
	Medicine = 95,
	AlchemyObject = 96,
	Wall = 110,
	Picture  = 111,
	Sculpture = 112,
	PlantArt = 113,
	Interior = 114,
	Exterior = 115
};

enum class ERecipeCategory : uint8_t {
	None = 0,
	Story = 1,
	Weapon = 2,
	Tool = 3,
	Shield = 4,
	Armor = 5,
	Drug = 6,
	Cooking = 7,
	Object = 8,
	Material = 9,
	Favorite = 10
};

class FGDRecipeData_LifeParamInfo {
    public:
        ELifeType lifeType;
        int32_t power;
};

class FGDRecipeData_RewardData  { 
    public:
		FName rank0_itemId;
		uint32_t rank0_exp;
		FName rank1_itemId;
		uint32_t rank1_exp;
		FName rank2_itemId;
		uint32_t rank2_exp;
		FName rank3_itemId;
		uint32_t rank3_exp;
};

class FGDRecipeData_ItemInfo { 
    public:
        FName ItemId;
        int32_t numItems;

		FGDRecipeData_ItemInfo(FName item, int32_t count)
			: ItemId(item), numItems(count)
		{}
};

class FGDRecipeTabData : public FTableRowBase {
	public:
		EItemCategory category;
		FName tabIconId;
		FName tabNameId;
};
    
class FGDRecipeData : public FTableRowBase {
    public:
        FName recipeId;
        ERecipeType Type;
        FGDRecipeData_LifeParamInfo lifeParamInfo;
        ERecipeCategory Category;
        ERecipeItemSeries recipeItemSeries;
        EItemTitleType titleType;
        ERandomRecipeType randomRecipeType;
        FName randomRespiseTableId;
        FName ItemId;
        ERarityType rarity;
        FName gameTableId;
        FGDRecipeData_RewardData rewardData;
        TArray<FGDRecipeData_ItemInfo> itemList;
        FGDRecipeData_ItemInfo rebuildItem;
        EItemCraftAddMaterialType addMaterialType;
        bool requestable;
        bool notAcquiredLife;
        char multipleCraftLimit;
};

class UGDSRecipeData : public UGameDataAsset {
    public:
        TMap<FName, FGDRecipeData> m_dataMap;
};

class UGDSRecipeTabData : public UGameDataAsset {
	public:
		TMap<char, FGDRecipeTabData> m_dataMap;
};

#endif /* !UGDSRECIPEDATA_HPP_ */
