/// @file data/i_data_reader.h
#pragma once

#include <system/object.h>
#include <data/i_data_record.h>

namespace System {
namespace Data {

/// Interface to read consequental data from.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS IDataReader : public System::Data::IDataRecord 
{
    /// RTTI information.
    RTTI_INFO(System::Data::IDataReader, ::System::BaseTypesInfo<System::Data::IDataRecord>)

public:
    /// Moves to the next row.
    /// @return True if there are more rows, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Read() = 0;
};

}
}
