/// @file security/cryptography/x509_certificates/x509_certificate_2.h
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

/// Represents X509 certificate.
/// Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS X509Certificate2 : public X509Certificate
{
public:
    /// Constructs empty X509Certificate2. Not implemented.
    ASPOSECPP_SHARED_API X509Certificate2();
    /// Constructor.
    /// @param rawData Sequence of bytes that represents encoded certificate.
    ASPOSECPP_SHARED_API X509Certificate2(const System::ArrayPtr<uint8_t>& rawData);
    /// Constructor.
    /// @param rawData Sequence of bytes that represents encoded certificate.
    /// @param password Certificate password.
    /// @param keyStorageFlags Flags indicating how to store key.
    ASPOSECPP_SHARED_API X509Certificate2(const System::ArrayPtr<uint8_t>& rawData, const System::String& password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    /// Constructor.
    /// @param filename File to load certificate from.
    /// @param password Certificate password.
    ASPOSECPP_SHARED_API X509Certificate2(const System::String& filename, const System::String& password);

    /// Gets subject or issuer name from certificate.
    /// @param nameType Name formatting options.
    /// @param forIssuer If true, returns issuer name, else returns subject name.
    /// @return Formatted issuer or subject name.
    ASPOSECPP_SHARED_API System::String GetNameInfo(X509NameType nameType, bool forIssuer);

    /// Checks whether the certificate has private key.
    /// @return True if private key existst, false otherwise.
    ASPOSECPP_SHARED_API bool get_HasPrivateKey();
    /// Gets private key associated with certificate.
    /// @return Private key object (or nullptr if unset).
    ASPOSECPP_SHARED_API SharedPtr<AsymmetricAlgorithm> get_PrivateKey();
    /// Sets or clears private key associated with certificate.
    /// @param value Private key object (or nullptr to unset).
    ASPOSECPP_SHARED_API void set_PrivateKey(const SharedPtr<AsymmetricAlgorithm>& value);
    /// Gets collection of extension objects associated with certificate.
    /// @return Collection of extensions.
    ASPOSECPP_SHARED_API SharedPtr<X509ExtensionCollection> get_Extensions();
    /// Gets certificate raw data.
    /// @return Raw byte data of the certificate.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> get_RawData();
    /// Gets the name of party that issued the certificate.
    /// @return Issuer name object.
    ASPOSECPP_SHARED_API SharedPtr<X500DistinguishedName> get_IssuerName();
    /// Verifies certificate chain.
    /// @return True if the certificate is valid, false otherwise.
    ASPOSECPP_SHARED_API bool Verify();
    /// Gets certificate format version.
    ASPOSECPP_SHARED_API int get_Version();

};

}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

#endif // x509_certificate_2_h
