/// @file xml/xml_node.h
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

/// Expands to an expression that converts the specified ICU's UnicodeString object to a const pointer to xmlChar.
/// @param str A UnicodeString object to convert
#define ICU_TO_XMLSTR_PARAM(str) (const xmlChar*)str.ToUtf8String().c_str()
/// Expands to an expression that converts the specified std::string object to a const pointer to xmlChar.
/// @param str An std::string object to convert
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

namespace Details { class XmlAttributePropertyImpl; }
namespace Details { class XmlAttributeNsDefImpl; }

/// Represents an XML node.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlNode : public ::System::Object
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
    friend class Details::XmlAttributePropertyImpl;
    friend class Details::XmlAttributeNsDefImpl;

public:
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XmlNode();
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlNode> Ptr;

    // getter properties
    /// Returns the type of the XML node represented by the current object.
    virtual ASPOSECPP_SHARED_API XmlNodeType get_NodeType() const;
    /// Returns the qualified name of the XML node represented by the current object.
    virtual ASPOSECPP_SHARED_API String get_Name() const = 0;
    /// Returns the value of the XML node represented by the current object.
    virtual ASPOSECPP_SHARED_API String get_Value() const;
    /// Returns the local name of the XML node represented by the current object.
    virtual ASPOSECPP_SHARED_API String get_LocalName() const;
    /// Returns the prefix of the XML node represented by the current object.
    virtual ASPOSECPP_SHARED_API String get_Prefix() const;
    /// Returns the namespace URI of the XML node represented by the current object.
    virtual ASPOSECPP_SHARED_API String get_NamespaceURI() const;
    /// Returns the concatenated values of the XML node represented by the current object and all its child nodes.
    virtual ASPOSECPP_SHARED_API String get_InnerText() const;
    /// Returns the XML markup representing the child nodes of the XML node represented by the current object.
    virtual ASPOSECPP_SHARED_API String get_InnerXml() const;
    /// Returns the XML markup representing the XML node represented by the current object and all its the child nodes.
    virtual ASPOSECPP_SHARED_API String get_OuterXml() const;

    /// Determines if the XML node represented by the current object has child nodes.
    /// @returns True if the XML node represented by the current object has at least one child node, otherwise - false.
    virtual ASPOSECPP_SHARED_API bool get_HasChildNodes() const;
    /// Returns the first child of the node represented by the current object.
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr get_FirstChild() const;
    /// Returns the last child of the node represented by the current object.
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr get_LastChild() const;
    /// Returns the next sibling of the node represented by the current object.
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr get_NextSibling() const;
    /// Returns the previous sibling of the node represented by the current object.
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr get_PreviousSibling() const;
    /// Returns the parent node of the node represented by the current object.
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr get_ParentNode() const;
    /// Returns a shared pointer to an XmlDocument object representing an XML document node to which
    /// the node represented by the current object belongs.
    virtual ASPOSECPP_SHARED_API SharedPtr<XmlDocument> get_OwnerDocument() const;
    /// Returns an XmlAttributeCollection object containing all attributes
    /// of the XML node represented by the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<XmlAttributeCollection> get_Attributes();
    /// Returns an XmlNodeList object containing all child nodes
    /// of the XML node represented by the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<XmlNodeList> get_ChildNodes();

    // setter properties
    /// Sets the value of the node represented by the current object.
    /// @param value The value to set
    virtual ASPOSECPP_SHARED_API void set_Value(String value);
    /// Sets the prefix of the XML node represented by the current object.
    virtual void set_Prefix(String) { }
    /// Sets the XML node's inner text by replacing all the child nodes (if any) with the 
    /// contents of the given string.
    /// @param value The inner text to set; all XML markup encountered in this string is escaped
    virtual ASPOSECPP_SHARED_API void set_InnerText(String value);
    /// Replaces the XML node's inner XML markup with the contents of the specified string.
    /// @param value The XML markup to set
    virtual ASPOSECPP_SHARED_API void set_InnerXml(String value);

    // indexer operator immitation
    /// Returns a shared pointer to the newly constructed XmlElement object.
    virtual SharedPtr<XmlElement> idx_get(String) const { return SharedPtr<XmlElement>(); }
    /// Returns a shared pointer to the XmlElement object representing the child element
    /// of the XML node represented by the current object with the specified qualified name.
    /// @param name The qualified name of the element to return
    /// @returns A shared pointer to the XmlElement object representing the child element
    /// of the XML node represented by the current object with name @p name.
    virtual SharedPtr<XmlElement> operator [] (String name) const { return idx_get(name); }

    // methods
    /// Adds the specified XML node at the end of the list of children of the XML node
    /// represented by the current object.
    /// @param child The XML node to add
    /// @returns A shared pointer to the specified XmlNode object @p child
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr AppendChild(XmlNode::Ptr child);
    /// Adds the specified XML node at the beginning of the list of children of the XML node
    /// represented by the current object.
    /// @param new_child The XML node to add
    /// @returns A shared pointer to the specified XmlNode object @p child
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr PrependChild(XmlNode::Ptr new_child);
    /// Replaces the specified the specified child node of the node reprsented by the current object
    /// with another one.
    /// @param old_child The node to replace
    /// @param new_child The node to replace @p old_child node with
    /// @returns The replaced node
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr ReplaceChild(XmlNode::Ptr new_child, XmlNode::Ptr old_child);
    /// Adds the specified XML node to the list of children of the XML node
    /// represented by the current object at the position next to the position of the specified reference child node.
    /// @param new_child The XML node to add
    /// @param ref_child The reference node indicating the position in the list of children next to which @p node should be inserted
    /// @returns A shared pointer to the specified XmlNode object @p child
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr InsertAfter(XmlNode::Ptr new_child, XmlNode::Ptr ref_child);
    /// Adds the specified XML node to the list of children of the XML document
    /// represented by the current object at the position prior to the position of the specified reference child node.
    /// @param new_child The XML node to add
    /// @param ref_child The reference node indicating the position in the list of children next to which @p node should be inserted
    /// @returns A shared pointer to the specified XmlNode object @p child
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr InsertBefore(XmlNode::Ptr new_child, XmlNode::Ptr ref_child);
    /// Removes all child nodes of the XML node reprsented by the current object.
    virtual ASPOSECPP_SHARED_API void RemoveAll();
    /// Removes the specified child node of the XML node represented by the current object.
    /// @param child The node to remove
    /// @returns The reoved node
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr RemoveChild(XmlNode::Ptr child);

    /// Looks up the closest xmlns declaration for the specified namespace URI that is
    /// in scope for the XML node represented by the current object and returns the 
    /// prefix defined in that declaration.
    /// @param namespace_uri The namespace URI whose prefix to find
    /// @returns The prefix associated with the specified namespace URI
    virtual ASPOSECPP_SHARED_API String GetPrefixOfNamespace(const String& namespace_uri);
    /// Looks up the closest xmlns declaration for the specified prefix that is
    /// in scope for the XML node represented by the current object and returns the 
    /// namespace URI defined in that declaration.
    /// @param prefix The prefix whose namespace URI to find
    /// @returns The namespace URI associated with the specified prefix
    virtual ASPOSECPP_SHARED_API String GetNamespaceOfPrefix(const String& prefix);

    /// Saves all children of the XML node represented by the current object to the specified XmlWriter object.
    /// @param writer A XmlWriter object to save the chlid nodes to 
    virtual void WriteContentTo(SharedPtr<XmlWriter> writer) { }
    /// Saves the XML node represented by the current object to the specified XmlWriter object.
    /// @param writer A XmlWriter object to save the node to 
    virtual ASPOSECPP_SHARED_API void WriteTo(SharedPtr<XmlWriter> writer) = 0;

    /// Returns a list of XML nodes that match the specfied XPath expression.
    /// @param xPath The XPath expression 
    /// @returns The list of XmlNode objects representing XML nodes that match @p xpath XPath expression
    virtual ASPOSECPP_SHARED_API SharedPtr<XmlNodeList> SelectNodes(String xPath);
    /// Returns a list of XML nodes that match the specfied XPath expression; any prefixes 
    /// encountered in @p xpath expression are resolved using the specified namespace manager.
    /// @param xPath The XPath expression 
    /// @param nsMgr The XmlNamespaceManager object used to resolve prefixes found in @p xpath expression
    /// @returns The list of XmlNode objects representing XML nodes that match @p xpath XPath expression
    virtual ASPOSECPP_SHARED_API SharedPtr<XmlNodeList> SelectNodes(String xPath, SharedPtr<XmlNamespaceManager> nsMgr);
    /// Returns the first XML node that match the specfied XPath expression.
    /// @param xPath The XPath expression 
    /// @returns An XmlNode object representing the first XML node that matched @p xpath XPath expression
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr SelectSingleNode(String xPath);
    /// Returns the first XML node that match the specfied XPath expression; any prefixes 
    /// encountered in @p xpath expression are resolved using the specified namespace manager.
    /// @param xPath The XPath expression 
    /// @param nsMgr The XmlNamespaceManager object used to resolve prefixes found in @p xpath expression
    /// @returns An XmlNode object representing the first XML node that matched @p xpath XPath expression
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr SelectSingleNode(String xPath, SharedPtr<XmlNamespaceManager> nsMgr);
    /// Returns an enumerator that points to the collection containing child nodes of the node represented
    /// by the current object.
    ASPOSECPP_SHARED_API SharedPtr<System::Collections::Generic::IEnumerator<XmlNode::Ptr>> GetEnumerator();
    /// Returns a copy of the node represented by the current object.
    /// @param deep Specifies whether to clone the subtree under the node represented by the current object (true)
    /// or only the node itself (false)
    /// @returns A shared pointer to an XmlNode object that is a copy of the current object
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr CloneNode(bool deep) = 0;
    /// Returns a copy of the node represented by the current object. The subtree under the node is also copied.
    /// This method is equivallent to calling CloneNode(true).
    XmlNode::Ptr Clone() { auto cloned = CloneNode(true); cloned->m_doc = this->m_doc; return cloned; }

    // special methods
    /// Returns a pointer to the underlying libxml2 xmlNode object.
    xmlNode* native_node() { return m_node; }

