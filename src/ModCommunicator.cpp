#include "ModCommunicator.h"
#include "ModMeta.h"

void __internal__log(std::string data)
{
	std::cout << "[M.API] " << data << std::endl;
}

void __internal__command_register(const char* name, void (*callback)())
{
	
}

void __internal__hook_event(const char* name, void (*callback)(void*))
{
	// For now just call the callback
	callback(nullptr);
}

static ModAPI api =
{
	__internal__log,
	__internal__command_register,
	__internal__hook_event,
};

static 

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