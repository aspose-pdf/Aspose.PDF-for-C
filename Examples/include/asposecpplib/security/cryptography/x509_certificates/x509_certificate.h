#ifndef system_security_cryptography_x509_certificates_x509_certificate_h
#define system_security_cryptography_x509_certificates_x509_certificate_h

#include "defines.h"
#include "system/object.h"
#include "system/array.h"

#include "security/cryptography/x509_certificates/x509_content_type.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <botan/x509cert.h>
#endif


namespace Botan {
    ASPOSECPP_3RD_PARTY_CLASS(X509_Certificate);
}


namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

    class X509Certificate : public System::Object // public IDeserializationCallback, public ISerializable
    {
    public:
        typedef SharedPtr<X509Certificate> Ptr;

        X509Certificate();
        X509Certificate(ArrayPtr<uint8_t> data);
        virtual ~X509Certificate();

        virtual ArrayPtr<uint8_t> Export(X509ContentType contentType);
        String get_Subject();
        virtual ArrayPtr<uint8_t> GetPublicKey();
        virtual ArrayPtr<uint8_t> GetRawCertData();
        virtual ArrayPtr<uint8_t> GetSerialNumber();

    protected:
        std::unique_ptr<Botan::X509_Certificate> m_bt_cert;
    };

}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

#endif