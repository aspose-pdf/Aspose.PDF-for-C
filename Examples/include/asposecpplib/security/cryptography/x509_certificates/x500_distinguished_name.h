#ifndef _security_X500DistinguishedName_h_
#define _security_X500DistinguishedName_h_

#include "security/cryptography/x509_certificates/x500_distinguished_name_flags.h"
#include "security/cryptography/asn_encoded_data.h"

namespace System {

namespace Security {

namespace Cryptography {

namespace X509Certificates {

class X500DistinguishedName FINAL : public AsnEncodedData
{
    typedef X500DistinguishedName ThisType;
    typedef AsnEncodedData BaseType;

    RTTI_INFO_DECL();

public:

    X500DistinguishedName(System::SharedPtr<AsnEncodedData> encodedDistinguishedName);
    X500DistinguishedName(ArrayPtr<uint8_t> encodedDistinguishedName);
    X500DistinguishedName(String distinguishedName);
    X500DistinguishedName(System::SharedPtr<X500DistinguishedName> distinguishedName);
    X500DistinguishedName(String distinguishedName, System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);

    String get_Name();

    String Decode(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);
    virtual String Format(bool multiLine);

private:

    String pr_Name;

};

} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_X500DistinguishedName_h_

