#ifndef EFFECTCONDITION_HPP
    #define EFFECTCONDITION_HPP

    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"

class EffectCondition : public GameObjectProxy<FGDSkillData_EffCond>
{
    public:
        EffectCondition(FGDSkillData_EffCond& data) : GameObjectProxy(data)
        {};

        char        GetCondition()                      { return  this->_object.cond; }
        void        SetCondition(char value)            { this->_object.cond = value; }

        FGDAuto     GetArg(int index)                   { return this->_object.arg.Data[index]; }
        void        SetArg(int index, FGDAuto value)    { this->_object.arg.Data[index] = value; }
};

#endif // !EFFECTCONDITION_HPP
