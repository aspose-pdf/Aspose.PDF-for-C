#ifndef _aspose_xml_xml_declaration_h_
#define _aspose_xml_xml_declaration_h_

#include "xml_node.h"

namespace System { namespace Xml {

class XmlDeclaration: public XmlNode
{
    RTTI_INFO(XmlDeclaration, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlDocument;

public:

    typedef SharedPtr<XmlDeclaration> Ptr;

    XmlNodeType get_NodeType() const override { return XmlNodeType::XmlDeclaration; }

    String get_Name() const override { return L"xml"; }

    String get_Value() const override;

    String get_LocalName() const override { return get_Name(); }
    String get_Prefix() const override { return L""; }
    String get_NamespaceURI() const override { return L""; }

    String get_InnerText() const override;
    String get_InnerXml() const override;
    String get_OuterXml() const override;

    bool get_HasChildNodes() const override { return false; }

    XmlNode::Ptr get_FirstChild() const override;
    XmlNode::Ptr get_LastChild() const override;
    XmlNode::Ptr get_NextSibling() const override;
    XmlNode::Ptr get_PreviousSibling() const override;
    XmlNode::Ptr get_ParentNode() const override;

    String get_Version() const { return m_version; }
    String get_Encoding() const { return m_encoding; }
    String get_Standalone() const { return StandaloneToString(m_standalone); }

    void set_Value(String value) override { /* do nothing */ }

    void set_Encoding(String value);
    void set_Standalone(String value);

    void WriteContentTo(SharedPtr<XmlWriter> writer) override;
    void WriteTo(SharedPtr<XmlWriter> writer) override;

    XmlNode::Ptr CloneNode(bool deep) override;

protected:

    // lixml2 xmlDoc->standalone available values
    enum
    {
        LIBXML2_STANDALONE_YES = 1,
        LIBXML2_STANDALONE_NO = 0,
        LIBXML2_STANDALONE_NO_XML_DECL = -1,
        LIBXML2_STANDALONE_NOT_DECL = -2
    };

    XmlDeclaration(const SharedPtr<XmlDocument>& owner, const String& version, const String& encoding, int standalone);

    void AttachToOwner() { m_attached = true; }
    void DetachFromOwner() { m_attached = false; }

    static String StandaloneToString(int libxml2_doc_standalone);
    static int StringToStandalone(const String& standalone);

    String m_version;
    String m_encoding;

    // like _xmlDoc::standalone in libxml2
    int m_standalone;

    bool m_attached;
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_declaration_h_
