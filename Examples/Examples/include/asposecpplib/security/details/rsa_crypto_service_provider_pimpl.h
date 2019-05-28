/// @file security/details/rsa_crypto_service_provider_pimpl.h
#ifndef __RSACryptoServiceProviderPimpl_h__
#define __RSACryptoServiceProviderPimpl_h__

#include "botan_1_11_34/rsa.h"
#include "botan_1_11_34/system_rng.h"

namespace System { namespace Security { namespace Cryptography { namespace Details {

/// RSA crypto service provider implementation.
/// You shouldn't be creating it directly, use RSACryptoServiceProvider class instead.
struct RSACryptoServiceProviderPimpl
{
    /// Constructor.
    RSACryptoServiceProviderPimpl()
    {}

    /// Creates public key.
    /// @param modulus Modulus RSA parameter.
    /// @param exponent Exponent RSA parameter.
    void create_public_key(const System::ArrayPtr<uint8_t>& modulus, const System::ArrayPtr<uint8_t>& exponent)
    {
        using namespace Botan_1_11_34;

        m_public_key.reset(new RSA_PublicKey(
                BigInt(modulus->data().data(), modulus->data().size())
            , BigInt(exponent->data().data(), exponent->data().size())));
    }

    /// Creates private key.
    /// @param p P RSA parameter.
    /// @param q Q RSA parameter.
    /// @param e E RSA parameter.
    /// @param d D RSA parameter.
    /// @param n N RSA parameter.
    void create_private_key(const System::ArrayPtr<uint8_t>& p, const System::ArrayPtr<uint8_t>& q, const System::ArrayPtr<uint8_t>& e, const System::ArrayPtr<uint8_t>& d, const System::ArrayPtr<uint8_t>& n)
    {
        using namespace Botan_1_11_34;

        m_private_key.reset(new RSA_PrivateKey(
                BigInt(p->data().data(), p->data().size())
            , BigInt(q->data().data(), q->data().size())
            , BigInt(e->data().data(), e->data().size())
            , nullptr == d ? BigInt(0) : BigInt(d->data().data(), d->data().size())
            , nullptr == n ? BigInt(0) : BigInt(n->data().data(), n->data().size())));
    }

    /// Creates keys of specific size.
    /// @param bits Key length, bits.
    void create_keys(size_t bits) 
    {
        using namespace Botan_1_11_34;

        m_private_key.reset(new RSA_PrivateKey(system_rng(), bits));
        m_public_key.reset(new RSA_PublicKey(m_private_key->get_n(), m_private_key->get_e()));
    }

    /// Public key.
    std::unique_ptr<Botan_1_11_34::RSA_PublicKey> m_public_key;
    /// Private key.
    std::unique_ptr<Botan_1_11_34::RSA_PrivateKey> m_private_key;
};

}}}}

#endif
