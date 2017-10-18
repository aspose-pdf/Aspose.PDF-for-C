#ifndef _aspose_xml_xml_node_type_h_
#define _aspose_xml_xml_node_type_h_

#include <system/enum.h>

namespace System { namespace Xml {

enum class XmlNodeType
{
    // This is returned by the System.Xml.XmlReader if a Read method has not been called.
    None = 0,

    // An element (for example, <item> ).
    Element = 1,

    // An attribute (for example, id='123' ).
    Attribute = 2,

    // The text content of a node.
    Text = 3,

    // A CDATA section (for example, <![CDATA[my escaped text]]> ).
    CDATA = 4,

    // A reference to an entity (for example, &num; ).
    EntityReference = 5,

    // An entity declaration (for example, <!ENTITY...> ).
    Entity = 6,

    // A processing instruction (for example, <?pi test?> ).
    ProcessingInstruction = 7,

    // A comment (for example, <!-- my comment --> ).
    Comment = 8,

    // A document object that, as the root of the document tree, provides access
    // to the entire XML document.
    Document = 9,

    // The document type declaration, indicated by the following tag (for example, <!DOCTYPE...> ).
    DocumentType = 10,

    // A document fragment.
    DocumentFragment = 11,

    // A notation in the document type declaration (for example, <!NOTATION...>).
    Notation = 12,

    // White space between markup.
    Whitespace = 13,

    // White space between markup in a mixed content model or white space within
    // the xml:space="preserve" scope.
    SignificantWhitespace = 14,

    // An end element tag (for example, </item> ).
    EndElement = 15,

    // Returned when XmlReader gets to the end of the entity replacement as a result
    // of a call to System.Xml.XmlReader.ResolveEntity().
    EndEntity = 16,

    // The XML declaration (for example, <?xml version='1.0'?> ).
    XmlDeclaration = 17
};

} } // namespace System::Xml

template<>
struct EnumMetaInfo<System::Xml::XmlNodeType>
{
    static const std::array<std::pair<System::Xml::XmlNodeType, const char_t*>, 18>& values()
    {
        using namespace System::Xml;
        static std::array<std::pair<XmlNodeType, const char_t*>, 18> enum_values
        {{
        { XmlNodeType::None, L"None" },
        { XmlNodeType::Element, L"Element" },
        { XmlNodeType::Attribute, L"Attribute" },
        { XmlNodeType::Text, L"Text" },
        { XmlNodeType::CDATA, L"CDATA" },
        { XmlNodeType::EntityReference, L"EntityReference" },
        { XmlNodeType::Entity, L"Entity" },
        { XmlNodeType::ProcessingInstruction, L"ProcessingInstruction" },
        { XmlNodeType::Comment, L"Comment" },
        { XmlNodeType::Document, L"Document" },
        { XmlNodeType::DocumentType, L"DocumentType" },
        { XmlNodeType::DocumentFragment, L"DocumentFragment" },
        { XmlNodeType::Notation, L"Notation" },
        { XmlNodeType::Whitespace, L"Whitespace" },
        { XmlNodeType::SignificantWhitespace, L"SignificantWhitespace" },
        { XmlNodeType::EndElement, L"EndElement" },
        { XmlNodeType::EndEntity, L"EndEntity" },
        { XmlNodeType::XmlDeclaration, L"XmlDeclaration" },
        }};

        return enum_values;
    }
};


#endif // _aspose_xml_xml_node_type_h_