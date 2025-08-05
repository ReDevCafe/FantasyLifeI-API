#include "Utils.hpp"
#include "ModLoader.hpp"
#include "GameData.hpp"
#include "GameCache.hpp"

void Utils::EnableAnsiColors()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if(hConsole == INVALID_HANDLE_VALUE) return;

    DWORD dwMode = 0;
    if(!GetConsoleMode(hConsole, &dwMode)) return;

    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hConsole, dwMode);
}