/// @file xml/xml_element.h
#ifndef _aspose_xml_xml_element_h_
#define _aspose_xml_xml_element_h_

#include <system/exceptions.h>

#include "xml_node.h"
#include "xml_attribute.h"
#include "xml_attribute_collection.h"

namespace System { namespace Xml {

namespace Details { class XmlAttributeDetachedImpl; }

class XmlDocument;
class XmlNodeList;
class XmlNamespaceManager;
/// Represents an XML element node.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlElement : public XmlNode
{
    RTTI_INFO(XmlElement, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;
    friend class XmlAttribute;
    friend class XmlAttributeCollection;
    friend class XmlAttributeCollection::Enumerator;
    friend class XmlAttributeCollection::Enumerator;
    friend class Details::XmlAttributeDetachedImpl;
public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlElement> Ptr;

    // getter properties
    /// Returns the name of the node represented by the current object.
    ASPOSECPP_SHARED_API String get_Name() const override;
    /// Returns the value of the XML node represented by the current object.
    /// @returns An empty string
    ASPOSECPP_SHARED_API String get_Value() const override;
    /// Returns the local name of the node represented by the current object.
    ASPOSECPP_SHARED_API String get_LocalName() const override;
    /// Returns the prefix of the node represented by the current object.
    ASPOSECPP_SHARED_API String get_Prefix() const override;
    /// Returns the namespace URI of the node represented by the current object.
    ASPOSECPP_SHARED_API String get_NamespaceURI() const override;
    /// Returns an XmlAttributeCollection object containing all attributes
    /// of the XML element represented by the current object.
    ASPOSECPP_SHARED_API XmlAttributeCollection::Ptr get_Attributes() override;
    /// Determines if the XML element represented by the current object has
    /// any attributes.
    /// @returns True if the XML element represented by the current object has 
    /// at least one attribute, otherwise - false
    ASPOSECPP_SHARED_API bool get_HasAttributes() const;
    /// Determines if the XML element represented by the current object has
    /// any attributes or child nodes.
    /// @returns True if the XML element represented by the current object has 
    /// at least one attribute or at least one child node, otherwise - false
    ASPOSECPP_SHARED_API bool get_IsEmpty() const;

    /// Looks for a child XML element with the specified name.
    /// @param name The name of the element to look for
    /// @returns An XmlElement object representing XML element which is a child
    /// of the XML element represented by the current object and whos name matches @p name.
    ASPOSECPP_SHARED_API XmlElement::Ptr idx_get(String name) const override;

    // setter properties
    /// Sets the specified value as a prefix for the XML element represented 
    /// by the current object.
    /// @param value The prefix value to set
    ASPOSECPP_SHARED_API void set_Prefix(String value) override;

    // methods
    /// Adds the specified XML node at the end of the list of children of the XML element
    /// represented by the current object.
    /// @param new_child The XML node to add
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr AppendChild(XmlNode::Ptr new_child) override;
    /// Adds the specified XML node at the beginning of the list of children of the XML element
    /// represented by the current object.
    /// @param new_child The XML node to add
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr PrependChild(XmlNode::Ptr new_child) override;
    /// Adds the specified XML node to the list of children of the XML element
    /// represented by the current object at the position prior to the position of the specified reference child node.
    /// @param child The XML node to add
    /// @param ref_child The reference node indicating the position in the list of children prior to which @p node should be inserted
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr InsertBefore(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;
    /// Adds the specified XML node to the list of children of the XML element
    /// represented by the current object at the position next to the position of the specified reference child node.
    /// @param child The XML node to add
    /// @param ref_child The reference node indicating the position in the list of children prior to which @p node should be inserted
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr InsertAfter(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;

    /// Returns an XmlAttribute object representing an XML attribute of the
    /// XML element represented by the current object with the specified name.
    /// @param name The name of the attribute to return
    /// @returns An XmlAttribute object representing an XML attribute of the
    /// XML element represented by the current object with name @p name.
    ASPOSECPP_SHARED_API XmlAttribute::Ptr GetAttributeNode(const String& name) const;
    /// Returns the value of the attribute of the XML element represented by 
    /// the current object with the specified name.
    /// @param name The name of the attribute
    /// @returns The value of the attribute with name @p name
    ASPOSECPP_SHARED_API String GetAttribute(const String& name) const;
    /// Returns the name of the attribute of the XML element represented by 
    /// the current object with the specified local name and namespace URI.
    /// @param localName The local name of the attribute
    /// @param namespaceURI The namespace URI of the attribute
    /// @returns The value of the attribute with local name @p localName and 
    /// namespace URI @p namespaceURI
    ASPOSECPP_SHARED_API String GetAttribute(const String& localName, const String& namespaceURI) const;
    /// Returns descendant elements whose qualified names match the specified value.
    /// @param name The string to match elements' names against
    /// @returns An XmlNodeList object containing objects representing XML elements
    /// whose qualified names match @p name
    ASPOSECPP_SHARED_API SharedPtr<XmlNodeList> GetElementsByTagName(const String& name);
    /// Returns descendant elements whose local names and namespace URIs match the specified values.
    /// @param localName The string to match elements' local names against
    /// @param namespaceURI The string to match elements' namespace URIs against
    /// @returns An XmlNodeList object containing objects representing XML elements
    /// whose local names match @p localName and namespace URIs match @p namespaceURI
    ASPOSECPP_SHARED_API SharedPtr<XmlNodeList> GetElementsByTagName(const String& localName, const String& namespaceURI);
    /// Determines if the XML element represented by the current object has an attribute
    /// with the specified qualified name.
    /// @param qname The qualified name of the attribute to look for
    /// @returns True if the attribute with the spacified qualified name is found, otherwise - false
    ASPOSECPP_SHARED_API bool HasAttribute(const String& qname) const;
    /// Determines if the XML element represented by the current object has an attribute
    /// with the specified local name and namespace URI.
    /// @param localName The local name of the attribute to look for
    /// @param namespaceURI The namespace URI of the attribute to look for
    /// @returns True if the attribute with the spacified local name and namespace URI is found, otherwise - false
    ASPOSECPP_SHARED_API bool HasAttribute(const String& localName, const String& namespaceURI) const;
    /// Sets the specified value to the attribute with the specified qualified name.
    /// If the attribut that matches the specified criteria does not exist,
    /// it is created.
    /// @param name The qualified name of the attribute to set the value of
    /// @param value The value to set
    ASPOSECPP_SHARED_API void SetAttribute(const String& name, const String& value);
    /// Sets the specified value to the attribute with the specified local name and namespace URI.
    /// If the attribut that matches the specified criteria does not exist,
    /// it is created.
    /// @param localName The local name of the attribute to set the value of
    /// @param namespaceURI The namespace URI of the attribute
    /// @param value The value to set
    ASPOSECPP_SHARED_API void SetAttribute(const String& localName, const String& namespaceURI, const String& value);
    /// Attaches the specified attribute to the XML element represented by the
    /// current object.
    /// @returns The attached attribute
    ASPOSECPP_SHARED_API XmlAttribute::Ptr SetAttributeNode(const XmlAttribute::Ptr& attribute);
    /// Removes all attributes.
    ASPOSECPP_SHARED_API void RemoveAllAttributes();
    /// Removes the attribute with the specified qualified name.
    /// @param qname The qualified name of the attribute to remove
    ASPOSECPP_SHARED_API void RemoveAttribute(const String& qname);
    /// Removes the attribute with the specified local name and namespace URI.
    /// @param loaclName The local name of the attribute to remove
    /// @param namespaceURI The namespace URI of the attribute to remove
    ASPOSECPP_SHARED_API void RemoveAttribute(const String& loaclName, const String& namespaceURI);
    /// Removes the attribute located at the spacified position in the list
    /// of attributes af the XML element represented by the current object.
    /// @param idx The 0-based index of the attribute to remove
    /// @returns The removed XmlNode object or null-pointer if the node with the specified index does not exist
    ASPOSECPP_SHARED_API XmlNode::Ptr RemoveAttributeAt(int idx);
    /// Removes the specified attribute from the list of attributes of the XML element
    /// represented by the current object.
    /// @param attribute The attribute to remove
    /// @returns The removed attribute
    ASPOSECPP_SHARED_API XmlAttribute::Ptr RemoveAttributeNode(const XmlAttribute::Ptr& attribute);
    /// Removes the attribute with the specified qualified name from the list of attributes of the XML element
    /// represented by the current object.
    /// @param name The qualified name of the attribute to remove
    /// @returns The removed attribute
    ASPOSECPP_SHARED_API XmlAttribute::Ptr RemoveAttributeNode(const String& name);
    /// Saves all children of the node represented by the current object
    /// to the specified XmlWiter object.
    /// @param writer The XmlWriter object to save the nodes to
    ASPOSECPP_SHARED_API void WriteContentTo(SharedPtr<XmlWriter> writer) override;
    /// Saves the node represented by the current object to the specified XmlWriter.
    /// @param writer The XmlWriter object to save the node to
    ASPOSECPP_SHARED_API void WriteTo(SharedPtr<XmlWriter> writer) override;
    /// Returns a copy of the node represented by the current object.
    /// @param deep Specifies whether to clone the subtree under the node represented by the current object (true)
    /// or only the node itself (false)
    /// @returns A shared pointer to an XmlNode object that is a copy of the current object
    ASPOSECPP_SHARED_API XmlNode::Ptr CloneNode(bool deep) override;

protected:
    /// Constructs an XmlElement object that represents an XML element with the
    /// specified prefix, local name and namespace URI.
    /// @param prefix XML element's prefix
    /// @param localName XML element's local name
    /// @param namespaceURI XML element's namespace URI
    /// @param doc The XML element's owner document
    ASPOSECPP_SHARED_API XmlElement(const String& prefix, const String& localName, const String& namespaceURI, const SharedPtr<XmlDocument>& doc);
    /// Constructs an XmlElement object that represents the specified
    /// libxml2 xmlNode object.
    /// @param node The XML element to be represented by the object being constructed
    /// @param owner The XML element's owner document
    ASPOSECPP_SHARED_API XmlElement(xmlNode *node, const SharedPtr<XmlDocument>& owner);
    /// Generates a namespace prefix based on the values of the specified node's properties.
    /// @param node An xmlNode whose properties to be used to generate a prefix
    /// @returns The generated namespace prefix
    static ASPOSECPP_SHARED_API String GeneratePrefix(xmlNode * node);
    /// Inserts the specified XmlNode object into the list of children of the element represented by the current object
    /// at the specified position.
    /// @param child The node to insert
    /// @param ref_child The reference child node; specifies the insertion position if it is relative to this child node
    /// @param place A value that specifies an insertion position either alone or in conjunction with @p ref_child's position
    /// @returns A shared pointer to inserted XmlNode object
    ASPOSECPP_SHARED_API XmlNode::Ptr internal_insert_child(const XmlNode::Ptr& child, xmlNode* ref_child, insert_where place);
};


} } // namespace System::Xml

#endif // _aspose_xml_xml_element_h_
