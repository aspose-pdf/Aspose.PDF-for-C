/// @file xml/xml_document_type.h
#ifndef _aspose_xml_xml_document_type_h_
#define _aspose_xml_xml_document_type_h_

#include "xml_node.h"
#include <memory>

namespace System { namespace Xml {

class XmlDocument;
class XmlWriter;

/// Represents the XML document type declaration node.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlDocumentType : public XmlNode
{
    RTTI_INFO(XmlDocumentType, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef std::shared_ptr<XmlDocumentType> Ptr;
    /// Returns the name of the node represented by the current object.
    ASPOSECPP_SHARED_API String get_Name() const override;
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API String get_PublicId();
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API String get_SystemId();
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API String get_InternalSubset();
    /// Saves the node to the specified XmlWriter.
    /// @param writer The XmlWriter object to save the node to
    ASPOSECPP_SHARED_API void WriteTo(SharedPtr<XmlWriter> writer) override;
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlNode::Ptr CloneNode(bool deep) override;

protected:
    /// Constructs an XmlDocumentType object that represents the
    /// specified native XML node object and belongs to the specified XML document.
    /// @param node The XML node to be represented by the object being constructed; must be of XML_DTD_NODE type
    /// @param owner The XML document to which the object being contructed should belong
    XmlDocumentType(xmlNode* node, const SharedPtr<XmlDocument> &owner) : XmlNode(node, owner)
    {
        assert(node->type == XML_DTD_NODE);
    }
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_document_type_h_
