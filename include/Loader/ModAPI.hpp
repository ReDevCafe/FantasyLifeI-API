#pragma once
#include <string>

typedef struct ModAPI
{
    void  (*Log)					(std::string message);
    void  (*RegisterCommand)		(const char* name, void (*callback)());
    void* (*GetRegistryObject)      (char REGISTRY_TYPE /* Waiting for more infos*/, const char* name);

    // void (*RegisterObject)      (char REGISTRY_TYPE /* Waiting for more infos*/, void* object);

} ModAPI;