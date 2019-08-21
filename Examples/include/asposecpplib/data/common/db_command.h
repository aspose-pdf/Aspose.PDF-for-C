/// @file data/common/db_command.h
#ifndef _aspose_data_common_db_command_h_
#define _aspose_data_common_db_command_h_

#include <system/shared_ptr.h>
#include <system/string.h>
#include <system/exceptions.h>

namespace System { namespace Data { namespace Common {

class DbDataReader;
class DbConnection;

/// Database command.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DbCommand : public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Data::Common::DbCommand, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets DB command text.
    /// @return Command text.
    virtual ASPOSECPP_SHARED_API String get_CommandText() const = 0;
    /// Sets DB command text.
    /// @param value Command text.
    virtual ASPOSECPP_SHARED_API void set_CommandText(String value) const = 0;

    /// Gets database connecton associated with command.
    /// @return Database connection.
    virtual ASPOSECPP_SHARED_API SharedPtr<System::Data::Common::DbConnection> get_Connection() const;
    /// Gets database connecton associated with command.
    /// @param value Database connection.
    virtual ASPOSECPP_SHARED_API void set_Connection(SharedPtr<System::Data::Common::DbConnection> value);

    /// Executes non-query command.
    /// @return Number of rows affected.
    virtual ASPOSECPP_SHARED_API int ExecuteNonQuery() = 0;
    /// Executes query command.
    /// @return Database data reader object.
    virtual ASPOSECPP_SHARED_API SharedPtr<DbDataReader> ExecuteReader();
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_command_h_
