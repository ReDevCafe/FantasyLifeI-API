#pragma once

#include "API/GameFunctionProxy.hpp"

typedef void* (__fastcall *FLIAPI_DEF_FMemoryFree)(void* ptr);
class FMemoryFree : public GameFunctionProxy<FLIAPI_DEF_FMemoryFree>
{
  private:
  /***
   *   48 85 C9 74 2E 53 48 83 EC 20 48 8B D9 48 8B 0D 
  *    ?? ?? ?? ?? 48 85 C9 75 0C E8 ?? ?? ?? ?? 48 8B
   */
  static constexpr uint8_t pattern[] = {
    0x48, 0x85, 0xC9, 0x74, 0x2E, 0x53, 0x48, 0x83, 0xEC, 0x20, 0x48, 0x8B, 0xD9, 0x48, 0x8B, 0x0D,
    0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xC9, 0x75, 0x0C, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B
  };

  FMemoryFree():
  GameFunctionProxy<FLIAPI_DEF_FMemoryFree>
    (
      "FMemory::Free()",
      const_cast<uint8_t*>(pattern),
      "xxxxxxxxxxxxxxxx????xxxxxx????xx",
      0
    )
    {}

  public:
  FLIAPI_FUNCTION_INSTANCE_MACRO(FMemoryFree);
  FLIAPI_FUNCTION_CALL_MACRO(FLIAPI_DEF_FMemoryFree);
};