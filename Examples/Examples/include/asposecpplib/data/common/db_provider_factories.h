/// @file data/common/db_provider_factories.h
#ifndef _aspose_data_common_db_provider_factories_h_
#define _aspose_data_common_db_provider_factories_h_

#include <system/exceptions.h>

namespace System { namespace Data { namespace Common {

class DbProviderFactory;

/// API to get DB provider factories.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DbProviderFactories
{
public:
    /// Gets DB provider factory by name.
    /// @param providerInvariantName Provider name (e. g. database vendor name).
    /// @return Provider factory.
    static ASPOSECPP_SHARED_API SharedPtr<DbProviderFactory> GetFactory(const String& providerInvariantName);
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_provider_factories_h_
