/// @file data/data_row_collection.h
#pragma once

#include <system/object.h>
#include <cstdint>

namespace System {
namespace Data {

class DataRow;

/// Collection of data rows.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataRowCollection : public System::Object 
{
    /// RTTI information.
    RTTI_INFO(System::Data::DataRowCollection, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets row by index.
    /// @param index Row index in collection.
    /// @return Requested data row object.
    ASPOSECPP_SHARED_API System::SharedPtr<DataRow> idx_get(const int32_t index);
    /// Gets number of rows in collection.
    /// @return Number of existing rows.
    ASPOSECPP_SHARED_API int32_t get_Count();
};

}
}
