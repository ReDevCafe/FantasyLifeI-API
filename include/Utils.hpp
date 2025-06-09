#ifndef UTILS_HPP_
    #define UTILS_HPP_

    #include <string>
    #include <unordered_map>
    #include <stdexcept>
    #include <Windows.h>
    #include "SDK.h"

    #define NAME_BUFFER 1024

const uintptr_t GNAME_OFFSET = 0xBF3DA40;

struct FName;

class Utils {
    public:
        static std::string &FNameToString(uintptr_t baseAddress, FName fname);
        static std::string &FNameToString(FName fname);
        
        static std::string &PC_FNameToString(uintptr_t baseAdress, FName fname);
        static std::string &PC_FNameToString(FName fname);

        static void EnableAnsiColors();
    protected:
    private:
        static std::unordered_map<FNameEntryId, std::string> _strings; 
};

#endif /* !UTILS_HPP_ */