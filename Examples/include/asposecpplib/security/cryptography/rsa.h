#ifndef _security_cryptography_rsa_h_
#define _security_cryptography_rsa_h_

#include <security/cryptography/asymmetric_algorithm.h>

namespace System { namespace Security { namespace Cryptography {

struct RSAParameters;

class ABSTRACT RSA : public AsymmetricAlgorithm
{
    typedef RSA ThisType;
    typedef AsymmetricAlgorithm BaseType;

    RTTI_INFO_DECL();

public:
    virtual ArrayPtr<uint8_t> DecryptValue(ArrayPtr<uint8_t> rgb) = 0;
    virtual ArrayPtr<uint8_t> EncryptValue(ArrayPtr<uint8_t> rgb) = 0;
    virtual RSAParameters ExportParameters(bool includePrivateParameters) = 0;
    virtual void ImportParameters(RSAParameters parameters) = 0;

    virtual void FromXmlString(String xmlString) override;
    virtual String ToXmlString(bool includePrivateParameters) override;

    static SharedPtr<RSA> Create();
    static SharedPtr<RSA> Create(String algName);

protected:
    RSA();
};

}}}

#endif // _security_cryptography_rsa_h_

