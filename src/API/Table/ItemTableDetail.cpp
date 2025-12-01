#include "API/Table/ItemTableDetail.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

ItemData ItemTableDetail::GetItem()
{
    return ModLoader::gameCache->GetItem(GetItemIdentifier());
}