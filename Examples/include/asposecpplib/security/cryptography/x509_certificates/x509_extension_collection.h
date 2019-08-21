/// @file security/cryptography/x509_certificates/x509_extension_collection.h
#ifndef _security_x509_extension_collection_h_
#define _security_x509_extension_collection_h_

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/base_enumerator.h>
#include <system/collections/ienumerable.h>
#include <system/collections/icollection.h>

#include "security/cryptography/x509_certificates/x509_extension.h"

namespace System {
namespace Security {
namespace Cryptography {
namespace X509Certificates {

/// Collection of extension objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS X509ExtensionCollection FINAL : public System::Collections::Generic::List<System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Extension> >
{
    /// This type.
    typedef X509ExtensionCollection ThisType;
    /// Parent type.
    typedef System::Collections::Generic::List<System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Extension> > BaseType;
    /// RTTI data.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Constructs empty collection.
    X509ExtensionCollection() {}

    /// Accessor. Not implemented.
    /// @param key Key to get extension at. 
    /// @return Extension at specified key.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Extension> idx_get(const System::String& key) const;
    /// Accessor.
    /// @param idx Index to get extension at. 
    /// @return Extension at specified index.
    System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Extension> idx_get(int idx) const override
    {
        return (*this)[idx];
    }

};

/// Enumerator to iterate through extension collection.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS X509ExtensionEnumerator FINAL : virtual public Object, public System::Collections::Generic::SimpleEnumerator<X509ExtensionCollection::vector_t>
{
public:
    /// Creates enumerator.
    /// @param data Collection to iterate through.
    X509ExtensionEnumerator(const SharedPtr<X509ExtensionCollection> &data) : SimpleEnumerator<X509ExtensionCollection::vector_t>(data, data->data()) { }

    /// This type.
    typedef X509ExtensionEnumerator ThisType;
    /// Parent type.
    typedef System::Collections::Generic::IEnumerator<System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Extension> > BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();
};

} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_x509_extension_collection_h_

