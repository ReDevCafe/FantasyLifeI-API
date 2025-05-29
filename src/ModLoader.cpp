#include "ModLoader.hpp"

#include <fstream>
#include "Engine/FUObjectArray.hpp"
#include <API/Life/ULifeData.hpp>
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
#include <memory>
#include <corecrt_io.h>
#include <io.h>
#include <fcntl.h>

GameData *ModLoader::gameData = nullptr;
GameCache *ModLoader::gameCache = nullptr;

DWORD WINAPI ModLoader::init(LPVOID lpParam) {
    mlLogger.info("Mod loader has been started");
    gameData  = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));
    gameCache = new GameCache();
    
    auto lifecure = gameCache->GetItem(MATERIAL_CHICKEN_EGGS);
    lifecure.SetName(LANG::ENGLISH, FString(L"Estrogen :3"));
    auto AAAAA = gameCache->GetItem(MATERIAL_WATER_SHARD);
    auto recipe = gameCache->GetRecipe(RECIPE_COASTAL_BRIGANDINE);

    auto result = recipe.GetItem();
    recipe.RemoveItem(0);
    recipe.RemoveItem(0);
    recipe.RemoveItem(0);
    recipe.AddItem(lifecure, 56);

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