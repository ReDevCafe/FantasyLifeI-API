#include "ModLoader.hpp"

GameData *ModLoader::gameData = nullptr;

#include <fstream>
#include "Engine/FUObjectArray.hpp"

DWORD WINAPI ModLoader::init(LPVOID lpParam) {
    mlLogger.info("Mod loader has been started");
    gameData = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));
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
            break;
        }
    }

    return TRUE;
}