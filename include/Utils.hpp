#ifndef UTILS_HPP_
    #define UTILS_HPP_

    #include "Engine/FName.hpp"
    #include <string>
    #include <unordered_map>
    #include <Windows.h>

    #define NAME_BUFFER 1024

const uintptr_t GNAME_OFFSET = 0xBF3DA40;

class Utils {
    public:
        static std::string &FNameToString(uintptr_t baseAddress, FName fname);
        static void EnableAnsiColors();
    protected:
    private:
        static std::unordered_map<FNameEntryId, std::string> _strings; 
};

#endif /* !UTILS_HPP_ */