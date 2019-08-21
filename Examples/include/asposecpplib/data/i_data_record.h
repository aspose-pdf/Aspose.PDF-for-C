/// @file data/i_data_record.h
#pragma once

#include <system/object.h>
#include <cstdint>
#include <system/string.h>

namespace System {
namespace Data {

/// Interface to record with columns.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS IDataRecord : virtual public System::Object 
{
    /// RTTI information.
    RTTI_INFO(System::Data::IDataRecord, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets number of fields in the record.
    /// @return Number of fields in current record.
    virtual ASPOSECPP_SHARED_API int32_t get_FieldCount() = 0;
    /// Gets name of field at specified position.
    /// @param index Index to get name of field at.
    /// @return Feild name at specified index.
    virtual ASPOSECPP_SHARED_API System::String GetName(const int32_t index) = 0;
    /// Gets value at speified index.
    /// @param index Index to get field value at.
    /// @return Boxed field value.
    virtual ASPOSECPP_SHARED_API System::SharedPtr<System::Object> idx_get(const int32_t index) = 0;
};

}
}
