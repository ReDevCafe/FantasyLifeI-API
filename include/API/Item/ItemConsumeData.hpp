#ifndef ITEMCONSUMEDATA_HPP
    #define ITEMCONSUMEDATA_HPP

    #include "ItemData.hpp"
    #include "Game/Item/UGDSItemConsumeData.hpp"

class ItemConsumeData : public ItemData 
{
    public:
        ItemConsumeData(FGDItemConsumeData& data) : ItemData(data){};

        EItemUseActionType ActionType();
};

#endif // !ITEMCONSUMEDATA_HPP