#ifndef _aspose_xml_xml_document_h_
#define _aspose_xml_xml_document_h_

#include <system/io/text_reader.h>
#include <system/io/text_writer.h>

#include "xml/xml_comment.h"
#include "xml/xml_cdata_section.h"
#include "xml/xml_text.h"
#include "xml/xml_declaration.h"
#include "xml/xml_processing_instruction.h"
#include "xml/xml_attribute.h"
#include "xml/xml_element.h"
#include "xml/name_table.h"
#include "xml/xml_namespace_manager.h"
#include "xml/xml_node_list.h"
#include "xml/xml_document_fragment.h"
#include "xml/xpath/xpath_navigator.h"
#include "xml/xml_node_changed_event_handler.h"

#include "xml/xml_typedefs.h"

namespace System { namespace Xml {

class XmlDocumentFragment;
class XmlReader;
class XmlWriter;
class XmlResolver;
class XmlAttribute_Property;
class XmlAttribute_NsDef;

class XmlDocument : public XmlNode
{
    RTTI_INFO(XmlDocument, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    friend class XmlNode;
    friend class XmlElement;
    friend class XmlAttribute;
    friend class XmlAttribute_Property;
    friend class XmlAttribute_NsDef;
    friend class XmlAttributeCollection;
    friend class XmlCharacterData;

public:

    typedef SharedPtr<XmlDocument> Ptr;

    XmlDocument();
    XmlDocument(xmlDoc* native);
    XmlDocument(const XmlNameTable::Ptr& nameTable);

    virtual ~XmlDocument();

    void Load(String filename);
    void Load(SharedPtr<System::IO::Stream> stream);
    void Load(SharedPtr<System::IO::TextReader> reader);
    void Load(SharedPtr<XmlReader> reader);

    void LoadXml(const String& xml);

    void Save(String filename) const;
    void Save(SharedPtr<System::IO::Stream> stream) const;
    void Save(SharedPtr<System::IO::TextWriter> writer) const;
    void Save(SharedPtr<XmlWriter> writer) const;

    // getter properties

    String get_Name() const override { return L"#document"; }
    String get_Value() const override { return L""; }

    String get_InnerXml() const override;
    String get_OuterXml() const override;

    XmlNode::Ptr get_FirstChild() const override;
    XmlNode::Ptr get_LastChild() const override;
    XmlNode::Ptr get_NextSibling() const override;
    XmlNode::Ptr get_PreviousSibling() const override;
    XmlNode::Ptr get_ParentNode() const override;
    SharedPtr<XmlDocument> get_OwnerDocument() const override;

    XmlElement::Ptr get_DocumentElement();
    XmlNameTable::Ptr get_NameTable() { return System::static_pointer_cast<XmlNameTable>(m_nameTable); }

    // setter properties

    void set_InnerText(String text) override;

    // indexer operator imitation

    XmlElement::Ptr idx_get(String name) const override;

    // methods

    virtual void WriteContentTo(SharedPtr<XmlWriter> writer);
    virtual void WriteTo(SharedPtr<XmlWriter> writer);

    // methods - node creation

    SharedPtr<XmlAttribute> CreateAttribute(String qname);
    SharedPtr<XmlAttribute> CreateAttribute(String qualifiedName, String namespaceURI);
    SharedPtr<XmlAttribute> CreateAttribute(String prefix, String localName, String namespaceURI);

    SharedPtr<XmlNode> CreateNode(XmlNodeType type, String qname, String namespaceURI = L"");

    SharedPtr<XmlElement> CreateElement(String qname);
    SharedPtr<XmlElement> CreateElement(String qualifiedName, String namespaceURI);
    SharedPtr<XmlElement> CreateElement(String prefix, String localName, String namespaceURI);

    SharedPtr<XmlText> CreateTextNode(String text);

    SharedPtr<XmlComment> CreateComment(String text);

    SharedPtr<XmlDeclaration> CreateXmlDeclaration(String version, String encoding = L"", String standalone = L"");

    SharedPtr<XmlProcessingInstruction> CreateProcessingInstruction(String target, String data);

    SharedPtr<XmlCDataSection> CreateCDataSection(const String& data);

    SharedPtr<XmlDocumentFragment> CreateDocumentFragment();

    SharedPtr<XmlNode> ImportNode(SharedPtr<XmlNode> node, bool deep);

    // methods - children modification

    XmlNode::Ptr AppendChild(XmlNode::Ptr child) override;
    XmlNode::Ptr PrependChild(XmlNode::Ptr child) override;
    XmlNode::Ptr InsertBefore(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;
    XmlNode::Ptr InsertAfter(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;
    XmlNode::Ptr RemoveChild(XmlNode::Ptr child) override;

    // methods - selection

    SharedPtr<XmlNodeList> SelectNodes(String xpath) override { return XmlNode::SelectNodes(xpath); }
    SharedPtr<XmlNodeList> SelectNodes(String xpath, SharedPtr<XmlNamespaceManager> nsmgr) override { return XmlNode::SelectNodes(xpath, nsmgr); }
    SharedPtr<XmlNode> SelectSingleNode(String xpath, SharedPtr<XmlNamespaceManager> nsmgr = nullptr) override { return XmlNode::SelectSingleNode(xpath, nsmgr); }

    SharedPtr<XmlNodeList> GetElementsByTagName(String name);
    SharedPtr<XmlNodeList> GetElementsByTagName(String localName, String namespaceURI);

    SharedPtr<XPath::XPathNavigator> CreateNavigator();

    XmlNodeChangedEventSignal NodeInserting;
    XmlNodeChangedEventSignal NodeInserted;
    XmlNodeChangedEventSignal NodeRemoving;
    XmlNodeChangedEventSignal NodeRemoved;
    XmlNodeChangedEventSignal NodeChanging;
    XmlNodeChangedEventSignal NodeChanged;

    virtual XmlNode::Ptr CloneNode(bool deep) override;

    // special methods

    xmlDoc* native_doc() const { return m_doc.get(); }

    // not implemented stubs

    void set_XmlResolver(SharedPtr<XmlResolver> resolver);
    void set_PreserveWhitespace(bool value);

protected:

    NameTable::Ptr m_nameTable;
    XmlDeclaration::Ptr m_xmlDeclarationNode;

    void onNodeInserting(XmlNode::Ptr node, XmlNode::Ptr newParent);
    void onNodeInserted(XmlNode::Ptr node, XmlNode::Ptr newParent);
    void onNodeRemoving(XmlNode::Ptr node, XmlNode::Ptr oldParent);
    void onNodeRemoved(XmlNode::Ptr node, XmlNode::Ptr oldParent);
    void onNodeChanging(XmlNode::Ptr node, XmlNode::Ptr parent, String oldValue, String newValue);
    void onNodeChanged(XmlNode::Ptr node, XmlNode::Ptr parent, String oldValue, String newValue);

    SharedPtr<XmlAttribute> CreateAttributeWithValue(String qname, String value);

private:
    std::vector<xmlNsPtr> m_unused_xmlns_defs;
    void CollectUnusedNs(xmlNsPtr value);

    // libxml2 initializer

    struct libxml2_init
    {
        libxml2_init();
        virtual ~libxml2_init();
    };

    static libxml2_init s_init;

    // internal tools

    static bool XmlDeclarationExists(xmlDoc* doc);

    XmlDeclaration::Ptr CreateXmlDeclarationForThis();
    void AssignXmlDeclaraion(XmlDeclaration::Ptr node);

    XmlNode::Ptr internal_insert_child(XmlNode::Ptr child, xmlNode* ref_child, insert_where place);

    //helpers
    static xmlNs* createXmlNs();
    static xmlNs* createNs(const xmlChar* prefix, const xmlChar* href);
    static bool is_defined_Ns(xmlNode* node, xmlNs* ns);
    static void reconciliateNsDef(xmlNode* node, bool root, XmlDocument::Ptr owner);
    static void fix_nsDef(xmlNode* node, bool root, XmlDocument::Ptr owner);
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_document_h_
