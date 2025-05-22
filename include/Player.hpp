#include <stdint.h>
#include "BasicType.h"

typedef struct
{
	FName charaID;
	uint32_t level,
		hp,
		mp,
		power,
		defense,
		speed;
	char critChance;
	unsigned char unknown;

	uint16_t critAddMagnification;
} FGDStChara_BaseCharaParam;

