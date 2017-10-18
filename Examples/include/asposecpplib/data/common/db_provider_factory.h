#ifndef _aspose_data_common_db_provider_factory_h_
#define _aspose_data_common_db_provider_factory_h_

#include <system/object.h>

namespace System { namespace Data { namespace Common {

class DbCommand;
class DbConnection;

class DbProviderFactory : public System::Object
{
    RTTI_INFO(System::Data::Common::DbProviderFactory, ::System::BaseTypesInfo<System::Object>)

public:

    virtual SharedPtr<DbCommand> CreateCommand() = 0;
    virtual SharedPtr<DbConnection> CreateConnection() = 0;

};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_provider_factory_h_