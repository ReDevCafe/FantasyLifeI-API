#include "ModCommunicator.hpp"
#include "ModMeta.hpp"

void __internal__log(std::string data)
{
	std::cout << "[M.API] " << data << std::endl;
}

void __internal__command_register(const char* name, void (*callback)())
{
	
}

ModAPI api =
{
	__internal__log,
	__internal__command_register,
};

void LoadMod(const char* dll, ModMeta meta)
{
	HMODULE mod = LoadLibraryA(dll);
	if (!mod) return;

	void (*InitMod)(ModAPI*, ModMeta) = (void(*)(ModAPI*, ModMeta))GetProcAddress(mod, "InitMod");
	if (!InitMod) 
	{
		std::cerr << "Failed to load " << dll << std::endl;
		return;
	}

	InitMod(&api, meta);
}