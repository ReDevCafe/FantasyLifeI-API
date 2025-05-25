#pragma once
#include <string>
#include <Game/UStaticDataManager.hpp>

typedef struct ModAPI
{
    void  (*Log)					(std::string message);
    void  (*RegisterCommand)		(const char* name, void (*callback)());
    void* (*GetRegistryObject)      (char REGISTRY_TYPE /* Waiting for more infos*/, const char* name);

    // # IF U DONT KNOW WHAT YOUR DOING DONT USE THIS
    UStaticDataManager*             (*GetStaticDataManager)(void);

    // Shortcuts functions
    UGDSCharaParameter*             GetCharaParam(void)     { return GetStaticDataManager()->m_CharaParameter; }
    UGDSItemTitleData*              GetItemTitleData(void)  { return GetStaticDataManager()->m_ItemTitleData; }
    UGDSRecipeData*                 GetRecipeData(void)     { return GetStaticDataManager()->m_RecipeData; }
    UGDSItemRecipeData*             GetItemRecipeData(void) { return GetStaticDataManager()->m_ItemRecipeData; }

} ModAPI;