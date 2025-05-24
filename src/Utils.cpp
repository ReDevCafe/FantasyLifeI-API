#include "Utils.hpp"

/*
std::string Utils::FNameToString(FName fname) {
    char name[1024] = {0};
	const unsigned int chunkOffset = fname.ComparisonIndex >> 16;
	const unsigned short nameOffset = fname.ComparisonIndex;
    uint64_t namePoolChunk = Memory::read<uint64_t>(gNames + 8 * (chunkOffset + 2)) + 4 * nameOffset;

	const auto nameLength = Memory::read<uint16_t>(namePoolChunk + 4) >> 1;

	if (nameLength > NAME_SIZE)
	{
		// we're about to corrupt our memory in the next call to Memory::read if we don't clamp the value!
		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ERROR, "CORE", "Memory corruption avoided! FName nameLength > NAME_SIZE! Setting WITH_CASE_PRESERVING_NAME=TRUE might resolve this issue");
		puts("Memory corruption avoided! FName nameLength > NAME_SIZE! Setting WITH_CASE_PRESERVING_NAME=TRUE might resolve this issue");
		//DebugBreak();
	}

	Memory::read(
		reinterpret_cast<void*>(namePoolChunk + 6), 
		name, 
		// safeguard against overflow and memory corruption
		nameLength < NAME_SIZE ? nameLength : NAME_SIZE
	);
}
*/