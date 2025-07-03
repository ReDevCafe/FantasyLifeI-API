#ifndef COMMONPICKPARAMDATA_HPP
    #define COMMONPICKPARAMDATA_HPP

    #include "CommonPickParamDataPickParam.hpp"
    #include "CommonPickStatusParam.hpp"
    #include "API/Common/CommonPickParamData.hpp"
    #include <string>
    #include "Export.h"

class ML_API CommonPickParamData : GameObjectProxy<FGDCommonPickParamData>
{
    public:
        CommonPickParamData(FGDCommonPickParamData& data) : 
            GameObjectProxy(data),
            _paramMin{data.pickParamMin},
            _paramMax{data.pickParamMax},
            _pickInfo{data.commonPickInfo}
        {};

        std::string                     GetIdentifier();
        std::string                     GetGotIdentifier();
        CommonPickStatusParam           GetPickParamMin()       { return _paramMin; }
        CommonPickStatusParam           GetPickParamMax()       { return _paramMax; }
        CommonPickParamDataPickParam    GetPickInfo()           { return _pickInfo; }

        bool                            GetIsBoss()             { return  this->_object.isBoss; }
        void                            SetIsBoss(bool value)   { this->_object.isBoss = value; }



    private:
        CommonPickStatusParam        _paramMin;
        CommonPickStatusParam        _paramMax;
        CommonPickParamDataPickParam _pickInfo;
};

#endif // !COMMONPICKPARAMDATA_HPP