#pragma once
#include <stdint.h>

enum class ETargetRankType : uint8_t
{
	Normal                                                          = 0,
	Silver                                                          = 1,
	Gold                                                            = 2,
	Num                                                             = 3
};

enum class EEnemyType : uint8_t
{
	Unkown                                                               = 255,
	Invalid                                                              = 255,
	Default                                                              = 0,
	Box                                                                  = 1,
	Scarecrow                                                            = 2
};

enum class EBtlActiveTimeZoneType : uint8_t
{
	None                                                     = 0,
	Day                                                      = 1,
	Night                                                    = 2
};