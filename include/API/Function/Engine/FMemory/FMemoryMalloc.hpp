#pragma once

#include "API/GameFunctionProxy.hpp"

typedef void* (__fastcall *FLIAPI_DEF_FMemoryMalloc)(size_t size, size_t alignment);
class FMemoryMalloc : public GameFunctionProxy<FLIAPI_DEF_FMemoryMalloc>
{
  private:
  /***
   *     48 89 5C 24 08 57 48 83 EC 20 48 8B F9 8B DA 48 
   *     8B 0D ?? ?? ?? ?? 48 85 C9 75 0C
   */
  static constexpr uint8_t pattern[] = {
    0x48, 0x89, 0x5C, 0x24, 0x08, 0x57, 0x48, 0x83, 0xEC, 0x20, 0x48, 0x8B, 0xF9, 0x8B, 0xDA, 0x48,
    0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xC9, 0x75, 0x0C
  };
  
  FMemoryMalloc():
  GameFunctionProxy<FLIAPI_DEF_FMemoryMalloc>
    (
      "FMemory::Malloc()",
      const_cast<uint8_t*>(pattern),
      "xxxxxxxxxxxxxxxxxx????xxxxx",
      0
    )
    {}

  public:
  FLIAPI_FUNCTION_INSTANCE_MACRO(FMemoryMalloc);
  FLIAPI_FUNCTION_CALL_MACRO(FLIAPI_DEF_FMemoryMalloc);
};