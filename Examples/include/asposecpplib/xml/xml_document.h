/// @file xml/xml_document.h
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

namespace Details { class XmlAttributePropertyImpl; }
namespace Details { class XmlAttributeNsDefImpl; }

/// Represents an XML document.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlDocument : public XmlNode
{
    RTTI_INFO(XmlDocument, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    friend class XmlNode;
    friend class XmlElement;
    friend class XmlAttribute;
    
    friend class Details::XmlAttributePropertyImpl;
    friend class Details::XmlAttributeNsDefImpl;
    
    friend class XmlAttributeCollection;
    friend class XmlCharacterData;
    

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlDocument> Ptr;
    /// Default constructor. Constructs a new instance of XmlDocument class.
    ASPOSECPP_SHARED_API XmlDocument();
    /// Constructs a new instance of XmlDocument class that represents the specified XML document.
    /// @param native An instance of xmlDoc to be represented by the object being constructed
    ASPOSECPP_SHARED_API XmlDocument(xmlDoc* native);
    /// Constructs a new instance of XmlDocument class that uses the specified 
    /// @param nameTable The name table to be associated with the object being constructed
    ASPOSECPP_SHARED_API XmlDocument(const XmlNameTable::Ptr& nameTable);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XmlDocument();
    /// Loads an XML document from the specified URL; URL can be a file or an HTTP URL.
    /// @param filename The URL
    ASPOSECPP_SHARED_API void Load(const String& filename);
    /// Loads an XML document from the specified stream.
    /// @param stream The stream to load the XML document from
    ASPOSECPP_SHARED_API void Load(const SharedPtr<System::IO::Stream>& stream);
    /// Loads an XML document from the specified TextReader object.
    /// @param reader The TextReader object to load the XML document from
    ASPOSECPP_SHARED_API void Load(const SharedPtr<System::IO::TextReader>& reader);
    /// Loads an XML document from the specified XmlReader object.
    /// @param reader The XmlReader object to load the XML document from
    ASPOSECPP_SHARED_API void Load(const SharedPtr<XmlReader>& reader);
    /// Loads an XML document from the specified string.
    /// @param xml The string containing an XML document to load
    ASPOSECPP_SHARED_API void LoadXml(const String& xml);

    /// Saves the XML document represented by the current object to the specified file.
    /// @param filename A path to the file to save the XML document to
    ASPOSECPP_SHARED_API void Save(const String& filename) const;
    /// Saves the XML document represented by the current object to the specified stream.
    /// @param stream A stream to save the XML document to
    ASPOSECPP_SHARED_API void Save(const SharedPtr<System::IO::Stream>& stream) const;
    /// Saves the XML document represented by the current object to the specified TextWriter object.
    /// @param writer A TextWriter object to save the XML document to
    ASPOSECPP_SHARED_API void Save(const SharedPtr<System::IO::TextWriter>& writer) const;
    /// Saves the XML document represented by the current object to the specified XmlWriter object.
    /// @param writer An XmlWriter object to save the XML document to
    ASPOSECPP_SHARED_API void Save(const SharedPtr<XmlWriter>& writer) const;

    // getter properties
    /// Returns the name of the node represented by the current object.
    String get_Name() const override { return u"#document"; }
    /// Returns the value of the XML node represented by the current object.
    /// @returns An empty string
    String get_Value() const override { return u""; }
    /// Returns the XML markup of the XML node represented by the current object and all its child nodes.
    ASPOSECPP_SHARED_API String get_OuterXml() const override;
    /// Returns the first child of the node represented by the current object.
    ASPOSECPP_SHARED_API XmlNode::Ptr get_FirstChild() const override;
    /// Returns the last child of the node represented by the current object.
    ASPOSECPP_SHARED_API XmlNode::Ptr get_LastChild() const override;
    /// Returns the next sibling of the node represented by the current object.
    /// @returns Null-pointer
    ASPOSECPP_SHARED_API XmlNode::Ptr get_NextSibling() const override;
    /// Returns the previous sibling of the node represented by the current object.
    /// @returns Null-pointer
    ASPOSECPP_SHARED_API XmlNode::Ptr get_PreviousSibling() const override;
    /// Returns the parent node of the node represented by the current object.
    /// @returns Null-pointer
    ASPOSECPP_SHARED_API XmlNode::Ptr get_ParentNode() const override;
    /// Returns a shared pointer to an XmlDocument object representing an XML document node to which
    /// the node represented by the current object belongs.
    /// @returns Null-pointer
    ASPOSECPP_SHARED_API SharedPtr<XmlDocument> get_OwnerDocument() const override;
    /// Returns the root XmlElement of the XML document node represented by the current object.
    ASPOSECPP_SHARED_API XmlElement::Ptr get_DocumentElement();
    /// Returns the XmlNameTable object associated with the current object.
    XmlNameTable::Ptr get_NameTable() { return System::static_pointer_cast<XmlNameTable>(m_nameTable); }
    /// Returns a value indicating whether to preserve insignificant white spaces in XML content.
    bool get_PreserveWhitespace() const { return m_preserveWhitespace; }

    // setter properties
    /// NOT APPLICABLE.
    /// @throws InvalidOperationException Always
    ASPOSECPP_SHARED_API void set_InnerText(String text) override;
    /// Sets a value indicating whether to preserve insignificant white spaces in XML content.
    ASPOSECPP_SHARED_API void set_PreserveWhitespace(bool value);

    // indexer operator imitation
    /// Returns an XmlElement object representing an XML element with the specified name which is
    /// a child of the node represented by the current object.
    ASPOSECPP_SHARED_API XmlElement::Ptr idx_get(String name) const override;

    // methods
    /// Saves all children of the XML document node represented by the current object to the specified XmlWriter object.
    /// @param writer A XmlWriter object to save the chlid nodes to 
    ASPOSECPP_SHARED_API virtual void WriteContentTo(SharedPtr<XmlWriter> writer) override;
    /// Saves the XML document node represented by the current object to the specified XmlWriter object.
    /// @param writer A XmlWriter object to save the node to 
    ASPOSECPP_SHARED_API virtual void WriteTo(SharedPtr<XmlWriter> writer) override;

    // methods - node creation
    /// Creates an attribute with the specified name.
    /// @param name The attribute's qualified name
    /// @returns A shared pointer to the created XmlAttribute object
    ASPOSECPP_SHARED_API SharedPtr<XmlAttribute> CreateAttribute(const String& name);
    /// Creates an attribute with the specified qualified name and namespace URI.
    /// @param qualifiedName The attribute's qualified name
    /// @param namespaceURI The attribute's namespace URI
    /// @returns A shared pointer to the created XmlAttribute object
    ASPOSECPP_SHARED_API SharedPtr<XmlAttribute> CreateAttribute(const String& qualifiedName, const String& namespaceURI);
    /// Creates an attribute with the specified prefix, local name and namespace URI.
    /// @param prefix The attribute's prefix
    /// @param localName The attribute's local name
    /// @param namespaceURI The attribute's namespace URI
    /// @returns A shared pointer to the created XmlAttribute object
    ASPOSECPP_SHARED_API SharedPtr<XmlAttribute> CreateAttribute(const String& prefix, const String& localName, const String& namespaceURI);

    /// Creates an XmlNode object representing an XML node of the specified type with the specified 
    /// qualified name and namespace URI.
    /// @param type Thy type of the node to create
    /// @param qname The node's qualified name
    /// @param namespaceURI The node's namespace URI
    /// @returns A shared pointer to the created XmlNode object
    ASPOSECPP_SHARED_API SharedPtr<XmlNode> CreateNode(XmlNodeType type, const String& qname, const String& namespaceURI = u"");

    /// Creates an XmlElement object representing an XML element with the specified qualified name.
    /// @param qname The element's qualified name
    /// @returns A shared pointer to the created XmlElement object
    ASPOSECPP_SHARED_API SharedPtr<XmlElement> CreateElement(const String& qname);
    /// Creates an XmlElement object representing an XML element with the specified qualified name
    /// and namespace URI.
    /// @param qualifiedName The element's qualified name
    /// @param namespaceURI The elements's namespace URI
    /// @returns A shared pointer to the created XmlElement object
    ASPOSECPP_SHARED_API SharedPtr<XmlElement> CreateElement(const String& qualifiedName, const String& namespaceURI);
    /// Creates an XmlElement object representing an XML element with the specified prefix, local name
    /// and namespace URI.
    /// @param prefix The element's prefix
    /// @param localName The element's local name
    /// @param namespaceURI The element's namespace URI
    /// @returns A shared pointer to the created XmlElement object
    ASPOSECPP_SHARED_API SharedPtr<XmlElement> CreateElement(const String& prefix, const String& localName, const String& namespaceURI);

    /// Creates an XmlText object representing an XML text node with the specified content.
    /// @param text The content of the XML text node
    /// @returns A shared pointer to the created XmlText object
    ASPOSECPP_SHARED_API SharedPtr<XmlText> CreateTextNode(const String& text);

    /// Creates an XmlComment object representing an XML comment node with the specified content.
    /// @param text The content of the XML comment node
    /// @returns A shared pointer to the created XmlComment object
    ASPOSECPP_SHARED_API SharedPtr<XmlComment> CreateComment(const String& text);

    /// Creates an XmlDeclaration object representing an XML declaration node with the specified 
    /// values of 'version', 'encoding' and 'standalone' attributes.
    /// @param version The value of 'version' attribute of the XML declaration node represented by the object being constructed
    /// @param encoding The value of 'encoding' attribute of the XML declaration node represented by the object being constructed
    /// @param standalone The value of 'standalone' attribute of the XML declaration node represented by the object being constructed
    /// @returns A shared pointer to the created XmlDeclaration object
    ASPOSECPP_SHARED_API SharedPtr<XmlDeclaration> CreateXmlDeclaration(const String& version, const String& encoding = u"", const String& standalone = u"");

    /// Creates an XmlProcessingInstruction object representing an XML processing instruction node with the specified 
    /// values of 'target' and 'data' attributes.
    /// @param target The value of 'target' attribute of the XML processing instruction node represented by the object being constructed
    /// @param data The value of 'data' attribute of the XML processing instruction node represented by the object being constructed
    /// @returns A shared pointer to the created XmlProcessingInstruction object
    ASPOSECPP_SHARED_API SharedPtr<XmlProcessingInstruction> CreateProcessingInstruction(const String& target, const String& data);

    /// Creates an XmlCDataSection object representing an XML CDATA section node with the specified content.
    /// @param data The content of the XML CDATA section node
    /// @returns A shared pointer to the created XmlCDataSection object
    ASPOSECPP_SHARED_API SharedPtr<XmlCDataSection> CreateCDataSection(const String& data);

    /// Creates an XmlDocumentFragment object.
    /// @returns A shared pointer to the created XmlDocumentFragment object
    ASPOSECPP_SHARED_API SharedPtr<XmlDocumentFragment> CreateDocumentFragment();

    /// Imports the specified XML node from another XML document.
    /// @param node The node to import
    /// @param deep Specifies whether to perform deep clone of the node (true) or not (false)
    ASPOSECPP_SHARED_API SharedPtr<XmlNode> ImportNode(const SharedPtr<XmlNode>& node, bool deep);

    // methods - children modification
    /// Adds the specified XML node at the end of the list of children of the XML document
    /// represented by the current object.
    /// @param child The XML node to add
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr AppendChild(XmlNode::Ptr child) override;
    /// Adds the specified XML node at the beginning of the list of children of the XML document
    /// represented by the current object.
    /// @param child The XML node to add
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr PrependChild(XmlNode::Ptr child) override;
    /// Adds the specified XML node to the list of children of the XML document
    /// represented by the current object at the position prior to the position of the specified reference child node.
    /// @param child The XML node to add
    /// @param ref_child The reference node indicating the position in the list of children prior to which @p node should be inserted
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr InsertBefore(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;
    /// Adds the specified XML node to the list of children of the XML document
    /// represented by the current object at the position next to the position of the specified reference child node.
    /// @param child The XML node to add
    /// @param ref_child The reference node indicating the position in the list of children next to which @p node should be inserted
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr InsertAfter(XmlNode::Ptr child, XmlNode::Ptr ref_child) override;
    /// Removes the specified XML node from the list of children of the XML document
    /// represented by the current object.
    /// @param child The XML node to remove
    /// @returns A shared pointer to the specified XmlNode object @p child
    ASPOSECPP_SHARED_API XmlNode::Ptr RemoveChild(XmlNode::Ptr child) override;

    // methods - selection
    /// Returns a list of XML nodes that match the specfied XPath expression.
    /// @param xpath The XPath expression 
    /// @returns The list of XmlNode objects representing XML nodes that match @p xpath XPath expression
    SharedPtr<XmlNodeList> SelectNodes(String xpath) override { return XmlNode::SelectNodes(xpath); }
    /// Returns a list of XML nodes that match the specfied XPath expression; any prefixes 
    /// encountered in @p xpath expression are resolved using the specified namespace manager.
    /// @param xpath The XPath expression 
    /// @param nsmgr The XmlNamespaceManager object used to resolve prefixes found in @p xpath expression
    /// @returns The list of XmlNode objects representing XML nodes that match @p xpath XPath expression
    SharedPtr<XmlNodeList> SelectNodes(String xpath, SharedPtr<XmlNamespaceManager> nsmgr) override { return XmlNode::SelectNodes(xpath, nsmgr); }
    /// Returns the first XML node that match the specfied XPath expression; any prefixes 
    /// encountered in @p xpath expression are resolved using the specified namespace manager.
    /// @param xpath The XPath expression 
    /// @param nsmgr The XmlNamespaceManager object used to resolve prefixes found in @p xpath expression
    /// @returns An XmlNode object representing the first XML node that matched @p xpath XPath expression
    SharedPtr<XmlNode> SelectSingleNode(String xpath, SharedPtr<XmlNamespaceManager> nsmgr = nullptr) override { return XmlNode::SelectSingleNode(xpath, nsmgr); }
    /// Returns a list of XmlNode objects representing the XML elements whose qualified name matches the specifed value.
    /// @param name The string to match the XML elements' names against
    /// @returns A list of XmlNode objects representing all document's descendant XML elements whose name
    /// matches @p name
    ASPOSECPP_SHARED_API SharedPtr<XmlNodeList> GetElementsByTagName(const String& name);
    /// Returns a list of XmlNode objects representing the XML elements whose local name and namespace URI match the specifed values.
    /// @param localName The string to match the XML elements' local names against
    /// @param namespaceURI The string to match the XML elements' namespace URI against
    /// @returns A list of XmlNode objects representing all document's descendant XML elements whose local names
    /// match @p localName and namespace URIs match @p namespace URI 
    ASPOSECPP_SHARED_API SharedPtr<XmlNodeList> GetElementsByTagName(const String& localName, const String& namespaceURI);
    /// Creates an instance of XPath::XPathNavigator class for navigating an XML document represented
    /// by the current object.
    ASPOSECPP_SHARED_API SharedPtr<XPath::XPathNavigator> CreateNavigator();

    /// An event that is triggered when an XML node belonging to the XML document represented by 
    /// the current object is about to be inserted into another XML node.
    XmlNodeChangedEventSignal NodeInserting;
    /// An event that is triggered when an XML node belonging to the XML document represented by 
    /// the current object has been inserted into another XML node.
    XmlNodeChangedEventSignal NodeInserted;
    /// An event that is triggered when an XML node belonging to the XML document represented by 
    /// the current object is about to be removed from the list of children of its parent node.
    XmlNodeChangedEventSignal NodeRemoving;
    /// An event that is triggered when an XML node belonging to the XML document represented by 
    /// the current object has been removed from the list of children of its parent node.
    XmlNodeChangedEventSignal NodeRemoved;
    /// An event that is triggered when the value of the XML node belonging to the XML document represented by 
    /// the current object is about to be modified.
    XmlNodeChangedEventSignal NodeChanging;
    /// An event that is triggered when the value of the XML node belonging to the XML document represented by 
    /// the current object hes been modified.
    XmlNodeChangedEventSignal NodeChanged;

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr CloneNode(bool deep) override;

    // special methods
    /// Retirns a pointer to the underlying xmlDoc object.
    xmlDoc* native_doc() const { return m_doc.get(); }

    // not implemented stubs
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void set_XmlResolver(const SharedPtr<XmlResolver>& resolver);

protected:
    /// The nametable used by the current object.
    NameTable::Ptr m_nameTable;
    /// XML declaration node of the XML document represented by the current object.
    XmlDeclaration::Ptr m_xmlDeclarationNode;
    /// The flag indicating whether to preserve insignificant white spaces.
    bool m_preserveWhitespace;
    /// Triggers NodeInserting event
    /// @param node The XML node that is about to be inserted
    /// @param newParent The XML node that is about to become a new parent node for @p node
    ASPOSECPP_SHARED_API void onNodeInserting(const XmlNode::Ptr& node, const XmlNode::Ptr& newParent);
    /// Triggers NodeInserted event
    /// @param node The XML node that has been inserted
    /// @param newParent The XML node that has become a new parent node for @p node
    ASPOSECPP_SHARED_API void onNodeInserted(const XmlNode::Ptr& node, const XmlNode::Ptr& newParent);
    /// Triggers NodeRemoving event
    /// @param node The XML node that is about to be removed
    /// @param oldParent The XML node from the children list of which @p node is about to be removed
    ASPOSECPP_SHARED_API void onNodeRemoving(const XmlNode::Ptr& node, const XmlNode::Ptr& oldParent);
    /// Triggers NodeRemoved event
    /// @param node The XML node that has been removed
    /// @param oldParent The XML node from the children list of which @p node has been removed
    ASPOSECPP_SHARED_API void onNodeRemoved(const XmlNode::Ptr& node, const XmlNode::Ptr& oldParent);
    /// Triggers NodeChanging event
    /// @param node The XML node whose value is about to be changed
    /// @param parent The parent node of @p node 
    /// @param oldValue The current value of the @p node node
    /// @param newValue The value that is about to be set
    ASPOSECPP_SHARED_API void onNodeChanging(const XmlNode::Ptr& node, const XmlNode::Ptr& parent, const String& oldValue, const String& newValue);
    /// Triggers NodeChanged event
    /// @param node The XML node whose value has been changed
    /// @param parent The parent node of @p node 
    /// @param oldValue The value that the @p node had before the change
    /// @param newValue The current value of @p node
    ASPOSECPP_SHARED_API void onNodeChanged(const XmlNode::Ptr& node, const XmlNode::Ptr& parent, const String& oldValue, const String& newValue);

    /// Creates an XML attribute with the specified qualified name and value.
    /// @param qname The attribute's qualified name
    /// @param value The attribute's value
    /// @returns A shared pointer to the created XmlAttribute object
    ASPOSECPP_SHARED_API SharedPtr<XmlAttribute> CreateAttributeWithValue(const String& qname, const String& value);

private:
    // libxml2 initializer
    /// A helper struct that initializes libxml2 library in its constructor
    /// and uninitializes it in its destructor.
    struct libxml2_init
    {
        /// Constructor.
        libxml2_init();
        /// Destructor.
        virtual ~libxml2_init();
    };

    /// An instance of libxml2_init struct that guarantees initialization of libxml2 library
    /// on the current object's construction and uninitialization on destruction.
    static libxml2_init s_init;

    // internal tools
    /// Determines if the specified libxml2 xmlDoc object represents an XML document has 
    /// an XML declaration node.
    /// @param doc The xmlDoc object to test
    /// @returns True if the specified document has an XML declaration onde, otherwise - false
    static bool XmlDeclarationExists(xmlDoc* doc);
    /// 
    XmlDeclaration::Ptr CreateXmlDeclarationForThis();
    /// Attaches the specified XML declaration node to the XML document represented by the current object.
    /// The currently attached XML declaration node, if any, is detached.
    /// @param node The XML declaration node to attach
    void AssignXmlDeclaraion(const XmlDeclaration::Ptr& node);
    /// Inserts the specified XmlNode object into the list of children of the document represented by the current object
    /// at the specified position.
    /// @param child The node to insert
    /// @param ref_child The reference child node; specifies the insertion position if it is relative to this child node
    /// @param place A value that specifies an insertion position either alone or in conjunction with @p ref_child's position
    /// @returns A shared pointer to the inserted XmlNode object
    XmlNode::Ptr internal_insert_child(const XmlNode::Ptr& child, xmlNode* ref_child, insert_where place);

};

} } // namespace System::Xml

#endif // _aspose_xml_xml_document_h_
