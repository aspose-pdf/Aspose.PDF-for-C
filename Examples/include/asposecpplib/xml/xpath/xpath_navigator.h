/// @file xml/xpath/xpath_navigator.h
#ifndef _aspose_xml_xpath_xpath_navigator_h_
#define _aspose_xml_xpath_xpath_navigator_h_

#include <xml/xpath/xpath_item.h>
#include <xml/xpath/i_xpath_navigable.h>
#include <xml/xpath/xpath_node_type.h>
#include <xml/xml_name_table.h>
#include <xml/xml_namespace_manager.h>

#include "xml/detail/xml_3rd_party_types.h"

namespace System { namespace Xml { namespace XPath {

class XPathDocument;
class XPathNodeIterator;
class XPathExpression;

/// Allows navigating and editing XML data.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XPathNavigator : public XPathItem, public IXPathNavigable
{
    FRIEND_FUNCTION_System_MakeObject;
    friend class XPathDocument;
    friend class XPathNodeIterator;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XPathNavigator> Ptr;

    // properties
    /// Returns the qualified name of the current node.
    ASPOSECPP_SHARED_API String get_Name() const;
    /// Returns the local name of the current node.
    ASPOSECPP_SHARED_API String get_LocalName() const;
    /// Returns the prefix of the current node.
    ASPOSECPP_SHARED_API String get_Prefix() const;
    /// Returns the namespace URI of the current node.
    ASPOSECPP_SHARED_API String get_NamespaceURI() const;
    /// Returns the value of the current node.
    ASPOSECPP_SHARED_API String get_Value() const override;
    /// Returns the value of the current node.
    ASPOSECPP_SHARED_API String get_InnerText() const;
    /// Returns a string containing all the content of the current node, including the markup, but excluding start and end tags.
    ASPOSECPP_SHARED_API String get_InnerXml() const;
    /// Returns a string containing all the content of the current node, including the markup, and including start and end tags.
    ASPOSECPP_SHARED_API String get_OuterXml() const;
    /// Determines if the current node has any child nodes.
    ASPOSECPP_SHARED_API bool get_HasChildren() const;
    /// Determines if the current node has any attributes.
    ASPOSECPP_SHARED_API bool get_HasAttributes() const;
    /// Determines if the XPathNavigator object can edit the underlying XML data.
    /// @returns Always false
    bool get_CanEdit() const { return false; }
    /// Returns the type of the current node.
    ASPOSECPP_SHARED_API XPathNodeType get_NodeType() const;

    /// Returns the current node's value as a 32-bit integer.
    ASPOSECPP_SHARED_API int get_ValueAsInt() const override;
    /// Returns the  current node's value as an instance of DateTime object.
    ASPOSECPP_SHARED_API System::DateTime get_ValueAsDateTime() const override;
    /// Returns the  current node's value as a double-precision floating point number.|
    ASPOSECPP_SHARED_API double get_ValueAsDouble() const override;
    /// Returns the  current node's value as a 64-bit integer.
    ASPOSECPP_SHARED_API int64_t get_ValueAsLong() const override;

    /// Returns the name tabel used by the current object.
    ASPOSECPP_SHARED_API virtual SharedPtr<XmlNameTable> get_NameTable() const;

    // methods  
    /// Moves the the current XPathNavigator to the position equal to that of the specified XPathNavigator.
    /// @param other The reference XPathNavigator
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveTo(const XPathNavigator::Ptr& other);
    /// Moves the the current XPathNavigator to the first sibling of the current node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToFirst();
    /// Moves the the current XPathNavigator to the first child node of the current node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToFirstChild();
    /// Moves the the current XPathNavigator to the root node of the current node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API void MoveToRoot();
    /// Moves the the current XPathNavigator to the next sibling node of the current node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToNext();
    /// Moves the the current XPathNavigator to the previous child node of the current node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToPrevious();
    /// Moves the the current XPathNavigator to the parent node of the current node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToParent();
    /// Moves the the current XPathNavigator to the attribute of the current node whose local name and namespace URI match
    /// the specified values.
    /// @param localName The local name of the attribute
    /// @param namespaceURI The namespace URI of the attribute
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToAttribute(const String& localName, const String& namespaceURI);
    /// Moves the the current XPathNavigator to the first attribute of the current node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToFirstAttribute();
    /// Moves the the current XPathNavigator to the next attribute of the current node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToNextAttribute();

    /// Returns the value of the current node's attribute whose local name and namespace URI match the specified values.
    /// @param localName The local name of the attribute
    /// @param namespaceURI The namespace URI of the attribute
    /// @returns The value of the attribute with local name matches @p localName and namespace URI matches @p namespaceURI
    ASPOSECPP_SHARED_API String GetAttribute(const String& localName, const String& namespaceURI) const;

    /// Evaluate the XPath expression.
    /// @param expr An XPath expression
    /// @returns The result of the expression
    ASPOSECPP_SHARED_API SharedPtr<Object> Evaluate(const SharedPtr<XPathExpression>& expr);

    /// Select a set of nodes using the specified XPath expression.
    /// @param xpath A string representation of XPath expression
    /// @returns An iterator pointing to the selected nodes set
    ASPOSECPP_SHARED_API SharedPtr<XPathNodeIterator> Select(const String& xpath);
    /// Select a set of nodes using the specified XPath expression.
    /// @param xpath XPath expression
    /// @param ns NOT USED, must be null
    /// @returns An iterator pointing to the selected nodes set
    ASPOSECPP_SHARED_API SharedPtr<XPathNodeIterator> Select(const String& xpath, const SharedPtr<System::Xml::XmlNamespaceManager>& ns);
    /// Select a set of nodes using the specified XPath expression represented as XPathExpression object.
    /// @param expr An XPath expression
    /// @returns An iterator pointing to the selected nodes set
    ASPOSECPP_SHARED_API SharedPtr<XPathNodeIterator> Select(const SharedPtr<XPathExpression>& expr);

    /// Selecs the first node in the current XPathNavigator using the specified XPath expression.
    /// @param xpath A string representation of XPath expression
    /// @returns The selected node
    ASPOSECPP_SHARED_API XPathNavigator::Ptr SelectSingleNode(const String& xpath);
    /// Selecs the first node in the current XPathNavigator using the specified XPath expression.
    /// @param expr A string representation of XPath expression
    /// @returns The selected node
    ASPOSECPP_SHARED_API XPathNavigator::Ptr SelectSingleNode(const SharedPtr<XPathExpression>& expr);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API SharedPtr<XPathNodeIterator> SelectChildren(XPathNodeType type);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API SharedPtr<XPathNodeIterator> SelectChildren(const String& name, const String& namespaceURI);
    /// Constructs an XPathExpression object that represents the specifed XPath expression.
    /// @param xpath The string representation of an XPath expression
    /// @returns An XPathExpression object that represents @p xpath expression
    ASPOSECPP_SHARED_API SharedPtr<XPathExpression> Compile(const String& xpath) const;
    /// Determines if the current node matches the specified XPath expression represented as string.
    /// @param xpath The XPath expression represeted as string
    /// @returns True if the current node matches @p xpath, otherwise - false
    ASPOSECPP_SHARED_API bool Matches(const String& xpath) const;
    /// Determines if the current node matches the specified XPath expression.
    /// @param xpath The XPath expression
    /// @returns True if the current node matches @p xpath, otherwise - false
    ASPOSECPP_SHARED_API bool Matches(const SharedPtr<XPathExpression>& xpath) const;
    /// Returns a copy of the current XPathNavigator object.
    ASPOSECPP_SHARED_API XPathNavigator::Ptr CreateNavigator() override;
    /// Returns an XPathDocument object associated with the current XPathNavigator object.
    const SharedPtr<XPathDocument>& GetDocument() { return m_xpath_doc; }

    // special
    /// Returns a pointer to the underlying libxml2 xmlXPathContext object used by the current object.
    xmlXPathContext* native_ctx() const { return m_ctx; }

protected:
    /// Constructs a new instance of XPathNavigator class.
    ASPOSECPP_SHARED_API XPathNavigator();
    /// Constructs a new instance of XPathNavigator class for navigating through the specified
    /// XPathDocument using the specified context.
    /// @param document The document to navigate through
    /// @param ctx The XPath context to use
    /// @param node The node in the @p document to set as a context node or null in which case the 
    /// specified document's root node will be set as context node
    ASPOSECPP_SHARED_API XPathNavigator(const SharedPtr<XPathDocument>& document, xmlXPathContext* ctx, xmlNode* node = nullptr);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XPathNavigator();
    /// Sets the specified node as a context node.
    /// @param node The node to set as a context node
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool SetContextNode(xmlNode* node);

private:
    /// The underlying XPath context object.
    xmlXPathContext* m_ctx;
    /// The document associated with the current navigator.
    SharedPtr<XPathDocument> m_xpath_doc;
    /// Selects the specified node.
    /// @param xpath_obj An XPath object 
    /// @returns An XPathNavigator used to navigate the node specified by @p xpath_obj
    XPathNavigator::Ptr SelectSingleNode(xmlXPathObject* xpath_obj) const;
};

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_navigator_h_
