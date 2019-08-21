/// @file security/cryptography/triple_des_managed.h
#ifndef  _aspose_security_cryptography_triple_des_managed_h_
#define  _aspose_security_cryptography_triple_des_managed_h_

#include <security/cryptography/triple_des.h>

#include <defines.h>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <botan_1_11_31/cipher_mode.h>
#endif

namespace Botan_1_11_31 {
    /// Cipher_Dir enum forward declaration.
    ASPOSECPP_3RD_PARTY_ENUM(Cipher_Dir);
}


namespace System { namespace Security { namespace Cryptography {

/// Managed TripleDES implementation.
/// Only supports ECB and CFB modes with None padding and CBC mode with None, Zeros and PKCS7 paddings.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TripleDESManaged : public TripleDES
{
public:
    /// Creates encryptor object with parameters defined by algorithm object.
    using SymmetricAlgorithm::CreateEncryptor;
    /// Creates decryptor object with parameters defined by algorithm object.
    using SymmetricAlgorithm::CreateDecryptor;
    /// Creates encryptor object with explicit parameters.
    /// @param rgbKey Encryption key in byte array form.
    /// @param rgbIV Initial value in byte array form.
    /// @return Newly created encryptor object.
    ASPOSECPP_SHARED_API SharedPtr<ICryptoTransform> CreateEncryptor(System::ArrayPtr<uint8_t> rgbKey, System::ArrayPtr<uint8_t> rgbIV) override;
    /// Creates decryptor object with explicit parameters.
    /// @param rgbKey Encryption key in byte array form.
    /// @param rgbIV Initial value in byte array form.
    /// @return Newly created decryptor object.
    ASPOSECPP_SHARED_API SharedPtr<ICryptoTransform> CreateDecryptor(System::ArrayPtr<uint8_t> rgbKey, System::ArrayPtr<uint8_t> rgbIV) override;

    /// Creates random key and stores it in algorithm's internals.
    ASPOSECPP_SHARED_API void GenerateKey() override;
    /// Creates random initial value and stores it in algorithm's internals.
    ASPOSECPP_SHARED_API void GenerateIV() override;

private:
    /// Checks if current parameter set is supported.
    void check_implemented();
    /// Generates Botan-compatible parameter specification.
    std::string calc_algo_spec();

    /// Creates botan cipher and wraps it into transformer interface.
    /// @param rgbKey Key to use.
    /// @param rgbIV Initial value to use.
    /// @param direction Direction (encoding/decoding).
    /// @return Newly created transformer object.
    SharedPtr<ICryptoTransform> CreateTransformer(const System::ArrayPtr<uint8_t>& rgbKey, const System::ArrayPtr<uint8_t>& rgbIV, Botan_1_11_31::Cipher_Dir direction);
};

}}}

#endif
