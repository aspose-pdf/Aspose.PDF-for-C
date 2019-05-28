/// @file xml/xml_attribute.h
#ifndef _aspose_xml_xml_attribute_h_
#define _aspose_xml_xml_attribute_h_

#include "xml_node.h"

namespace System { namespace Xml {

namespace Details { class XmlAttributeBaseImpl; }
namespace Details { class XmlAttributeNsDefImpl; }
namespace Details { class XmlAttributePropertyImpl; }

/// Represents an attribute associtaed with an xml element.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlAttribute : public XmlNode
{
    RTTI_INFO(XmlAttribute, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    
    friend class XmlElement;
    friend class Details::XmlAttributeNsDefImpl;
    friend class Details::XmlAttributePropertyImpl;

public:
    /// An alias for a shared pointer to an instance of this class.
    typedef SharedPtr<XmlAttribute> Ptr;

    // properties - getters
    /// Returns the type of the current node.
    XmlNodeType get_NodeType() const override { return XmlNodeType::Attribute; }
    /// Returns the qualified name of the current attribute.
    ASPOSECPP_SHARED_API String get_Name() const override;
    /// Returns the local name of the current attribute.
    ASPOSECPP_SHARED_API String get_LocalName() const override;
    /// Returns the value of the current attribute.
    String get_InnerText() const override { return get_Value(); }
    /// Returns the value of the current attribute.
    String get_InnerXml() const override { return get_Value(); }
    /// Returns the markup of the current attribute in the format [attribute_name]=[attribute_value].
    String get_OuterXml() const override { return String::Format(u"{0}=\"{1}\"", get_Name(), get_Value()); }
    /// Returns the value of the current attribute.
    ASPOSECPP_SHARED_API String get_Value() const override;
    /// Determines if the current attribute node has children.
    /// @returns Always false
    bool get_HasChildNodes() const override { return false; }

    /// Always returns null-pointer.
    XmlNode::Ptr get_FirstChild() const override { return XmlNode::Ptr(); }
    /// Always returns null-pointer.
    XmlNode::Ptr get_LastChild() const override { return XmlNode::Ptr(); }
    /// Always returns null-pointer.
    XmlNode::Ptr get_NextSibling() const override { return XmlNode::Ptr(); }
    /// Always returns null-pointer.
    XmlNode::Ptr get_PreviousSibling() const override { return XmlNode::Ptr(); }
    /// Always returns null-pointer.
    XmlNode::Ptr get_ParentNode() const override { return XmlNode::Ptr(); }

    /// Returns an XmlElement object that represents an XML element that owns 
    /// the attribute represented by the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<XmlElement> get_OwnerElement() const;

    /// Always returns null-pointer.
    SharedPtr<XmlElement> idx_get(String) const override { return SharedPtr<XmlElement>(); }

    /// Returns the namespace prefix of the attribute represented by the current object.
    ASPOSECPP_SHARED_API String get_Prefix() const override;

    /// Returns the namespace URI of the attribute represented by the current object.
    ASPOSECPP_SHARED_API String get_NamespaceURI() const override;

    // properties - setters
    /// Sets the value of the attribute represented by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Value(String value) override;

    /// Sets the value of the attribute represented by the current object.
    /// @param value The value to set
    void set_InnerText(String value) override { set_Value(value); }

    /// Does nothing.
    void set_InnerXml(String) override {}

    /// Sets the namespace prefix of the attribute represented by the current object.
    /// @param value The namespace prefix to set
    ASPOSECPP_SHARED_API void set_Prefix(String value) override;

    // methods
    /// Does nothing.
    void RemoveAll() override {}

    /// Does nothing.
    /// @param child IGNORED
    /// @returns Null-pointer 
    XmlNode::Ptr RemoveChild(XmlNode::Ptr child) override { return XmlNode::Ptr(); }

    /// Writes the value of the attribute represented by the current object to 
    /// the specified XmlWriter.
    /// @param writer The XmlWriter object to write to
    ASPOSECPP_SHARED_API void WriteContentTo(SharedPtr<XmlWriter> writer) override;

    /// Writes the attribute represented by the current object to the specified XmlWriter object.
    /// @param writer The XmlWriter object to write to.
    ASPOSECPP_SHARED_API void WriteTo(SharedPtr<XmlWriter> writer) override;

    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlNode::Ptr CloneNode(bool deep) override;

protected:
    /// Constructs a new XmlAttribute object that represents the specified attribute
    /// in the specified XmlDocument.
    /// @param attr The attribute to be represented by the object being created
    /// @param owner The attribute's owner document
    ASPOSECPP_SHARED_API XmlAttribute(xmlAttr* attr, const SharedPtr<XmlDocument>& owner);

    /// Constructs an instance of XmlAttribute class that represents an xmlns attribute and belongs to the specified document.
    /// @param ns The namespace that the attribute represented by the current object should declare
    /// @param owner The XmlDocument object to which the created XmlAttribute object should belong
    /// @returns A shared pointer to a newly created XmlAttribute object that represents an xmlns attribute that
    /// declares a namespace @p ns and belongs to @p owner document
    ASPOSECPP_SHARED_API XmlAttribute(xmlNs* ns, const SharedPtr<XmlDocument>& owner);

    /// Constructs an XmlAttribute object that represents a detached XML attribute belonging to the specified owner.
    /// @param prefix The namespace prefix of the attribute
    /// @param local_name The local name of the attribute
    /// @param namespace_uri The namespace URI associated with the attribute
    /// @param owner The owner document of the attribute
    ASPOSECPP_SHARED_API XmlAttribute(const String& prefix, const String& local_name, const String& namespace_uri, const SharedPtr<XmlDocument>& owner);

    /// Determines if the XML attribute represented by the current object is detached.
    /// @returns True if the attribute is detached, otherwise - flase
    ASPOSECPP_SHARED_API bool isDetached() const;

    /// Attaches the attribute represented by the current object to the specified XML element.
    /// @param element The XML element to attach the current attribute to
    /// @returns A pointer the self
    ASPOSECPP_SHARED_API SharedPtr<XmlAttribute> AttachTo(const SharedPtr<XmlElement>& element);

    /// Detaches the attribute represented by the current object from the specified XML element.
    /// @param element The XML element to detach the current attribute from
    /// @returns A pointer to the self
    ASPOSECPP_SHARED_API SharedPtr<XmlAttribute> DetachFrom(const SharedPtr<XmlElement>& element);

    /// Returns the value of the specified XML attribute.
    /// @param attr The attribtue to retrieve the value of
    /// @returns A pointer to the beginning of null-terminated UTF-8 string representing the value of the attribute @p attr 
    static ASPOSECPP_SHARED_API const xmlChar* GetNativeValue(const xmlAttr* attr);

    /// Pointer to the implementation of the object representing the XML attribute.
    SharedPtr<Details::XmlAttributeBaseImpl> m_attr_pimpl;

};

} } // namespace System::Xml

#endif // _aspose_xml_xml_attribute_h_
