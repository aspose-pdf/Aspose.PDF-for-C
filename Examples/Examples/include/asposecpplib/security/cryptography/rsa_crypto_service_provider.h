/// @file security/cryptography/rsa_crypto_service_provider.h
#ifndef _security_cryptography_rsa_crypto_service_provider_h_
#define _security_cryptography_rsa_crypto_service_provider_h_

#include <system/io/stream.h>

#include "security/cryptography/rsa_parameters.h"
#include "security/cryptography/rsa.h"
#include "security/cryptography/i_csp_asymmetric_algorithm.h"

namespace System { namespace Security { namespace Cryptography {

class CspParameters;
namespace Details {
    struct RSACryptoServiceProviderPimpl;
    struct RSAPKCS1SignatureFormatterPimpl;
    struct RSAPKCS1SignatureDeformatterPimpl;
}

/// RSA algorithm in CSP form.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS RSACryptoServiceProvider FINAL : public RSA, public ICspAsymmetricAlgorithm
{
    /// Pointer implementation friendship.
    friend struct Details::RSAPKCS1SignatureFormatterPimpl;
    /// Pointer implementation friendship.
    friend struct Details::RSAPKCS1SignatureDeformatterPimpl;

    /// This type.
    typedef RSACryptoServiceProvider ThisType;
    /// Parent type 1.
    typedef RSA BaseType;
    /// Parent type 2.
    typedef ICspAsymmetricAlgorithm BaseType1;
    /// Parent types information.
    typedef System::BaseTypesInfo<BaseType, BaseType1> ThisBaseTypesInfo;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Constructor. Uses default parameters.
    ASPOSECPP_SHARED_API RSACryptoServiceProvider();
    /// Constructor. Not implemented.
    /// @param parameters Algorithm parameters.
    ASPOSECPP_SHARED_API RSACryptoServiceProvider(const System::SharedPtr<CspParameters>& parameters);
    /// Constructor.
    /// @param dwKeySize Key size in bits.
    ASPOSECPP_SHARED_API RSACryptoServiceProvider(int dwKeySize);
    /// Constructor. Not implemented.
    /// @param dwKeySize Key size in bits.
    /// @param parameters Algorithm parameters.
    ASPOSECPP_SHARED_API RSACryptoServiceProvider(int dwKeySize, const System::SharedPtr<CspParameters>& parameters);

    /// Checks key exchange algorithm associated with object.
    /// @return Key exchange algorithm name.
    virtual ASPOSECPP_SHARED_API System::String get_KeyExchangeAlgorithm() override;
    /// Gets key size used by algorithm.
    /// @return Key size in bits.
    virtual ASPOSECPP_SHARED_API int get_KeySize() override;
    /// Checks whether key is persisted in CSP object.
    /// @return True if key is persisted, false otherwise.
    ASPOSECPP_SHARED_API bool get_PersistKeyInCsp();
    /// Defines whether key is persisted in CSP object.
    /// @param value True to persist the key, false otherwise.
    ASPOSECPP_SHARED_API void set_PersistKeyInCsp(bool value);
    /// Checks if public key only is present in CSP object.
    /// @return True if public key is present and private one is not, false otherwise.
    ASPOSECPP_SHARED_API bool get_PublicOnly();
    /// Gets signature algorithm associated with CSP object.
    /// @return Signature algorithm name.
    virtual ASPOSECPP_SHARED_API System::String get_SignatureAlgorithm() override;
    /// Checks whether the key persists in machine store instead of user store.
    /// @return True if the key should be persisted in machine store, false if it should be persisted in user store.
    static ASPOSECPP_SHARED_API bool get_UseMachineKeyStore();
    /// Defines whether the key persists in machine store instead of user store.
    /// @param value True if the key should be persisted in machine store, false if it should be persisted in user store.
    static ASPOSECPP_SHARED_API void set_UseMachineKeyStore(bool value);

    /// Decrypts message. Not implemented.
    /// @param rgb Data to decrypt.
    /// @param fOAEP True to use OAEP padding, false to use PKCS#1 v1.5 padding.
    /// @return Decrypted data array.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> Decrypt(const System::ArrayPtr<uint8_t>& rgb, bool fOAEP);
    /// Decrypts message. Not implemented.
    /// @param rgb Data to decrypt.
    /// @return Decrypted data array.
    virtual ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> DecryptValue(System::ArrayPtr<uint8_t> rgb) override;
    /// Encrypts message. Not implemented.
    /// @param rgb Data to encrypt.
    /// @param fOAEP True to use OAEP padding, false to use PKCS#1 v1.5 padding.
    /// @return Encrypted data array.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> Encrypt(const System::ArrayPtr<uint8_t>& rgb, bool fOAEP);
    /// Encrypts message. Not implemented.
    /// @param rgb Data to encrypt.
    /// @return Encrypted data array.
    virtual ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> EncryptValue(System::ArrayPtr<uint8_t> rgb) override;
    /// Exports blob with information on key. Not implemented.
    /// @param includePrivateParameters Whether to include private key parameters in blob.
    /// @return Blob with key information.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> ExportCspBlob(bool includePrivateParameters) override;
    /// Exports CSP parameters.
    /// @param includePrivateParameters Whether to include private key parameters in blob.
    /// @return Data structure with CSP parameters.
    virtual ASPOSECPP_SHARED_API RSAParameters ExportParameters(bool includePrivateParameters) override;
    /// Imports blob with information on key. Not implemented.
    /// @param keyBlob Previously exported blob with key information.
    ASPOSECPP_SHARED_API void ImportCspBlob(System::ArrayPtr<uint8_t> keyBlob) override;
    /// Imports CSP parameters.
    /// @param parameters Data structure with CSP parameters.
    virtual ASPOSECPP_SHARED_API void ImportParameters(RSAParameters parameters) override;
    /// Computes the signature of specified input value. Not implemented.
    /// @param buffer Buffer to read input data from.
    /// @param halg Hash algorithm to use.
    /// @return RSA signature for specified data.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> SignData(const System::ArrayPtr<uint8_t>& buffer, const System::SharedPtr<System::Object>& halg);
    /// Computes the signature of specified input value. Not implemented.
    /// @param inputStream Stream to read data being signed from.
    /// @param halg Hash algorithm to use.
    /// @return RSA signature for specified data.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> SignData(const System::SharedPtr<System::IO::Stream>& inputStream, const System::SharedPtr<System::Object>& halg);
    /// Computes the signature of specified input value. Not implemented.
    /// @param buffer Buffer to read input data from.
    /// @param offset Input buffer slice beginning index.
    /// @param count Input buffer slice size.
    /// @param halg Hash algorithm to use.
    /// @return RSA signature for specified data.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> SignData(const System::ArrayPtr<uint8_t>& buffer, int offset, int count, const System::SharedPtr<System::Object>& halg);
    /// Computes the signature of specified input value. Not implemented.
    /// @param rgbHash Hash value of data to be signed.
    /// @param str Hash algorithm identifier used to create the hash.
    /// @return RSA signature for specified data.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> SignHash(const System::ArrayPtr<uint8_t>& rgbHash, const System::String& str);
    /// Checks data signature. Not implemented.
    /// @param buffer Data to check signature for.
    /// @param halg Hash algorithm to use.
    /// @param signature Signature as received.
    /// @return True if signature is valid, false otherwise.
    ASPOSECPP_SHARED_API bool VerifyData(const System::ArrayPtr<uint8_t>& buffer, const System::SharedPtr<System::Object>& halg, const System::ArrayPtr<uint8_t>& signature);
    /// Checks data signature. Not implemented.
    /// @param rgbHash Hash calculated for received data.
    /// @param str Name of hash algorithm used.
    /// @param rgbSignature Signature as received.
    /// @return True if signature is valid, false otherwise.
    ASPOSECPP_SHARED_API bool VerifyHash(const System::ArrayPtr<uint8_t>& rgbHash, const System::String& str, const System::ArrayPtr<uint8_t>& rgbSignature);

protected:
    /// Frees data associated with object. Not implemented.
    /// @param disposing True if called from disposing procedure, false otherwise.
    virtual ASPOSECPP_SHARED_API void Dispose(bool disposing);

private:
    /// Key exchange algorithm name.
    System::String pr_KeyExchangeAlgorithm;
    /// Key size in bits.
    int pr_KeySize;
    /// Whether the key is persisted in CSP object.
    bool pr_PersistKeyInCsp;
    /// Whether public key is the only one avaiable.
    bool pr_PublicOnly;
    /// Signature algorithm name.
    System::String pr_SignatureAlgorithm;
    /// True to use machine store for private key, false to use user store.
    static bool pr_UseMachineKeyStore;

private:
    /// Implementation.
    std::unique_ptr<Details::RSACryptoServiceProviderPimpl> pimpl;
};

}}}

#endif // _security_cryptography_rsa_crypto_service_provider_h_

