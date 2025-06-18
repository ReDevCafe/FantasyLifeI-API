#ifndef INVENTORYINFOSTACKABLE_HPP
    #define INVENTORYINFOSTACKABLE_HPP
    #include "InventoryInfoCore.hpp"

class InventoryInfoStackable : public InventoryInfoCore 
{
    public:
    InventoryInfoStackable(FInventoryInfoStackable& data) : InventoryInfoCore(data)
    {};

    uint16_t        GetStock()                { return reinterpret_cast<FInventoryInfoStackable*>(&this->_object)->stockNum;  }
    void            SetStock(uint16_t value)  { reinterpret_cast<FInventoryInfoStackable*>(&this->_object)->stockNum = value; }
};

#endif // !INVENTORYINFOSTACKABLE_HPP