#include "Utils.hpp"

std::unordered_map<FNameEntryId, std::string> Utils::_strings; 

std::string &Utils::FNameToString(uintptr_t baseAddress, FName fname) {
    if (_strings.contains(fname.ComparisonIndex))
        return _strings.at(fname.ComparisonIndex);
    char name[NAME_BUFFER + 1] = {0};
	const unsigned int chunkOffset = fname.ComparisonIndex >> 16;
	const unsigned short nameOffset = fname.ComparisonIndex;
    uintptr_t namePoolChunk = *(uintptr_t *) (baseAddress + GNAME_OFFSET + 8 * (chunkOffset + 2)) + 2 * nameOffset;
    const uint16_t nameLength = *(uint16_t *) (namePoolChunk) >> 6;
    memcpy(name, (void *) (namePoolChunk + 2), nameLength < NAME_BUFFER ? nameLength : NAME_BUFFER);
    auto result = _strings.emplace(fname.ComparisonIndex, std::string(name));
    return result.first->second;
}