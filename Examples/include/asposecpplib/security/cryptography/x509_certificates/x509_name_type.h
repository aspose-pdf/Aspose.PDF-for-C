#ifndef _x509_name_type_h_
#define _x509_name_type_h_

namespace System { namespace Security { namespace Cryptography { namespace X509Certificates{

    enum class X509NameType  {
        //     The simple name of a subject or issuer of an X509 certificate.
        SimpleName = 0,
        //     The email address of the subject or issuer associated of an X509 certificate.
        EmailName = 1,
        //     The UPN name of the subject or issuer of an X509 certificate.
        UpnName = 2,
        //     The DNS name associated with the alternative name of either the subject or issuer of an X509 certificate.
        DnsName = 3,
        //     The DNS name associated with the alternative name of either the subject or the issuer of an X.509 certificate.
        //     This value is equivalent to the System.Security.Cryptography.X509Certificates.X509NameType.DnsName value.
        DnsFromAlternativeName = 4,
        //     The URL address associated with the alternative name of either the subject or issuer of an X509 certificate.
        UrlName = 5,
    };
}}}}

#endif