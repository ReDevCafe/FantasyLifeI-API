#include "API/Item/InventoryCore/InventoryInfoCore.hpp"
#include "Utils.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

ItemData InventoryInfoCore::GetItemUnsafe()
{
    std::string Identifier = Utils::FNameToString(this->_object.ItemId);
    if(Identifier == "None")
        throw std::runtime_error("Item is null?");

    return ModLoader::gameCache->GetItem(Identifier);
}

