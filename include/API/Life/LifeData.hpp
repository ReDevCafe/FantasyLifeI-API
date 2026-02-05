#ifndef API_LIFEDATA_HPP
    #define API_LIFEDATA_HPP
    
    #include "API/Language.hpp"
    #include "API/GameObjectProxy.hpp"
    #include "Export.h"
    #include "SDK.h"

class ML_API LifeData : public GameObjectProxy<FGDLifeData>
{   
    public:
        LifeData(FGDLifeData &data) : GameObjectProxy(data){};

    protected:
        std::string  GetNameIdentifier() const { return this->_object.nameId.ToString(); }
    public:
        std::string  GetName(LANG lang);
        void         SetName(LANG lang, FString string);

    protected:
        std::string  GetDescIdentifier() const { return this->_object.DescId.ToString(); }
    public:
        std::string  GetDescription(LANG lang);
        void         SetDescription(LANG lang, FString string);

};

#endif //  API_LIFEDATA_HPP