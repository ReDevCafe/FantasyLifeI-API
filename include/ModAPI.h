#pragma once
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
    void (*HookEvents)          (const char* event, void (*callback)(void*));
    // void (*RegisterObject)      (char REGISTRY_TYPE /* Waiting for more infos*/, void* object);
    // void* (*GetRegistryObject)  (char REGISTRY_TYPE /* Waiting for more infos*/, const char* name);

} ModAPI;