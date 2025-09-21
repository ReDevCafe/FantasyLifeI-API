#include "API/Common/CommonItemTableSetting.hpp"
#include "Engine/FNamePool.hpp"
#include "API/Engine/TArrayHelper.hpp"

std::string CommonItemTableSetting::GetIdentifier()
{
    return FNameUtils::GetString(this->_object.tableId);
}

ItemTableDetail CommonItemTableSetting::GetData(int index)
{
    auto raw = TArrayHelper<FGDStItem_ItemTableDetail>::Get(this->_object.tableData, index);
    return ItemTableDetail(raw);
}

void CommonItemTableSetting::SetData(int index, ItemTableDetail value)
{
    TArrayHelper<FGDStItem_ItemTableDetail>::Set(this->_object.tableData, index, value.getObject());
}

void CommonItemTableSetting::AddData(ItemTableDetail value)
{
    TArrayHelper<FGDStItem_ItemTableDetail>::Add(this->_object.tableData, value.getObject());
}