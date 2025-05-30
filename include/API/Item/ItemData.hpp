#ifndef ITEMDATA_HPP
    #define ITEMDATA_HPP

    #include "API/GameObjectProxy.hpp"
    #include "API/Language.hpp"
    #include "Game/Item/FGDItemData.hpp"

class ItemData : public GameObjectProxy<FGDItemData>
{
    public:
        ItemData(FGDItemData& data) : GameObjectProxy(data){};

        std::string GetIdentifier();

    protected:
        std::string GetNameIdentifier();
    public:
        std::string GetName(LANG lang);
        void        SetName(LANG lang, FString string);

    protected:
        std::string GetDescIdentifier();
    public:
        std::string GetDescription(LANG lang);
        void        SetDescription(LANG lang, FString string);

    protected:
        std::string GetOverwriteIconIdentifier();
    public:
        std::string GetOverwriteIcon();
        void        SetOverwriteIcon(ItemData data) { this->_object.overwriteIconName = data.getObject().overwriteIconName;  };


};
#endif // !ITEMDATA_HPP