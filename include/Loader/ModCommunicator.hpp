#ifndef MODCOMMUNICATOR_HPP
#define MODCOMMUNICATOR_HPP

#endif // !MODCOMMUNICATOR_HPP 
#include "ModAPI.hpp"
#include "ModObject.hpp"
#include <iostream>
#include <Windows.h>
#include "Loader/ModObject.hpp"
#include "Logger/ModLoaderLogger.hpp"

class ModCommunicator
{
    public: 
        ModCommunicator();
        ~ModCommunicator();

        static void LoadMod(const char* dll, ModObject meta);

    private:
        static void  __internal__log(std::string message);
        static void  __internal__command_register(const char* name, void (*callback)());
        static void* __internal__get_registry_object(char REGISTRY_TYPE, const char* name);

    protected:
        inline static ModAPI api =
        {
            __internal__log,
            __internal__command_register,
            __internal__get_registry_object
        };
};