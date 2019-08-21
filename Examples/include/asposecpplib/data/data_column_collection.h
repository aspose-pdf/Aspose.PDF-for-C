/// @file data/data_column_collection.h
#pragma once

#include <system/object.h>
#include <cstdint>

namespace System {
namespace Data {

class DataColumn;

/// Encapsulates collection of data columns.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataColumnCollection : public System::Object 
{
    /// RTTI information.
    RTTI_INFO(System::Data::DataColumnCollection, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets number of columns in collection.
    /// @return Number of existing columns.
    ASPOSECPP_SHARED_API int32_t get_Count();
    /// Gets column by index.
    /// @param index Index of column to retrieve.
    /// @return Column of specified index.
    ASPOSECPP_SHARED_API System::SharedPtr<DataColumn> idx_get(const int32_t index);
    /// Looks for column in collection.
    /// @param columnName Name of column to look for.
    /// @return Column index if found, otherwise -1.
    ASPOSECPP_SHARED_API int32_t IndexOf(const System::String& columnName);
};

}
}
