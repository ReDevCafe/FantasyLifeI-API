#pragma once

#ifdef _WIN32
  #define MOD_EXPORT extern "C" __declspec(dllexport)
  #ifdef MLCOMPILED
    #define ML_API __declspec(dllexport)
  #else
    #define ML_API __declspec(dllimport)
  #endif
#else
  #define ML_API
  #define MOD_EXPORT extern "C"
#endif