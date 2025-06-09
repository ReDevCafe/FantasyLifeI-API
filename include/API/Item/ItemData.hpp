#ifndef ITEMDATA_HPP
    #define ITEMDATA_HPP

    #include "API/Language.hpp"
    #include "API/Common/CommonPriceInfo.hpp"

class ItemData : public GameObjectProxy<FGDItemData>
{
    public:
        ItemData(FGDItemData& data) :
            GameObjectProxy(data),
            _priceInfo(data.priceInfo)
        {};

        std::string         GetIdentifier();

    protected:
        std::string         GetNameIdentifier();
    public:
        std::string         GetName(LANG lang);
        void                SetName(LANG lang, FString string);

    protected:
        std::string         GetDescIdentifier();
    public:
        std::string         GetDescription(LANG lang);
        void                SetDescription(LANG lang, FString string);

    protected:
        std::string         GetOverwriteIconIdentifier();
    public:
        std::string         GetOverwriteIcon();
        void                SetOverwriteIcon(ItemData data)     { this->_object.overwriteIconName = data.getObject().overwriteIconName;  };

        uint32_t            GetSortOrder()                      { return this->_object.sortOrder; }
        void                SetSortOrder(uint32_t value)        { this->_object.sortOrder = value; }

        EItemCategory       GetCategory()                       { return this->_object.Category; }
        void                SetCategory(EItemCategory value)    { this->_object.Category = value; }

        EItemType           GetType()                           { return this->_object.Type; }
        void                SetType(EItemType type)             { this->_object.Type = type; }

        char                GetSeries()                         { return this->_object.series; }
        void                SetSeries(char series)              { this->_object.series = series; }

        char                GetSeType()                         { return this->_object.seType; }
        void                SetSeType(char a)                   { this->_object.seType = a; }

        uint16_t            GetStackMax()                       { return this->_object.StackMax; }
        void                SetStackMax(uint16_t value)         { this->_object.StackMax = value; }

        bool                GetDisableSoldAbadon()               { return this->_object.disableSoldAbadon; }
        void                SetDisableSoldAbadon(bool value)     { this->_object.disableSoldAbadon = value; }

        bool                GetDisableUsedInventory()           { return this->_object.disableUsedInventory; }
        void                SetDisableUsedInventory(bool value) { this->_object.disableUsedInventory = value; }

        bool                GetDisableBadRegister()             { return this->_object.disableBagRegist; }
        void                SetDisableBadRegister(bool value)   { this->_object.disableBagRegist = value; }

        bool                GetDisablePresentToNpc()            { return this->_object.disablePresentToNPC; }
        void                SetDisablePresentToNpc(bool value)  { this->_object.disablePresentToNPC = value; }

        bool                GetDisablePresentToMulti()          { return this->_object.disablePresentToMultiplay; }
        void                SetDisablePresentToMulti(bool value){ this->_object.disablePresentToMultiplay = value;}

        CommonPriceInfo     GetPriceInfo()                      { return _priceInfo; }

        ERarityType         GetRarityType()                     { return this->_object.rarity; }
        void                SetRarityType(ERarityType type)     { this->_object.rarity = type; }

        EItemQualityType    GetQuality()                        { return this->_object.Quality; }
        void                SetQuality(EItemQualityType quality){ this->_object.Quality = quality; }

        EItemEffectType     GetEffectType()                     { return this->_object.dropEffType; }
        void                SetEffectType(EItemEffectType type) { this->_object.dropEffType = type; }

        private:
            CommonPriceInfo _priceInfo;
};
#endif // !ITEMDATA_HPP