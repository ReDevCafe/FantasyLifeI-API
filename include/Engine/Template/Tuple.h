#pragma once
#include <tuple>

template <typename... Types>
struct TTuple;

template <typename... Types>
TTuple<std::decay_t<Types...>> MakeTuple(Types&&... Args);

template <typename... ElementTypes, typename... Types>
__forceinline TTuple<ElementTypes...> MakeTupleImpl(Types&&... Args)
{
	return TTuple<ElementTypes...>(Forward<Types>(Args)...);
}

template <typename... Types>
__forceinline TTuple<std::decay_t<Types>...> MakeTuple(Types&&... Args)
{
	return MakeTupleImpl<std::decay_t<Types>...>(Forward<Types>(Args)...);
}
