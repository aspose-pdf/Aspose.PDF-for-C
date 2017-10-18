#ifndef _aspose_xml_xpath_xpath_result_type_h_
#define _aspose_xml_xpath_xpath_result_type_h_

namespace System { namespace Xml { namespace XPath {

namespace  XPathResultType { enum  XPathResultType_ {
    //     A numeric value.
    Number = 0,
    //     A System.String value.
    String = 1,
    //     A tree fragment.
    Navigator = 1,
    //     A System.Booleantrue or false value.
    Boolean = 2,
    //     A node collection.
    NodeSet = 3,
    //     Any of the XPath node types.
    Any = 5,
    //     The expression does not evaluate to the correct XPath type.
    Error = 6,
};}

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_result_type_h_