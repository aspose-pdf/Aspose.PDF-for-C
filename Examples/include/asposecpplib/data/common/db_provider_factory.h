/// @file data/common/db_provider_factory.h
#ifndef _aspose_data_common_db_provider_factory_h_
#define _aspose_data_common_db_provider_factory_h_

#include <system/object.h>

namespace System { namespace Data { namespace Common {

class DbCommand;
class DbConnection;

/// Provider to access database.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DbProviderFactory : public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Data::Common::DbProviderFactory, ::System::BaseTypesInfo<System::Object>)

public:
    /// Creates command to send to database.
    /// @return Empty command to database covered by this provider.
    virtual ASPOSECPP_SHARED_API SharedPtr<DbCommand> CreateCommand() = 0;
    /// Creates database connection.
    /// @return Empty connection to database covered by this provider.
    virtual ASPOSECPP_SHARED_API SharedPtr<DbConnection> CreateConnection() = 0;
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_provider_factory_h_
