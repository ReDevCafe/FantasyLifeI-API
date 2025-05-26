#ifndef MODENVIRONNEMENT_HPP
    #define MODENVIRONNEMENT_HPP

    #include "Windows.h"

    #include <string>
    #include <filesystem>
    #include <iostream>

    #include "ModObject.hpp"
    #include "ModCommunicator.hpp"
    #include "Json.hpp"
    #include "Logger/ModLoaderLogger.hpp"

class ModEnvironnement 
{
    public:
        ModEnvironnement();
        ~ModEnvironnement();

        static DWORD SetupEnvironnement();
};

#endif // !