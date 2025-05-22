#include "pch.h"
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>
#include <filesystem>
#include "ModCommunicator.h"
#include "ModMeta.h"

#define ML "[FLi.ML] "

DWORD setupEnvironnement()
{
    const std::string modsDirs = "../../../Mods";
    if (!std::filesystem::exists(modsDirs))
    {
        std::filesystem::create_directories(modsDirs);
        std::cout << ML << "Created Mods directory" << std::endl;
        return 0;
    }

    std::cout << ML << "Searching for mods..." << std::endl;

    for (const auto& entry : std::filesystem::directory_iterator(modsDirs))
    {
        if (!std::filesystem::is_directory(entry)) continue;

        std::filesystem::path modJsonPath = entry.path() / "Mod.json";
        if (!std::filesystem::exists(modJsonPath)) continue;

        ModMeta meta;
        /*std::ifstream file(modJsonPath);
        if (file.is_open())
        {
            std::stringstream buffer;
            buffer << file.rdbuf();
            std::string content = buffer.str()
        }
        else
        {
            std::cerr << ML << "Failed to open Mods.json in " << entry.path().string() << std::endl;
            return 0;
        }*/
        meta.name = "testN";
        meta.author = "testA";
        meta.majorVer = 1;
        meta.minorVer = 0;
        meta.dllName = "Mod.dll";

        std::filesystem::path modDllPath = entry.path() / meta.dllName;
        if (!std::filesystem::exists(modDllPath)) continue;

        LoadMod(modDllPath.string().c_str());
    }

    return 0;
}

DWORD WINAPI ModLoaderThread(LPVOID)
{
    std::cout << ML << "Mod loader has been started" << std::endl;
    setupEnvironnement();


    Sleep(30000);
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

    HANDLE LoaderThread = CreateThread(nullptr, 0, ModLoaderThread, nullptr, 0, nullptr);
    if (LoaderThread)
    {
        CloseHandle(LoaderThread);
    }

    return TRUE;
}