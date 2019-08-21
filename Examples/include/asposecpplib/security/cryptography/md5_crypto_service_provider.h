/// @file security/cryptography/md5_crypto_service_provider.h
#ifndef _aspose_security_md5_crypto_service_provider_h_
#define _aspose_security_md5_crypto_service_provider_h_

#include <security/cryptography/md5.h>
#include <system/exceptions.h>

namespace System{ namespace Security{ namespace Cryptography{

/// CSP-compatible MD5 algorithm. Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS MD5CryptoServiceProvider : public MD5
{
public:
    /// Constructor. Not implemented.
    ASPOSECPP_SHARED_API MD5CryptoServiceProvider();
};

}}} // namespace System::Security::Cryptography

#endif // _aspose_security_md5_crypto_service_provider_h_
