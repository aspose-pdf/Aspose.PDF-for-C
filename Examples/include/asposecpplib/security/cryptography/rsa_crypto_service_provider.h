#ifndef _security_cryptography_rsa_crypto_service_provider_h_
#define _security_cryptography_rsa_crypto_service_provider_h_

#include <system/io/stream.h>

#include "security/cryptography/rsa_parameters.h"
#include "security/cryptography/rsa.h"
#include "security/cryptography/i_csp_asymmetric_algorithm.h"

namespace System { namespace Security { namespace Cryptography {

class CspParameters;

class RSACryptoServiceProvider FINAL : public RSA, public ICspAsymmetricAlgorithm
{
    typedef RSACryptoServiceProvider ThisType;
    typedef RSA BaseType;
    typedef ICspAsymmetricAlgorithm BaseType1;
    typedef System::BaseTypesInfo<BaseType, BaseType1> ThisBaseTypesInfo;

    RTTI_INFO_DECL();

public:

    RSACryptoServiceProvider();
    RSACryptoServiceProvider(System::SharedPtr<CspParameters> parameters);
    RSACryptoServiceProvider(int dwKeySize);
    RSACryptoServiceProvider(int dwKeySize, System::SharedPtr<CspParameters> parameters);

    virtual System::String get_KeyExchangeAlgorithm();
    virtual int get_KeySize();
    bool get_PersistKeyInCsp();
    void set_PersistKeyInCsp(bool value);
    bool get_PublicOnly();
    virtual System::String get_SignatureAlgorithm();
    static bool get_UseMachineKeyStore();
    static void set_UseMachineKeyStore(bool value);

    System::ArrayPtr<uint8_t> Decrypt(System::ArrayPtr<uint8_t> rgb, bool fOAEP);
    virtual System::ArrayPtr<uint8_t> DecryptValue(System::ArrayPtr<uint8_t> rgb);
    System::ArrayPtr<uint8_t> Encrypt(System::ArrayPtr<uint8_t> rgb, bool fOAEP);
    virtual System::ArrayPtr<uint8_t> EncryptValue(System::ArrayPtr<uint8_t> rgb);
    System::ArrayPtr<uint8_t> ExportCspBlob(bool includePrivateParameters);
    virtual RSAParameters ExportParameters(bool includePrivateParameters);
    void ImportCspBlob(System::ArrayPtr<uint8_t> keyBlob);
    virtual void ImportParameters(RSAParameters parameters);
    System::ArrayPtr<uint8_t> SignData(System::ArrayPtr<uint8_t> buffer, System::SharedPtr<System::Object> halg);
    System::ArrayPtr<uint8_t> SignData(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::Object> halg);
    System::ArrayPtr<uint8_t> SignData(System::ArrayPtr<uint8_t> buffer, int offset, int count, System::SharedPtr<System::Object> halg);
    System::ArrayPtr<uint8_t> SignHash(System::ArrayPtr<uint8_t> rgbHash, System::String str);
    bool VerifyData(System::ArrayPtr<uint8_t> buffer, System::SharedPtr<System::Object> halg, System::ArrayPtr<uint8_t> signature);
    bool VerifyHash(System::ArrayPtr<uint8_t> rgbHash, System::String str, System::ArrayPtr<uint8_t> rgbSignature);

protected:

    virtual void Dispose(bool disposing);

private:

    System::String pr_KeyExchangeAlgorithm;
    int pr_KeySize;
    bool pr_PersistKeyInCsp;
    bool pr_PublicOnly;
    System::String pr_SignatureAlgorithm;
    static bool pr_UseMachineKeyStore;

};

}}}

#endif // _security_cryptography_rsa_crypto_service_provider_h_

