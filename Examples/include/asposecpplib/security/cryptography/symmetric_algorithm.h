#ifndef _aspose_system_security_crypto_symmetric_algorithm_h_
#define _aspose_system_security_crypto_symmetric_algorithm_h_

#include "system/object.h"
#include "system/array.h"
#include "cipher_mode.h"
#include "key_sizes.h"
#include "padding_mode.h"
#include "i_crypto_transform.h"

namespace System{ namespace Security{ namespace Cryptography{

    class SymmetricAlgorithm : virtual public System::Object
    {
    public:
        virtual int get_BlockSize();
        virtual void set_BlockSize(int value);

        virtual int get_FeedbackSize();
        virtual void set_FeedbackSize(int value);

        virtual System::ArrayPtr<uint8_t> get_Key();
        virtual void set_Key(System::ArrayPtr<uint8_t> value);

        virtual System::ArrayPtr<uint8_t> get_IV();
        virtual void set_IV(System::ArrayPtr<uint8_t> value);

        virtual int get_KeySize();
        virtual void set_KeySize(int value);

        virtual CipherMode get_Mode();
        virtual void set_Mode(CipherMode value);

        virtual PaddingMode get_Padding();
        virtual void set_Padding(PaddingMode value);

        virtual SharedPtr<ICryptoTransform> CreateEncryptor();
        virtual SharedPtr<ICryptoTransform> CreateEncryptor(System::ArrayPtr<uint8_t> rgbKey, System::ArrayPtr<uint8_t> rgbIV) = 0;

        virtual SharedPtr<ICryptoTransform> CreateDecryptor();
        virtual SharedPtr<ICryptoTransform> CreateDecryptor(System::ArrayPtr<uint8_t> rgbKey, System::ArrayPtr<uint8_t> rgbIV) = 0;

        virtual void GenerateKey() = 0;
        virtual void GenerateIV() = 0;

        bool ValidKeySize(int bitLength);

        static SharedPtr<SymmetricAlgorithm> Create(String algName);

    protected:
        SymmetricAlgorithm(std::vector<SharedPtr<KeySizes>> block_sizes, std::vector<SharedPtr<KeySizes>> key_sizes);

        int                    m_block_size;
        int                    m_feedback_size;
        System::ArrayPtr<uint8_t> m_iv;
        System::ArrayPtr<uint8_t> m_key;
        std::vector<SharedPtr<KeySizes>>  m_legal_block_sizes;
        std::vector<SharedPtr<KeySizes>>  m_legal_key_sizes;
        int                    m_key_size;
        CipherMode             m_mode;
        PaddingMode            m_padding;
    };

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // _aspose_system_security_crypto_symmetric_algorithm_h_
