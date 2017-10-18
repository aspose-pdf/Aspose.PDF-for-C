#ifndef _aspose_xml_xml_document_fragment_h_
#define _aspose_xml_xml_document_fragment_h_

#include "xml_node.h"
#include <system/exceptions.h>

namespace System { namespace Xml {

class XmlDocumentFragment : public XmlNode
{
    RTTI_INFO(XmlDocumentFragment, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:

    typedef SharedPtr<XmlDocumentFragment> Ptr;

    String get_Name() const override { return L"#document-fragment"; }

    XmlNode::Ptr AppendChild(XmlNode::Ptr child) override;
    XmlNode::Ptr PrependChild(XmlNode::Ptr new_child) override;
    XmlNode::Ptr InsertBefore(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;
    XmlNode::Ptr InsertAfter(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;

    void WriteContentTo(SharedPtr<XmlWriter> writer) override;
    void WriteTo(SharedPtr<XmlWriter> writer) override;

    virtual XmlNode::Ptr CloneNode(bool deep) override;

private:

    XmlDocumentFragment(xmlNode* node, const SharedPtr<XmlDocument>& owner);

    XmlNode::Ptr internal_insert_child(const XmlNode::Ptr& child, xmlNode* ref_child, insert_where place);
};

}} // namespace System::Xml

#endif // _aspose_xml_xml_document_fragment_h_
