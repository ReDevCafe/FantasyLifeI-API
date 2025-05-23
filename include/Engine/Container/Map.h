#pragma once

#include <type_traits>
#include "Set.h"
#include "../Template/Tuple.h"
#include "../Template/UnrealTypeTrait.h"
#include "../Template/UnrealTemplate.h"

#define ExchangeB(A,B) { bool T=A; A=B; B=T; }

template <typename KeyType, typename ValueType>
using TPair = TTuple<KeyType, ValueType>;

template <typename KeyInitType, typename ValueInitType>
class TPairInitializer
{
public:
    std::conditional_t<std::is_rvalue_reference_v<KeyInitType>, KeyInitType&, KeyInitType> Key;
    std::conditional_t<std::is_rvalue_reference_v<ValueInitType>, ValueInitType&, ValueInitType> Value;

    __forceinline TPairInitializer(KeyInitType inKey, ValueInitType inValue)
        : Key(inKey)
        , Value(inValue)
    {}

    template <typename KeyType, typename ValueType>
    __forceinline TPairInitializer(const TPair<KeyType, ValueType>& Pair)
        : Key(Pair.Key)
        , Value(Pair.Value)
    {}

    template <typename KeyType, typename ValueType>
    operator TPair<KeyType, ValueType>() const
    {
        return TPair<KeyType, ValueType>(static_cast<KeyInitType>(Key), static_cast<ValueInitType>(Value));
    }
};

template <typename KeyInitType>
class TKeyInitializer
{
public:
    std::conditional_t<std::is_rvalue_reference_v<KeyInitType>, KeyInitType& KeyInitType> Key;

    __forceinline explicit TKeyInitializer(KeyInitType inKey)
        : Key(inKey)
    {}

    template <typename KeyType, typename ValueType>
    operator TPair<KeyType, ValueType>() const
    {
        return TPair<KeyType, ValueType>(static_cast<KeyInitType>(Key), ValueType());
    }
};

template <typename KeyType, typename ValueType, typename SetAllocator, typename KeyFuuncs>
class TMapBase
{
    template <typename OtherKeyType, typename OtherValueType, typename OtherSetAllocator, typename OtherKeyFuncs>
    friend class TMapBase

    public:
        typedef typename TTypeTraits<KeyType>::ConstPointerType KeyConstPointerType;
        typedef typename TTypeTraits<KeyType>::ConstInitType KeyInitType;
        typedef typename TTypeTraits<ValueType>::ConstInitType ValueInitType;
        typedef TPair<KeyType, ValueType> ElementType;
};

template <typename KeyType, typename ValueType, typename SetAllocator, typename KeyFuncs>
class TSortableMapBase : public TMapBase<KeyType, ValueType, SetAllocator, KeyFuncs>
{
    protected :
        typedef TMapBase<KeyType, ValueType, SetAllocator, KeyFuncs> Super;
};

template<typename AllocatorType, typename InDerivedType = void>
class TScriptMap;

template <typename InKeyType, typename INValueType, typename SetAllocator /*= FDefaultSetAllocator*/, typename KeyFuncs /*= TDefaultMapHashableKeyFuncs<KeyType, ValueType, false>*/>
class TMap : public TSortableMapBase<InKeyType, INValueType, SetAllocator, KeyFuncs>
{
    template <typename, typename>
    friend class TScriptMap;

    public:
        typedef InKeyType    KeyType;
        typedef InValueType  ValueType;
        typedef SetAllocator SetallocatorType;
        typedef KeyFuncs     KeyFuncsType;

        typedef TSortableMapBase<KeyType, ValueType, SetAllocator, KeyFuncs> Super;
        typedef typename Super::KeyInitType KeyInitType;
        typedef typename Super::KeyConstPointerType KeyConstPointerType;

        TMap() = default;
        TMap(TMap&&) = default;
        TMap(const TMap&) = default;
        TMap& operator=(TMap&&) = default;
        TMap& operator=(const TMap&) = default;
        
        template <typename OtherSetAllocator>
        TMap(TMap<KeyType, ValueType, OtherSetAllocator,  KeyFuncs>&& Other)
            :  Super(MoveTemp(Other))
        {}

        template <typename OtherSetAllocator>
        TMap(const TMap<KeyType, ValueType, OtherSetAllocator,  KeyFuncs>& Other)
            :  Super(Other)
        {}

        TMap(std::initializer_list)
};