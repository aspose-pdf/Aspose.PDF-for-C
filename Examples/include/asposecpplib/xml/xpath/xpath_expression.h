/// @file xml/xpath/xpath_expression.h
#ifndef _aspose_xml_xpath_xpath_expression_h_
#define _aspose_xml_xpath_xpath_expression_h_

#include <system/object.h>

#include "xml/detail/xml_3rd_party_types.h"

#include "xml/xpath/xpath_result_type.h"
#include "xml/xpath/xpath_navigator.h"

namespace System { namespace Xml { namespace XPath {

/// Represents an XPath expression.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XPathExpression : public System::Object
{
    FRIEND_FUNCTION_System_MakeObject;
    friend class XPathNavigator;

public:
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XPathExpression();
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XPathExpression> Ptr;
    /// Returns a string representation of the XPath expression represented by the current object.
    String get_Expression() const { return m_expr_str; }

    /// NOT SUPPORTED.
    /// @throws NotSupportedException Always
    XPathResultType::XPathResultType_ get_ReturnType() const
    { throw System::NotSupportedException(); }

    /// Constructs an XPathExpression object that represents the specified XPath expression.
    /// @param xpath The string representation of XPath expression
    /// @returns An instance of XPathExpression class that represents @p xpath expression
    static ASPOSECPP_SHARED_API XPathExpression::Ptr Compile(const String& xpath);

    /// Returns the underlying xmllib2 xmlXPathCompExpr object.
    xmlXPathCompExpr* native() const { return m_expr; }

protected:
    /// The string representation of the XPath expression represented by the current object.
    String m_expr_str;
    /// The underlying xmllib2 xmlXPathCompExpr object used by the current object.
    xmlXPathCompExpr* m_expr;
    /// Constructs an XPathExprossion object that represents the specified XPath expression
    /// and initializes it with the specified xmlXPathCompExpr object.
    /// @param expr_str The string representation of the XPath expression to be represented by the object being created
    /// @param expr An instance of xmlXPathCompExpr class to be used by the object being created
    XPathExpression(const String& expr_str, xmlXPathCompExpr* expr) : m_expr_str(expr_str), m_expr(expr) {}
};

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_expression_h_
