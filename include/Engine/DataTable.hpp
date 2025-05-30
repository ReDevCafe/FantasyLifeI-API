
#ifndef DATATABLE_HPP_
    #define DATATABLE_HPP_

    #include <cstdint>

struct FTableRowBase {
    unsigned char m_unknown[8];
};

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

template<class TEnum>
class TEnumAsByte {
    public:
        inline TEnumAsByte()
        {
        }

        inline TEnumAsByte(TEnum _value)
            : value(static_cast<uint8_t>(_value))
        {
        }

        explicit inline TEnumAsByte(int32_t _value)
            : value(static_cast<uint8_t>(_value))
        {
        }

        explicit inline TEnumAsByte(uint8_t _value)
            : value(_value)
        {
        }

        inline operator TEnum() const
        {
            return (TEnum)value;
        }

        inline TEnum GetValue() const
        {
            return (TEnum)value;
        }

    private:
        uint8_t value;
};

class FWeakObjectPtr
{
public:
	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<typename UEType>
class TWeakObjectPtr : public FWeakObjectPtr
{
public:
};


#endif /* !DATATABLE_HPP_ */
