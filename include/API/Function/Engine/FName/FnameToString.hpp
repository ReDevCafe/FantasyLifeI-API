#pragma once

#include "API/GameFunctionProxy.hpp"
#include "API/Engine/FString.hpp"

class FName; 
typedef void (__fastcall *FLIAPI_DEF_FNameToString)(FName* thisptr, FString* returnValue);
class FNameToString : public GameFunctionProxy<FLIAPI_DEF_FNameToString>
{
  private:

  /***
   *    48 89 5C 24 10 48 89 74  24 18 57 48 83 EC 20 80  
   *    3D ?? ?? ?? ?? 00 48 8B  FA 8B 19 48 8B F1 74 09 
   *    48 8D
   */
  static constexpr uint8_t pattern[] = 
  {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x74, 0x24, 0x18, 0x57, 0x48, 0x83, 0xEC, 0x20, 0x80,
    0x3D, 0x38, 0x54, 0x2E, 0x09, 0x00, 0x48, 0x8B, 0xFA, 0x8B, 0x19, 0x48, 0x8B, 0xF1, 0x74, 0x09,
    0x48, 0x8D
  };
  
  FNameToString():
  GameFunctionProxy<FLIAPI_DEF_FNameToString>
    (
      "Fname::ToString()",
      const_cast<uint8_t*>(pattern),
      "xxxxxxxxxxxxxxxxx????xxxxxxxxxxxxx",
      0
    )
    {}

  public:
  FLIAPI_FUNCTION_INSTANCE_MACRO(FNameToString);
  FLIAPI_FUNCTION_CALL_MACRO(FLIAPI_DEF_FNameToString);
};