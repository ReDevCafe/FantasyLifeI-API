#ifndef MODENVIRONNEMENT_HPP
    #define MODENVIRONNEMENT_HPP

    #include "Windows.h"

    #include <string>
    #include <filesystem>
    #include <iostream>

    #include "ModObject.hpp"
    #include "Json.hpp"
    #include "ModLoader.hpp"

class ModEnvironnement 
{
    public:
        ModEnvironnement();
        ~ModEnvironnement();

        static DWORD SetupEnvironnement();
};

#endif // !