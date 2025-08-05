#include "Engine/FNamePool.hpp"
#include "ModLoader.hpp"
#include "Offset.h"

// Dont know if this is the best way to do it
// But fuck it we need to improve the shit from UEDumper 
std::unordered_map<FNameEntryId, std::string> FNameUtils::stringCache;
std::unordered_map<std::string, FNameEntryId> FNameUtils::fnameCache;    

std::string FNameUtils::getString(uintptr_t baseAddress, const FName& name)
{
    const uint32_t entryId = name.ComparisonIndex;
    if(stringCache.contains(entryId))
        return stringCache[entryId];
    
    uintptr_t entryAddress = *(uintptr_t*)(baseAddress + GNAMES_OFFSET + 8 * ((entryId >> 16) + 2)) + 2 * (entryId & 0xFFFF);

    const FNameEntryHeader* header = reinterpret_cast<const FNameEntryHeader*>(entryAddress);
    const uint16_t nameLength = header->Length;
    std::string result;
    if(header->bIsWide)
    {
        const wchar_t* wideStr = reinterpret_cast<const wchar_t*>(entryAddress + sizeof(FNameEntryHeader));
        result.assign(wideStr, wideStr + nameLength);
    }
    else 
    {
        const char* ansiStr = reinterpret_cast<const char*>(entryAddress + sizeof(FNameEntryHeader));
        result.assign(ansiStr, ansiStr + nameLength);
    }

    stringCache[entryId] = result;
    fnameCache[result] = entryId;
    return result;
}

std::string FNameUtils::getString(const FName& name)
{
    return getString(ModLoader::gameData->getBaseAddress(), name);
}

//TODO: Full implementation, but for now we just return a FName if it exists in the cache
FName FNameUtils::getFName(uintptr_t baseAddress, const std::string& data)
{
    if(!fnameCache.contains(data))
        return FName(0,0);

    const FNameEntryId entryId = fnameCache[data];
    return FName(entryId, 0);
}

FName FNameUtils::getFName(const std::string& data)
{
    return getFName(ModLoader::gameData->getBaseAddress(), data);
}