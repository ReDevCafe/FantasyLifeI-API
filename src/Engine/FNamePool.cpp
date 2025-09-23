#include "Engine/FNamePool.hpp"
#include "ModLoader.hpp"
#include "Offset.h"
#include <windows.h>
#include <cstring>

// Dont know if this is the best way to do it
std::unordered_map<FNameEntryId, std::string> FNameUtils::_stringCache;
std::unordered_map<std::string, FNameEntryId> FNameUtils::_fnameCache;  
std::shared_mutex                             FNameUtils::_cacheMutex;

void FNameUtils::entryPush(std::string entry, FNameEntryId id)
{
    std::unique_lock lock(_cacheMutex);

    _stringCache[id] = entry;
    _fnameCache[entry] = id;
}

uint8_t FNameUtils::fnv1a5bits(const std::string& data)
{
    uint32_t hash = 0x811C9DDC5u;
    for(unsigned char c : data)
    {
        hash ^= static_cast<uint32_t>(c);
        hash *= 0x1000193u;
    }

    return static_cast<uint8_t>(hash & 0x1Fu);
}

std::string FNameUtils::GetString(uintptr_t baseAddress, const FName& name)
{
    const uint32_t entryId = name.ComparisonIndex;
    {
        std::shared_lock lock(_cacheMutex);
        if(_stringCache.contains(entryId))
            return _stringCache[entryId];
    }
    
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

    entryPush(result, entryId);
    return result;
}

std::string FNameUtils::GetString(const FName& name)
{
    return GetString(ModLoader::gameData->getBaseAddress(), name);
}

FName FNameUtils::GetFName(uintptr_t baseAddress, const std::string& data)
{
    {
        std::shared_lock lock(_cacheMutex);
        if(_fnameCache.contains(data))
            return FName(_fnameCache[data], 0);
    }

    const uint32_t maxBlocks = 1u << FNameMaxBlocksBits;
    for(uint32_t blockIndex = 0; blockIndex < maxBlocks; ++blockIndex)
    {
        uintptr_t     blockPtr = *(uintptr_t*)(baseAddress + GNAMES_OFFSET + 8 * (blockIndex + 2));
        if(!blockPtr) continue;

        for(uint32_t offset = 0; offset < FNameBlockOffsets; ++offset)
        {
            uintptr_t                                   entryAddress = blockPtr + Stride * offset;
            const FNameEntryHeader*                     header = reinterpret_cast<const FNameEntryHeader*>(entryAddress);
            const uint16_t                              nameLength = header->Length;
            if(nameLength == 0 || nameLength > 0x3FF)   continue;

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

            if(result == data)
            {
                FNameEntryId entryId = (static_cast<FNameEntryId>(blockIndex) << 16) | static_cast<FNameEntryId>(offset);
                entryPush(result, entryId);

                return FName(entryId, 0);
            } 
        }
    }

    return FName(0,0);
}

FName FNameUtils::GetFName(const std::string& data)
{
    return GetFName(ModLoader::gameData->getBaseAddress(), data);
}

FName FNameUtils::CreateFName(uintptr_t baseAddress, const std::string& data)
{
    {
        std::shared_lock lock(_cacheMutex);
        if(_fnameCache.contains(data))
            return FName(_fnameCache[data], 0);
    }

    if(data.size() == 0 || data.size() > ((1u << 10) - 10))
        throw std::runtime_error("Invalide FName data size.");

    uintptr_t allocBase = baseAddress + GNAMES_OFFSET;
    FNameEntryAllocator* allocator = reinterpret_cast<FNameEntryAllocator*>(allocBase);

    uintptr_t* blocks = allocator->GetBlocks(allocBase);
    const uint32_t maxBlocks   = 1u << FNameMaxBlocksBits;

    uint32_t* currentBlockPtr  = reinterpret_cast<uint32_t*>(allocBase + FNameEntryAllocator::CurrentBlock);
    uint32_t* currentCursorPtr = reinterpret_cast<uint32_t*>(allocBase + FNameEntryAllocator::CurrentByteCursor);

#ifdef _WIN32
    PVOID volatile* lockPtr = reinterpret_cast<PVOID volatile*>(allocBase);
    while(InterlockedCompareExchangePointer(reinterpret_cast<PVOID volatile*>(lockPtr), reinterpret_cast<PVOID>(1), reinterpret_cast<PVOID>(0)) != reinterpret_cast<PVOID>(0))
        Sleep(1);
#else
    // Well, die, (no jk but i dont have the time for a Linux implementation know ^^')
#endif
    
    uint32_t currentCursor = *currentCursorPtr;
    const size_t needed      = sizeof(FNameEntryHeader) + (data.size() * sizeof(wchar_t));

    FName result(0,0);

    for(uint32_t attempt = 0; attempt < maxBlocks; ++ attempt)
    {
        uint32_t bidx = (*currentBlockPtr + attempt) % maxBlocks;
        uintptr_t blockPtr = blocks[bidx];

        // YIPPIE MOMEENTTTTT :333333
        if(!blockPtr)
        {
#ifdef _WIN32
                                                                                          // not sure abt that  
            void* newBlock = VirtualAlloc(nullptr, BlockSizeBytes, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
            if(!newBlock) continue;

            memset(newBlock, 0, BlockSizeBytes);
            blocks[bidx] = reinterpret_cast<uintptr_t>(newBlock);
            blockPtr     = reinterpret_cast<uintptr_t>(newBlock);
#else

#endif 
        }

        uint32_t alignedCursor = static_cast<uint32_t>((currentCursor + (Stride - 1)) & ~(Stride - 1));
        if(alignedCursor + needed > BlockSizeBytes)
        {
            currentCursor = sizeof(uint32_t);
            continue;
        }

        uintptr_t entryAddress = blockPtr + alignedCursor;
        uint16_t headerRaw = static_cast<uint16_t>(
            (1u & 0x1u)
            | ((static_cast<uint16_t>(fnv1a5bits(data) & 0x1Fu) & 0x1Fu) << 1)
            | ((static_cast<uint16_t>(data.size() & 0x03FFu) & 0x03FF) << 6)
        );

        *reinterpret_cast<uint16_t*>(entryAddress) = headerRaw;
        wchar_t* dest = reinterpret_cast<wchar_t*>(entryAddress + sizeof(FNameEntryHeader));
        for(size_t i = 0; i < data.size(); ++i)
            dest[i] = static_cast<wchar_t>(static_cast<unsigned char>(data[i]));

        uint32_t newCursor = alignedCursor + static_cast<uint32_t>(needed);
        *currentCursorPtr = newCursor;
        *currentBlockPtr = bidx;

        FNameEntryId entryId = (static_cast<FNameEntryId>(bidx) << 16 | static_cast<FNameEntryId>(alignedCursor / Stride));
        entryPush(data, entryId);   
        result = FName(entryId, 0);
        break;
    }


#ifdef _WIN32
    InterlockedExchangePointer(reinterpret_cast<PVOID volatile*>(lockPtr), reinterpret_cast<PVOID>(0));
#else

#endif    
    return result;
}

FName FNameUtils::CreateFName(const std::string& data)
{
    return CreateFName(ModLoader::gameData->getBaseAddress(), data);
}