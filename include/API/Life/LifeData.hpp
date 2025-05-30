#ifndef API_LIFEDATA_HPP
    #define API_LIFEDATA_HPP
    
    #include "Game/Life/UGDSLifeData.hpp"
    #include "API/Language.hpp"
    #include "API/GameObjectProxy.hpp"

class LifeData : public GameObjectProxy<FGDLifeData>
{   
    public:
        LifeData(FGDLifeData& data) : GameObjectProxy(data){};

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

};

#endif //  API_LIFEDATA_HPP*/