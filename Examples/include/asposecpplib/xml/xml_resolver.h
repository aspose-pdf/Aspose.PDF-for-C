#ifndef _aspose_xml_xml_resolver_h_
#define _aspose_xml_xml_resolver_h_

#include <system/uri.h>

namespace System { namespace Net { class ICredentials; } }

namespace System { namespace Xml {

class ABSTRACT XmlResolver: virtual public Object
{
public:
    typedef SharedPtr<XmlResolver> Ptr;

    virtual void set_Credentials(SharedPtr<System::Net::ICredentials> value);
    virtual SharedPtr<Object> GetEntity(SharedPtr<Uri> absoluteUri, String role, const TypeInfo& ofObjectToReturn) = 0;
    virtual SharedPtr<Uri> ResolveUri(SharedPtr<Uri> baseUri, String relativeUri);
    virtual bool SupportsType(SharedPtr<Uri> absoluteUri, const TypeInfo& type);

protected:

    static String EscapeRelativeUriBody(const String& src);
    static String UnescapeRelativeUriBody(const String& src);

};

}} // namespace System::Xml

#endif // _aspose_xml_xml_resolver_h_