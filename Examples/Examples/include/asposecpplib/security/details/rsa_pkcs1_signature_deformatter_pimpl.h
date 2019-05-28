/// @file security/details/rsa_pkcs1_signature_deformatter_pimpl.h
#ifndef __rsa_pkcs1_signature_deformatter_pimpl_h__
#define __rsa_pkcs1_signature_deformatter_pimpl_h__

#include <security/cryptography/rsa_crypto_service_provider.h>
#include <security/details/rsa_crypto_service_provider_pimpl.h>

#include <memory>
#include <string>
#include <botan_1_11_34/pubkey.h>

namespace System { namespace Security { namespace Cryptography { namespace Details {

/// RSA PKCS.1 signature checker implementation.
/// You shouldn't be creating it directly, use RSAPKCS1SignatureDeformatter class instead.
struct RSAPKCS1SignatureDeformatterPimpl
{
    /// Creates verifier object.
    void create_PK_Verifier()
    {
        System::SharedPtr<RSACryptoServiceProvider> rsa = System::DynamicCast<RSACryptoServiceProvider>(m_key);
        std::unique_ptr<Details::RSACryptoServiceProviderPimpl> &csp_pimpl = rsa->pimpl;

        m_pk_verifier.reset(new Botan_1_11_34::PK_Verifier(*csp_pimpl->m_public_key.get(), m_hash_function));
    }

    /// Hash function name.
    std::string m_hash_function;
    /// Algorithm that holds the key.
    System::WeakPtr<AsymmetricAlgorithm> m_key;
    /// Verifier object.
    std::unique_ptr<Botan_1_11_34::PK_Verifier> m_pk_verifier;
};

}}}}

#endif
