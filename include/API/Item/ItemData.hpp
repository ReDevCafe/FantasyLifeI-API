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

        std::string GetName(LANG lang);
        void        SetName(LANG lang, FString string);

};
#endif // !ITEMDATA_HPP