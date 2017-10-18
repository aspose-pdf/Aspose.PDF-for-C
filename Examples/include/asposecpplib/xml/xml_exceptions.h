#ifndef _aspose_xml_xml_exceptions_h_
#define _aspose_xml_xml_exceptions_h_

#include <system/exceptions.h>

namespace System { namespace Xml {

DECLARE_INHERITED_EXCEPTION(XmlException, SystemException);

namespace XPath {
    DECLARE_INHERITED_EXCEPTION(XPathException, SystemException);
}

namespace Schema {
    DECLARE_INHERITED_EXCEPTION(XmlSchemaException, SystemException);
}


} } // namespace System::Xml

#endif // _aspose_xml_xml_exceptions_h_
