#pragma once

enum class ELifeCategory : uint8_t
{
	ELifeCategory__None = 0,
	ELifeCategory__Battle = 1,
	ELifeCategory__Gatherer = 2,
	ELifeCategory__Crafter = 3
};

enum class ELifeType : uint8_t
{
	ELifeType__None = 0,
	ELifeType__NoMakeup = 1,
	ELifeType__Knight = 2,
	ELifeType__Mercenary = 3,
	ELifeType__Hunter = 4,
	ELifeType__Wizard = 5,
	ELifeType__Miner = 6,
	ELifeType__Lumberjack = 7,
	ELifeType__Fisherman = 8,
	ELifeType__Farmer = 9,
	ELifeType__Cook = 10,
	ELifeType__Blacksmith = 11,
	ELifeType__Carpenter = 12,
	ELifeType__Needleworker = 13,
	ELifeType__Alchemist = 14,
	ELifeType__Artist = 15
};