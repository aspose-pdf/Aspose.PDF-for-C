/// @file xml/xml_exceptions.h
#ifndef _aspose_xml_xml_exceptions_h_
#define _aspose_xml_xml_exceptions_h_

#include <system/exceptions.h>

namespace System { namespace Xml {
/// Represents a general exception that is thrown when XML-related errors occur, such as failure to parse invalid XML content.
DECLARE_INHERITED_EXCEPTION(XmlException, SystemException);

/// Represents an exception that is thrown when an error occurs during parsing of XPath expression.
namespace XPath {
    /// Declaration of XPathException which provides detailed information about the error that occurs while processing an XPath expression.
    DECLARE_INHERITED_EXCEPTION(XPathException, SystemException);
}

/// Represents an exception that is thrown when an error occurs during parsing of XML schema.
namespace Schema {
    /// Declaration of XmlSchemaExcetion which provides detailed information about schema errors.
    DECLARE_INHERITED_EXCEPTION(XmlSchemaException, SystemException);
}


} } // namespace System::Xml

#endif // _aspose_xml_xml_exceptions_h_
