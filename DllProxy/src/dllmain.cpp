#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <Shlwapi.h>
#pragma comment(lib, "Shlwapi.lib")
#pragma comment(linker, "/DLL")

static HMODULE hOriginal = NULL;

// If needed we can load multiple DLLs
static const char* dlls[] {
    "ModLoader.dll",
    nullptr
};

static void LoadOriginalDLL()
{
    if(hOriginal) return;

    CHAR systemPath[MAX_PATH] = {0};
    GetSystemDirectoryA(systemPath, MAX_PATH);
    PathCombineA(systemPath, systemPath, "version.dll");

    hOriginal = LoadLibraryA(systemPath);
    if(!hOriginal) 
    {
        MessageBoxA(NULL, "Failed to load original DLL", "Error", MB_OK);
        exit(1);
    }
}

extern "C"
{
    typedef BOOL (WINAPI *PFN_GetFileVersionInfoA)(LPCSTR, DWORD, DWORD, LPVOID);
    PFN_GetFileVersionInfoA pGetFileVersionInfoA = NULL;
    BOOL WINAPI GetFileVersionInfoA(LPCSTR file, DWORD handle, DWORD len, LPVOID data)
    {
        LoadOriginalDLL();
        if(!pGetFileVersionInfoA)
            pGetFileVersionInfoA = (PFN_GetFileVersionInfoA)GetProcAddress(hOriginal, "GetFileVersionInfoA");
        return pGetFileVersionInfoA(file, handle, len, data);
    }

    typedef int(WINAPI *PFN_GetFileVersionInfoByHandle)(int, LPCWSTR, int, int);
    PFN_GetFileVersionInfoByHandle pGetFileVersionInfoByHandle = NULL;
    int WINAPI GetFileVersionInfoByHandle(int handle, LPCWSTR file, int len, int data)
    {
        LoadOriginalDLL();
        if(!pGetFileVersionInfoByHandle)
            pGetFileVersionInfoByHandle = (PFN_GetFileVersionInfoByHandle)GetProcAddress(hOriginal, "GetFileVersionInfoByHandle");
        return pGetFileVersionInfoByHandle(handle, file, len, data);
    }

    typedef BOOL(WINAPI *PFN_GetFileVersionInfoExA)(DWORD, LPCSTR, DWORD, DWORD, LPVOID);
    PFN_GetFileVersionInfoExA pGetFileVersionInfoExA = NULL;
    BOOL WINAPI GetFileVersionInfoExA(DWORD flags, LPCSTR file, DWORD handle, DWORD len, LPVOID data)
    {
        LoadOriginalDLL();
        if(!pGetFileVersionInfoExA)
            pGetFileVersionInfoExA = (PFN_GetFileVersionInfoExA)GetProcAddress(hOriginal, "GetFileVersionInfoExA");
        return pGetFileVersionInfoExA(flags, file, handle, len, data);
    }

    typedef BOOL(WINAPI *PFN_GetFileVersionInfoExW)(DWORD, LPCWSTR, DWORD, DWORD, LPVOID);
    PFN_GetFileVersionInfoExW pGetFileVersionInfoExW = NULL;
    BOOL WINAPI GetFileVersionInfoExW(DWORD flags, LPCWSTR file, DWORD handle, DWORD len, LPVOID data)
    {
        LoadOriginalDLL();
        if(!pGetFileVersionInfoExW)
            pGetFileVersionInfoExW = (PFN_GetFileVersionInfoExW)GetProcAddress(hOriginal, "GetFileVersionInfoExW");
        return pGetFileVersionInfoExW(flags, file, handle, len, data);
    }

    typedef DWORD(WINAPI *PFN_GetFileVersionInfoSizeA)(LPCSTR, LPDWORD);
    PFN_GetFileVersionInfoSizeA pGetFileVersionInfoSizeA = NULL;
    DWORD WINAPI GetFileVersionInfoSizeA(LPCSTR file, LPDWORD handle)
    {
        LoadOriginalDLL();
        if(!pGetFileVersionInfoSizeA)
            pGetFileVersionInfoSizeA = (PFN_GetFileVersionInfoSizeA)GetProcAddress(hOriginal, "GetFileVersionInfoSizeA");
        return pGetFileVersionInfoSizeA(file, handle);
    }

    typedef DWORD(WINAPI *PFN_GetFileVersionInfSizeExA)(DWORD, LPCSTR, LPDWORD);
    PFN_GetFileVersionInfSizeExA pGetFileVersionInfSizeExA = NULL;
    DWORD WINAPI GetFileVersionInfSizeExA(DWORD flags, LPCSTR file, LPDWORD handle)
    {
        LoadOriginalDLL();
        if(!pGetFileVersionInfSizeExA)
            pGetFileVersionInfSizeExA = (PFN_GetFileVersionInfSizeExA)GetProcAddress(hOriginal, "GetFileVersionInfSizeExA");
        return pGetFileVersionInfSizeExA(flags, file, handle);
    }

    typedef DWORD(WINAPI *PFN_GetFileVersionInfoSizeExW)(DWORD, LPCWSTR, LPDWORD);
    PFN_GetFileVersionInfoSizeExW pGetFileVersionInfoSizeExW = NULL;
    DWORD WINAPI GetFileVersionInfoSizeExW(DWORD flags, LPCWSTR file, LPDWORD handle)
    {
        LoadOriginalDLL();
        if(!pGetFileVersionInfoSizeExW)
            pGetFileVersionInfoSizeExW = (PFN_GetFileVersionInfoSizeExW)GetProcAddress(hOriginal, "GetFileVersionInfoSizeExW");
        return pGetFileVersionInfoSizeExW(flags, file, handle);
    }

    typedef DWORD(WINAPI *PFN_GetFileVersionInfoSizeW)(LPCWSTR, LPDWORD);
    PFN_GetFileVersionInfoSizeW pGetFileVersionInfoSizeW = NULL;
    DWORD WINAPI GetFileVersionInfoSizeW(LPCWSTR file, LPDWORD handle)
    {
        LoadOriginalDLL();
        if(!pGetFileVersionInfoSizeW)
            pGetFileVersionInfoSizeW = (PFN_GetFileVersionInfoSizeW)GetProcAddress(hOriginal, "GetFileVersionInfoSizeW");
        return pGetFileVersionInfoSizeW(file, handle);
    }

    typedef BOOL(WINAPI *PFN_GetFileVersionInfoW)(LPCWSTR, DWORD, DWORD, LPVOID);
    PFN_GetFileVersionInfoW pGetFileVersionInfoW = NULL;
    BOOL WINAPI GetFileVersionInfoW(LPCWSTR file, DWORD handle, DWORD len, LPVOID data)
    {
        LoadOriginalDLL();
        if(!pGetFileVersionInfoW)
            pGetFileVersionInfoW = (PFN_GetFileVersionInfoW)GetProcAddress(hOriginal, "GetFileVersionInfoW");
        return pGetFileVersionInfoW(file, handle, len, data);
    }

    typedef DWORD(WINAPI *PFN_VerFindFileA)(DWORD, LPCSTR, LPCSTR, LPCSTR, LPSTR, PUINT, LPSTR, PUINT);
    PFN_VerFindFileA pVerFindFileA = NULL;
    DWORD WINAPI VerFindFileA(DWORD flags, LPCSTR file, LPCSTR value, LPCSTR path, LPSTR buf, PUINT len, LPSTR buf2, PUINT len2)
    {
        LoadOriginalDLL();
        if(!pVerFindFileA)
            pVerFindFileA = (PFN_VerFindFileA)GetProcAddress(hOriginal, "VerFindFileA");
        return pVerFindFileA(flags, file, value, path, buf, len, buf2, len2);
    }

    typedef DWORD(WINAPI *PFN_VerFindFileW)(DWORD, LPCWSTR, LPCWSTR, LPCWSTR, LPWSTR, PUINT, LPWSTR, PUINT);
    PFN_VerFindFileW pVerFindFileW = NULL;
    DWORD WINAPI VerFindFileW(DWORD flags, LPCWSTR file, LPCWSTR value, LPCWSTR path, LPWSTR buf, PUINT len, LPWSTR buf2, PUINT len2)
    {
        LoadOriginalDLL();
        if(!pVerFindFileW)
            pVerFindFileW = (PFN_VerFindFileW)GetProcAddress(hOriginal, "VerFindFileW");
        return pVerFindFileW(flags, file, value, path, buf, len, buf2, len2);
    }

    typedef DWORD(WINAPI *PFN_VerInstallFileA)(DWORD, LPCSTR, LPCSTR, LPCSTR, LPCSTR, LPCSTR, LPSTR, PUINT);
    PFN_VerInstallFileA pVerInstallFileA = NULL;
    DWORD WINAPI VerInstallFileA(DWORD flags, LPCSTR src, LPCSTR dst, LPCSTR srcdir, LPCSTR destdir, LPCSTR curdir, LPSTR buf, PUINT len)
    {
        LoadOriginalDLL();
        if(!pVerInstallFileA)
            pVerInstallFileA = (PFN_VerInstallFileA)GetProcAddress(hOriginal, "VerInstallFileA");
        return pVerInstallFileA(flags, src, dst, srcdir, destdir, curdir, buf, len);
    }

    typedef DWORD(WINAPI *PFN_VerInstallFileW)(DWORD, LPCWSTR, LPCWSTR, LPCWSTR, LPCWSTR, LPCWSTR, LPWSTR, PUINT);
    PFN_VerInstallFileW pVerInstallFileW = NULL;
    DWORD WINAPI VerInstallFileW(DWORD flags, LPCWSTR src, LPCWSTR dst, LPCWSTR srcdir, LPCWSTR destdir, LPCWSTR curdir, LPWSTR buf, PUINT len)
    {
        LoadOriginalDLL();
        if(!pVerInstallFileW)
            pVerInstallFileW = (PFN_VerInstallFileW)GetProcAddress(hOriginal, "VerInstallFileW");
        return pVerInstallFileW(flags, src, dst, srcdir, destdir, curdir, buf, len);
    }

    typedef DWORD(WINAPI *PFN_VerLanguageNameA)(DWORD, LPSTR, DWORD);
    PFN_VerLanguageNameA pVerLanguageNameA = NULL;
    DWORD WINAPI VerLanguageNameA(DWORD lang, LPSTR buf, DWORD len)
    {
        LoadOriginalDLL();
        if(!pVerLanguageNameA)
            pVerLanguageNameA = (PFN_VerLanguageNameA)GetProcAddress(hOriginal, "VerLanguageNameA");
        return pVerLanguageNameA(lang, buf, len);
    }

    typedef DWORD(WINAPI *PFN_VerLanguageNameW)(DWORD, LPWSTR, DWORD);
    PFN_VerLanguageNameW pVerLanguageNameW = NULL;
    DWORD WINAPI VerLanguageNameW(DWORD lang, LPWSTR buf, DWORD len)
    {
        LoadOriginalDLL();
        if(!pVerLanguageNameW)
            pVerLanguageNameW = (PFN_VerLanguageNameW)GetProcAddress(hOriginal, "VerLanguageNameW");
        return pVerLanguageNameW(lang, buf, len);
    }

    typedef BOOL(WINAPI *PFN_VerQueryValueA)(LPCVOID, LPCSTR, LPVOID*, PUINT);
    PFN_VerQueryValueA pVerQueryValueA = NULL;
    BOOL WINAPI VerQueryValueA(LPCVOID block, LPCSTR name, LPVOID* buf, PUINT len)
    {
        LoadOriginalDLL();
        if(!pVerQueryValueA)
            pVerQueryValueA = (PFN_VerQueryValueA)GetProcAddress(hOriginal, "VerQueryValueA");
        return pVerQueryValueA(block, name, buf, len);
    }

    typedef BOOL(WINAPI *PFN_VerQueryValueW)(LPCVOID, LPCWSTR, LPVOID*, PUINT);
    PFN_VerQueryValueW pVerQueryValueW = NULL;
    BOOL WINAPI VerQueryValueW(LPCVOID block, LPCWSTR name, LPVOID* buf, PUINT len)
    {
        LoadOriginalDLL();
        if(!pVerQueryValueW)
            pVerQueryValueW = (PFN_VerQueryValueW)GetProcAddress(hOriginal, "VerQueryValueW");
        return pVerQueryValueW(block, name, buf, len);
    }
}

BOOL APIENTRY DllMain(HMODULE mod, DWORD reason, LPVOID reserved)
{
    switch(reason)
    {
    case DLL_PROCESS_ATTACH:
        for(const char** dll = dlls; *dll; ++dll)
            HMODULE h = LoadLibraryA(*dll);
        
        LoadOriginalDLL();
        break;
    case DLL_PROCESS_DETACH:
        if(hOriginal) FreeLibrary(hOriginal);
        break;
    }
    return TRUE;    
}