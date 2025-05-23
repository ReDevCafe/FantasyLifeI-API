#pragma once
#include <type_traits>

template <typename T>
inline constexpr std::remove_reference_t<T>&& MoveTemp(T&& Obj) noexcept
{
	using CastType = std::remove_reference_t<T>;

	// Validate that we're not being passed an rvalue or a const object - the former is redundant, the latter is almost certainly a mistake
	static_assert(std::is_lvalue_reference_v<T>, "MoveTemp called on an rvalue");
	static_assert(!std::is_same_v<CastType&, const CastType&>, "MoveTemp called on a const object");

	return (CastType&&)Obj;
}