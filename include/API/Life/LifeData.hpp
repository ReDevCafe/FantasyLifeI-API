#ifndef API_LIFEDATA_HPP
    #define API_LIFEDATA_HPP
    
    #include "Game/Life/UGDSLifeData.hpp"
    #include "API/Language.hpp"
    #include "API/GameObjectProxy.hpp"

class LifeData : public GameObjectProxy<FGDLifeData>
{   
    public:
        LifeData(FGDLifeData& data) : GameObjectProxy(data){};

        std::string GetNameIdentifier();
        std::string GetName(LANG lang);
        void        SetName(LANG lang, FString string);

        std::string GetDescription(LANG lang);

};

#endif //  API_LIFEDATA_HPP*/