#pragma once
#include <stdint.h>
#include "Container/BasicType.h"

class UField : public  UObject
{
	public:
		class UField* next;
};

class UStruct : public UField
{
	public: 
		class UStruct* SuperStruct;
		class UField*  Children;
		unsigned char unknown[0x70];
};

class UClass : public UStruct
{
	public:
		unsigned char			unknown[0x150];
};

class UObject
{
	public:
		uint64_t			vtable;				// Size: 8
		EObjectFlags		ObjectFlags;		// Size: 4
		int					InternalIndex;		// Size: 4
		class UClass*		ClassPrivate;		// Size: Possibly 8?
		FName				NamePrivate;		// Size: Possibly 8?
		class UObject*		OuterPrivate;		// Size: Possibly 8?
};

