#ifndef COMMONSKILLPARAM_HPP
    #define COMMONSKILLPARAM_HPP

    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"

class CommonSkillParam : public GameObjectProxy<FGDStCommon_SkillParam>
{
    public:
        CommonSkillParam(FGDStCommon_SkillParam& data) : GameObjectProxy(data)
        {};

        FGDAuto GetParam(int index)                 { return  this->getObject().prm[index]; }
        void    SetParam(int index, FGDAuto param)  { this->getObject().prm[index] = param; }
};

#endif // !COMMONSKILLPARAM_HPP