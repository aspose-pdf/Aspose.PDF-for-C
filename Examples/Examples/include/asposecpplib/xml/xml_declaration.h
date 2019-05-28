/// @file xml/xml_declaration.h
#ifndef _aspose_xml_xml_declaration_h_
#define _aspose_xml_xml_declaration_h_

#include "xml_node.h"

namespace System { namespace Xml {

/// Represents an XML declaration node.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlDeclaration: public XmlNode
{
    RTTI_INFO(XmlDeclaration, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlDocument;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlDeclaration> Ptr;
    /// Returns the type of the node represented by the current object.
    XmlNodeType get_NodeType() const override { return XmlNodeType::XmlDeclaration; }
    /// Returns the name of the node represented by the current object.
    String get_Name() const override { return u"xml"; }
    /// Returns the value of the XML declaration node represented by the current object.
    ASPOSECPP_SHARED_API String get_Value() const override;
    /// Returns the name of the node represented by the current object.
    String get_LocalName() const override { return get_Name(); }
    /// Returns the namespace prefix of this node.
    String get_Prefix() const override { return u""; }
    /// Returns the namespace URI of this node.
    String get_NamespaceURI() const override { return u""; }
    /// Returns the contents of the XML declaration node represented by the current object.
    ASPOSECPP_SHARED_API String get_InnerText() const override;
    /// Returns the XML markup of the child nodes of the XML declaration node represented by the current object.
    ASPOSECPP_SHARED_API String get_InnerXml() const override;
    /// Returns the XML markup of the XML declaration node represented by the current object and all its child nodes.
    ASPOSECPP_SHARED_API String get_OuterXml() const override;

    /// Determines if the node represented by the current object has child nodes.
    /// @returns Always false
    bool get_HasChildNodes() const override { return false; }
    /// Returns the first child of the node represented by the current object.
    /// @returns Null-pointer
    ASPOSECPP_SHARED_API XmlNode::Ptr get_FirstChild() const override;
    /// Returns the last child of the node represented by the current object.
    /// @returns Null-pointer
    ASPOSECPP_SHARED_API XmlNode::Ptr get_LastChild() const override;
    /// Returns the next sibling of the node represented by the current object.
    /// @returns Shared pointer to the XmlNode object representing the node that immediately follows 
    /// the node represented by the current object.
    ASPOSECPP_SHARED_API XmlNode::Ptr get_NextSibling() const override;
    /// Returns the previous sibling of the node represented by the current object.
    /// @returns Null-pointer
    ASPOSECPP_SHARED_API XmlNode::Ptr get_PreviousSibling() const override;
    /// Returns the parent node of the node represented by the current object.
    ASPOSECPP_SHARED_API XmlNode::Ptr get_ParentNode() const override;
    /// Returns the XML version specified in the XML declaration node represented by the current object.
    String get_Version() const { return m_version; }
    /// Returns the character encoding specified in the XML declaration node represented by the current object.
    String get_Encoding() const { return m_encoding; }
    /// Returns the value of 'standalone' attribute of the XML declaration node represented by the current object. 
    String get_Standalone() const { return StandaloneToString(m_standalone); }

    /// Does nothing.
    /// @param value IGNORED
    void set_Value(String value) override { /* do nothing */ }

    /// Sets the characetr encoding for the XML document.
    /// @param value The name of the encoding to set
    ASPOSECPP_SHARED_API void set_Encoding(const String& value);
    /// Sets the value of 'standalone' attribute of the XML declaration node represented by the current object.
    /// @param value The value of the attribute to set
    ASPOSECPP_SHARED_API void set_Standalone(const String& value);

    /// Does nothing.
    /// @param writer IGNORED
    ASPOSECPP_SHARED_API void WriteContentTo(SharedPtr<XmlWriter> writer) override;

    /// Saves the node to the specified XmlWriter.
    /// @param writer The XmlWriter object to save the node to
    ASPOSECPP_SHARED_API void WriteTo(SharedPtr<XmlWriter> writer) override;
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlNode::Ptr CloneNode(bool deep) override;

protected:
    
    // lixml2 xmlDoc->standalone available values
    /// Represents values of 'standalone' attribute or the absence of the attribute.
    enum
    {
        /// The 'standalone' attribute is present and its value is 'yes'
        LIBXML2_STANDALONE_YES = 1,
        /// The 'standalone' attribute is present and its value is 'no'
        LIBXML2_STANDALONE_NO = 0,
        /// The XML declaration is absent in a document.
        LIBXML2_STANDALONE_NO_XML_DECL = -1,
        /// The 'standalone' attribute is absent in XML declaration.
        LIBXML2_STANDALONE_NOT_DECL = -2
    };

    /// Constructs an XmlDeclaration object representing the XML declaration node with the specified attributes and 
    /// belonging to the specified XmlDocument.
    /// @param owner The owner XML document to which the XmlDeclaration object being constructed will belong
    /// @param version The value of 'version' attribute of the XML declaration node represented by the object being constructed
    /// @param encoding The value of 'encoding' attribute of the XML declaration node represented by the object being constructed
    /// @param standalone The value of 'standalone' attribute of the XML declaration node represented by the object being constructed
    ASPOSECPP_SHARED_API XmlDeclaration(const SharedPtr<XmlDocument>& owner, const String& version, const String& encoding, int standalone);

    /// Attaches the node represented by the current object to the owner.
    void AttachToOwner() { m_attached = true; }
    /// Detaches the node represented by the current object from the owner.
    void DetachFromOwner() { m_attached = false; }

    /// Returns the string representation of the specified value of 'standalone' attribute of the XML declaration node.
    /// @param libxml2_doc_standalone The numeric value representing one of possible values of 'standalone' attribute of the XML declaration node.
    /// @returns A string repesentation of @p libxml2_doc_standalone
    static ASPOSECPP_SHARED_API String StandaloneToString(int libxml2_doc_standalone);

    /// Returns a numeric value corresponding to the specified string representation of the value of 'standalone' attribute of the XML declaration node.
    /// @param standalone The string representation of the value of 'standalone' attribute of the XML declaration node
    /// @returns An integer value that corresponds to @p standalone
    static ASPOSECPP_SHARED_API int StringToStandalone(const String& standalone);

    /// The value of 'version' attribute of the node represented by the current object.
    String m_version;
    /// The value of 'encoding' attribute of the node represented by the current object.
    String m_encoding;

    // like _xmlDoc::standalone in libxml2
    /// The numeric equivalent of the value of 'standolane' attribute of the node represented by the current object.
    int m_standalone;

    /// Indication if the node represented by the current object is attached to its owner.
    bool m_attached;
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_declaration_h_
