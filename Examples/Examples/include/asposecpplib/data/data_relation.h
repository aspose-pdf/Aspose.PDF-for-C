/// @file data/data_relation.h
#pragma once

#include <system/object.h>

namespace System {
namespace Data {

class DataTable;

/// Describes parent-child relation between tables.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataRelation : public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Data::DataRelation, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets parent table information.
    /// @return Table object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Data::DataTable> get_ParentTable();
    /// Gets child table information.
    /// @return Table object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Data::DataTable> get_ChildTable();
};

}
}
