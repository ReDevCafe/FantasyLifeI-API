#ifndef UTILS_HPP_
    #define UTILS_HPP_

    #include "Engine/FName.hpp"
    #include <string>


const uintptr_t GNAME_OFFSET = 0xBF3DA40;

class Utils {
    public:
        std::string FNameToString(FName fname);
    protected:
    private:
};

#endif /* !UTILS_HPP_ */