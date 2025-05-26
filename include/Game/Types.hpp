#ifndef TYPE_HPP_
    #define TYPE_HPP_

	#include <cstdint>

enum class EGenderType : uint8_t {
	None = 0,
	Male = 1,
	Female = 2,
	Unknown = 3
};

enum class EItemCraftAddMaterialType : uint8_t {
	None = 0,
	Weapon = 1,
	Armor = 2,
	PickLifeTool = 3,
	CraftLifeTool = 4
};

enum class ERarityType : uint8_t {
	None = 0,
	Rarity = 1,
	Rarity3 = 2,
	Rarity4 = 3,
	Rarity5 = 4,
	Rarity6 = 5
};

struct FHandle
{
	int32_t Handle;
};


#endif /* !TYPE_HPP_ */
