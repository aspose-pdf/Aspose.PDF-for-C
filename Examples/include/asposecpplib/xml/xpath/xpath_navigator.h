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

class XPathNavigator : public XPathItem, public IXPathNavigable
{
    FRIEND_FUNCTION_System_MakeObject;
    friend class XPathDocument;
    friend class XPathNodeIterator;

public:

    typedef SharedPtr<XPathNavigator> Ptr;

    // properties

    String get_Name() const;
    String get_LocalName() const;

    String get_Prefix() const;
    String get_NamespaceURI() const;

    String get_Value() const override;
    String get_InnerText() const;
    String get_InnerXml() const;
    String get_OuterXml() const;

    bool get_HasChildren() const;
    bool get_HasAttributes() const;

    bool get_CanEdit() const { return false; }

    XPathNodeType get_NodeType() const;

    int get_ValueAsInt() const override;
    System::DateTime get_ValueAsDateTime() const override;
    double get_ValueAsDouble() const override;
    int64_t get_ValueAsLong() const override;

    virtual SharedPtr<XmlNameTable> get_NameTable() const;

    // methods

    bool MoveTo(const XPathNavigator::Ptr& other);
    bool MoveToFirst();
    bool MoveToFirstChild();
    void MoveToRoot();
    bool MoveToNext();
    bool MoveToPrevious();
    bool MoveToParent();
    bool MoveToAttribute(const String& localName, const String& namespaceURI);
    bool MoveToFirstAttribute();
    bool MoveToNextAttribute();

    String GetAttribute(const String& localName, const String& namespaceURI) const;

    SharedPtr<XPathNodeIterator> Select(const String& xpath);
    SharedPtr<XPathNodeIterator> Select(const String& xpath, const SharedPtr<System::Xml::XmlNamespaceManager>& ns);
    SharedPtr<XPathNodeIterator> Select(const SharedPtr<XPathExpression>& expr);

    XPathNavigator::Ptr SelectSingleNode(const String& xpath);
    XPathNavigator::Ptr SelectSingleNode(const SharedPtr<XPathExpression>& expr);

    SharedPtr<XPathNodeIterator> SelectChildren(XPathNodeType type);
    SharedPtr<XPathNodeIterator> SelectChildren(const String& name, const String& namespaceURI);

    SharedPtr<XPathExpression> Compile(const String& xpath) const;
    bool Matches(const String& xpath) const;
    bool Matches(const SharedPtr<XPathExpression>& xpath) const;

    XPathNavigator::Ptr CreateNavigator() override;

    SharedPtr<XPathDocument> GetDocument() const { return m_xpath_doc; }

    // special

    xmlXPathContext* native_ctx() const { return m_ctx; }

protected:
    XPathNavigator();
    XPathNavigator(const SharedPtr<XPathDocument>& document, xmlXPathContext* ctx, xmlNode* node = nullptr);
    virtual ~XPathNavigator();

    bool SetContextNode(xmlNode* node);

private:

    xmlXPathContext* m_ctx;
    SharedPtr<XPathDocument> m_xpath_doc;

    XPathNavigator::Ptr SelectSingleNode(xmlXPathObject* xpath_obj) const;
};

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_navigator_h_