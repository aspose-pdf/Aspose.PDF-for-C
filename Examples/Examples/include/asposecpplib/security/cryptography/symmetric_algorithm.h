/// @file security/cryptography/symmetric_algorithm.h
#ifndef _aspose_system_security_crypto_symmetric_algorithm_h_
#define _aspose_system_security_crypto_symmetric_algorithm_h_

#include "system/object.h"
#include "system/array.h"
#include "cipher_mode.h"
#include "key_sizes.h"
#include "padding_mode.h"
#include "i_crypto_transform.h"

namespace System{ namespace Security{ namespace Cryptography{

/// Symmetric algorithm using same key for encryption and decryption base class.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SymmetricAlgorithm : virtual public System::Object
{
public:
    /// Gets block size of cryptographic operation.
    /// @return Block size in bits.
    virtual ASPOSECPP_SHARED_API int get_BlockSize();
    /// Sets block size of cryptographic operation.
    /// @param value Block size in bits.
    /// @throw CryptographicException If block size is not supported.
    virtual ASPOSECPP_SHARED_API void set_BlockSize(int value);

    /// Gets feedback size of cryptographic operation.
    /// @return Feedback size in bits.
    virtual ASPOSECPP_SHARED_API int get_FeedbackSize();
    /// Sets feedback size of cryptographic operation.
    /// @param value Feedback size in bits.
    /// @throw CryptographicException If feedback size is not supported.
    virtual ASPOSECPP_SHARED_API void set_FeedbackSize(int value);

    /// Gets key of cryptographic operation. Creates new if not created yet.
    /// @return Copy of key array.
    virtual ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> get_Key();
    /// Sets key of cryptographic operation.
    /// @param value Key to set.
    virtual ASPOSECPP_SHARED_API void set_Key(System::ArrayPtr<uint8_t> value);

    /// Gets initial value of cryptographic operation. Creates new if not created yet.
    /// @return Copy of initial value array.
    virtual ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> get_IV();
    /// Sets initial value of cryptographic operation.
    /// @param value Initial value to set.
    virtual ASPOSECPP_SHARED_API void set_IV(System::ArrayPtr<uint8_t> value);

    /// Gets key size of cryptographic operation.
    /// @return Key size in bits.
    virtual ASPOSECPP_SHARED_API int get_KeySize();
    /// Sets key size of cryptographic operation.
    /// @param value Key size in bits.
    /// @throw CryptographicException If key size is not valid.
    virtual ASPOSECPP_SHARED_API void set_KeySize(int value);

    /// Gets mode of cryptographic operation.
    /// @return Cipher mode.
    virtual ASPOSECPP_SHARED_API CipherMode get_Mode();
    /// Sets mode of cryptographic operation.
    /// @param value Cipher mode.
    virtual ASPOSECPP_SHARED_API void set_Mode(CipherMode value);

    /// Gets padding of cryptographic operation.
    /// @return Padding mode.
    virtual ASPOSECPP_SHARED_API PaddingMode get_Padding();
    /// Sets padding of cryptographic operation.
    /// @param value Padding mode.
    virtual ASPOSECPP_SHARED_API void set_Padding(PaddingMode value);

    /// Creates encryptor with parameters associated with algorithm object.
    /// @return Newly created encryptor object.
    virtual ASPOSECPP_SHARED_API SharedPtr<ICryptoTransform> CreateEncryptor();
    /// Creates encryptor with explicit parameters.
    /// @param rgbKey Key to use.
    /// @param rgbIV Initial value to use.
    /// @return Newly created encryptor object.
    virtual ASPOSECPP_SHARED_API SharedPtr<ICryptoTransform> CreateEncryptor(System::ArrayPtr<uint8_t> rgbKey, System::ArrayPtr<uint8_t> rgbIV) = 0;

    /// Creates decryptor with parameters associated with algorithm object.
    /// @return Newly created decryptor object.
    virtual ASPOSECPP_SHARED_API SharedPtr<ICryptoTransform> CreateDecryptor();
    /// Creates decryptor with explicit parameters.
    /// @param rgbKey Key to use.
    /// @param rgbIV Initial value to use.
    /// @return Newly created decryptor object.
    virtual ASPOSECPP_SHARED_API SharedPtr<ICryptoTransform> CreateDecryptor(System::ArrayPtr<uint8_t> rgbKey, System::ArrayPtr<uint8_t> rgbIV) = 0;

    /// Generates random key for the algorithm. Overrides existing one (if any).
    virtual ASPOSECPP_SHARED_API void GenerateKey() = 0;
    /// Generates random initial value for the algorithm. Overrides existing one (if any).
    virtual ASPOSECPP_SHARED_API void GenerateIV() = 0;

    /// Checks if key size is valid.
    /// @param bitLength Key size in bits.
    /// @return True if key size is valid, false otherwise.
    ASPOSECPP_SHARED_API bool ValidKeySize(int bitLength);

    /// Creates algorithm instance.
    /// @param algName Should be "Rijndael", "TripleDES" or "RC2".
    /// @return Newly created algorithm.
    static ASPOSECPP_SHARED_API SharedPtr<SymmetricAlgorithm> Create(const String& algName);

protected:
    /// Constructor.
    /// @param block_sizes Supported data block sizes.
    /// @param key_sizes Supported key sizes.
    ASPOSECPP_SHARED_API SymmetricAlgorithm(const std::vector<SharedPtr<KeySizes>>& block_sizes, const std::vector<SharedPtr<KeySizes>>& key_sizes);

    /// Block size.
    int                    m_block_size;
    /// Feedback size.
    int                    m_feedback_size;
    /// Initial value.
    System::ArrayPtr<uint8_t> m_iv;
    /// Key.
    System::ArrayPtr<uint8_t> m_key;
    /// Allowed block sizes.
    std::vector<SharedPtr<KeySizes>>  m_legal_block_sizes;
    /// Allowed key sizes.
    std::vector<SharedPtr<KeySizes>>  m_legal_key_sizes;
    /// Key size.
    int                    m_key_size;
    /// Direction.
    CipherMode             m_mode;
    /// Padding.
    PaddingMode            m_padding;
};

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // _aspose_system_security_crypto_symmetric_algorithm_h_
