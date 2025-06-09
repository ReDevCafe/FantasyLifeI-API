#include "ModLoader.hpp"

#include <fstream>
#include "Engine/FUObjectArray.hpp"
#include "API/Life/ULifeData.hpp"
#include "Engine/DataTable.hpp"
#include "API/Life/LifeData.hpp"
#include "API/Item/ItemLifeToolsData.hpp"
#include "API/Item/ItemArmorData.hpp"
#include "GameData.hpp"
#include "GameCache.hpp"
#include "API/Item/ItemMaterialData.hpp"
#include "API/Item/ItemConsumeData.hpp"
#include "API/Item/ItemImportantData.hpp"
#include "API/Item/ItemWeaponData.hpp"
#include "API/Item/ItemCraftData.hpp"
#include "API/Item/ItemKitData.hpp"
#include "API/Item/ItemVehicleData.hpp"
#include "API/Item/ItemPowerUpData.hpp"
#include "API/Identifier/RecipeIdentifier.hpp"
#include "API/Identifier/ItemIdentifier.hpp"
#include "API/Common/CommonItemTableSetting.hpp"
#include <memory>
#include <corecrt_io.h>
#include <io.h>
#include <fcntl.h>

GameData *ModLoader::gameData = nullptr;
GameCache *ModLoader::gameCache = nullptr;

DWORD WINAPI ModLoader::init(LPVOID lpParam)
{
    mlLogger.info("Mod loader has been started");
    gameData  = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));
    gameCache = new GameCache();

    ItemData GotNewID = gameCache->GetItem(VEHICLE_FLYING_SHIP);
    gameData->waitObject(&gameData->getStaticDataManager()->m_CommonItemTableSetting);

    auto map = gameData->getStaticDataManager()->m_CommonItemTableSetting->m_dataMap.Data; 
    for(int i = 0; map.Count > i; ++i)
    {
        auto cObject = CommonItemTableSetting{map.Data[i].Value.Second};

        std::string itemsName;
        for(int j = 0; cObject.getObject().tableData.Count > j; ++j)
        {
            auto data = cObject.GetData(j);
            
            data.SetItem(GotNewID);
            itemsName += data.GetItem().GetName(LANG::ENGLISH) + " ";
        }

        mlLogger.info("#define #", std::hex, cObject.GetIdentifier(), std::dec, " \"", cObject.GetIdentifier(), "\" // ",  itemsName);
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    HANDLE LoaderThread = nullptr;
    switch(ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
        {
            AllocConsole();

            freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
            freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);

            std::cout.clear();
            std::cerr.clear();

            Utils::EnableAnsiColors();
            mlLogger.warn("Mod loader attached to process");

            LoaderThread = CreateThread(nullptr, 0, ModLoader::init, nullptr, 0, nullptr);
            if (LoaderThread)
                CloseHandle(LoaderThread);
            break;
        }
        case DLL_PROCESS_DETACH:
        {
            mlLogger.warn("Mod loader detached from process");
            if (LoaderThread)
                CloseHandle(LoaderThread);
            FreeConsole();

            if (ModLoader::gameData != nullptr)
                delete ModLoader::gameData;

            if(ModLoader::gameCache != nullptr)
                delete ModLoader::gameCache;

            break;
        }
    }

    return TRUE;
}