#include "Loader/ModCommunicator.hpp"

void ModCommunicator::__internal__log(std::string data)
{
	std::cout << "[M.API] " << data << std::endl;
}

void ModCommunicator::__internal__command_register(const char* name, void (*callback)())
{
	
}

void* ModCommunicator::__internal__get_registry_object(char REGISTRY_TYPE, const char* name)
{
	return nullptr;
}

void ModCommunicator::LoadMod(const char* dll, ModObject modO)
{
	HMODULE mod = LoadLibraryA(dll);
	if (!mod) return;

	void (*InitMod)(ModAPI*, ModObject) = (void(*)(ModAPI*, ModObject))GetProcAddress(mod, "InitMod");
	if (!InitMod) 
	{
		std::cerr << "Failed to load " << dll << std::endl;
		return;
	}

	InitMod(&api, modO);
}