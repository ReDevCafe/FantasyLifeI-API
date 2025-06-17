#include "ModLoader.hpp"
#include "Hook/EventHandler.hpp"

#include "API/Identifier/ItemIdentifier.hpp"
#include "API/Item/ItemEquipData.hpp"
#include "API/Identifier/ItemIdentifier.hpp"
#include "API/Identifier/RecipeIdentifier.hpp"
#include "API/Item/ItemArmorData.hpp"
#include "API/Item/ItemLifeToolsData.hpp"

GameData *ModLoader::gameData = nullptr;
GameCache *ModLoader::gameCache = nullptr;

DWORD WINAPI ModLoader::init(LPVOID lpParam) {
    mlLogger.info("Mod loader has been started");
    Patcher patcher;
    uintptr_t baseAddress = (uintptr_t) GetModuleHandle(nullptr);
    static const unsigned char eacBypassPatch[] = {0x48, 0x31, 0xC0, 0x90, 0x90, 0x90};
    patcher.add(new Patch(Priority::HIGH, "EACBypass", 0x60c1e76, eacBypassPatch, sizeof(eacBypassPatch)));
    patcher.add(new EventHook(EventType::ClickEvent, 0x657DC32));
    patcher.applyPatches(baseAddress);
    gameData = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));
    gameData->initOthersData();
    gameCache = new GameCache();

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
            Sleep(5000);
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