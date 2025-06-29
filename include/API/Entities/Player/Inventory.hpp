#ifndef INVENTORY_HPP
    #define INVENTORY_HPP
    #include "SDK.h"
    #include "API/GameObjectProxy.hpp"
    #include "API/Item/InventoryCore/InventoryInfoStackable.hpp"
    #include "API/Item/InventoryCore/InventoryInfoEquip.hpp"

class Inventory
{
    public:
    Inventory(FInventoryStatusDataP& dpermanent,  FInventoryStatusDataV& dvolatile) : 
        _permanentStatus(dpermanent),
        _volatileStatus(dvolatile)
    {};

    private:
    FInventoryStatusDataP   &_permanentStatus;
    FInventoryStatusDataV  &_volatileStatus;
    
    public:
    InventoryInfoStackable  GetConsumable       (int index);
    void                    SetConsumable       (int index, InventoryInfoStackable value);

    InventoryInfoEquip      GetWeapon           (int index);
    void                    SetWeapon           (int index, InventoryInfoEquip value);

    InventoryInfoEquip      GetLifeTools        (int index);
    void                    SetLifeTools        (int index, InventoryInfoEquip value);
};

#endif // !INVENTORY_HPP
