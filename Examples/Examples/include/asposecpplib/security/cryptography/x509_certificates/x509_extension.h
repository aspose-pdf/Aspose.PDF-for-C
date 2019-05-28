/// @file security/cryptography/x509_certificates/x509_extension.h
#ifndef _security_x509_extension_h_
#define _security_x509_extension_h_

#include "security/cryptography/asn_encoded_data.h"

namespace System {

namespace Security {

namespace Cryptography {

namespace X509Certificates {

/// Extension object to keep extra information associated with X.509 certificate.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS X509Extension : public System::Security::Cryptography::AsnEncodedData
{
    /// This type.
    typedef X509Extension ThisType;
    /// Parent type.
    typedef System::Security::Cryptography::AsnEncodedData BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();
    /// Enables calling MakeObject on default constructor.
    FRIEND_FUNCTION_System_MakeObject;

public:
    /// Constructor.
    /// @param encodedExtension Encoded data associated with certificate.
    /// @param critical Criticality sign.
    ASPOSECPP_SHARED_API X509Extension(const System::SharedPtr<System::Security::Cryptography::AsnEncodedData>& encodedExtension, bool critical);
    /// Constructor.
    /// @param oid Object identifier associated with extension.
    /// @param rawData Raw data associated with certificate.
    /// @param critical Criticality sign.
    ASPOSECPP_SHARED_API X509Extension(const System::SharedPtr<System::Security::Cryptography::Oid>& oid, const System::ArrayPtr<uint8_t>& rawData, bool critical);
    /// Constructor.
    /// @param oid Object identifier associated with extension.
    /// @param rawData Raw data associated with certificate.
    /// @param critical Criticality sign.
    ASPOSECPP_SHARED_API X509Extension(const System::String& oid, const System::ArrayPtr<uint8_t>& rawData, bool critical);

    /// Checks whether extension is critical.
    /// @return True if extension is critical, false otherwise.
    ASPOSECPP_SHARED_API bool get_Critical();
    /// Defines whether extension is critical.
    /// @param value True to make extension critical, false otherwise.
    ASPOSECPP_SHARED_API void set_Critical(bool value);

    /// Copies extension data from other object.
    /// @param asnEncodedData Object to copy data from.
    virtual ASPOSECPP_SHARED_API void CopyFrom(System::SharedPtr<System::Security::Cryptography::AsnEncodedData> asnEncodedData) override;

protected:
    /// Constructor.
    ASPOSECPP_SHARED_API X509Extension();

private:
    /// Criticality sign.
    bool pr_Critical;
};

} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_x509_extension_h_

