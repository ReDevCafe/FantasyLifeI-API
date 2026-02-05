#ifndef COMMON_DATA_HPP
  #define COMMON_DATA_HPP

  #include "Export.h"
#include <cstdint>
#ifdef _WIN32
  #include <windows.h>
  #else 
  #endif

class CommonData 
{
  #ifdef _WIN32
  static int64_t sizeImage;
  static uintptr_t baseAddress;

  public:
  static void init(int64_t sizeImage, uintptr_t baseAddress)
  {
    CommonData::sizeImage = sizeImage;
    CommonData::baseAddress = baseAddress;
  }

  ML_API static int64_t GetSizeImage() { return sizeImage; }
  ML_API static uintptr_t GetBaseAddress() { return baseAddress; }

  #else 
  #endif

};
#endif