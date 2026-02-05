#ifndef COMMONITEMTABLESETTING_HPP
    #define COMMONITEMTABLESETTING_HPP

    #include "API/GameObjectProxy.hpp"
    #include "API/Table/ItemTableDetail.hpp"
    #include "Export.h"

class ML_API CommonItemTableSetting : public GameObjectProxy<FGDCommonItemTableSetting>
{
    public:
    CommonItemTableSetting(FGDCommonItemTableSetting& data) : GameObjectProxy(data)
    {};

    std::string     GetIdentifier() const { return this->_object.tableId.ToString(); };
    
    ItemTableDetail GetData(int index);
    void            SetData(int index, ItemTableDetail value);
    void            AddData(ItemTableDetail value);
};

#endif // !