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

    class X509ExtensionCollection FINAL : public System::Collections::Generic::List<System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Extension> >
    {
        typedef X509ExtensionCollection ThisType;
        typedef System::Collections::Generic::List<System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Extension> > BaseType;

        RTTI_INFO_DECL();

    public:

        X509ExtensionCollection() {}

        System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Extension> idx_get(const System::String& key) const;

        System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Extension> idx_get(int idx) const
        {
            return (*this)[idx];
        }

    };

    class X509ExtensionEnumerator FINAL : virtual public Object, public System::Collections::Generic::SimpleEnumerator<std::vector<SharedPtr<X509Extension> > >
    {
    public:
        X509ExtensionEnumerator(const SharedPtr<X509ExtensionCollection> &data) : SimpleEnumerator<std::vector<SharedPtr<X509Extension> > >(data, data->data()) { }

        typedef X509ExtensionEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Extension> > BaseType;

        RTTI_INFO_DECL();
    };

} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_x509_extension_collection_h_

