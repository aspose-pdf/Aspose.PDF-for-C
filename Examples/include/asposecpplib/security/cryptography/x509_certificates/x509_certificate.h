/// @file security/cryptography/x509_certificates/x509_certificate.h
#ifndef system_security_cryptography_x509_certificates_x509_certificate_h
#define system_security_cryptography_x509_certificates_x509_certificate_h

#include "defines.h"
#include "system/object.h"
#include "system/array.h"

#include "security/cryptography/x509_certificates/x509_content_type.h"


namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

/// Pointer implementation data structure.
struct X509CertificatePimpl;

/// X.509 v.3 certificate.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS X509Certificate : public System::Object // public IDeserializationCallback, public ISerializable
{
public:
    /// Pointer type.
    typedef SharedPtr<X509Certificate> Ptr;

    /// Constructor.
    ASPOSECPP_SHARED_API X509Certificate();
    /// Constructor.
    /// @param data Sequence of bytes that represents encoded certificate.
    ASPOSECPP_SHARED_API X509Certificate(const ArrayPtr<uint8_t>& data);
    /// Constructor.
    /// @param fileName File to load certificate from.
    ASPOSECPP_SHARED_API X509Certificate(const String& fileName);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~X509Certificate();

    /// Converts certificate into array of bytes using specific parameters.
    /// @param contentType Format of certificate to export into.
    /// @return Byte array representing certificate in requested format.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> Export(X509ContentType contentType);
    /// Gets subject distinguished name from certificate.
    /// @return Subject name of certificate.
    ASPOSECPP_SHARED_API String get_Subject();
    /// Gets public key from certificate as array of bytes.
    /// @return Byte representation of public key.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetPublicKey();
    /// Gets raw data from certificate as array of bytes.
    /// @return Byte representation of certificate data.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetRawCertData();
    /// Gets serial number from certificate as array of bytes.
    /// @return Byte representation of certificate serial number.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetSerialNumber();

protected:
    /// Certificate implementation.
    std::unique_ptr<X509CertificatePimpl> m_pimpl;
};

}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

#endif
