#ifndef MODMETA_HEADER
#define MODMETA_HEADER
#include <string>
#include <Windows.h>
#include <sstream>
#include <iostream>
#include <fstream>


typedef struct
{
    std::string name;
    std::string author;
    int majorVer;
    int minorVer;

    std::string dllName;
} ModMeta;


#endif // !MODMETA_HEADER
