#pragma once

#include "AndOrNot.h"
#include "IsPodType.h"
#include "isArithmetic.h"
#include "isEnum.h"
#include "IsPointer.h"

template <typename T, bool TypeIsSmall>
struct TCallTraitsParamTypeHelper
{
	typedef const T& ParamType;
	typedef const T& ConstParamType;
};

template <typename T>
struct TCallTraitsParamTypeHelper<T, true>
{
	typedef const T ParamType;
	typedef const T ConstParamType;
};
template <typename T>
struct TCallTraitsParamTypeHelper<T*, true>
{
	typedef T* ParamType;
	typedef const T* ConstParamType;
};

template <typename T>
struct TCallTraitsBase
{
	private:
		enum { PassByValue = TOr<TAndValue<(sizeof(T) <= sizeof(void*)), TIsPODType<T>>, TIsArithmetic<T>>::Value };

	public:
		typedef T ValueType;
		typedef T& Reference;
		typedef const T& ConstReference;
		typedef typename TCallTraitsParamTypeHelper<T, PassByValue>::ParamType ParamType;
		typedef typename TCallTraitsParamTypeHelper<T, PassByValue>::ConstParamType ConstPointerType;
};

template <typename T>
struct TCallTraits : public TCallTraitsBase<T> {};

template <typename T>
struct TCallTraits<T&>
{
	typedef T& ValueType;
	typedef T& Reference;
	typedef const T& ConstReference;
	typedef T& ParamType;
	typedef T& ConstPointerType;
};

template <typename T, size_t N>
struct TCallTraits<T[N]>
{
private:
	typedef T ArrayType[N];
public:
	typedef const T* ValueType;
	typedef ArrayType& Reference;
	typedef const ArrayType& ConstReference;
	typedef const T* const ParamType;
	typedef const T* const ConstPointerType;
};


template <typename T, size_t N>
struct TCallTraits<const T[N]>
{
private:
	typedef const T ArrayType[N];
public:
	typedef const T* ValueType;
	typedef ArrayType& Reference;
	typedef const ArrayType& ConstReference;
	typedef const T* const ParamType;
	typedef const T* const ConstPointerType;
};

template <typename T>
struct TTypeTraitsBase
{
	typedef typename TCallTraits<T>::ParamType			ConstInitType;
	typedef typename TCallTraits<T>::ConstPointerType	ConstPointerType;

	enum {
		IsByteWiseComparable = TOr<TIsEnum<T>, TIsArithmetic<T>, TIsPointer<T>>::Value
	};
};