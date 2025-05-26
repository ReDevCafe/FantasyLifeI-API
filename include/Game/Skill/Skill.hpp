#ifndef SKILL_HPP_
    #define SKILL_HPP_

    #include <cstdint>

enum class ESkillIconType : uint8_t {
	ESkillIconType__None                                                             = 0,
	ESkillIconType__StatusUpSkill                                                    = 1,
	ESkillIconType__ActiveSkill                                                      = 2,
	ESkillIconType__PassiveSkill                                                     = 3
};

#endif /* !SKILL_HPP_ */
