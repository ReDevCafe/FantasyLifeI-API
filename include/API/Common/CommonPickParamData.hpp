#ifndef COMMONPICKPARAMDATA_HPP
    #define COMMONPICKPARAMDATA_HPP

    #include "CommonPickParamDataPickParam.hpp"
    #include "CommonPickStatusParam.hpp"
    #include <string>
    #include "Export.h"

class ML_API CommonPickParamData : GameObjectProxy<FGDCommonPickParamData>
{
    public:
        CommonPickParamData(FGDCommonPickParamData& data) : 
            GameObjectProxy(data)
        {};

        std::string                     GetIdentifier() const { return this->_object.ID.ToString(); };
        std::string                     GetGotIdentifier() const { return this->_object.gotId.ToString(); };
        CommonPickStatusParam           GetPickParamMin()       { return CommonPickStatusParam(this->_object.pickParamMin); }
        CommonPickStatusParam           GetPickParamMax()       { return CommonPickStatusParam(this->_object.pickParamMax); }
        CommonPickParamDataPickParam    GetPickInfo()           { return CommonPickParamDataPickParam(this->_object.commonPickInfo); }

        bool                            GetIsBoss()             { return  this->_object.isBoss; }
        void                            SetIsBoss(bool value)   { this->_object.isBoss = value; }

};

#endif // !COMMONPICKPARAMDATA_HPP