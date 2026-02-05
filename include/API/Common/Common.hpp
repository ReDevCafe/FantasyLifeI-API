#ifndef COMMON___HPP
    #define COMMON___HPP

    #include "API/Language.hpp"
    #include "SDK.h"
    #include <string_view>

#define NAME_GET Common::NounSingular
#define NAME_SET Common::NounSingularSet

#define DESC_GET Common::Description
#define DESC_SET Common::DescriptionSet

class Common
{
    public:
    static std::string NounSingular(LANG lang, std::string_view identifier);
    static void        NounSingularSet(LANG lang, std::string_view identifier, FString value);

    static std::string Description(LANG lang, std::string_view identifier);
    static void        DescriptionSet(LANG lang, std::string_view identifier, FString value);
};

#endif // !COMMON___HPP
