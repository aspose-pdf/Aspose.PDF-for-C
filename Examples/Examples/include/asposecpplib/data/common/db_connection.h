/// @file data/common/db_connection.h
#ifndef _aspose_data_common_db_connection_h_
#define _aspose_data_common_db_connection_h_

#include <system/exceptions.h>

namespace System { namespace Data { namespace Common {

/// Database connection.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DbConnection: public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Data::Common::DbConnection, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets connection information (e. g. server and port).
    /// @return Connection string.
    virtual ASPOSECPP_SHARED_API String get_ConnectionString() const = 0;
    /// Sets connection information (e. g. server and port).
    /// @param value Connection string.
    virtual ASPOSECPP_SHARED_API void set_ConnectionString(String value) const = 0;

    /// Opens connection to database.
    virtual ASPOSECPP_SHARED_API void Open() = 0;
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_connection_h_
