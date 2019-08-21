/// @file data/data_table_collection.h
#pragma once

#include <system/object.h>

namespace System {

class String;

namespace Data {

class DataTable;

/// Collection of data tables.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataTableCollection : public System::Object 
{
    /// RTTI information.
    RTTI_INFO(System::Data::DataTableCollection, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets table by name.
    /// @param name Table name.
    /// @return Table with specified name.
    ASPOSECPP_SHARED_API System::SharedPtr<DataTable> idx_get(const System::String& name);
};

}
}
