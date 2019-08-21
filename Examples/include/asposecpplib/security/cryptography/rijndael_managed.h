/// @file security/cryptography/rijndael_managed.h
#ifndef rijndael_managed_h
#define rijndael_managed_h

#include "rijndael.h"
#include <defines.h>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <botan_1_11_34/cipher_mode.h>
#endif


namespace Botan_1_11_34 {
    /// Forward declaration of Cipher_Dir type.
    ASPOSECPP_3RD_PARTY_ENUM(Cipher_Dir);
}


namespace System{ namespace Security{ namespace Cryptography{

/// Managed Rijndael algorithm.
/// Only supports ECB and CFB modes with None padding and CBC mode with None and Zeros paddings.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS RijndaelManaged : public Rijndael
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
    /// Checks whether current parameters are supported.
    void check_implemented();
    /// Generates Botan-compatible algorithm specification string based on algorithm's parameters.
    std::string calc_algo_spec(int keySize);

    /// Creates botan cipher and wraps it into transformer interface.
    /// @param rgbKey Key to use.
    /// @param rgbIV Initial value to use.
    /// @param direction Direction (encoding/decoding).
    /// @return Newly created transformer object.
    SharedPtr<ICryptoTransform> CreateTransformer(const System::ArrayPtr<uint8_t>& rgbKey, const System::ArrayPtr<uint8_t>& rgbIV, Botan_1_11_34::Cipher_Dir direction);
};

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // rijndael_managed_h
