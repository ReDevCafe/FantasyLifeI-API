#ifndef MAP_HPP
    #define MAP_HPP

    #include <stdint.h>

enum class EMapType : uint8_t
{
	None                = 0,
	CraftOutdoor        = 1,
	MyHome              = 2,
	NpcHome             = 3,
	PlantDungeon        = 4,
	Gallery             = 5,
	WillowOfDevildom    = 6
};

#endif // !MAP_HPP