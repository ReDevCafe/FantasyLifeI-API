#ifndef ITEMCONSUMEDATA_HPP
    #define ITEMCONSUMEDATA_HPP

    #include "ItemData.hpp"

class ML_API ItemConsumeData : public ItemData 
{
    public:
        ItemConsumeData(FGDItemConsumeData& data) : ItemData(data){};

        EItemUseActionType ActionType();
};

#endif // !ITEMCONSUMEDATA_HPP