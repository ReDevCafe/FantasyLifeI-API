#ifndef CHARADATA_HPP
    #define CHARADATA_HPP

    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"
    #include "API/Language.hpp"
    #include "Export.h"

class ML_API CharaData : GameObjectProxy<FGDCharaData>
{
    public:
    CharaData(FGDCharaData& data) : GameObjectProxy(data)
    {};

    std::string GetIdentifier() const { return this->_object.ID.ToString(); };
    std::string GetFlag() const { return this->_object.Flag.ToString(); };

    protected:
    std::string GetNameIdentifier() const { return this->_object.nameId.ToString(); };

    public:
    std::string GetName(LANG lang);
    void        SetName(LANG lang, FString name);

    // PRESET
    std::string GetMoveSpeed() const { return this->_object.moveSpeed.ToString(); };
    std::string GetCraftMoveSpeed() const { return this->_object.CraftAreaMoveSpeed.ToString(); };

    EGenderType GetGender()                     { return   static_cast<EGenderType>(this->_object.gender); }
    void        SetGender(EGenderType gender)   { this->_object.gender = static_cast<char>(gender); }

    bool        GetIsAvatar()                   { return this->_object.IsAvatar; }
};

#endif // !CHARADATA_HPP