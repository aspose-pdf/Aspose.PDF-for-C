/// @file security/cryptography/rng_crypto_service_provider.h
#ifndef _security_cryptography_rng_crypto_service_provider_h_
#define _security_cryptography_rng_crypto_service_provider_h_

#include <security/cryptography/random_number_generator.h>
#include <memory>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <botan_1_11_34/auto_rng.h>
#endif


namespace Botan_1_11_34 {
    /// Forward declaration of AutoSeeded_RNG class.
    ASPOSECPP_3RD_PARTY_CLASS(AutoSeeded_RNG);
}


namespace System { namespace Security { namespace Cryptography {

/// Radom number generator that follows CSP notion.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS RNGCryptoServiceProvider final : public RandomNumberGenerator
{
public:
    /// Constructor.
    ASPOSECPP_SHARED_API RNGCryptoServiceProvider();
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~RNGCryptoServiceProvider();

    /// Fills existing array elements with random bytes.
    /// @param bytes Bytes array to fill.
    ASPOSECPP_SHARED_API void GetBytes(ArrayPtr<uint8_t> bytes) override;
    /// Fills existing array elements with random non-zero bytes.
    /// @param bytes Bytes array to fill.
    ASPOSECPP_SHARED_API void GetNonZeroBytes(ArrayPtr<uint8_t> bytes) override;

private:
    /// Actual generator.
    std::unique_ptr<Botan_1_11_34::AutoSeeded_RNG> m_rng;
};

}}}
#endif // _security_cryptography_rng_crypto_service_provider_h_
