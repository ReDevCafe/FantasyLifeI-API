#ifndef API_LIFEDATA_HPP
    #define API_LIFEDATA_HPP
    
    #include "GameObjectProxy.hpp"
    #include "Game/UGDSLifeData.hpp"
    #include "Language.hpp"
    #include "StaticData.hpp"
    #include "Utils.hpp"

class LifeData : public GameObjectProxy<FGDLifeData>
{   
    public:
        LifeData(FGDLifeData& data) : GameObjectProxy(data){};

        const wchar_t* getName(LANG lang);
        void           setName(LANG lang, FString);

        const wchar_t* getDescription(LANG lang);
};

#endif //  API_LIFEDATA_HPP*/