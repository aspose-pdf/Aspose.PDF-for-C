#ifndef _aspose_xml_xml_comment_h_
#define _aspose_xml_xml_comment_h_

#include "xml/xml_character_data.h"

namespace System { namespace Xml {

class XmlWriter;

class XmlComment : public XmlCharacterData
{
    RTTI_INFO(XmlComment, ::System::BaseTypesInfo<System::Xml::XmlCharacterData>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:

    typedef SharedPtr<XmlComment> Ptr;

    String get_Name() const override { return L"#comment"; }
    int get_Length() const override { return get_Value().get_Length(); }

    void WriteTo(SharedPtr<XmlWriter> writer) override;

protected:

    XmlComment(xmlNode* node, const SharedPtr<XmlDocument>& owner);
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_comment_h_