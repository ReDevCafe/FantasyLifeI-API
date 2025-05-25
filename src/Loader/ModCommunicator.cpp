#include "Loader/ModCommunicator.hpp"

void ModCommunicator::__internal__log(std::string data)
{
	std::cout << data;
}

void ModCommunicator::__internal__command_register(const char* name, void (*callback)())
{
	
}

void* ModCommunicator::__internal__get_registry_object(char REGISTRY_TYPE, const char* name)
{
	return nullptr;
}

UStaticDataManager* ModCommunicator::__internal__get_static_data_manager(void)
{
	UStaticDataManager *manager = reinterpret_cast<UStaticDataManager *>(HookDataManager::getDataManager());
	if(!manager)
	{
		mlLogger.error("StaticDataManager instance appears to have been lost???");
		return nullptr;
	}

	return manager;
}

void ModCommunicator::LoadMod(const char* dll, ModObject modO)
{
	HMODULE mod = LoadLibraryA(dll);
	if (!mod) return;

	void (*InitMod)(ModAPI*, ModObject) = (void(*)(ModAPI*, ModObject))GetProcAddress(mod, "InitMod");
	if (!InitMod) 
	{
		mlLogger.error("Failed to load ", dll);
		return;
	}

	InitMod(&api, modO);
}