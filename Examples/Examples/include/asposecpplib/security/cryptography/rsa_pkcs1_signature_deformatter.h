/// @file security/cryptography/rsa_pkcs1_signature_deformatter.h
#ifndef _security_RSAPKCS1SignatureDeformatter_h_
#define _security_RSAPKCS1SignatureDeformatter_h_

#include "security/cryptography/asymmetric_signature_deformatter.h"

namespace System { namespace Security { namespace Cryptography {

namespace Details {
    /// Implementation structure to be owned by pointer.
    struct RSAPKCS1SignatureDeformatterPimpl;
}

/// Class to verify RSA PKCS #1 v1.5 signature.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS RSAPKCS1SignatureDeformatter : public AsymmetricSignatureDeformatter
{
    /// This type.
    typedef RSAPKCS1SignatureDeformatter ThisType;
    /// Parent type.
    typedef AsymmetricSignatureDeformatter BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Constructor.
    ASPOSECPP_SHARED_API RSAPKCS1SignatureDeformatter();
    /// Constructor.
    /// @param key Algorithm to extract key from.
    ASPOSECPP_SHARED_API RSAPKCS1SignatureDeformatter(const System::SharedPtr<AsymmetricAlgorithm>& key);

    /// Sets hash algorithm to use.
    /// @param strName Hash algorithm name. Should be "SHA1", "SHA256", "SHA384" or "SHA512".
    virtual ASPOSECPP_SHARED_API void SetHashAlgorithm(System::String strName) override;
    /// Sets key value. Not implemented.
    /// @param key Algorithm to extract key from.
    virtual ASPOSECPP_SHARED_API void SetKey(System::SharedPtr<AsymmetricAlgorithm> key) override;
    /// Verifies the signature of data hash.
    /// @param rgbHash Hash calculated for the data.
    /// @param rgbSignature Signature received for data.
    /// @return True if signature is valid, false otherwise.
    virtual ASPOSECPP_SHARED_API bool VerifySignature(System::ArrayPtr<uint8_t> rgbHash, System::ArrayPtr<uint8_t> rgbSignature) override;

private:
    /// Implementation.
    std::unique_ptr<Details::RSAPKCS1SignatureDeformatterPimpl> pimpl;
};

} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_RSAPKCS1SignatureDeformatter_h_

