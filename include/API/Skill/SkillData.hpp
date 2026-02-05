#ifndef SKILLDATA_HPP
    #define SKILLDATA_HPP

    #include "API/Common/CommonSkillParam.hpp"
    #include "API/Language.hpp"
    #include "SkillEffectInfo.hpp"
    #include "Export.h"
//TODO: Check how FGDSkillData works
class ML_API SkillData : public GameObjectProxy<FGDSkillData>
{
    public:
        SkillData(FGDSkillData& data) : 
            GameObjectProxy(data)
        {};

        std::string         GetIdentifier() const { return this->_object.ID.Name.ToString(); };

        ESkillCategory      GetCategory() const { return this->_object.Category; }
        void                SetCategory(ESkillCategory category) { this->_object.Category = category; }

        CommonSkillParam    GetParams() const { return CommonSkillParam(this->_object.Params); }

        std::string         GetNameIdentifier() const { return this->_object.nameTextID.ToString(); }
        std::string         GetName(LANG lang) const;
        void                SetName(LANG lang, FString name);

        std::string         GetDescIdentifier() const { return this->_object.dascTextId.ToString(); }
        std::string         GetDescription(LANG lang) const;
        void                SetDescription(LANG lang, FString name);

        ESkillIconType      GetIconType()                       { return static_cast<ESkillIconType>(this->_object.skillIconType); }
        void                SetIconType(ESkillIconType type)    { this->_object.skillIconType = static_cast<char>(type); }

        std::string         GetLifeLimit();

        uint8_t             GetSortOrder() const { return  this->_object.sortOrder; }
        void                SetSortOrder(int8_t value) { this->_object.sortOrder = value; }

        SkillEffectInfo     GetSkillEffect(int index);
        void                SetSkillEffect(int index, SkillEffectInfo value);
        void                AddSkillEffect(SkillEffectInfo value);

        bool                GetNotAggregated()                  { return  this->_object.notAggregated; }
        void                SetNotAggregated(bool value)        { this->_object.notAggregated = value; }

        ERarityType         GetRarity()                         { return  static_cast<ERarityType>(this->_object.rarity); }
        void                SetRarity(ERarityType value)        { this->_object.rarity = static_cast<char>(value); }
};

#endif // !SKILLDATA_HPP