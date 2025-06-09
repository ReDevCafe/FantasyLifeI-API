#include "API/Common/CommonItemTableSetting.hpp"
#include "Utils.hpp"
#include "Logger/ModLoaderLogger.hpp"

std::string CommonItemTableSetting::GetIdentifier()
{
    return Utils::FNameToString(this->_object.tableId);
}

ItemTableDetail CommonItemTableSetting::GetData(int index)
{
    if(index >= this->_object.tableData.Count)
        throw std::out_of_range("CommonItemTableSetting::GetData out of range.");

    return ItemTableDetail{this->_object.tableData.Data[index]};
}

void CommonItemTableSetting::SetData(int index, ItemTableDetail value)
{
    auto array = this->_object.tableData;
    int count = array.Count;
    if(array.Max == 0)
    {
        array.Max = 4;
        array.Data = new FGDStItem_ItemTableDetail[4];
    } else if (count >= array.Max)
    {
        FGDStItem_ItemTableDetail* newData = new FGDStItem_ItemTableDetail[count + 1];
        for(int i = 0; i < count; ++i)
            newData[i] = array.Data[i];
        
        delete[] array.Data;
        array.Data = newData;
        array.Max = count + 1;
    }

    array.Data[count] = value.getObject();
    array.Count = ++count;
}

void CommonItemTableSetting::AddData(ItemTableDetail value)
{
    this->SetData(this->_object.tableData.Count, value);
}