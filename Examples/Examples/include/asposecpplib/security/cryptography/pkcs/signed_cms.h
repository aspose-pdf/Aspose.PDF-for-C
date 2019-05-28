/// @file security/cryptography/pkcs/signed_cms.h
#ifndef signed_cms_h
#define signed_cms_h

#include "system/object.h"
#include "content_info.h"
#include "cms_signer.h"

namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

/// Signs content as per CMS/PKCS #7 standard.
/// Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SignedCms FINAL: public System::Object
{
public:
    /// Constructor.
    /// @param content Content to sign.
    /// @param detached Whether signature is detached.
    ASPOSECPP_SHARED_API SignedCms(const SharedPtr<ContentInfo> &content, bool detached);

    /// Creates a signature.
    /// @param signer Signer to use.
    /// @param silent Whether to suppress asking user for valid certificate if certificate associated with @p signer is not valid.
    ASPOSECPP_SHARED_API void ComputeSignature(const SharedPtr<CmsSigner>& signer, bool silent);

    /// Encodes CMS/PKCS #7 message.
    /// @return Complete message encoded into byte form.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> Encode();
};

}}}}// namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

#endif // signed_cms_h
