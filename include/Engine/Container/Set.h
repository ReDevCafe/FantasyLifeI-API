#pragma once

template <typename ElementType, typename InKeyType, bool bInAllowDuplicateKeys = false>
struct BaseKeyFuncs
{
	typedef InKeyType KeyType;
};