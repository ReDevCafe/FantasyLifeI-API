#include "API/Entities/Player/Inventory.hpp"
    #include "API/Engine/TArrayHelper.hpp"

InventoryInfoStackable Inventory::GetConsumable(int index)
{
    FInventoryInfoConsume temp = TArrayHelper<FInventoryInfoConsume>::Get(_permanentStatus.invConsume, index);
    return InventoryInfoStackable(*reinterpret_cast<FInventoryInfoStackable*>(&temp)); 
}

void Inventory::SetConsumable(int index, InventoryInfoStackable value)
{ 
    TArrayHelper<FInventoryInfoConsume>::Set(
        _permanentStatus.invConsume, 
        index,
        *reinterpret_cast<FInventoryInfoConsume*>(&value.getObject())
    );
}

InventoryInfoEquip Inventory::GetWeapon(int index)
{
    FInventoryInfoWeapon temp = TArrayHelper<FInventoryInfoWeapon>::Get(_permanentStatus.invInstantCharaWeapon, index);
    return InventoryInfoEquip(*reinterpret_cast<FInventoryInfoEquip*>(&temp)); 
}

void Inventory::SetWeapon(int index, InventoryInfoEquip value)
{ 
    TArrayHelper<FInventoryInfoWeapon>::Set(
        _permanentStatus.invInstantCharaWeapon, 
        index,
        *reinterpret_cast<FInventoryInfoWeapon*>(&value.getObject())
    );
}

InventoryInfoEquip Inventory::GetLifeTools(int index)
{
    FInventoryInfoLifeTools temp = TArrayHelper<FInventoryInfoLifeTools>::Get(_volatileStatus.invReceivedCharaLifeTools, index);
    return InventoryInfoEquip(*reinterpret_cast<FInventoryInfoEquip*>(&temp)); 
}

void Inventory::SetLifeTools(int index, InventoryInfoEquip value)
{ 
    TArrayHelper<FInventoryInfoLifeTools>::Set(
        _volatileStatus.invReceivedCharaLifeTools, 
        index,
        *reinterpret_cast<FInventoryInfoLifeTools*>(&value.getObject())
    );
}