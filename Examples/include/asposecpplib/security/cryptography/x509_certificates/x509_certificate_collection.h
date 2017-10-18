#ifndef x509_certificate_collection_h
#define x509_certificate_collection_h

#include "defines.h"
#include "system/object.h"
#include "system/array.h"
#include "system/collections/list.h"

#include "security/cryptography/x509_certificates/x509_certificate.h"

namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

    class X509CertificateCollection : public System::Collections::Generic::List<SharedPtr<X509Certificate> > // public IDeserializationCallback, public ISerializable
    {
    };

    class X509CertificateCollectionPtr : public SharedPtr<X509CertificateCollection>
    {
    public:

        X509CertificateCollectionPtr() {}
        X509CertificateCollectionPtr(const SharedPtr<X509CertificateCollection>& obj) : SharedPtr<X509CertificateCollection>(obj) { }

        SharedPtr<X509Certificate>& operator[] (size_t idx) const
        {
            return (*(this->get()))[idx];
        }
    };


}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

#endif //x509_certificate_collection_h