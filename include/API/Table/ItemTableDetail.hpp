#ifndef ITEMTABLEDETAIL_HPP
    #define ITEMTABLEDETAIL_HPP

    #include "API/GameObjectProxy.hpp"
    #include "API/Item/ItemData.hpp"

    #include "Export.h"

class ML_API ItemTableDetail : public GameObjectProxy<FGDStItem_ItemTableDetail>
{
    public:
    ItemTableDetail(FGDStItem_ItemTableDetail& data) : GameObjectProxy(data)
    {};

    protected:
    std::string GetItemIdentifier() const { return this->_object.ItemId.ToString(); }

    public:
    ItemData    GetItem();
    void        SetItem(ItemData data) { this->_object.ItemId = data.getObject().ID; }

    int32_t     GetValue()              { return  this->_object.Value; }
    void        SetValue(int32_t value) { this->_object.Value = value; }

    int32_t     GetRate()               { return  this->_object.Rate; }
    void        SetRate(int32_t value)  { this->_object.Rate = value; }
};

#endif // !ITEMTABLEDETAIL_HPP