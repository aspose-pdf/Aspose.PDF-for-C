/// @file security/cryptography/sha1_managed.h
#ifndef _aspose_security_cryptography_sha1_managed_h_
#define _aspose_security_cryptography_sha1_managed_h_

#include <security/cryptography/sha1.h>
#include <system/exceptions.h>

namespace System { namespace Security { namespace Cryptography {

/// Managed SHA1 hasher. Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SHA1Managed : public SHA1
{
public:
    /// Constructor.
    ASPOSECPP_SHARED_API SHA1Managed();
};

}}}

#endif // _aspose_security_cryptography_sha256_managed_h_
