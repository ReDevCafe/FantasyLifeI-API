#ifndef TARRAYHELPER_HPP
    #define TARRAYHELPER_HPP

    #include "SDK.h"
    #include "API/GameObjectProxy.hpp"

template<typename T>
class TArrayHelper
{   
    public:
    static T    Get(TArray<T>& array, int index)
    {
        if(index < 0 || index >= array.Count) throw std::out_of_range("TArrayHelper::Get() index out of range");

        return array.Data[index];
    }

    static void Set(TArray<T>& array, int index, T value)
    {
        if(index < 0 || index >= array.Count) throw std::out_of_range("TArrayHelper::Set() index out of range");
        array.Data[index] = value;
        array.Count++;
    }

    static void Add(TArray<T>& array, T value)
    {
        if(array.Max == 0)
        {
            array.Max = array.Count = 1;
            array.Data[0] = value;
            return;
        } 

        int count = array.Count;
        array.Data[count] = value;
        array.Count = count + 1;
        array.Max = ++count;
    }
};

#endif // !TARRAY_HELPER_HPP