/// @file security/cryptography/pkcs/cms_signer.h
#ifndef cms_signer_h
#define cms_signer_h

#include "system/object.h"
#include "security/cryptography/x509_certificates/x509_certificate_2.h"
#include "security/cryptography/x509_certificates/x509_include_option.h"
#include "security/cryptography/oid.h"

namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

/// Provides API to sign objects using CMS.
/// Doesn't sign objects by itself, use SignedCMS class to do so.
/// Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS CmsSigner FINAL: public System::Object
{
public:
    /// Initializes signer with X509 certificate.
    /// @param certificate Certificate to use for signing.
    ASPOSECPP_SHARED_API CmsSigner(const SharedPtr<X509Certificates::X509Certificate2>& certificate);

    /// Checks which certificates from the chain will be included into the signature.
    /// @return Enumeration value indicating which certificates to include.
    ASPOSECPP_SHARED_API X509Certificates::X509IncludeOption get_IncludeOption() const;
    /// Specifies which certificates from the chain will be included into the signature.
    /// @param value Enumeration value indicating which certificates to include.
    ASPOSECPP_SHARED_API void set_IncludeOption(X509Certificates::X509IncludeOption value);

    /// Gets hash algorithm using with signature.
    /// @return Oid algorithm pointer.
    ASPOSECPP_SHARED_API SharedPtr<Oid> get_DigestAlgorithm() const;
    /// Sets hash algorithm using with signature.
    /// @param value Oid algorithm pointer.
    ASPOSECPP_SHARED_API void set_DigestAlgorithm(const SharedPtr<Oid>& value);
};

}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

#endif // cms_signer_h
