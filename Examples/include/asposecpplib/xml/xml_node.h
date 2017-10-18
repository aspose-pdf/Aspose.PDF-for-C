#ifndef _aspose_xml_xml_node_h_
#define _aspose_xml_xml_node_h_

#include <memory>
#include <system/string.h>
#include <system/exceptions.h>
#include <system/collections/ienumerator.h>

#include "xml/xml_node_type.h"
#include "xml/xml_typedefs.h"
#include "xml/detail/xml_3rd_party_types.h"

namespace System { namespace Xml {

#define ICU_TO_XMLSTR_PARAM(str) (const xmlChar*)str.ToUtf8String().c_str()
#define STD_TO_XMLSTR(str) (!str.empty() ? (const xmlChar*)str.c_str() : nullptr)

class XmlDocument;
class XmlDocumentFragment;
class XmlElement;
class XmlAttribute;
class XmlAttributeCollection;
class NameTable;
class XmlNodeList;
class XmlElementList;
class XmlWriter;
class XmlNamespaceManager;
class XmlCharacterData;

namespace XPath { class XPathNavigator; }

class XmlNode : public ::System::Object
{
    RTTI_INFO(XmlNode, ::System::BaseTypesInfo<::System::Object>);

    friend class XmlDocument;
    friend class XmlDocumentFragment;
    friend class XmlElement;
    friend class NameTable;
    friend class XmlElementList;
    friend class XmlTextReader;
    friend class XmlCharacterData;
    friend class XPath::XPathNavigator;
    friend class XmlAttributeCollection;

public:

    virtual ~XmlNode();

    typedef SharedPtr<XmlNode> Ptr;

    // getter properties

    virtual XmlNodeType get_NodeType() const;

    virtual String get_Name() const = 0;
    virtual String get_Value() const;

    virtual String get_LocalName() const;
    virtual String get_Prefix() const;
    virtual String get_NamespaceURI() const;

    virtual String get_InnerText() const;
    virtual String get_InnerXml() const;
    virtual String get_OuterXml() const;

    virtual bool get_HasChildNodes() const;

    virtual XmlNode::Ptr get_FirstChild() const;
    virtual XmlNode::Ptr get_LastChild() const;
    virtual XmlNode::Ptr get_NextSibling() const;
    virtual XmlNode::Ptr get_PreviousSibling() const;
    virtual XmlNode::Ptr get_ParentNode() const;
    virtual SharedPtr<XmlDocument> get_OwnerDocument() const;

    virtual SharedPtr<XmlAttributeCollection> get_Attributes();

    virtual SharedPtr<XmlNodeList> get_ChildNodes();

    // setter properties

    virtual void set_Value(String value);

    virtual void set_Prefix(String) { }

    virtual void set_InnerText(String value);
    virtual void set_InnerXml(String value);

    // indexer operator immitation

    virtual SharedPtr<XmlElement> idx_get(String) const { return SharedPtr<XmlElement>(); }
    virtual SharedPtr<XmlElement> operator [] (String name) const { return idx_get(name); }

    // methods

    virtual XmlNode::Ptr AppendChild(XmlNode::Ptr child);
    virtual XmlNode::Ptr PrependChild(XmlNode::Ptr new_child);
    virtual XmlNode::Ptr ReplaceChild(XmlNode::Ptr new_child, XmlNode::Ptr old_child);
    virtual XmlNode::Ptr InsertAfter(XmlNode::Ptr new_child, XmlNode::Ptr ref_child);
    virtual XmlNode::Ptr InsertBefore(XmlNode::Ptr new_child, XmlNode::Ptr ref_child);

    virtual void RemoveAll();
    virtual XmlNode::Ptr RemoveChild(XmlNode::Ptr child);

    virtual String GetPrefixOfNamespace(const String& namespace_uri);
    virtual String GetNamespaceOfPrefix(const String& prefix);

    virtual void WriteContentTo(SharedPtr<XmlWriter> writer) { }
    virtual void WriteTo(SharedPtr<XmlWriter> writer) = 0;

    virtual SharedPtr<XmlNodeList> SelectNodes(String xPath);
    virtual SharedPtr<XmlNodeList> SelectNodes(String xPath, SharedPtr<XmlNamespaceManager> nsMgr);
    virtual XmlNode::Ptr SelectSingleNode(String xPath);
    virtual XmlNode::Ptr SelectSingleNode(String xPath, SharedPtr<XmlNamespaceManager> nsMgr);

    SharedPtr<System::Collections::Generic::IEnumerator<XmlNode::Ptr>> GetEnumerator();

    virtual XmlNode::Ptr CloneNode(bool deep) = 0;
    XmlNode::Ptr Clone() { auto cloned = CloneNode(true); cloned->m_doc = this->m_doc; return cloned; }


    // special methods

    xmlNode* native_node() { return m_node; }

protected:
    // Have to share xmlDoc among all XmlNodes to be able to use a child XmlNode when the parent XmlDocument was already destroyed
    std::shared_ptr<xmlDoc> m_doc;

    enum insert_where { insert_begin, insert_before, insert_after, insert_end };

    // always not null
    xmlNode* m_node;

    // document context
    WeakPtr<XmlDocument> m_owner;

    XmlNode(xmlNode* node);
    XmlNode(xmlNode* node, const SharedPtr<XmlDocument>& owner);

    // only for XmlDeclaraion & XmlAttribute_NsDef wrapper
    XmlNode(const SharedPtr<XmlDocument>& owner);

    // internal tools

    SharedPtr<XmlElement> find_child_xml_element_by_name(String name, const SharedPtr<XmlDocument>& owner_doc) const;
    String get_inner_xml(const SharedPtr<XmlDocument>& ownder_doc) const;

    uint64_t child_elements_count() const;

    bool can_be_append(XmlNodeType type) const;
    insert_where noralize_place(xmlNode* ref_child, insert_where place);
    void insert_verified_child_node(const XmlNode::Ptr& child, xmlNode* ref_child, insert_where place);
    void insert_document_fragment(const XmlNode::Ptr& fragment, xmlNode* ref_child, insert_where place);
    void reassign_native(xmlNode* node);

    xmlAttr* get_attribute_by_qname(const String& qname) const;
    xmlNs* find_ns(const std::string& prefix) const;
    static xmlNs* make_new_ns(xmlNodePtr parent, const std::string& prefix, const std::string& uri = "");

    static void parse_qname(const std::string& qname, std::string& prefix, std::string& local_name);

    static int csharp_nodetype_to_libxml(XmlNodeType type);

    static XmlNode::Ptr create_wrapper(xmlNode* node, const SharedPtr<XmlDocument>& owner);

    static SharedPtr<XmlAttribute> create_wrapper_attr(xmlAttr* attr, const SharedPtr<XmlDocument>& owner);
    static SharedPtr<XmlAttribute> create_wrapper_attr(xmlNs* ns, const SharedPtr<XmlDocument>& owner);

    void set_Value(const String& text, bool riseEvent);
};


} } // namespace System::Xml

#endif // _aspose_xml_xml_node_h_
