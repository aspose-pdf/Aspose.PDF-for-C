#ifndef _aspose_xml_xml_processing_instruction_h_
#define _aspose_xml_xml_processing_instruction_h_

#include <xml/xml_node.h>
#include <xml/xml_writer.h>
#include <system/exceptions.h>

namespace System { namespace Xml {


class XmlProcessingInstruction : public XmlNode
{
    RTTI_INFO(XmlProcessingInstruction, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:

    typedef SharedPtr<XmlProcessingInstruction> Ptr;

    String get_Name() const override;

    String get_Target() const;
    String get_Data() const;

    String get_InnerText() const override;

    void set_Data(const String& data);

    void WriteTo(SharedPtr<XmlWriter> writer) override;

    XmlNode::Ptr CloneNode(bool deep) override;

protected:

    XmlProcessingInstruction(xmlNode* node, const SharedPtr<XmlDocument>& owner);
};


} } // namespace System::Xml

#endif // _aspose_xml_xml_processing_instruction_h_
