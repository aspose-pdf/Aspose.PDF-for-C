/// @file security/details/rsa_pkcs1_signature_formatter_pimpl.h
#ifndef __RSAPKCS1SignatureFormatterPimpl_h__
#define __RSAPKCS1SignatureFormatterPimpl_h__

#include <security/cryptography/rsa_crypto_service_provider.h>
#include <security/details/rsa_crypto_service_provider_pimpl.h>

#include <memory>
#include <string>
#include <botan_1_11_34/pubkey.h>


namespace System { namespace Security { namespace Cryptography { namespace Details {
   

/// RSA PKCS.1 signature creator implementation.
/// You shouldn't be creating it directly, use RSAPKCS1SignatureFormatter class instead.
struct RSAPKCS1SignatureFormatterPimpl
{   
    /// Constructor
    RSAPKCS1SignatureFormatterPimpl()
        : m_hash_function("Raw")
    {}
    /// Destructor.
    ~RSAPKCS1SignatureFormatterPimpl()
    {}

    /// Creates signer object.
    void create_PK_Signer()
    {
        System::SharedPtr<RSACryptoServiceProvider> rsa = System::DynamicCast<RSACryptoServiceProvider>(m_key);
        std::unique_ptr<Details::RSACryptoServiceProviderPimpl> &csp_pimpl = rsa->pimpl;

        m_pk_signer.reset(new Botan_1_11_34::PK_Signer(*csp_pimpl->m_private_key.get(), Botan_1_11_34::system_rng(), m_hash_function));
    }

    /// Hash function name.
    std::string m_hash_function;
    /// Algorithm that holds the key.
    System::WeakPtr<AsymmetricAlgorithm> m_key;
    /// Signer object.
    std::unique_ptr<Botan_1_11_34::PK_Signer> m_pk_signer;
};

}}}}

#endif
