#pragma once

#include "API/GameFunctionProxy.hpp"

class FName;
typedef void (__fastcall *FLIAPI_DEF_FNameCTor)(FName* thisPtr, int len, const char* value, int createAndAdd);
class FNameCTor : public GameFunctionProxy<FLIAPI_DEF_FNameCTor>
{
  private:

  /***
   *     48 89 5C 24 08 57 48 83  EC 30 8B 44 24 2C 41 8B
   */
  static constexpr uint8_t pattern[] = 
  {
    0x48, 0x89, 0x5C, 0x24, 0x08, 0x57, 0x48, 0x83, 0xEC, 0x30, 0x8B, 0x44, 0x24, 0x2C, 0x41, 0x8B
  };
  
  FNameCTor():
  GameFunctionProxy<FLIAPI_DEF_FNameCTor>
    (
      "Fname::Fname()",
      const_cast<uint8_t*>(pattern),
      "xxxxxxxxxxxxxxx",
      0
    )
    {}

  public:
  FLIAPI_FUNCTION_INSTANCE_MACRO(FNameCTor);
  FLIAPI_FUNCTION_CALL_MACRO(FLIAPI_DEF_FNameCTor);
};