#ifndef SKILL_HPP_
    #define SKILL_HPP_

    #include <cstdint>

enum class ESkillIconType : uint8_t {
	None                                                             = 0,
	StatusUpSkill                                                    = 1,
	ActiveSkill                                                      = 2,
	PassiveSkill                                                     = 3
};

enum class ESkillCategory : uint8_t
{
	Invalid                                                          = 0,
	ChangeStatus                                                     = 1,
	GainTechnique                                                    = 10,
	AbilityRelease                                                   = 20,
	CondEquip                                                        = 21,
	SpecialTechniqueRelease                                          = 22,
	Minigame_GainTechnique                                           = 80,
	Minigame_ChangeStatus                                            = 81,
	Minigame_AbilityRelease                                          = 82
};

enum class EPassiveAddType : uint8_t
{
	None                                                            = 0,
	Once                                                            = 1,
	Continue                                                        = 2,
	Num                                                             = 3
};

#endif /* !SKILL_HPP_ */
