#ifndef ITEMCONSUMEDATA_HPP
    #define ITEMCONSUMEDATA_HPP

    #include "ItemData.hpp"
    #include "API/Common/CommonItemEffectParam.hpp"

class ML_API ItemConsumeData : public ItemData 
{
    public:
        ItemConsumeData(FGDItemConsumeData& data) : ItemData(data){};
        ItemConsumeData(ItemData data) : ItemData(data.getObject()){};

        EItemUseActionType      GetActionType()     { return static_cast<EItemUseActionType>(static_cast<FGDItemConsumeData&>(this->_object).itemUseActionType); }

        CommonItemEffectParam   GetFirstEffect()    { return static_cast<FGDItemConsumeData&>(this->_object).effParam0; }
        CommonItemEffectParam   GetSecondEffect()   { return static_cast<FGDItemConsumeData&>(this->_object).effParam1; }
        CommonItemEffectParam   GetThirdEffect()    { return static_cast<FGDItemConsumeData&>(this->_object).effParam2; }
};

#endif // !ITEMCONSUMEDATA_HPP