#ifndef x509_certificate_2_collection_h
#define x509_certificate_2_collection_h

#include "defines.h"
#include "system/object.h"
#include "system/array.h"
#include "system/collections/list.h"

#include "security/cryptography/x509_certificates/x509_certificate_2.h"

namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

    class X509Certificate2Collection : public System::Collections::Generic::List<SharedPtr<X509Certificate2> > // public IDeserializationCallback, public ISerializable
    {
    };

    class X509Certificate2CollectionPtr : public SharedPtr<X509Certificate2Collection>
    {
    public:

        X509Certificate2CollectionPtr() {}
        X509Certificate2CollectionPtr(const SharedPtr<X509Certificate2Collection>& obj) : SharedPtr<X509Certificate2Collection>(obj) { }

        SharedPtr<X509Certificate2>& operator[] (size_t idx) const
        {
            return (*(this->get()))[idx];
        }
    };


}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

#endif //x509_certificate_2_collection_h