#ifndef INVENTORYINFOPLANTDUNGEONBRANCH_HPP
    #define INVENTORYINFOPLANTDUNGEONBRANCH_HPP

    #include "InventoryInfoCore.hpp"

class InventoryInfoPlantDungeonBranch : InventoryInfoCore
{
    InventoryInfoPlantDungeonBranch(FInventoryInfoPlantDungeonBranch& data) : InventoryInfoCore(data)
    {};

    uint32_t            GetSeed()                   { return  reinterpret_cast<FInventoryInfoPlantDungeonBranch*>(&this->_object)->seed; }
    void                SetSeed(uint32_t value)     { reinterpret_cast<FInventoryInfoPlantDungeonBranch*>(&this->_object)->seed = value; }

};

#endif // !INVENTORYINFOPLANTDUNGEONBRANCH_HPP