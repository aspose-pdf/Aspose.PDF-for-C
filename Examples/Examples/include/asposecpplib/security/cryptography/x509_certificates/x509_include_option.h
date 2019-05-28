/// @file security/cryptography/x509_certificates/x509_include_option.h
#ifndef _x509_include_option_h_
#define _x509_include_option_h_

namespace System { namespace Security { namespace Cryptography { namespace X509Certificates{

/// Specifies what certificates in chain to include.
enum class X509IncludeOption
{
    /// Chain information only.
    None = 0,
    /// Whole chain excluding root certificate.
    ExcludeRoot = 1,
    /// Whole chain excluding end certificate.
    EndCertOnly = 2,
    /// Whole chain.
    WholeChain = 3,
};

}}}}

#endif
