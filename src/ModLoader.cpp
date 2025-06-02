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
    Sleep(10000);
    gameCache = new GameCache();
    //
    auto a = gameCache->GetItem(WEAPON_BRONZE_SWORD);
    auto b = gameCache->GetItem(ARMOR_STEEL_BEASTS_HELM);
    auto bronze_sword = reinterpret_cast<ItemEquipData*>(&a);
    auto pine_staff = reinterpret_cast<ItemEquipData*>(&b);
    bronze_sword->SetName(LANG::ENGLISH, FString(L"Estrogen :3"));
    bronze_sword->SetModel(*pine_staff);
    bronze_sword->SetQuality(EItemQualityType::Quality4);
    bronze_sword->SetRarityType(ERarityType::Rarity6);
    bronze_sword->SetEffectType(EItemEffectType::Invincible);

    auto c = gameCache->GetRecipe(RECIPE_SCIENCE_FLASK_1);
    c.SetRank(EItemTitleType::Legend);
    c.RemoveItem(1);
    
    auto d = gameCache->GetItem(ARMOR_PALADINS_CUIRASS);
    auto paladins_cuirass = reinterpret_cast<ItemArmorData*>(&d);

    auto f = gameCache->GetItem(LIFETOOLS_SCIENCE_FLASK);
    auto science_flask = reinterpret_cast<ItemLifeToolsData*>(&f);

    science_flask->SetLifeParam(EItemTitleType::Legend, 9999);

    auto gay = gameCache->GetSkill("es_alchemy_up06");
    science_flask->AddSkill(gay);

    
    


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