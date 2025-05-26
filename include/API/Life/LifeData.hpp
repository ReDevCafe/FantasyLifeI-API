#ifndef API_LIFEDATA_HPP
    #define API_LIFEDATA_HPP
    
    #include "Game/Life/UGDSLifeData.hpp"
    #include "API/Language.hpp"
    #include "API/GameObjectProxy.hpp"
    #include "GameData.hpp"
    #include "Utils.hpp"
    #include "ModLoader.hpp"

class LifeData : public GameObjectProxy<FGDLifeData>
{   
    public:
        LifeData(FGDLifeData& data) : GameObjectProxy(data){};

        FString&    Name(LANG lang);

        FString&    Description(LANG lang);
};

#endif //  API_LIFEDATA_HPP*/