#ifndef CHARADATA_HPP
    #define CHARADATA_HPP

    #include "API/GameObjectProxy.hpp"
    #include "API/Language.hpp"

class CharaData : GameObjectProxy<FGDCharaData>
{
    public:
    CharaData(FGDCharaData& data) : GameObjectProxy(data)
    {};

    std::string GetIdentifier();
    std::string GetFlag();

    protected:
    std::string GetNameIdentifier();

    public:
    std::string GetName(LANG lang);
    void        SetName(LANG lang, FString name);

    // Dont know why it's a FName
    std::string GetMoveSpeed();
    std::string GetCraftMoveSpeed();

    EGenderType GetGender()                     { return   this->_object.gender; }
    void        SetGender(EGenderType gender)   { this->_object.gender = gender; }

    bool        GetIsAvatar()                   { return this->_object.IsAvatar; }
};

#endif // !CHARADATA_HPP