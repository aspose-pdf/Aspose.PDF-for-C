#ifndef _aspose_data_common_db_provider_factories_h_
#define _aspose_data_common_db_provider_factories_h_

#include <system/exceptions.h>

namespace System { namespace Data { namespace Common {

class DbProviderFactory;

class DbProviderFactories
{
public:

    static SharedPtr<DbProviderFactory> GetFactory(String providerInvariantName);
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_provider_factories_h_