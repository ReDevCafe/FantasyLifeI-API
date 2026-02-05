#ifndef COMMONPRICEINFO_HPP
    #define COMMONPRICEINFO_HPP

    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"

class CommonPriceInfo : public GameObjectProxy<FGDStCommon_PriceInfo>
{
    public:
        CommonPriceInfo(FGDStCommon_PriceInfo& data) : GameObjectProxy(data)
        { };

        int32_t GetBuyRich(int index)                           { return  this->_object.priceBuyRichList.Data[index]; }
        void    SetBuyRich(int index, int32_t value)            { this->_object.priceBuyRichList.Data[index] = value; }

        int32_t GetSellRich(int index)                          { return  this->_object.priceSellRichList.Data[index]; }
        void    SetSellRich(int index, int32_t value)           { this->_object.priceSellRichList.Data[index] = value; }

        int32_t GetBuySparkle(int index)                        { return  this->_object.priceBuySparkleList.Data[index]; }
        void    SetBuySparkle(int index, int32_t value)         { this->_object.priceBuySparkleList.Data[index] = value; }

        int32_t GetBuyTourCoin(int index)                       { return  this->_object.priceBuyTourCoinList.Data[index]; }
        void    SetBuyTourCoin(int index, int32_t value)        { this->_object.priceBuyTourCoinList.Data[index] = value; }

        int32_t GetGoddessSeed(int index)                       { return this->_object.priceBuyGoddessSeedList.Data[index]; }
        void    SetGoddessSeed(int index, int32_t value)        { this->_object.priceBuyGoddessSeedList.Data[index] = value; }

        int32_t GetShineGoddessSeed(int index)                  { return this->_object.priceBuyShineGoddessSeedList.Data[index]; }
        void    SetShineGoddessSeed(int index, int32_t value)   { this->_object.priceBuyShineGoddessSeedList.Data[index] = value;}

        int32_t GetRainbowGoddessSeed(int index)                { return  this->_object.priceBuyRainbowGoddessSeedList.Data[index]; }
        void    SetRainbowGoddessSeed(int index, int32_t value) { this->_object.priceBuyRainbowGoddessSeedList.Data[index] = value; }

        int32_t GetTradeRebuildStone(int index)                 { return  this->_object.priceTradeRebuildStoneList.Data[index]; }
        void    SetTradeRebuildStone(int index, int32_t value)  { this->_object.priceTradeRebuildStoneList.Data[index] = value; }

        int32_t GetBuyChestnut(int index)                       { return  this->_object.priceBuyChestnut.Data[index]; }
        void    SetBuyChestnut(int index, int32_t value)        { this->_object.priceBuyChestnut.Data[index] = value; }
};

#endif // !COMMONPRICEINFO_HPP