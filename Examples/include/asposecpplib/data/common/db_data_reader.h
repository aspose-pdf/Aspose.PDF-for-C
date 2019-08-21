/// @file data/common/db_data_reader.h
#ifndef _aspose_data_common_db_data_reader_h_
#define _aspose_data_common_db_data_reader_h_

#include <system/object.h>

namespace System { namespace Data { namespace Common {

/// API to receive data from database.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DbDataReader : public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Data::Common::DbDataReader, ::System::BaseTypesInfo<System::Object>)

public:
    /// Pointer type.
    typedef ASPOSECPP_SHARED_API SharedPtr<DbDataReader> Ptr;

    /// Gets named item.
    /// @param name Item name.
    /// @return Boxed item value.
    virtual ASPOSECPP_SHARED_API SharedPtr<Object> idx_get(String name) = 0;
    /// Gets item by index.
    /// @param ordinal Item index.
    /// @return Boxed item value.
    virtual ASPOSECPP_SHARED_API SharedPtr<Object> idx_get(int ordinal) = 0;

    /// Closes data retrieval channel.
    virtual ASPOSECPP_SHARED_API void Close() = 0;
    /// Reads next record from database.
    /// @return True if there are more rows, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Read() = 0;
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_data_reader_h_
