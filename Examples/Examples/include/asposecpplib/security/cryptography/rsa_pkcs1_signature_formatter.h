/// @file security/cryptography/rsa_pkcs1_signature_formatter.h
#ifndef _security_rsa_pkcs1_signature_formatter_h_
#define _security_rsa_pkcs1_signature_formatter_h_

#include "security/cryptography/asymmetric_signature_formatter.h"

namespace System { namespace Security { namespace Cryptography {

namespace Details {
    /// Pointer implementation.
    struct RSAPKCS1SignatureFormatterPimpl;
}

/// Signs data with an RSA PKCS #1 v1.5 signature.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS RSAPKCS1SignatureFormatter : public AsymmetricSignatureFormatter
{
    /// Current type.
    typedef RSAPKCS1SignatureFormatter ThisType;
    /// Parent type.
    typedef AsymmetricSignatureFormatter BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Constructor.
    ASPOSECPP_SHARED_API RSAPKCS1SignatureFormatter();
    /// Constructor.
    /// @param key Algorithm to extract key from.
    ASPOSECPP_SHARED_API RSAPKCS1SignatureFormatter(const System::SharedPtr<AsymmetricAlgorithm>& key);
    /// Destructor.
    ASPOSECPP_SHARED_API ~RSAPKCS1SignatureFormatter();

    /// Signs data.
    /// @param rgbHash Hash for the data to sign.
    /// @return Calculated signature.
    virtual ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> CreateSignature(System::ArrayPtr<uint8_t> rgbHash) override;
    /// Sets hash algorithm to use.
    /// @param strName Hash algorithm name. Should be "SHA1", "SHA256", "SHA384" or "SHA512".
    virtual ASPOSECPP_SHARED_API void SetHashAlgorithm(System::String strName) override;
    /// Sets key value. Not implemented.
    /// @param key Algorithm to extract key from.
    virtual ASPOSECPP_SHARED_API void SetKey(System::SharedPtr<AsymmetricAlgorithm> key) override;

private:
    /// Implementation.
    std::unique_ptr<Details::RSAPKCS1SignatureFormatterPimpl> pimpl;
};

} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_rsa_pkcs1_signature_formatter_h_

