#ifndef _aspose_xml_xml_element_h_
#define _aspose_xml_xml_element_h_

#include <system/exceptions.h>

#include "xml_node.h"
#include "xml_attribute.h"
#include "xml_attribute_collection.h"

namespace System { namespace Xml {

class XmlDocument;
class XmlNodeList;
class XmlNamespaceManager;

class XmlElement : public XmlNode
{
    RTTI_INFO(XmlElement, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;
    friend class XmlAttribute;
    friend class XmlAttributeCollection;
    friend class XmlAttributeCollection::Enumerator;
public:

    typedef SharedPtr<XmlElement> Ptr;

    // getter properties

    String get_Name() const override;
    String get_Value() const override;
    String get_LocalName() const override;
    String get_Prefix() const override;
    String get_NamespaceURI() const override;
    XmlAttributeCollection::Ptr get_Attributes() override;
    bool get_HasAttributes() const;
    bool get_IsEmpty() const;

    XmlElement::Ptr idx_get(String name) const override;

    // setter properties

    void set_Prefix(String value) override;

    // methods

    XmlNode::Ptr AppendChild(XmlNode::Ptr new_child) override;
    XmlNode::Ptr PrependChild(XmlNode::Ptr new_child) override;
    XmlNode::Ptr InsertBefore(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;
    XmlNode::Ptr InsertAfter(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;

    XmlAttribute::Ptr GetAttributeNode(const String& name) const;
    String GetAttribute(const String& name) const;
    String GetAttribute(const String& localName, const String& namespaceURI) const;
    SharedPtr<XmlNodeList> GetElementsByTagName(const String& name);
    SharedPtr<XmlNodeList> GetElementsByTagName(const String& localName, const String& namespaceURI);
    bool HasAttribute(const String& qname) const;
    bool HasAttribute(const String& loaclName, const String& namespaceURI) const;

    void SetAttribute(const String& name, const String& value);
    void SetAttribute(const String& localName, const String& namespaceURI, const String& value);
    XmlAttribute::Ptr SetAttributeNode(const XmlAttribute::Ptr& attribute);

    void RemoveAllAttributes();
    void RemoveAttribute(const String& qname);
    void RemoveAttribute(const String& loaclName, const String& namespaceURI);
    XmlNode::Ptr RemoveAttributeAt(int idx);
    XmlAttribute::Ptr RemoveAttributeNode(const XmlAttribute::Ptr& attribute);
    XmlAttribute::Ptr RemoveAttributeNode(const String& name);

    void WriteContentTo(SharedPtr<XmlWriter> writer) override;
    void WriteTo(SharedPtr<XmlWriter> writer) override;

    XmlNode::Ptr CloneNode(bool deep) override;

protected:

    XmlElement(const String& prefix, const String& localName, const String& namespaceURI, const SharedPtr<XmlDocument>& doc);
    XmlElement(xmlNode *node, const SharedPtr<XmlDocument>& owner);

    XmlNode::Ptr internal_insert_child(const XmlNode::Ptr& child, xmlNode* ref_child, insert_where place);
};


} } // namespace System::Xml

#endif // _aspose_xml_xml_element_h_
