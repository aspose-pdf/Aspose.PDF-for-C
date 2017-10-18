#ifndef _security_x509_extension_h_
#define _security_x509_extension_h_

#include "security/cryptography/asn_encoded_data.h"

namespace System {

namespace Security {

namespace Cryptography {

namespace X509Certificates {

class X509Extension : public System::Security::Cryptography::AsnEncodedData
{
    typedef X509Extension ThisType;
    typedef System::Security::Cryptography::AsnEncodedData BaseType;

    RTTI_INFO_DECL();
    FRIEND_FUNCTION_System_MakeObject
public:

    X509Extension(System::SharedPtr<System::Security::Cryptography::AsnEncodedData> encodedExtension, bool critical);
    X509Extension(System::SharedPtr<System::Security::Cryptography::Oid> oid, System::ArrayPtr<uint8_t> rawData, bool critical);
    X509Extension(System::String oid, System::ArrayPtr<uint8_t> rawData, bool critical);

    bool get_Critical();
    void set_Critical(bool value);

    virtual void CopyFrom(System::SharedPtr<System::Security::Cryptography::AsnEncodedData> asnEncodedData);

protected:

    X509Extension();

private:

    bool pr_Critical;

};

} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_x509_extension_h_

