#pragma once

#ifdef _WIN32
  #ifdef MLCOMPILED
    #define ML_API __declspec(dllexport)
  #else
    #define ML_API __declspec(dllimport)
  #endif
#else
  #define ML_API
#endif