protected:
    // Have to share xmlDoc among all XmlNodes to be able to use a child XmlNode when the parent XmlDocument was already destroyed
    /// XML document to which the XML node represented by the current object
    /// belongs.
    std::shared_ptr<xmlDoc> m_doc;
    /// Specifies the position in the child nodes list where to insert
    /// a node during insertion operation.
    enum insert_where {
        /// Insert before the first node
        insert_begin,
        /// Insert at the position prior to the position of the reference node
        insert_before, 
        /// Insert at the position next to the position of the reference node
        insert_after,
        /// Insert after the last element
        insert_end };

    // always not null
    /// Pointer to underlying libxml2 xmlNode object. 
    xmlNode* m_node;

    // document context
    /// Weak poiter to the owning XML document.
    WeakPtr<XmlDocument> m_owner;

    /// Constructs an instance of XmlNode class that represents the specified XML node.
    /// @param node The node to be represented by the object being constructed
    ASPOSECPP_SHARED_API XmlNode(xmlNode* node);
    /// Constructs an instance of XmlNode class that represents the specified XML node and belongs
    /// to the specified owner XML document.
    /// @param node The node to be represented by the object being constructed
    /// @param owner The XML document to which the XML node represented by the object 
    /// being constructed should belong.
    ASPOSECPP_SHARED_API XmlNode(xmlNode* node, const SharedPtr<XmlDocument> &owner);

    // only for XmlDeclaraion & XmlAttribute_NsDef wrapper
    /// Constructs an instance of XmlNode class that belongs to the specified document. The
    /// underlying libxml2 xmlNode object is not created. This constructor is intended
    /// to be used by XmlDeclaration class only.
    /// @param owner An XmlDocument object representing the owner document of the node being
    /// constructed
    ASPOSECPP_SHARED_API XmlNode(const SharedPtr<XmlDocument>& owner);

    // internal tools
    /// Looks up an XML element with the specified name which is a descandant of the specified XML document.
    /// @param name The qualified name of the XML element to find
    /// @param owner_doc The XML document
    /// @returns A shared pointer to an XmlElement object representing the found XML element if the element has been found, otherwise - null-pointer
    SharedPtr<XmlElement> find_child_xml_element_by_name(const String& name, const SharedPtr<XmlDocument>& owner_doc) const;
    /// Returns the number of children of all levels of the XML node
    /// represented by the current object.
    uint64_t child_elements_count() const;

    /// Determines if an XML node of the specified type can be added as a child node to the XML node represented
    /// by the current object.
    /// @param type The type to check
    /// @returns True if the XML node of type @p type can be a child node of the node represented by the current object, otherwise - false
    bool can_be_append(XmlNodeType type) const;
    /// Normalizes the indicator of the position where the node is to be inserted by making it consistent
    /// with the reference child value and presence of nodes in the list of children of the current node.
    /// @param ref_child The reference node relative to which the insertion position is specified
    /// @param place The insertion position relative to the position of reference node
    /// @returns The normalized insrtion position
    insert_where noralize_place(xmlNode* ref_child, insert_where place);
    /// Inserts the specified node in the list of children of the node represented by the
    /// current object at the specified position.
    /// @param child A node to insert
    /// @param ref_child The reference child node; @p place specifies the insertion position as relative to
    /// the position of @p ref_child child node
    /// @param place Specified the insertion position relative to the position of @p ref_child
    void insert_verified_child_node(const XmlNode::Ptr& child, xmlNode* ref_child, insert_where place);
    /// Inserts the nodes of the specified document fragment in the list of children of the node represented by the
    /// current object at the specified position.
    /// @param fragment The document fragment to insert
    /// @param ref_child The reference child node; @p place specifies the insertion position as relative to
    /// the position of @p ref_child child node
    /// @param place Specified the insertion position relative to the position of @p ref_child
    void insert_document_fragment(const XmlNode::Ptr& fragment, xmlNode* ref_child, insert_where place);
    /// Replaces the node reprsented by the current object with the specified one.
    /// @param node The new node to be represented by the current object
    void reassign_native(xmlNode* node);
    /// Returns an attribute with the specified qualified name.
    /// @param qname The attribute's qualified name
    /// @returns A pointer to a libxml2 xmlAttr object representing an attribute with the specified name or
    /// NULL if the attribute has not been found
    xmlAttr* get_attribute_by_qname(const String& qname) const;
    /// Returns a namespace associated with the specified prefix.
    /// @param prefix A namespace prefix
    /// @returns A pointer to a libxml2 xmlNs object representing a namespace associated with the specified prefix
    /// or NULL if such namespace has not been found.
    xmlNs* find_ns(const std::string& prefix) const;
    /// Creates a new namespace.
    /// @param parent The element that carries the namespace
    /// @param prefix The prefix to be associated with the namespace; empty string if a default namespace is to be created
    /// @param uri The URI for the namespace
    /// @returns A pointer to libxml2 xmlNs object representing the created namespace or NULL in case of error
    static xmlNs* make_new_ns(xmlNodePtr parent, const std::string& prefix, const std::string& uri = "");
    /// Parses the XML node's qualified name by breaking it into a prefix and a local name.
    /// @param qname The qualfied name to parse
    /// @param prefix Output argument; the prefix part of the specified qualified name is assigned to it
    /// @param local_name Output argument; the local name part of the specified qualified name is assigned to it
    static void parse_qname(const std::string& qname, std::string& prefix, std::string& local_name);
    /// Converts the specified XML node type represented as an XmlNodeType value to equivalent 
    /// value defied by libxml2 library.
    /// @param type An XmlNodeType value to convert
    /// @returns A value representing a node type defined by libxml2 library equivalent to @p type value
    static int csharp_nodetype_to_libxml(XmlNodeType type);
    /// Creates an instance of XmlNode class that represents the specified node and belongs to the specified document.
    /// @param node The XML node to be represented by the XmlNode object being created
    /// @param owner The XmlDocument object to which the created XmlNode object should belong
    /// @param doc The xmlDoc object shared among all XmlNodes
    /// @returns A shared pointer to a newly created XmlNode object that represents @p node node and 
    /// belongs to @p owner document
    static XmlNode::Ptr create_wrapper(xmlNode* node, const SharedPtr<XmlDocument>& owner, const std::shared_ptr<xmlDoc>& doc = nullptr);
    /// Creates an instance of XmlAttribute class that represents the specified attribute and belongs to the specified document.
    /// @param attr The XML attribute to be represented by the XmlAttribute object being created
    /// @param owner The XmlDocument object to which the created XmlAttribute object should belong
    /// @returns A shared pointer to a newly created XmlAttribute object that represents @p attr attribute and 
    /// belongs to @p owner document
    static SharedPtr<XmlAttribute> create_wrapper_attr(xmlAttr* attr, const SharedPtr<XmlDocument>& owner);
    /// Creates an instance of XmlAttribute class that represents an xmlns attribute and belongs to the specified document.
    /// @param ns The namespace that the attribute represented by the current object should declare
    /// @param owner The XmlDocument object to which the created XmlAttribute object should belong
    /// @param element The XmlElement object to which the created XmlAttribute object should belong
    /// @returns A shared pointer to a newly created XmlAttribute object that represents an xmlns attribute that
    /// declares a namespace @p ns and belongs to @p owner document
    static SharedPtr<XmlAttribute> create_wrapper_attr(xmlNs* ns, const SharedPtr<XmlDocument>& owner, const SharedPtr<XmlElement>& element);
    /// Constructs an XmlAttribute object that represents a detached XML attribute belonging to the specified owner.
    /// @param prefix The namespace prefix of the attribute
    /// @param local_name The local name of the attribute
    /// @param namespace_uri The namespace URI associated with the attribute
    /// @param owner The owner document of the attribute
    /// @returns A shared pointer to the created XmlAttribute object
    static SharedPtr<XmlAttribute> create_wrapper_attr(const String& prefix, const String& local_name, const String& namespace_uri , const SharedPtr<XmlDocument>& owner);
    /// Sets the value of the XML node represented by the current object and triggers corresponding events.
    /// @param text The value to set
    /// @param riseEvent Specifies whether OnNodeChanging and OnNodeChanged events should be triggered
    ASPOSECPP_SHARED_API void set_Value(const String& text, bool riseEvent);
};


} } // namespace System::Xml

#endif // _aspose_xml_xml_node_h_
