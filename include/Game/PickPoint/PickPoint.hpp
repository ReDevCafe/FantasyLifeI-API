#pragma once

#include <stdint.h>

enum class EPickPointType : uint8_t
{
	Invalid                                                          = 0,
	Logging                                                          = 1,
	Mining                                                           = 2,
	Fishing                                                          = 3,
	Harvesting                                                       = 4
};