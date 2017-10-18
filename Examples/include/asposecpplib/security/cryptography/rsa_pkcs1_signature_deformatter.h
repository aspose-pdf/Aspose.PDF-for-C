#ifndef _security_RSAPKCS1SignatureDeformatter_h_
#define _security_RSAPKCS1SignatureDeformatter_h_

#include "security/cryptography/asymmetric_signature_deformatter.h"

namespace System {

namespace Security {

namespace Cryptography {

class RSAPKCS1SignatureDeformatter : public AsymmetricSignatureDeformatter
{
    typedef RSAPKCS1SignatureDeformatter ThisType;
    typedef AsymmetricSignatureDeformatter BaseType;

    RTTI_INFO_DECL();

public:

    RSAPKCS1SignatureDeformatter();
    RSAPKCS1SignatureDeformatter(System::SharedPtr<AsymmetricAlgorithm> key);

    virtual void SetHashAlgorithm(System::String strName);
    virtual void SetKey(System::SharedPtr<AsymmetricAlgorithm> key);
    virtual bool VerifySignature(System::ArrayPtr<uint8_t> rgbHash, System::ArrayPtr<uint8_t> rgbSignature);

};

} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_RSAPKCS1SignatureDeformatter_h_

