/// @file xml/xml_node_type.h
#ifndef _aspose_xml_xml_node_type_h_
#define _aspose_xml_xml_node_type_h_

#include <system/enum.h>

namespace System { namespace Xml {

/// Specifies an XML node type.
enum class XmlNodeType
{
    /// This is returned by the System::Xml::XmlReader if a Read method has not been called.
    None = 0,

    /// An element.
    Element = 1,

    /// An attribute.
    Attribute = 2,

    /// The text content of a node.
    Text = 3,

    /// A CDATA section.
    CDATA = 4,

    /// A reference to an entity.
    EntityReference = 5,

    /// An entity declaration.
    Entity = 6,

    /// A processing instruction.
    ProcessingInstruction = 7,

    /// A comment.
    Comment = 8,

    /// A document object that, as the root of the document tree, provides access
    /// to the entire XML document.
    Document = 9,

    /// The document type declaration.
    DocumentType = 10,

    /// A document fragment.
    DocumentFragment = 11,

    /// A notation in the document type declaration.
    Notation = 12,

    /// White space between markup.
    Whitespace = 13,

    /// White space between markup in a mixed content model or white space within
    /// the xml:space="preserve" scope.
    SignificantWhitespace = 14,

    /// An end tag of an element.
    EndElement = 15,

    /// Returned when XmlReader gets to the end of the entity replacement as a result
    /// of a call to System::Xml::XmlReader::ResolveEntity().
    EndEntity = 16,

    /// The XML declaration.
    XmlDeclaration = 17
};

} } // namespace System::Xml

/// Type meta information. Specialization for System::Xml::XmlNodeType.
template<>
struct EnumMetaInfo<System::Xml::XmlNodeType>
{
	/// Returns a array of pairs that associate System::Xml::XmlNodeType enum's constants with their
    /// string representations.
    static const std::array<std::pair<System::Xml::XmlNodeType, const char_t*>, 18>& values()
    {
        using namespace System::Xml;
        static std::array<std::pair<XmlNodeType, const char_t*>, 18> enum_values
        {{
        { XmlNodeType::None, u"None" },
        { XmlNodeType::Element, u"Element" },
        { XmlNodeType::Attribute, u"Attribute" },
        { XmlNodeType::Text, u"Text" },
        { XmlNodeType::CDATA, u"CDATA" },
        { XmlNodeType::EntityReference, u"EntityReference" },
        { XmlNodeType::Entity, u"Entity" },
        { XmlNodeType::ProcessingInstruction, u"ProcessingInstruction" },
        { XmlNodeType::Comment, u"Comment" },
        { XmlNodeType::Document, u"Document" },
        { XmlNodeType::DocumentType, u"DocumentType" },
        { XmlNodeType::DocumentFragment, u"DocumentFragment" },
        { XmlNodeType::Notation, u"Notation" },
        { XmlNodeType::Whitespace, u"Whitespace" },
        { XmlNodeType::SignificantWhitespace, u"SignificantWhitespace" },
        { XmlNodeType::EndElement, u"EndElement" },
        { XmlNodeType::EndEntity, u"EndEntity" },
        { XmlNodeType::XmlDeclaration, u"XmlDeclaration" },
        }};

        return enum_values;
    }
};


#endif // _aspose_xml_xml_node_type_h_
