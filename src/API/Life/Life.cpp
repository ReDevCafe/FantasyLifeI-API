#include "API/Life/Life.hpp"

ELifeType Life::GetLifeTypeByName(std::string life)
{   
    if      (life == "life0000") return ELifeType::NoMakeup;
    else if (life == "life0001") return ELifeType::Knight;
    else if (life == "life0002") return ELifeType::Mercenary;
    else if (life == "life0003") return ELifeType::Hunter;
    else if (life == "life0004") return ELifeType::Wizard;
    else if (life == "life0005") return ELifeType::Miner;
    else if (life == "life0006") return ELifeType::Lumberjack;
    else if (life == "life0007") return ELifeType::Fisherman;
    else if (life == "life0008") return ELifeType::Farmer;
    else if (life == "life0009") return ELifeType::Cook;
    else if (life == "life0010") return ELifeType::Blacksmith;
    else if (life == "life0011") return ELifeType::Carpenter;
    else if (life == "life0012") return ELifeType::Needleworker;
    else if (life == "life0013") return ELifeType::Alchemist;
    else if (life == "life0014") return ELifeType::Artist;
    return ELifeType::None;
}