#include "Utils.hpp"
#include "ModLoader.hpp"
#include "GameData.hpp"
#include "GameCache.hpp"

std::unordered_map<FNameEntryId, std::string> Utils::_strings; 

std::string &Utils::FNameToString(uintptr_t baseAddress, FName fname) {
    //if (_strings.contains(fname.ComparisonIndex))
    //    return _strings.at(fname.ComparisonIndex);
    char name[NAME_BUFFER + 1] = {0};
	const unsigned int chunkOffset = fname.ComparisonIndex >> 16;
	const unsigned short nameOffset = fname.ComparisonIndex;
    uintptr_t namePoolChunk = *(uintptr_t *) (baseAddress + GNAMES_OFFSET + 8 * (chunkOffset + 2)) + 2 * nameOffset;
    const uint16_t nameLength = *(uint16_t *) (namePoolChunk) >> 6;
    if (reinterpret_cast<void *>(namePoolChunk + 2) == nullptr)
        throw std::invalid_argument("namePoolChunk is null.");
    memcpy(name, (void *) (namePoolChunk + 2), nameLength < NAME_BUFFER ? nameLength : NAME_BUFFER);
    auto result = _strings.emplace(fname.ComparisonIndex, std::string(name));
    return result.first->second;
}

std::string &Utils::FNameToString(FName fname) {
    return FNameToString(ModLoader::gameData->getBaseAddress(), fname);
}

std::string &Utils::PC_FNameToString(uintptr_t baseAdress, FName fname)
{
    if(_strings.contains(fname.ComparisonIndex))
        return _strings.at(fname.ComparisonIndex);

    char name[NAME_BUFFER + 1] = { 0 };
    const unsigned int chunkOffset = fname.ComparisonIndex >> 16;
	const unsigned short nameOffset = fname.ComparisonIndex;

    uintptr_t namePoolChunk = *(uintptr_t *) (baseAdress + GNAMES_OFFSET + 8 * (chunkOffset +2 )) + 4 * nameOffset;
    const uint16_t nameLength = (*(uint16_t *) (namePoolChunk) + 4) >> 1;
    if(reinterpret_cast<void*>(namePoolChunk + 6) == nullptr)
        throw std::invalid_argument("namePoolChunk is null...");

    memcpy(name, (void*) (namePoolChunk + 6), nameLength < NAME_BUFFER ? nameLength : NAME_BUFFER);
    auto result = _strings.emplace(fname.ComparisonIndex, std::string(name));
    return result.first->second;
}

std::string &Utils::PC_FNameToString(FName fname) 
{
    return PC_FNameToString(ModLoader::gameData->getBaseAddress(), fname);
}

void Utils::EnableAnsiColors()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if(hConsole == INVALID_HANDLE_VALUE) return;

    DWORD dwMode = 0;
    if(!GetConsoleMode(hConsole, &dwMode)) return;

    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hConsole, dwMode);
}