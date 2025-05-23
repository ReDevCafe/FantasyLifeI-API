#pragma once

template <typename T>
struct TIsPODType
{
	enum { Value = __is_pod(T) };
};