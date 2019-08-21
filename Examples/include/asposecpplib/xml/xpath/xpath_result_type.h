/// @file xml/xpath/xpath_result_type.h
#ifndef _aspose_xml_xpath_xpath_result_type_h_
#define _aspose_xml_xpath_xpath_result_type_h_

namespace System { namespace Xml { namespace XPath {

namespace  XPathResultType { 
    /// Represents a type of result of execution of XPath expression.
    enum  XPathResultType_ {
    /// A number.
    Number = 0,
    /// A string.
    String = 1,
    /// A tree fragment.
    Navigator = 1,
    /// A boolean value.
    Boolean = 2,
    /// A collection of nodes.
    NodeSet = 3,
    /// Any of the XPath node types.
    Any = 5,
    /// The expression does not evaluate to the correct XPath type.
    Error = 6,
};}

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_result_type_h_
