#ifndef _aspose_xml_xml_document_type_h_
#define _aspose_xml_xml_document_type_h_

#include "xml_node.h"
#include <memory>

namespace System { namespace Xml {

class XmlDocument;
class XmlWriter;

class XmlDocumentType : public XmlNode
{
    RTTI_INFO(XmlDocumentType, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:

    typedef std::shared_ptr<XmlDocumentType> Ptr;

    String get_Name() const override;

    String get_PublicId();
    String get_SystemId();
    String get_InternalSubset();

    void WriteTo(SharedPtr<XmlWriter> writer) override;

    XmlNode::Ptr CloneNode(bool deep) override;

protected:

    XmlDocumentType(xmlNode* node, const SharedPtr<XmlDocument>& owner);
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_document_type_h_
