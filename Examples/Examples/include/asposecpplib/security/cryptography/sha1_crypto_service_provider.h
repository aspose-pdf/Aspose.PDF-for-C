/// @file security/cryptography/sha1_crypto_service_provider.h
#ifndef _aspose_security_sha1_crypto_service_provider_h_
#define _aspose_security_sha1_crypto_service_provider_h_

#include <security/cryptography/sha1.h>
#include <system/exceptions.h>

namespace System{ namespace Security{ namespace Cryptography{

/// SHA1 CSP implementation.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SHA1CryptoServiceProvider : public SHA1
{
public:
    /// Constructor.
    SHA1CryptoServiceProvider() : SHA1()
    { }
};

}}} // namespace System::Security::Cryptography

#endif // _aspose_security_sha1_crypto_service_provider_h_
