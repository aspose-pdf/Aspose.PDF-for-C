/// @file security/cryptography/csp_parameters.h
#ifndef _security_cryptography_csp_parameters_h_
#define _security_cryptography_csp_parameters_h_

#include <system/string.h>
#include <system/object.h>

namespace System { namespace Security { namespace Cryptography {

/// Parameters of Cryptographic Service Provider.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS CspParameters FINAL : public System::Object
{
    /// This type.
    typedef CspParameters ThisType;
    /// Parent type.
    typedef System::Object BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Container's name.
    System::String KeyContainerName;
    /// Specifies whether asymmetric key is signature key or exchange key.
    int KeyNumber;
    /// CSP name.
    System::String ProviderName;
    /// CSP type.
    int ProviderType;

    /// Constructor.
    ASPOSECPP_SHARED_API CspParameters();
    /// Constructor.
    /// @param dwTypeIn Provider type code; ignored.
    ASPOSECPP_SHARED_API CspParameters(int dwTypeIn);
    /// Constructor.
    /// @param dwTypeIn Provider type code; ignored.
    /// @param strProviderNameIn Provider name; ignored.
    ASPOSECPP_SHARED_API CspParameters(int dwTypeIn, const System::String& strProviderNameIn);
    /// Constructor.
    /// @param dwTypeIn Provider type code; ignored.
    /// @param strProviderNameIn Provider name; ignored.
    /// @param strContainerNameIn Container name; ignored.
    ASPOSECPP_SHARED_API CspParameters(int dwTypeIn, const System::String& strProviderNameIn, const System::String& strContainerNameIn);

};

}}}

#endif // _security_cryptography_csp_parameters_h_

