#include "API/Common/CommonItemTableSetting.hpp"
#include "API/Engine/FName.hpp"

std::string CommonItemTableSetting::GetIdentifier()
{
    return this->_object.tableId.ToString();
}

ItemTableDetail CommonItemTableSetting::GetData(int index)
{
    auto raw = this->_object.tableData.Get(index);
    return ItemTableDetail(raw);
}

void CommonItemTableSetting::SetData(int index, ItemTableDetail value)
{
    this->_object.tableData.Set(index, value.getObject());
}

void CommonItemTableSetting::AddData(ItemTableDetail value)
{
    this->_object.tableData.Add(value.getObject());
}