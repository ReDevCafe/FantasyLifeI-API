#ifndef ITEMDATA_HPP
    #define ITEMDATA_HPP

    #include "API/Language.hpp"
    #include "API/Common/CommonPriceInfo.hpp"
    #include "Export.h"

class ML_API ItemData : public GameObjectProxy<FGDItemData>
{
    public:
        ItemData(FGDItemData& data) : GameObjectProxy(data){};

        std::string         GetIdentifier() const { return this->_object.ID.ToString(); };

        std::string         GetNameIdentifier() const { return this->_object.nameId.ToString(); };
        std::string         GetName(LANG lang);
        void                SetName(LANG lang, FString string);

        std::string         GetDescIdentifier() const { return this->_object.DescId.ToString(); };
        std::string         GetDescription(LANG lang);
        void                SetDescription(LANG lang, FString string);

        std::string         GetOverwriteIconIdentifier() const { return this->_object.overwriteIconName.ToString(); };
        std::string         GetOverwriteIcon() const { return this->_object.overwriteIconName.ToString(); };
        void                SetOverwriteIcon(ItemData data)     { this->_object.overwriteIconName = data.getObject().overwriteIconName;  };

        uint32_t            GetSortOrder() const { return this->_object.sortOrder; }
        void                SetSortOrder(uint32_t value)       { this->_object.sortOrder = value; }

        EItemCategory       GetCategory()                       { return static_cast<EItemCategory>(this->_object.Category); }
        void                SetCategory(EItemCategory value)    { this->_object.Category = static_cast<char>(value); }

        EItemType           GetType()                           { return static_cast<EItemType>(this->_object.Type); }
        void                SetType(EItemType type)             { this->_object.Type = static_cast<char>(type); }

        char                GetSeries() const { return this->_object.series; }
        void                SetSeries(char series)              { this->_object.series = series; }

        char                GetSeType() const { return this->_object.seType; }
        void                SetSeType(char a)                   { this->_object.seType = a; }

        uint16_t            GetStackMax() const { return this->_object.StackMax; }
        void                SetStackMax(uint16_t value)         { this->_object.StackMax = value; }

        bool                GetDisableSoldAbadon() const { return this->_object.disableSoldAbadon; }
        void                SetDisableSoldAbadon(bool value)     { this->_object.disableSoldAbadon = value; }

        bool                GetDisableUsedInventory() const { return this->_object.disableUsedInventory; }
        void                SetDisableUsedInventory(bool value) { this->_object.disableUsedInventory = value; }

        bool                GetDisableBadRegister() const { return this->_object.disableBagRegist; }
        void                SetDisableBadRegister(bool value) { this->_object.disableBagRegist = value; }

        bool                GetDisablePresentToNpc() const { return this->_object.disablePresentToNPC; }
        void                SetDisablePresentToNpc(bool value) { this->_object.disablePresentToNPC = value; }

        bool                GetDisablePresentToMulti() const { return this->_object.disablePresentToMultiplay; }
        void                SetDisablePresentToMulti(bool value) { this->_object.disablePresentToMultiplay = value; }

        CommonPriceInfo     GetPriceInfo() const { return CommonPriceInfo(this->_object.priceInfo); }

        ERarityType         GetRarityType()                     { return static_cast<ERarityType>(this->_object.rarity); }
        void                SetRarityType(ERarityType type)     { this->_object.rarity = static_cast<char>(type); }

        EItemQualityType    GetQuality()                        { return static_cast<EItemQualityType>(this->_object.Quality); }
        void                SetQuality(EItemQualityType quality){ this->_object.Quality = static_cast<char>(quality); }

        EItemEffectType     GetEffectType()                     { return static_cast<EItemEffectType>(this->_object.dropEffType); }
        void                SetEffectType(EItemEffectType type) { this->_object.dropEffType = static_cast<char>(type); }
};
#endif // !ITEMDATA_HPP