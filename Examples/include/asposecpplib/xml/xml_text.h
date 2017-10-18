#ifndef _aspose_xml_xml_text_h_
#define _aspose_xml_xml_text_h_

#include "xml/xml_character_data.h"

namespace System { namespace Xml {

class XmlDocument;
class XmlWriter;

class XmlText : public XmlCharacterData
{
    RTTI_INFO(XmlText, ::System::BaseTypesInfo<System::Xml::XmlCharacterData>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:

    virtual ~XmlText() { }

    typedef SharedPtr<XmlText> Ptr;

    String get_Name() const override { return L"#text"; }
    int get_Length() const override { return get_Value().get_Length(); }

    void WriteTo(SharedPtr<XmlWriter> writer) override;

protected:

    XmlText(xmlNode* node, const SharedPtr<XmlDocument>& owner);
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_text_h_