#ifndef MODMETA_HPP
    #define MODMETA_HPP

    #include <string>
    #include <Windows.h>
    #include <sstream>
    #include <iostream>
    #include <fstream>
    #include "ModAPI.hpp"

class ModObject
{
    public:
        std::string name;
        std::string author;
        std::string version;
        
        std::string dllName;    // Where the dll is stored in the mod folder
};

#endif //! MODMETA_HPP