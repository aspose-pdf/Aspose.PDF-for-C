/// @file security/cryptography/x509_certificates/x509_content_type.h
#ifndef system_security_cryptography_x509_certificates_x509_content_type_h_
#define system_security_cryptography_x509_certificates_x509_content_type_h_

namespace System { namespace Security { namespace Cryptography { namespace X509Certificates {

/// Format of X.509 certificate.
enum class X509ContentType
{
    /// Unknown certificate.
    Unknown = 0,
    /// Single certificate.
    Cert = 1,
    /// Serialized single certificate.
    SerializedCert = 2,
    /// PKCS #12-formatted certificate.
    Pkcs12 = 3,
    /// PFX-formatted certificate.
    Pfx = 3,
    /// Serialized cerificate store.
    SerializedStore = 4,
    /// Serfificated PKCS #7-formatted certificate.
    Pkcs7 = 5,
    /// Authenticode X.509 certificate.
    Authenticode = 6
};

}}}}

#endif
