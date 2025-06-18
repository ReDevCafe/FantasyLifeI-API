#ifndef INVENTORYINFOCORE_HPP
    #define INVENTORYINFOCORE_HPP
    #include "SDK.h"
    #include "API/GameObjectProxy.hpp"
    #include "API/Item/ItemData.hpp"


// THIS STORE AN INSTANCE OF THE ITEM WITH SPECIFIC DATA
class InventoryInfoCore : public GameObjectProxy<FInventoryInfoCore>
{
    public:
    InventoryInfoCore(FInventoryInfoCore& data) : GameObjectProxy(data)
    {};

    private:
    ItemData GetItemUnsafe();

    public:
    template<typename T>
    T           GetItem()                   { ItemData temp = GetItemUnsafe(); return *reinterpret_cast<T*>(&temp); }

    uint32_t    GetOrder()                  { return  this->_object.getOrder; }
    void        SetOrder(int32_t value)     { this->_object.getOrder = value; }

    bool        GetIsFavorite()             { return  this->_object.IsFavorite; }
    void        SetIsFavorite(bool value)   { this->_object.IsFavorite = value; }

    bool        GetIsPresented()            { return  this->_object.isPresented; }
    void        SetIsPresented(bool value)  { this->_object.isPresented = value; }
};

#endif //  InventoryInfoCore