
#ifndef ULIFEDATA_HPP
    #define ULIFEDATA_HPP

    #include "API/GameObjectProxy.hpp"
    #include "LifeData.hpp"
    #include "Export.h"

class ML_API ULifeData : public GameObjectProxy<UGDSLifeData>
{
    public: 
        ULifeData(UGDSLifeData& data) : 
            GameObjectProxy(data)
        {};

        LifeData    GetLife(ELifeType life);
};      


#endif // !ULIFEDATA_HPP