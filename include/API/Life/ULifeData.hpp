
#ifndef ULIFEDATA_HPP
    #define ULIFEDATA_HPP

    #include "API/GameObjectProxy.hpp"
    #include "Game/Life/UGDSLifeData.hpp"

class ULifeData : public GameObjectProxy<UGDSLifeData>
{
    public: 
        ULifeData(UGDSLifeData& data) : GameObjectProxy(data){};

        FGDLifeData&    getLife(ELifeType life);
};      


#endif // !ULIFEDATA_HPP