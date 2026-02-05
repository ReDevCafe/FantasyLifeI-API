#ifndef ITEMKITDATA_HPP
    #define ITEMKITDATA_HPP

    #include "ItemData.hpp"

// useless but okay
class ML_API ItemKitData : public ItemData
{
    public:
        ItemKitData(FGDItemKitData& data) : ItemData(data){};
        ItemKitData(ItemData data) : ItemData(data.getObject()){};
};

#endif // !ITEMKITDATA_HPP