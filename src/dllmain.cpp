#include <Windows.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>
#include <filesystem>
#include "ModCommunicator.h"
#include "ModMeta.h"
#include "Patcher/Patcher.hpp"
#include "Patcher/Patches/HookDataManager.hpp"

#define ML "[FLiML] "

DWORD setupEnvironnement()
{
    const std::string modsDirs = "../../../Mods";
    if (!std::filesystem::exists(modsDirs))
    {
        std::filesystem::create_directories(modsDirs);
        std::cout << ML << "Created Mods directory" << std::endl;
        return 0;
    }

    for (const auto& entry : std::filesystem::directory_iterator(modsDirs))
    {
        if (!std::filesystem::is_directory(entry))
        {
            std::cerr << ML << "Invalid object inside the mods folder" << std::endl;
            return 0;
        }

        std::filesystem::path modJsonPath = entry.path() / "Mod.json";
        if (!std::filesystem::exists(modJsonPath))
        {
            std::cerr << ML << "Invalid mod packet" << std::endl;
            return 0;
        }

        ModMeta meta;
        if (parseModMeta(modJsonPath.string(), meta))
        {
            std::cerr << "Failed to load Mod.json of " << entry.path() << ", mod has been disabled.." << std::endl;
            return 0;
        }

        std::filesystem::path modDllPath = entry.path() / meta.dllName;
        if (!std::filesystem::exists(modDllPath))
        {
            std::cerr << ML << "Cannot find mod dll" << std::endl;
            return 0;
        }

        LoadMod(modDllPath.string().c_str(), meta);
    }

    return 0;
}

DWORD WINAPI ModLoaderThread(LPVOID)
{
    std::cout << ML << "Mod loader has been started" << std::endl;
    uintptr_t baseAddress = (uintptr_t) GetModuleHandle(NULL);
    Patcher::add(new HookDataManager());
    if (!Patcher::applyPatches(baseAddress)) {
        Patcher::clear();
        return 1;
    }
    while (HookDataManager::getDataManager() == NULL)
        Sleep(1);
    std::cout << ML << "DataManager found : 0x" << std::hex << (uintptr_t) HookDataManager::getDataManager() << std::endl;
    setupEnvironnement();
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call != DLL_PROCESS_ATTACH) return TRUE;

    AllocConsole();
    freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
    freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);

    std::cout.clear();
    std::cerr.clear();

    std::cout << ML << "Mod loader attached to process" << std::endl;

    HANDLE LoaderThread = CreateThread(nullptr, 0, ModLoaderThread, nullptr, 0, nullptr);
    if (LoaderThread)
    {
        CloseHandle(LoaderThread);
    }

    return TRUE;
}