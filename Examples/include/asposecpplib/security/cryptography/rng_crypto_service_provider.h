#ifndef _security_cryptography_rng_crypto_service_provider_h_
#define _security_cryptography_rng_crypto_service_provider_h_

#include <security/cryptography/random_number_generator.h>
#include <memory>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <botan/auto_rng.h>
#endif


namespace Botan {
    ASPOSECPP_3RD_PARTY_CLASS(AutoSeeded_RNG);
}


namespace System { namespace Security { namespace Cryptography {

    class RNGCryptoServiceProvider final : public RandomNumberGenerator
    {
    public:
        RNGCryptoServiceProvider();
        virtual ~RNGCryptoServiceProvider();

        void GetBytes(ArrayPtr<uint8_t> bytes) override;
        void GetNonZeroBytes(ArrayPtr<uint8_t> bytes) override;

    private:
        std::unique_ptr<Botan::AutoSeeded_RNG> m_rng;
    };

}}}
#endif // _security_cryptography_rng_crypto_service_provider_h_
