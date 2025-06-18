#ifndef INVENTORY_HPP
    #define INVENTORY_HPP
    #include "SDK.h"
    #include "GameObjectProxy.hpp"

class Inventory : GameObjectProxy<UGDDInventoryStatus>
{
    Inventory(UGDDInventoryStatus& data) : GameObjectProxy(data){};


};


#endif // !INVENTORY_HPP
