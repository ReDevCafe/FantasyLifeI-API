#ifndef ITEM_HPP_
    #define ITEM_HPP_

    #include <cstdint>

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

enum class EItemTitleType : uint8_t {
	None = 0,
	Rag = 1,
	Normal = 2,
	Masterpiece = 3,
	Supreme = 4,
	Legend = 5
};

enum class EItemEffectType : uint8_t {
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

enum class EItemGradeType : uint8_t
{
	None = 0,
	Egg = 1,
	Baby = 2,
	Boss = 3,
	Dragon = 4,
	God = 5
};

enum class EItemRankType : uint8_t
{
	Low = 0,
	Middle = 1,
	High = 2,
	Dec = 10
};



#endif /* !ITEM_HPP_ */
