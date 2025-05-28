#ifndef ITEMIMPORTANTDATA_HPP
    #define ITEMIMPORTANTDATA_HPP

    #include "ItemData.hpp"
    #include "Game/Item/UGDSItemImportantData.hpp"

class ItemImportantData : public ItemData
{
    public:
        ItemImportantData(FGDItemImportantData& data) : ItemData(data){};

        uint16_t GetStack();
};

#endif // !ITEMIMPORTANTDATA_HPP