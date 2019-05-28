/// @file data/data_row.h
#pragma once

#include <system/object.h>
#include <cstdint>
#include <system/array.h>

namespace System {
namespace Data {

class DataTable;
class DataRelation;

/// Row in the data set.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataRow : public System::Object 
{
    /// RTTI information.
    RTTI_INFO(System::Data::DataRow, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets object at specified column index.
    /// @param columnIndex Column to get data from.
    /// @return Boxed value.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> idx_get(const int32_t columnIndex);
    /// Gets table row belongs to.
    /// @return Table object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Data::DataTable> get_Table();
    /// Gets rows which are considered child through specified relation.
    /// @param relation Relation object to specify parent row - child row relation.
    /// @return Array of child rows retreived.
    ASPOSECPP_SHARED_API System::ArrayPtr<System::SharedPtr<System::Data::DataRow>> GetChildRows(const System::SharedPtr<System::Data::DataRelation>& relation);
};

}
}
