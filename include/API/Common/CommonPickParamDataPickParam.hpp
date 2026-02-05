#ifndef COMMONPICKPARAMDATAPICKPARAM
    #define COMMONPICKPARAMDATAPICKPARAM

    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"

class CommonPickParamDataPickParam : public GameObjectProxy<FGDCommonPickParamData_CommonPickParam>
{
    public:
        CommonPickParamDataPickParam(FGDCommonPickParamData_CommonPickParam& data) : GameObjectProxy(data){};
        
        float GetRadius()                       { return  this->_object.Radius; }
        void  SetRadius(float value)            { this->_object.Radius = value; }

        bool  GetIsChangeSweetSpot()            { return  this->_object.isChangeSweetSpot; }
        void  SetIsChangeSweetSpot(bool value)  { this->_object.isChangeSweetSpot = value; }

        float GetWalkAroundSpeed()              { return  this->_object.walkAroundSpeed; }
        void  SetWalkAroundSpeed(float value)   { this->_object.walkAroundSpeed = value; }

        float GetHitEffPosRate()                { return  this->_object.hitEffPosRate; }
        void  SetHitEffPosRate(float value)     { this->_object.hitEffPosRate = value; }

};

#endif // !COMMONPICKPARAMDATAPICKPARAM