#include "API/Table/ItemTableDetail.hpp"
#include "API/Engine/FName.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

std::string ItemTableDetail::GetItemIdentifier()
{
    return this->_object.ItemId.ToString();
}

ItemData ItemTableDetail::GetItem()
{
    return ModLoader::gameCache->GetItem(GetItemIdentifier());
}