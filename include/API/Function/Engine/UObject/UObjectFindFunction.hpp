#pragma once

#include "API/GameFunctionProxy.hpp"

class UFunction;
class FName;

typedef UFunction* (__fastcall *FLIAPI_DEF_UObjectFindFunction)(void* thisPtr, FName name);
class UObjectFindFunction : public GameFunctionProxy<FLIAPI_DEF_UObjectFindFunction>
{
  private:

  /***
   *     48 8B 49 10 41 B8 ?? ?? ?? ?? E9 ?? ?? ?? ??
   */
  static constexpr uint8_t pattern[] = 
  {
    0x48, 0x8B, 0x49, 0x10, 0x41, 0xB8, 0x00, 0x00, 0x00, 0x00, 0xE9, 0x00, 0x00, 0x00, 0x00
  };
  
  UObjectFindFunction():
  GameFunctionProxy<FLIAPI_DEF_UObjectFindFunction>
    (
      "UObject::FindFunction()",
      const_cast<uint8_t*>(pattern),
      "xxxxxx????x????",
      0
    )
    {}

  public:
  FLIAPI_FUNCTION_INSTANCE_MACRO(UObjectFindFunction);
  FLIAPI_FUNCTION_CALL_MACRO(FLIAPI_DEF_UObjectFindFunction);
};