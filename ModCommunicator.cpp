#include "pch.h"
#include "ModCommunicator.h"

void __internal__log(const char* data)
{
	std::cout << "[M.API] " << data << std::endl;
}

void __internal__command_register(const char* name, void (*callback)())
{
	
}

ModAPI api =
{
	__internal__log,
	__internal__command_register
};

void LoadMod(const char* dll)
{
	HMODULE mod = LoadLibraryA(dll);
	if (!mod) return;

	void (*InitMod)(ModAPI*) = (void(*)(ModAPI*))GetProcAddress(mod, "InitMod");
	if (!InitMod) 
	{
		std::cerr << "Failed to load " << dll << std::endl;
		return;
	}

	InitMod(&api);
}