/// @file data/data_column.h
#pragma once

#include <system/object.h>
#include <system/string.h>

namespace System {
namespace Data {

/// Describes column in data.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataColumn : public System::Object {
    /// RTTI information.
    RTTI_INFO(System::Data::DataColumn, ::System::BaseTypesInfo<System::Object>)
public:

    /// Gets column name.
    /// @return Column name.
    ASPOSECPP_SHARED_API System::String get_ColumnName();
};

}
}
