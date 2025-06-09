#ifndef COMMONITEMTABLESETTING_HPP
    #define COMMONITEMTABLESETTING_HPP

    #include "API/GameObjectProxy.hpp"
    #include "API/Table/ItemTableDetail.hpp"

class CommonItemTableSetting : public GameObjectProxy<FGDCommonItemTableSetting>
{
    public:
    CommonItemTableSetting(FGDCommonItemTableSetting& data) : GameObjectProxy(data)
    {};

    std::string     GetIdentifier();
    
    ItemTableDetail GetData(int index);
    void            SetData(int index, ItemTableDetail value);
    void            AddData(ItemTableDetail value);
};

#endif // !