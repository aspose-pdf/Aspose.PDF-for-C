#ifndef _aspose_xml_xml_cdata_section_h_
#define _aspose_xml_xml_cdata_section_h_

#include "xml/xml_character_data.h"

namespace System { namespace Xml {

class XmlDocument;

class XmlCDataSection : public XmlCharacterData
{
    RTTI_INFO(XmlCDataSection, ::System::BaseTypesInfo<System::Xml::XmlCharacterData>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:

    typedef SharedPtr<XmlCDataSection> Ptr;

    String get_Name() const override { return L"#cdata-section"; }

    String get_InnerText() const override { return get_Value(); }
    void set_InnerText(String value) override { set_Value(value); }

    String get_Data() const override { return get_Value(); }
    void set_Data(String value) override { set_Value(value); }

    int get_Length() const override { return get_Value().get_Length(); }

    void WriteContentTo(SharedPtr<XmlWriter> writer) override;
    void WriteTo(SharedPtr<XmlWriter> writer) override;

protected:

    XmlCDataSection(xmlNode* node, SharedPtr<XmlDocument> owner);
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_cdata_section_h_
