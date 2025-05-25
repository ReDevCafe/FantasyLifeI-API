#include <Windows.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>
#include <filesystem>
#include "Patcher/Patcher.hpp"
#include "Patcher/Patches/HookDataManager.hpp"
#include "Game/UStaticDataManager.hpp"
#include "Loader/ModEnvironnement.hpp"
#include "Logger/Logger.hpp"
#include "Logger/ModLoaderLogger.hpp"
#include "Utils.hpp"
#include <cstddef>

DWORD WINAPI ModLoaderThread(LPVOID)
{
    mlLogger.info("Mod loader has been started");
    uintptr_t baseAddress = (uintptr_t) GetModuleHandle(nullptr);
    Patcher::add(new HookDataManager());
    if (!Patcher::applyPatches(baseAddress)) {
        Patcher::clear();
        return 1;
    }
    /*while (HookDataManager::getDataManager() == nullptr)
        Sleep(1);
    UStaticDataManager *manager = reinterpret_cast<UStaticDataManager *>(HookDataManager::getDataManager());
    std::cout << ML << "DataManager found : 0x" << std::hex << HookDataManager::getDataManager() << std::dec << std::endl;
    while (manager->m_ItemTitleData == nullptr)
        Sleep(1);
    /*std::cout << std::hex << offsetof(UGDSItemTitleData, m_dataMap) << std::endl;
    TArray<TSetElement<TPair<char, FGDItemTitleData>>> titles = manager->m_ItemTitleData->m_dataMap.Data;
    for (int i = 0; i < titles.Count; ++i) {
        FGDItemTitleData title = titles[i].Value.Second;
        try {
            std::cout << ML << Utils::FNameToString(baseAddress, title.titleText) << std::endl;
        } catch (std::exception &exception) {
            std::cerr << exception.what() << std::endl;
        }
    }*/
    ModEnvironnement::SetupEnvironnement();
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

            LoaderThread = CreateThread(nullptr, 0, ModLoaderThread, nullptr, 0, nullptr);
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
            break;
        }
    }

    return TRUE;
}