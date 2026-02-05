#pragma once

#include "API/GameFunctionProxy.hpp"
/*
https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Runtime/CoreUObject/GetObjectsOfClass?application_version=5.7

ClassToLookFor 	        Class of the objects to return.
Results 	              An output list of objects of the specified class.
bIncludeDerivedClasses 	If true, the results will include objects of child classes as well.
AdditionalExcludeFlags 	Objects with any of these flags will be excluded from the results.
ExclusiveInternalFlags 	Specifies internal flags to use as a filter for which objects to return
*/

class UClass;
class UObject;
template <typename T> class TArray;

typedef void (__fastcall *FLIAPI_DEF_UObjectGetObjectsOfClass)(const UClass*, TArray<UObject*>&, bool bIncludeDerivedCLasses, int ExcludeFlags, int ExclusionInternalFlags);
class UObjectGetObjectsOfClass : public GameFunctionProxy<FLIAPI_DEF_UObjectGetObjectsOfClass>
{
  private:

  /***
   *     48 89 5C 24 08 57 48 83  EC 30 8B 44 24 2C 41 8B
   */
  static constexpr uint8_t pattern[] = 
  {
    0x48, 0x83, 0xEC, 0x48, 0x48, 0x8D, 0x44, 0x24,  0x58, 0x48, 0x89, 0x54, 0x24, 0x58, 0x48, 0x89,
    0x44, 0x24, 0x38, 0x48, 0x8D, 0x54, 0x24, 0x30,  0x48, 0x8D, 0x05, 0x11, 0xD0, 0xFF, 0xFF, 0x48
  };
  
  UObjectGetObjectsOfClass():
  GameFunctionProxy<FLIAPI_DEF_UObjectGetObjectsOfClass>
    (
      "UObject::UObjectGetObjectsOfClass()",
      const_cast<uint8_t*>(pattern),
      "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
      0
    )
    {}

  public:
  FLIAPI_FUNCTION_INSTANCE_MACRO(UObjectGetObjectsOfClass);
  FLIAPI_FUNCTION_CALL_MACRO(FLIAPI_DEF_UObjectGetObjectsOfClass);
};