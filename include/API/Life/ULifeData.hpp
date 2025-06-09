
#ifndef ULIFEDATA_HPP
    #define ULIFEDATA_HPP

    #include "API/GameObjectProxy.hpp"
    #include "LifeData.hpp"
    #include <vector>

class ULifeData : public GameObjectProxy<UGDSLifeData>
{
    public: 
        ULifeData(UGDSLifeData& data) : GameObjectProxy(data)
        {
            for(int i = 0; i < data.m_dataMap.Data.Count; ++i)
                _lifeData.push_back(LifeData{data.m_dataMap.Data[i].Value.Second});
        };

        LifeData    GetLife(ELifeType life) const { return this->_lifeData[(uint8_t) life - 1]; }

    private:
        std::vector<LifeData> _lifeData;
};      


#endif // !ULIFEDATA_HPP