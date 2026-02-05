#pragma once
#include "API/GameFunctionProxy.hpp"

class UObject;
class UFunction;
typedef void (__fastcall *FLIAPI_DEF_UObjectProcessEvent)(UObject* thisptr, UFunction* function, void* parms);
class UObjectProcessEvent : public GameFunctionProxy<FLIAPI_DEF_UObjectProcessEvent>
{
  private:

  /***
   *     40 55 56 57 41 54 41 55 41 56 41 57 48 81 EC 10
   *     01 00 00 48 8D 6C 24 30 48 89 9D 38 01 00 00 48
   */
  static constexpr uint8_t pattern[] = 
  {
    0x40, 0x55, 0x56, 0x57, 0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57, 0x48, 0x81, 0xEC, 0x10,
    0x01, 0x00, 0x00, 0x48, 0x8D, 0x6C, 0x24, 0x30, 0x48, 0x89, 0x9D, 0x38, 0x01, 0x00, 0x00, 0x48
  };
  
  UObjectProcessEvent():
  GameFunctionProxy<FLIAPI_DEF_UObjectProcessEvent>
    (
      "UObject::ProcessEvent()",
      const_cast<uint8_t*>(pattern),
      "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
      0
    )
    {}

  public:
  FLIAPI_FUNCTION_INSTANCE_MACRO(UObjectProcessEvent);
  FLIAPI_FUNCTION_CALL_MACRO(FLIAPI_DEF_UObjectProcessEvent);
};