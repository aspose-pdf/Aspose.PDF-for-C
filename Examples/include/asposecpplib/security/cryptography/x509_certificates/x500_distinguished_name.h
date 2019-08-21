/// @file security/cryptography/x509_certificates/x500_distinguished_name.h
#ifndef _security_X500DistinguishedName_h_
#define _security_X500DistinguishedName_h_

#include "security/cryptography/x509_certificates/x500_distinguished_name_flags.h"
#include "security/cryptography/asn_encoded_data.h"

namespace System {

namespace Security {

namespace Cryptography {

namespace X509Certificates {

/// Represents distinguished name of X509 certificate.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS X500DistinguishedName FINAL : public AsnEncodedData
{
    /// This type.
    typedef X500DistinguishedName ThisType;
    /// Parent type.
    typedef AsnEncodedData BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Constructor.
    /// @param encodedDistinguishedName Object representing distinguished name.
    ASPOSECPP_SHARED_API X500DistinguishedName(const System::SharedPtr<AsnEncodedData>& encodedDistinguishedName);
    /// Constructor.
    /// @param encodedDistinguishedName Encoded distinguished name.
    ASPOSECPP_SHARED_API X500DistinguishedName(const ArrayPtr<uint8_t>& encodedDistinguishedName);
    /// Constructor.
    /// @param distinguishedName Distinguished name.
    ASPOSECPP_SHARED_API X500DistinguishedName(const String& distinguishedName);
    /// Copy constructor.
    /// @param distinguishedName Distinguished name to copy data from.
    ASPOSECPP_SHARED_API X500DistinguishedName(const System::SharedPtr<X500DistinguishedName>& distinguishedName);
    /// Constructor.
    /// @param distinguishedName Distinguished name.
    /// @param flag Bitwise-combined flags specifying name building properties.
    ASPOSECPP_SHARED_API X500DistinguishedName(const String& distinguishedName, System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);

    /// Gets certificate distinguished name.
    /// @return Name as stored internally.
    ASPOSECPP_SHARED_API String get_Name();

    /// Decodes name using parameters specified by flags.
    /// @param flag Bitwise junction of flags to use.
    /// @return Decoded name.
    ASPOSECPP_SHARED_API String Decode(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);
    /// Formats name for printing.
    /// @param multiLine Whether to use multiline output.
    /// @return X509 distinguished name in a readable form.
    ASPOSECPP_SHARED_API virtual String Format(bool multiLine) override;

private:
    /// Name value.
    String pr_Name;
};

} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_X500DistinguishedName_h_

