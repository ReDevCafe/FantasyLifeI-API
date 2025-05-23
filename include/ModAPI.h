#ifndef MODAPI_HEADER
#define MODAPI_HEADER
#include <string>

typedef struct ModMeta
{
    std::string name;
    std::string author;
    int majorVer = 0;
    int minorVer = 0;

    std::string dllName;
} ModMeta;

typedef struct ModAPI
{
    void (*Log)					(std::string message);
    void (*RegisterCommand)		(const char* name, void (*callback)());
} ModAPI;

#endif