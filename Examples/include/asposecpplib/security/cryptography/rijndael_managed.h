#ifndef rijndael_managed_h
#define rijndael_managed_h

#include "rijndael.h"
#include <defines.h>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <botan/cipher_mode.h>
#endif


namespace Botan {
    ASPOSECPP_3RD_PARTY_ENUM(Cipher_Dir);
}


namespace System{ namespace Security{ namespace Cryptography{

    // Only ECB mode with None padding is implemented, Aspose.Foundations does not use other modes.
    class RijndaelManaged : public Rijndael
    {
    public:
        using SymmetricAlgorithm::CreateEncryptor;
        using SymmetricAlgorithm::CreateDecryptor;

        SharedPtr<ICryptoTransform> CreateEncryptor(System::ArrayPtr<uint8_t> rgbKey, System::ArrayPtr<uint8_t> rgbIV) override;
        SharedPtr<ICryptoTransform> CreateDecryptor(System::ArrayPtr<uint8_t> rgbKey, System::ArrayPtr<uint8_t> rgbIV) override;

        void GenerateKey() override;
        void GenerateIV() override;

    private:
        void check_implemented();
        std::string calc_algo_spec();

        SharedPtr<ICryptoTransform> CreateTransformer(System::ArrayPtr<uint8_t> rgbKey, System::ArrayPtr<uint8_t> rgbIV, Botan::Cipher_Dir direction);
    };

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // rijndael_managed_h