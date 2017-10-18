#ifndef _aspose_xml_xml_attribute_h_
#define _aspose_xml_xml_attribute_h_

#include "xml_node.h"
#include <system/exceptions.h>

namespace System { namespace Xml {

class XmlAttribute : public XmlNode
{
    RTTI_INFO(XmlAttribute, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlElement;

public:

    typedef SharedPtr<XmlAttribute> Ptr;

    virtual ~XmlAttribute() { }

    // properties - getters

    XmlNodeType get_NodeType() const override { return XmlNodeType::Attribute; }

    String get_Name() const override = 0;

    String get_LocalName() const override = 0;

    String get_InnerText() const override { return get_Value(); }

    String get_InnerXml() const override { return get_Value(); }

    String get_OuterXml() const override { return String::Format(L"{0}=\"{1}\"", get_Name(), get_Value()); }

    String get_Value() const override = 0;

    bool get_HasChildNodes() const override { return false; }

    XmlNode::Ptr get_FirstChild() const override { return XmlNode::Ptr(); }
    XmlNode::Ptr get_LastChild() const override { return XmlNode::Ptr(); }
    XmlNode::Ptr get_NextSibling() const override { return XmlNode::Ptr(); }
    XmlNode::Ptr get_PreviousSibling() const override { return XmlNode::Ptr(); }
    XmlNode::Ptr get_ParentNode() const override { return XmlNode::Ptr(); }

    virtual SharedPtr<XmlElement> get_OwnerElement() = 0;

    SharedPtr<XmlElement> idx_get(String) const override { return SharedPtr<XmlElement>(); }

    String get_Prefix() const override = 0;

    String get_NamespaceURI() const override = 0;

    // properties - setters

    void set_Value(String value) override = 0;

    void set_InnerText(String) override {}

    void set_InnerXml(String) override {}

    void set_Prefix(String value) override = 0;

    // methods

    void RemoveAll() override {}

    XmlNode::Ptr RemoveChild(XmlNode::Ptr child) override { return XmlNode::Ptr(); }

    void WriteContentTo(SharedPtr<XmlWriter> writer) override;

    void WriteTo(SharedPtr<XmlWriter> writer) override = 0;

    XmlNode::Ptr CloneNode(bool deep) override;

    // special

    virtual operator bool() const = 0;

protected:

    static String attribute_value(const xmlAttr* attr);

    static const xmlChar* attribute_value_native(const xmlAttr* attr);

    virtual xmlAttr* get_native_attribute() const = 0;

    virtual void set_native_attribute(xmlAttr* attr) = 0;

    virtual void reassign_native(xmlAttr* attr) = 0;

    XmlAttribute(xmlAttr* attr, SharedPtr<XmlDocument> owner) : XmlNode(reinterpret_cast<xmlNode*>(attr), owner){}

    XmlAttribute(xmlNs* ns, SharedPtr<XmlDocument> owner) : XmlNode(owner){}

};

} } // namespace System::Xml

#endif // _aspose_xml_xml_attribute_h_
