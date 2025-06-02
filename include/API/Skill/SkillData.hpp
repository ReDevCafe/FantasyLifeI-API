#ifndef SKILLDATA_HPP
    #define SKILLDATA_HPP

    #include "Game/Skill/UGDSSkillData.hpp"
    #include "API/Common/CommonSkillParam.hpp"
    #include "API/Language.hpp"
    #include <vector>
    #include "SkillEffectInfo.hpp"

//TODO: Check how FGDSkillData works
class SkillData : public GameObjectProxy<FGDSkillData>
{
    public:
        SkillData(FGDSkillData& data) : 
            GameObjectProxy(data),
            _params{data.Params}
        {};

        std::string         GetIdentifier();

        ESkillCategory      GetCategory()                        { return this->_object.Category;}
        void                SetCategory(ESkillCategory category) { this->_object.Category = category; }

        CommonSkillParam    GetParams()                          { return _params; }

    protected:
        std::string         GetNameIdentifier();
    public:
        std::string         GetName(LANG lang);
        void                SetName(LANG lang, FString name);

    protected:
        std::string         GetDescIdentifier();
    public:
        std::string         GetDescription(LANG lang);
        void                SetDescription(LANG lang, FString name);

        ESkillIconType      GetIconType()                       { return this->_object.SkillIconType; }
        void                SetIconType(ESkillIconType type)    { this->_object.SkillIconType = type; }

        std::string         GetLifeLimit();

        uint8_t             GetSortOrder()                      { return  this->_object.sortOrder; }
        void                SetSortOrder(int8_t value)          { this->_object.sortOrder = value; }

        SkillEffectInfo     GetSkillEffect(int index);
        void                SetSkillEffect(int index, SkillEffectInfo value);
        void                AddSkillEffect(SkillEffectInfo value);

        bool                GetNotAggregated()                  { return  this->_object.notAggregated; }
        void                SetNotAggregated(bool value)        { this->_object.notAggregated = value; }

        ERarityType         GetRarity()                         { return  this->_object.Rarity; }
        void                SetRarity(ERarityType value)        { this->_object.Rarity = value; }

    private:    
        CommonSkillParam _params;
};

#endif // !SKILLDATA_HPP