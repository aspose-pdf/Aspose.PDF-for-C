#ifndef _security_rsa_pkcs1_signature_formatter_h_
#define _security_rsa_pkcs1_signature_formatter_h_

#include "security/cryptography/asymmetric_signature_formatter.h"

namespace System {

namespace Security {

namespace Cryptography {

class RSAPKCS1SignatureFormatter : public AsymmetricSignatureFormatter
{
    typedef RSAPKCS1SignatureFormatter ThisType;
    typedef AsymmetricSignatureFormatter BaseType;

    RTTI_INFO_DECL();

public:

    RSAPKCS1SignatureFormatter();
    RSAPKCS1SignatureFormatter(System::SharedPtr<AsymmetricAlgorithm> key);

    virtual System::ArrayPtr<uint8_t> CreateSignature(System::ArrayPtr<uint8_t> rgbHash);
    virtual void SetHashAlgorithm(System::String strName);
    virtual void SetKey(System::SharedPtr<AsymmetricAlgorithm> key);

};

} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_rsa_pkcs1_signature_formatter_h_

