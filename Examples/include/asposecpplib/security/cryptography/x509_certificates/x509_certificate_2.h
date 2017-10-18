#ifndef x509_certificate_2_h
#define x509_certificate_2_h

#include "x509_certificate.h"
#include "x509_name_type.h"
#include "x509_key_storage_flags.h"
#include "system/string.h"
#include "system/exceptions.h"
#include "security/cryptography/asymmetric_algorithm.h"
#include "security/cryptography/x509_certificates/x509_extension_collection.h"
#include <security/cryptography/x509_certificates/x500_distinguished_name.h>

namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

    class X509Certificate2 : public X509Certificate
    {
    public:
        X509Certificate2(System::ArrayPtr<uint8_t> rawData);

        X509Certificate2(System::ArrayPtr<uint8_t> rawData, System::String password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

        System::String GetNameInfo(X509NameType nameType, bool forIssuer);

        bool get_HasPrivateKey();
        SharedPtr<AsymmetricAlgorithm> get_PrivateKey();
        void set_PrivateKey(SharedPtr<AsymmetricAlgorithm> value);
        SharedPtr<X509ExtensionCollection> get_Extensions();
        System::ArrayPtr<uint8_t> get_RawData();
        SharedPtr<X500DistinguishedName> get_IssuerName();
        bool Verify();
        int get_Version();

    };

}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

#endif // x509_certificate_2_h
