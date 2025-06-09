#include "API/Item/ItemUniqueSkillEquipData.hpp"

// TODO: change this
void ItemUniqueSkillEquipData::AddSkill(SkillData skill)
{
    auto data = reinterpret_cast<FGDItemUniqueSkillEquipData*>(&this->_object);
    TArray<FName>& array = data->SkillID;
    int count = array.Count;
    if(array.Max == 0)
    {
        array.Max = 4;
        array.Data = new FName[array.Max];
    } else if (count >= array.Max)
    {
        FName* newData = new FName[count + 1];
        for(int i = 0; i < count; ++i)
            newData[i] = array.Data[i];

        delete[] array.Data;
        array.Data = newData;
        array.Max = count + 1;
    }

    array.Data[count] = skill.getObject().ID.Name;
    array.Count = ++count;
}