#ifndef system_security_cryptography_x509_certificates_x509_content_type_h_
#define system_security_cryptography_x509_certificates_x509_content_type_h_

namespace System { namespace Security { namespace Cryptography { namespace X509Certificates {

    // Summary:
    //     Specifies the format of an X.509 certificate.
    enum class X509ContentType
    {
        // Summary:
        //     An unknown X.509 certificate.
        Unknown = 0,
        //
        // Summary:
        //     A single X.509 certificate.
        Cert = 1,
        //
        // Summary:
        //     A single serialized X.509 certificate.
        SerializedCert = 2,
        //
        // Summary:
        //     A PKCS #12-formatted certificate. The Pkcs12 value is identical to the Pfx
        //     value.
        Pkcs12 = 3,
        //
        // Summary:
        //     A PFX-formatted certificate. The Pfx value is identical to the Pkcs12 value.
        Pfx = 3,
        //
        // Summary:
        //     A serialized store.
        SerializedStore = 4,
        //
        // Summary:
        //     A PKCS #7-formatted certificate.
        Pkcs7 = 5,
        //
        // Summary:
        //     An Authenticode X.509 certificate.
        Authenticode = 6
    };
}}}}

#endif