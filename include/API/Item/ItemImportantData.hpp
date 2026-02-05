#ifndef ITEMIMPORTANTDATA_HPP
    #define ITEMIMPORTANTDATA_HPP

    #include "ItemData.hpp"

class ML_API ItemImportantData : public ItemData
{
    public:
        ItemImportantData(FGDItemImportantData& data) : ItemData(data){};
        ItemImportantData(ItemData data) : ItemData(data.getObject()){};

        uint16_t GetStack() const { return static_cast<FGDItemImportantData&>(this->_object).StackCheckNum; }
};

#endif // !ITEMIMPORTANTDATA_HPP