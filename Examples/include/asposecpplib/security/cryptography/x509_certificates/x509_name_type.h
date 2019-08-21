/// @file security/cryptography/x509_certificates/x509_name_type.h
#ifndef _x509_name_type_h_
#define _x509_name_type_h_

namespace System { namespace Security { namespace Cryptography { namespace X509Certificates{

/// Type of X.509 certificate-contained name which relates to either issuer or subject of the certificate.
enum class X509NameType  {
    /// Simple name of subject or issuer.
    SimpleName = 0,
    /// Email address.
    EmailName = 1,
    /// UPN name.
    UpnName = 2,
    /// DNS name.
    DnsName = 3,
    /// Alternative DNS name equivalent to DNS name.
    DnsFromAlternativeName = 4,
    /// URL.
    UrlName = 5,
};

}}}}

#endif
