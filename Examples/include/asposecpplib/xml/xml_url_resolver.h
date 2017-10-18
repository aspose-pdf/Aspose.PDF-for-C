#ifndef _aspose_xml_xml_url_resolver_h_
#define _aspose_xml_xml_url_resolver_h_

#include "xml_resolver.h"

namespace System{ namespace Xml{

class XmlUrlResolver : public XmlResolver
{
public:

    SharedPtr<Object> GetEntity(SharedPtr<Uri> absoluteUri, String role, const TypeInfo& ofObjectToReturn) override;
};

}} // namespace System{ namespace Xml{

#endif // _aspose_xml_xml_url_resolver_h_
