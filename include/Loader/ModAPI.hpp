#pragma once
#include <string>
#include "SDK.h"

typedef struct ModAPI
{
    void  (*Log)					(std::string message);
    void  (*RegisterCommand)		(const char* name, void (*callback)());
    void* (*GetRegistryObject)      (char REGISTRY_TYPE /* Waiting for more infos*/, const char* name);

    // # IF U DONT KNOW WHAT YOUR DOING DONT USE THIS
    UStaticDataManager*             (*GetStaticDataManager)(void);

    // Shortcuts functions

} ModAPI;