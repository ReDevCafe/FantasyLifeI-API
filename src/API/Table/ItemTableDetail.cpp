#include "API/Table/ItemTableDetail.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

std::string ItemTableDetail::GetItemIdentifier()
{
    return Utils::FNameToString(this->_object.ItemId);
}

ItemData ItemTableDetail::GetItem()
{
    return ModLoader::gameCache->GetItem(GetItemIdentifier());
}