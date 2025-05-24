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
#include <cstddef>


#define ML "[FLiML] "

DWORD WINAPI ModLoaderThread(LPVOID)
{
    std::cout << ML << "Mod loader has been started" << std::endl;
    /*
    uintptr_t baseAddress = (uintptr_t) GetModuleHandle(nullptr);
    Patcher::add(new HookDataManager());
    if (!Patcher::applyPatches(baseAddress)) {
        Patcher::clear();
        return 1;
    }
    while (HookDataManager::getDataManager() == nullptr)
        Sleep(1);
    UStaticDataManager *manager = reinterpret_cast<UStaticDataManager *>(HookDataManager::getDataManager());
    std::cout << ML << "DataManager found : 0x" << std::hex << HookDataManager::getDataManager() << std::endl;
    while (manager->m_CharaParameter == nullptr)
        Sleep(1);
    std::cout << ML << "CharaParameter : 0x" << std::hex << manager->m_CharaParameter << std::endl;
    UGDSCharaParameter *parameter = manager->m_CharaParameter;
    TMap<FGDId, FGDCharaParameter> map = parameter->m_dataMap;
    auto data = map.Data;
    using Array = TArray<TSetElement<TPair<FGDId, FGDCharaParameter>>>;
    while (true) {
        for (int i = 0; i < data.Count; ++i)
            std::cout << ML << "[" << i << "]" << data[i].Value.Second.moveSpeed << std::endl;
        Sleep(2000);
    }*/

    ModEnvironnement::SetupEnvironnement();
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    HANDLE LoaderThread;
    switch(ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
        {
            AllocConsole();
            freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
            freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);

            std::cout.clear();
            std::cerr.clear();

            std::cout << ML << "Mod loader attached to process" << std::endl;

            LoaderThread = CreateThread(nullptr, 0, ModLoaderThread, nullptr, 0, nullptr);
            if (LoaderThread)
                CloseHandle(LoaderThread);
              
            break;
        }
        case DLL_PROCESS_DETACH:
        {
            std::cout << ML << "Mod loader detached from process" << std::endl;
            if (LoaderThread)
                CloseHandle(LoaderThread);

            FreeConsole();
            break;
        }
    }

    return TRUE;
}