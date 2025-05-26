#ifndef LIFE_HPP_
    #define LIFE_HPP_

    #include <cstdint>

enum class ELifeCategory : uint8_t
{
    None = 0,
    Battle = 1,
    Gatherer = 2,
    Crafter = 3
};

enum class ELifeType : uint8_t {
	None = 0,
	NoMakeup = 1,
	Knight = 2,
	Mercenary = 3,
	Hunter = 4,
	Wizard = 5,
	Miner = 6,
	Lumberjack= 7,
	Fisherman = 8,
	Farmer = 9,
	Cook = 10,
	Blacksmith = 11,
	Carpenter = 12,
	Needleworker = 13,
	Alchemist = 14,
	Artist = 15
};

#endif /* !LIFE_HPP_ */
