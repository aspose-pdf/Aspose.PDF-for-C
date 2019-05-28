/// @file xml/xml_document_fragment.h
#ifndef _aspose_xml_xml_document_fragment_h_
#define _aspose_xml_xml_document_fragment_h_

#include "xml_node.h"
#include <system/exceptions.h>

namespace System { namespace Xml {
/// Represents a service oject that is useful for tree insert operations.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlDocumentFragment : public XmlNode
{
    RTTI_INFO(XmlDocumentFragment, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlDocumentFragment> Ptr;
    /// Returns the name of the node represented by the current object.
    String get_Name() const override { return u"#document-fragment"; }

    /// Adds the specified XML node at the end of the list of children of the XML node
    /// represented by the current object.
    /// @param child The XML node to add
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr AppendChild(XmlNode::Ptr child) override;
    /// Adds the specified XML node at the beginning of the list of children of the XML node
    /// represented by the current object.
    /// @param new_child The XML node to add
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr PrependChild(XmlNode::Ptr new_child) override;
    /// Adds the specified XML node to the list of children of the XML node
    /// represented by the current object at the position prior to the position of the specified reference child node.
    /// @param child The XML node to add
    /// @param ref_child The reference node indicating the position in the list of children prior to which @p node should be inserted
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr InsertBefore(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;
    /// Adds the specified XML node to the list of children of the XML node
    /// represented by the current object at the position next to the position of the specified reference child node.
    /// @param child The XML node to add
    /// @param ref_child The reference node indicating the position in the list of children prior to which @p node should be inserted
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr InsertAfter(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;

    /// Saves all children of the node represented by the current object
    /// to the specified XmlWiter object.
    /// @param writer The XmlWriter object to save the nodes to
    ASPOSECPP_SHARED_API void WriteContentTo(SharedPtr<XmlWriter> writer) override;
    /// Saves the node represented by the current object to the specified XmlWriter.
    /// @param writer The XmlWriter object to save the node to
    ASPOSECPP_SHARED_API void WriteTo(SharedPtr<XmlWriter> writer) override;

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr CloneNode(bool deep) override;

private:
    /// Constructs an XmlDocumentFragment object that represents the
    /// specified native XML node object and belongs to the specified XML document.
    /// @param node The XML node to be represented by the object being constructed; must be of XML_DOCUMENT_FRAG_NODE type
    /// @param owner The XML document to which the object being contructed should belong
    XmlDocumentFragment(xmlNode* node, const SharedPtr<XmlDocument>& owner);

    /// Inserts the specified XmlNode object into the list of children of the document fragment represented by the current object
    /// at the specified position.
    /// @param child The node to insert
    /// @param ref_child The reference child node; specifies the insertion position if it is relative to this child node
    /// @param place A value that specifies an insertion position either alone or in conjunction with @p ref_child's position
    /// @returns A shared pointer to the inserted XmlNode object
    XmlNode::Ptr internal_insert_child(const XmlNode::Ptr& child, xmlNode* ref_child, insert_where place);
};

}} // namespace System::Xml

#endif // _aspose_xml_xml_document_fragment_h_
