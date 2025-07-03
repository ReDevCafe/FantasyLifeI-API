#ifndef ITEMIMPORTANTDATA_HPP
    #define ITEMIMPORTANTDATA_HPP

    #include "ItemData.hpp"

class ML_API ItemImportantData : public ItemData
{
    public:
        ItemImportantData(FGDItemImportantData& data) : ItemData(data){};

        uint16_t GetStack() const { return reinterpret_cast<FGDItemImportantData*>(&this->_object)->StackCheckNum; }
};

#endif // !ITEMIMPORTANTDATA_HPP