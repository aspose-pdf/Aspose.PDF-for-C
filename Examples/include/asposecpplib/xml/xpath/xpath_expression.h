#ifndef _aspose_xml_xpath_xpath_expression_h_
#define _aspose_xml_xpath_xpath_expression_h_

#include <system/object.h>

#include "xml/detail/xml_3rd_party_types.h"

#include "xml/xpath/xpath_result_type.h"
#include "xml/xpath/xpath_navigator.h"

namespace System { namespace Xml { namespace XPath {

class XPathExpression : public System::Object
{
    FRIEND_FUNCTION_System_MakeObject;
    friend class XPathNavigator;

public:

    virtual ~XPathExpression();

    typedef SharedPtr<XPathExpression> Ptr;

    String get_Expression() const { return m_expr_str; }
    XPathResultType::XPathResultType_ get_ReturnType() const
    { throw System::NotSupportedException(); }

    static XPathExpression::Ptr Compile(const String& xpath);

    xmlXPathCompExpr* native() const { return m_expr; }

protected:

    String m_expr_str;
    xmlXPathCompExpr* m_expr;

    XPathExpression(const String& expr_str, xmlXPathCompExpr* expr) : m_expr_str(expr_str), m_expr(expr) {}
};

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_expression_h_