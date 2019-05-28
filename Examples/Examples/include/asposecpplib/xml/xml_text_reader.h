/// @file xml/xml_text_reader.h
#ifndef _aspose_xml_text_reader_h_
#define _aspose_xml_text_reader_h_

#include "xml/entity_handling.h"
#include "xml/xml_reader.h"
#include "xml/whitespace_handling.h"
#include "xml/xml_reader_settings.h"
#include "xml/xml_parser_context.h"
#include "xml/xml_resolver.h"

#include "xml/detail/xml_3rd_party_types.h"

#include <memory>

namespace System { namespace Xml {

namespace Schema { class XmlSchema; }

class XmlResolver;
class XmlNameTable;
class NameTable;

/// Provides non-cached forward-only access to XML data.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlTextReader : public XmlReader
{
    RTTI_INFO(XmlTextReader, ::System::BaseTypesInfo<System::Xml::XmlReader>);

    friend class XmlReader;
    friend class Schema::XmlSchema;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlTextReader> Ptr;
    /// Constructs an instance of the XmlTextReader class that reads XML data from the specified file.
    /// @param inputUri URI of the file containing the XML to read
    ASPOSECPP_SHARED_API XmlTextReader(const String& inputUri);
    /// Constructs an instance of the XmlTextReader class that reads XML data from the specified stream.
    /// @param input A System::IO::Stream object to read the XML data from
    ASPOSECPP_SHARED_API XmlTextReader(const SharedPtr<System::IO::Stream>& input);
    /// Constructs an instance of the XmlTextReader class that reads XML data from the specified TextReader.
    /// @param input A TextReader object to read the XML data from
    ASPOSECPP_SHARED_API XmlTextReader(const SharedPtr<System::IO::TextReader>& input);
    /// Constructs an instance of the XmlTextReader class that reads XML data from the specified srteam; a parameter
    /// specifies an URL to resolve resources.
    /// @param url An URL used to resolve external resources encountered in the XML document being read
    /// @param input A sream to read the XML data from
    ASPOSECPP_SHARED_API XmlTextReader(const String& url, const SharedPtr<System::IO::Stream>& input);
    /// Constructs an instance of the XmlTextReader class that reads XML data from the specified TextReader; a parameter
    /// specifies an URL to resolve resources.
    /// @param url An URL used to resolve external resources encountered in the XML document being read
    /// @param input A TextReader object to read the XML data from
    ASPOSECPP_SHARED_API XmlTextReader(const String& url, const SharedPtr<System::IO::TextReader>& input);
    /// Constructs an instance of the XmlTextReader class that reads XML data from the specified file using the specified settings.
    /// @param inputUri URI of the file containing the XML to read
    /// @param settings The settings of the XmlReader being created
    ASPOSECPP_SHARED_API XmlTextReader(const String& inputUri, const XmlReaderSettings::Ptr& settings);
    /// Constructs an instance of the XmlTextReader class that reads XML data from the specified stream using the specified settings.
    /// @param input A System::IO::Stream object to read the XML data from
    /// @param settings The settings of the XmlReader being created
    ASPOSECPP_SHARED_API XmlTextReader(const SharedPtr<System::IO::Stream>& input, const XmlReaderSettings::Ptr& settings);
    /// Constructs an instance of the XmlTextReader class that reads XML data from the specified TextReader using the specified settings.
    /// @param input A TextReader object to read the XML data from
    /// @param settings The settings of the XmlReader being created
    ASPOSECPP_SHARED_API XmlTextReader(const SharedPtr<System::IO::TextReader>& input, const XmlReaderSettings::Ptr& settings);
    /// Constructs an instance of the XmlTextReader class that reads XML data from the specified TextReader using the specified settings
    /// and cotext information for parsing.
    /// @param input A TextReader object to read the XML data from
    /// @param settings The settings of the XmlReader being created
    /// @param context The context information used to parse the XML fragment
    ASPOSECPP_SHARED_API XmlTextReader(const SharedPtr<System::IO::TextReader>& input, const XmlReaderSettings::Ptr& settings, const XmlParserContext::Ptr& context);
    /// Constructs an instance of the XmlTextReader class that reads an XML frogmet of the specified type
    /// from the specified stream using the specified cotext information for parsing.
    /// @param input A System::IO::Stream object to read the XML data from
    /// @param fragType The type of the fragment read from the stream @p input
    /// @param context The context information used to parse the XML fragment
    ASPOSECPP_SHARED_API XmlTextReader(const SharedPtr<System::IO::Stream>& input, XmlNodeType fragType, const XmlParserContext::Ptr& context);
    /// Constructs an instance of the XmTextlReader class that reads an XML fragment of the specified type from the specified 
    /// string using cotext information for parsing.
    /// @param xmlFragment An XML fragment represented as a string
    /// @param fragType The type of the fragment being read
    /// @param context The context information used to parse the XML fragment
    ASPOSECPP_SHARED_API XmlTextReader(const String& xmlFragment, XmlNodeType fragType, const XmlParserContext::Ptr& context);
    /// Constructs an instance of the XmlTextReader class that reads XML data from the specified stream using the specified settings
    /// and cotext information for parsing.
    /// @param input A System::IO::Stream object to read the XML data from
    /// @param settings The settings of the XmlReader being created
    /// @param context The context information used to parse the XML fragment
    ASPOSECPP_SHARED_API XmlTextReader(const SharedPtr<System::IO::Stream>& input, const XmlReaderSettings::Ptr& settings, const XmlParserContext::Ptr& context);
    /// Constructs an instance of the XmTextlReader class that reads an XML fragment specified as a string using the specified settings
    /// and cotext information for parsing.
    /// @param xmlFragment An XML fragment represented as a string
    /// @param settings The settings of the XmlReader being created
    /// @param context The context information used to parse the XML fragment
    ASPOSECPP_SHARED_API XmlTextReader(const String& xmlFragment, const XmlReaderSettings::Ptr& settings, const XmlParserContext::Ptr& context);

    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XmlTextReader();

    // XmlReader
    /// Returns the qualified name of the current node.
    ASPOSECPP_SHARED_API String get_Name() override;
    /// Returns the prefix of the current node.
    ASPOSECPP_SHARED_API String get_Prefix() override;
    /// Returns the local name of the current node.
    ASPOSECPP_SHARED_API String get_LocalName() override;
    /// Returns the namespace URI of the current node.
    ASPOSECPP_SHARED_API String get_NamespaceURI() override;
    /// Returns the base URI of the current node.
    ASPOSECPP_SHARED_API String get_BaseURI() override;
    /// Returns the value of the current node.
    ASPOSECPP_SHARED_API String get_Value() override;

    /// Returns the current state of the reader.
    ASPOSECPP_SHARED_API ReadState get_ReadState() override;
    /// Determines if the current node is an empty element.
    ASPOSECPP_SHARED_API bool get_IsEmptyElement() override;
    /// Determines if the current node is an attribute that was generated from the default value defined in the DTD or schema.
    ASPOSECPP_SHARED_API bool get_IsDefault() override;
    /// Returns the depths of the current node in the XML tree.
    ASPOSECPP_SHARED_API int get_Depth() override;
    /// Determines if the reader has reached the end of stream.
    ASPOSECPP_SHARED_API bool get_EOF() override;
    /// Determines if the current node has any attributes.
    ASPOSECPP_SHARED_API bool get_HasAttributes() override;
    /// Returns the number of attributes in the current node.
    ASPOSECPP_SHARED_API int get_AttributeCount() override;
    /// Determines if the current node has a value.
    ASPOSECPP_SHARED_API bool get_HasValue() override;
    /// Returns the current xml:lang scope.
    ASPOSECPP_SHARED_API String get_XmlLang() override;
    /// Returns the used as quotation mark character used to enclose the value of an XML attribute node.
    ASPOSECPP_SHARED_API UChar get_QuoteChar() override;
    /// Returns the type of the current node.
    ASPOSECPP_SHARED_API XmlNodeType get_NodeType() override;

    /// Returns the value of the attribute with the specified name.
    /// @param name The qualified name of the attribute
    /// @returns The value of the attribute with name @p name
    ASPOSECPP_SHARED_API String GetAttribute(const String& name) override;
    /// Moves the reader's position to the attribute with the specified name.
    /// @param name The qualified name of the attribute to move the position to
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToAttribute(const String& name) override;
    /// Moves the reader's position to the attribute with the specified index.
    /// @param index A 0-based index of the attribute in the list of attributes of the current node
    ASPOSECPP_SHARED_API void MoveToAttribute(int index) override;
    /// Moves the reader's position to the next attribute.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToNextAttribute() override;
    /// Moves the reader's position to the first attribute in the list of attributes of the current node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToFirstAttribute() override;

    /// Moves the position of the reader to the next content node, skipping the non-content nodes.
    /// @returns The type of the node to which the reader's position was moved
    ASPOSECPP_SHARED_API XmlNodeType MoveToContent() override;
    /// Moves the reader's position to the element node that contains the current attribute node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool MoveToElement() override;
    /// Reads the next node.
    /// @returns True if the operation succeeded, otherwise - false
    ASPOSECPP_SHARED_API bool Read() override;
    /// Resolves a namespace prefix in the scope of the current element.
    /// @param prefix The prefix to resove
    /// @returns The namespace URI associated with the specified prefix
    ASPOSECPP_SHARED_API String LookupNamespace(const String & prefix) override;
    /// Skips the children of the current node.
    ASPOSECPP_SHARED_API void Skip() override;
    /// Changes the state of the reader to ReadState::Closed.
    ASPOSECPP_SHARED_API void Close() override;
    /// Reads the contents of an element or a text node.
    /// @returns The contents of an element or a text node as a string.
    ASPOSECPP_SHARED_API String ReadString() override;
    /// Checks if the current content node is an element and 
    /// moves the the reader's position to the next node.
    ASPOSECPP_SHARED_API void ReadStartElement() override;
    /// Checks if the current content node is an element with the specified qualified name and 
    /// moves the the reader's position to the next node.
    /// @param name The element's qualified name
    ASPOSECPP_SHARED_API void ReadStartElement(const String& name) override;
    /// Checks if the current content node is an element with the specified local name and namespace URI and 
    /// moves the the reader's position to the next node.
    /// @param localName The element's local name
    /// @param namespaceUri The element's namespace URI
    ASPOSECPP_SHARED_API void ReadStartElement(const String& localName, const String& namespaceUri) override;
    /// Returns a string containing all the content of the current node, including the markup, but excluding start and end tags.
    ASPOSECPP_SHARED_API String ReadInnerXml() override;
    /// Returns a string containing all the content of the current node, including the markup, and including start and end tags.
    ASPOSECPP_SHARED_API String ReadOuterXml() override;
    /// Reads the contents of a text-only element.
    /// @returns The contents of the current element
    ASPOSECPP_SHARED_API String ReadElementString() override;
    /// Checks if the current node is an element whose qualified name matches the 
    /// specified value and reads its content.
    /// @param value The element's qualified name
    /// @returns The contents of the current element as a string
    ASPOSECPP_SHARED_API String ReadElementString(const String& value) override;
    /// Checks if the current node is an element whose local name and namespce URI match the 
    /// specified values and returns its content as string.
    /// @param localName The local name of the element
    /// @param namespaceUri The namespace URI of the element
    /// @returns The element's content as a string
    ASPOSECPP_SHARED_API String ReadElementString(const String& localName, const String& namespaceUri) override;

    // XmlTextReader
    /// Returns the document's encoding.
    ASPOSECPP_SHARED_API String get_Encoding() const;
    /// Sets the XML Resolver object used to access external XML documents.
    /// @param value The XmlResolver object to set
    void set_XmlResolver(const SharedPtr<XmlResolver>& value) { m_xmlResolver = value; }
    
    /// Returns the name table used by the current object.
    ASPOSECPP_SHARED_API SharedPtr<XmlNameTable> get_NameTable();
    /// Returns the current line number.
    ASPOSECPP_SHARED_API int get_LineNumber() const;
    /// Returns the current line position.
    ASPOSECPP_SHARED_API int get_LinePosition() const;
    /// Sets a value that indicates if DTD processing should be prohibited.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_ProhibitDtd(bool value);

    /// Sets a value that specifies how the reader should handle entities.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_EntityHandling(EntityHandling value);
    /// Sets a value that indicates if the white space and attribute values should be normalized.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Normalization(bool value);
    /// Sets a value that indicates how the whitspace characters should be handled by the reader.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_WhitespaceHandling(WhitespaceHandling value);
    /// Sets a value that determines the processing of DTD.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_DtdProcessing(DtdProcessing value);

    /// Decodes a BinHex-encoded data and returns decoded bytes.
    /// @param buffer The output argument; a array to which the decoded bytes are written
    /// @param startPosition A 0-based index in the @p buffer at which to start writing the decoded bytes
    /// @param length The number of bytes to write to the output buffer
    /// @returns The number of bytes written to the output buffer
    ASPOSECPP_SHARED_API int ReadBinHex(const ArrayPtr<uint8_t>& buffer, int startPosition, int length);

    // special
    /// Returns a pointer to the underlying libxml2 xmlTextReader object.
    xmlTextReader* native() const { return m_reader; }
    /// Returns a bitwise set of flags used by the underlying libxml2 xmlTextReader object.
    int native_parse_flags() const { return m_parseFlags; }

protected:
    /// The underlying naive libxml2 XML reader object used by the current object.
    xmlTextReader* m_reader;
    /// A bitwise set of flags used by the underlying libxml2 xmlTextReader object.
    int m_parseFlags = 0;
    /// Settings controlling the behavior of the current XmlTextReader object.
    SharedPtr<XmlReaderSettings> m_settings;
    /// XML Parser context.
    XmlParserContext::Ptr m_context;

    /// Constructs an instance of XmlTextReader class.
    ASPOSECPP_SHARED_API XmlTextReader();

private:
    /// The underlying input buffer containing the XML data to read.
    xmlParserInputBuffer* m_xmlInputBuf;
    /// The XML Resolver object used to access external XML documents.
    XmlResolver::Ptr m_xmlResolver;
    /// The name table used by the current object.
    SharedPtr<NameTable> m_name_table;
    /// Temporary buffer containing the UTF-8 encoded XML data to read.
    std::string m_tmpUtf8Buffer;
    /// The current XmlTextReader object's read state.
    ReadState m_read_state;
    
    /// Constructs and initializes the underlying libxml2 xmlTextReader object and configures it to read from
    /// the specified stream.
    /// @param input A sream to read the XML data from
    void init_from_stream(const SharedPtr<System::IO::Stream>& input);
    /// Constructs and initializes the underlying libxml2 xmlTextReader object and configures it to read from 
    /// the specified stream.
    /// @param url An URL used to resolve external resources encountered in the XML document being read
    /// @param input A sream to read the XML data from
    void init_from_stream(const SharedPtr<System::IO::Stream>& input, const String& url);
    /// Initializes the underlying libxml2 xmlTextReader object and configures it to read from
    /// the specified TextReder object.
    /// @param input A TextReader object to read the XML data from
    void init_from_text_reader(const SharedPtr<System::IO::TextReader>& input);
    /// Initializes the underlying libxml2 xmlTextReader object and configures it to read from 
    /// the specified TextReder object.
    /// @param url An URL used to resolve external resources encountered in the XML document being read
    /// @param input A TextReader object to read the XML data from
    void init_from_text_reader(const SharedPtr<System::IO::TextReader>& input, const String& url);
    /// Configures the current XmlTextReader object according to the specified settings and context.
    /// @param settings The settings to apply to the current object
    /// @param inputContext The context information used to parse the XML fragment
    void apply_settings(const XmlReaderSettings::Ptr& settings, const XmlParserContext::Ptr& context = nullptr);

    struct ReaderErrorHandler;
    /// Callback which gets namespace URI for given prefix.
    /// @param arg XmlTextReader pointer.
    /// @param dict Dictionary to read data from.
    /// @param prefix Prefix to look for.
    /// @return URI of the namespace or null if not found.
    static const char* reader_namespace_provider(void* arg, void* dict, const char* prefix);
    /// A shared pointer to a System::IO::Stream object from which the current object
    /// reads XML data.
    SharedPtr<System::IO::Stream> m_stream;
    /// Reads the specified number of bytes from the specified source to the specified buffer.
    /// @param context A pointer to a System::IO::Stream object cast to a pointer to void to read data from
    /// @param buffer A pointer to the beginning of the destination buffer to read data to
    /// @param len The number of bytes to read
    /// @returns The total number of bytes read
    static int s_stream_read(void *context, char *buffer, int len);
    /// Does nothing.
    /// @param context IGNORED
    /// @returns Always 0
    static int s_stream_close(void *context);
    /// A shared pointer to a System::IO::TextReader object from which the current object
    /// reads XML data.
    SharedPtr<System::IO::TextReader> m_text_reader;
    /// Reads the specified number of bytes from the specified source to the specified buffer.
    /// @param context A pointer to a System::IO::TextReader object cast to a pointer to void to read data from
    /// @param buffer A pointer to the beginning of the destination buffer to read data to
    /// @param len The number of bytes to read
    /// @returns The total number of bytes read
    static int s_treader_read(void *context, char *buffer, int len);
    /// Does nothing.
    /// @param context IGNORED
    /// @returns Always 0
    static int s_treader_close(void *context);

    /// Formats the specified multiline c-string into a single-line string by replacing
    /// all '\n' and '\r' characters with a whitespace character.
    /// @param msg A c-string to format
    /// @returns A formatted single-line string
    static String error_message_to_string(const char* msg);
    
    struct TextReaderContext;
    /// TextReaderContext used when reading XML data from a TextReader object.
    std::unique_ptr<TextReaderContext> m_text_reader_context;
};

}} // namespace System::Xml

#endif // _aspose_xml_text_reader_h_
