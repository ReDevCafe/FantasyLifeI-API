
#ifndef FNAME_HPP_
    #define FNAME_HPP_

    #include <cstdint>
    #include <string>
    #include <locale>
    
    #include "DataTable.hpp"

typedef uint32_t FNameEntryId;

struct FName {
    FNameEntryId ComparisonIndex = 0;
    FNameEntryId Number = 0;
};

struct FString : public TArray<wchar_t>
{
    inline FString() {};

    FString(const wchar_t* other)
    {
        Max = Count = *other ? static_cast<int32_t>(std::wcslen(other)) + 1 : 0;

        if (Count)
        {
            Data = const_cast<wchar_t*>(other);
        }
    };

    inline bool IsValid() const
    {
        return Data != nullptr;
    }

    inline const wchar_t* c_str() const
    {
        return Data;
    }

    std::string ToString() const
    {
        const auto length = std::wcslen(Data);

        std::string str(length, '\0');

        std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

        return str;
    }
};

#endif /* !FNAME_HPP_ */
