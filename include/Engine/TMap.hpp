#ifndef TMAP_HPP_
	#define TMAP_HPP_

	#include <string>
	#include <locale>

template <typename KeyType, typename ValueType>
class TPair
{
public:
	KeyType First;
    ValueType Second;
};

template<typename ElementType>
class TSetElement
{
public:
    ElementType Value;
    int32_t HashNextId;
    int32_t HashIndex;
};

template <class T = char>
struct TArray
{
    friend struct FString;

public:
    inline TArray()
    {
        Data = nullptr;
        Count = Max = 0;
    };

    inline int Num() const
    {
        return Count;
    };

    inline T& operator[](int i)
    {
        return Data[i];
    };

    inline const T& operator[](int i) const
    {
        return Data[i];
    };

    inline bool IsValidIndex(int i) const
    {
        return i < Num();
    }

    inline int Slack() const
    {
        return Max - Count;
    }

    __forceinline bool RemoveSingle(const int Index)
    {
        if (Index < Count)
        {
            if (Index != Count - 1)
                Data[Index] = Data[Count - 1];

            --Count;

            return true;
        }
        return false;
    }

    __forceinline void RemoveAt(int Index, int Length = 1)
    {
        for (; Length != 0; --Length)
        {
            if (!RemoveSingle(Index++))
                break;
        }
    }

public:
    T* Data;
    int32_t Count;
    int32_t Max;
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

template<typename Key, typename Value>
class TMap {
	public:
		TArray<TSetElement<TPair<Key, Value>>> Data;
	protected:
	private:
        uint8_t UnknownData01[0x04];
        uint8_t UnknownData02[0x04];
        uint8_t UnknownData03[0x08];
        uint8_t UnknownData04[0x08];
        uint8_t UnknownData_MayBeSize[0x04];
        uint8_t UnknownData_MayBeFlag[0x04];
        uint8_t UnknownData05[0x08];
        uint8_t UnknownData06[0x08];
        uint8_t UnknownData07[0x08];
        uint8_t UnknownData_MayBeSize02[0x04];
        uint8_t UnknownData08[0x04];
};

#endif /* !TMAP_HPP_ */
