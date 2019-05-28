/// @file security/cryptography/x509_certificates/x509_certificate_collection.h
#ifndef x509_certificate_collection_h
#define x509_certificate_collection_h

#include "defines.h"
#include "system/object.h"
#include "system/array.h"
#include "system/collections/list.h"

#include "security/cryptography/x509_certificates/x509_certificate.h"

namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

/// Collection of X509 certificate objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS X509CertificateCollection : public System::Collections::Generic::List<SharedPtr<X509Certificate> > // public IDeserializationCallback, public ISerializable
{
};

/// Pointer to collection of X509 certificates.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
class ASPOSECPP_SHARED_CLASS X509CertificateCollectionPtr : public SharedPtr<X509CertificateCollection>
{
public:
    /// Null pointer constructor.
    X509CertificateCollectionPtr() {}
    /// Constructor.
    /// @param obj Certificate collection to point to.
    X509CertificateCollectionPtr(const SharedPtr<X509CertificateCollection>& obj) : SharedPtr<X509CertificateCollection>(obj) { }

    /// Accessor.
    /// @param idx Index of certificate to get.
    /// @return Certificate at specified position.
    SharedPtr<X509Certificate>& operator[] (int idx) const
    {
        return (*(this->GetPointer()))[idx];
    }
};

}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace X509Certificates{

#endif //x509_certificate_collection_h
