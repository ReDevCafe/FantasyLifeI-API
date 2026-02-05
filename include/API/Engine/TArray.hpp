#ifndef TARRAY_HPP
#define TARRAY_HPP

#include "API/Function/Engine/FMemory/FMemoryMalloc.hpp"
#include "API/Function/Engine/FMemory/FMemoryFree.hpp"
#include <cstdint>
#include <stdexcept>
#include <type_traits>

template<typename T = char>
constexpr typename std::remove_reference<T>::type&& MoveTemp(T&& obj) noexcept
{
    return static_cast<typename std::remove_reference<T>::type&&>(obj);
}

template <class T = char>
class TArray
{
    friend class FString;

public:
    T* Data;
    int32_t Count;
    int32_t Max;

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

    inline bool RemoveSingle(const int Index)
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

    inline void RemoveAt(int Index, int Length = 1)
    {
        for (; Length != 0; --Length)
        {
            if (!RemoveSingle(Index++))
                break;
        }
    }

    inline T Get(int index)
    {
        if(index < 0 || index >= Count) throw std::out_of_range("TArray::Get() index out of range");
        return Data[index];
    }

    inline void Add(T value)
    {
        if (Count >= Max)
        {
            size_t newMax = (Max == 0) ? 4 : (Max * 2);
            this->ResizeGrow(newMax);
        }
        new (&Data[Count]) T(MoveTemp(value));
        Count++;
    }

    inline void ResizeGrow(int32_t newSize)
    {
        if (newSize <= Max)
            return;
        
        T* newData = (T*)FMemoryMalloc::call((size_t)(newSize * sizeof(T)), (size_t)alignof(T));
        
        if (Data != nullptr && Count > 0)
        {
            for (size_t i = 0; i < Count; i++)
            {
                new (&newData[i]) T(MoveTemp(Data[i]));
                Data[i].~T();
            }

            FMemoryFree::call(Data);
        }
        
        Data = newData;
        Max = newSize;
    }

    inline void Set(size_t index, T value)
    {
        if(index >= Count) throw std::out_of_range("TArray::Set() index out of range");
        Data[index] = MoveTemp(value);
    }

    inline T* GetData() noexcept
    {
        return Data;
    }
    
    inline const T* GetData() const noexcept
    {
        return Data;
    }
};

#endif //! TARRAY_HPP