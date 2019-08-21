/// @file xml/xml_text_writer.h
#ifndef _aspose_xml_xml_text_writer_h_
#define _aspose_xml_xml_text_writer_h_

#include "xml_writer.h"
#include "formatting.h"

#include "xml/detail/xml_3rd_party_types.h"

#include <deque>
#include <map>

namespace System {

namespace IO { class Stream; }
namespace Text { class Encoding; class StringBuild; }

namespace Xml {

// Forward declaration
class XmlReader;

/// Represents a non-cached, forward-only writer way of generating streams or files containing XML data.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlTextWriter : public XmlWriter
{
    RTTI_INFO(XmlTextWriter, ::System::BaseTypesInfo<System::Xml::XmlWriter>);

    friend class XmlWriter;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlTextWriter> Ptr;

    /// Constructs an instance of XmlWriter class and initializes it with the specified output file and encoding.
    /// @param outputFileName A filesystem path specifying a file to which the writer will write
    /// @param encoding The encoding to use
    ASPOSECPP_SHARED_API XmlTextWriter(const String& outputFileName, const SharedPtr<System::Text::Encoding>& encoding = SharedPtr<System::Text::Encoding>());
    /// Constructs an instance of XmlTextWriter class and initializes it with the specified stream.
    /// @param stream A stream to which the writer will write
    /// @param encoding The encoding to use
    ASPOSECPP_SHARED_API XmlTextWriter(const SharedPtr<System::IO::Stream>& stream, const SharedPtr<System::Text::Encoding>& encoding = SharedPtr<System::Text::Encoding>());
    /// Constructs an instance of XmlTextWriter class and initializes it with the specified TextWriter.
    /// @param text_writer A TextWriter to which the writer will write
    ASPOSECPP_SHARED_API XmlTextWriter(const SharedPtr<System::IO::TextWriter>& text_writer);
    /// Constructs an instance of XmlTextWriter class and initializes it with the specified StringBuilder.
    /// @param string_builder A StringBuilder to which the writer will write
    ASPOSECPP_SHARED_API XmlTextWriter(const SharedPtr<System::Text::StringBuilder>& string_builder);

    // for debug and internal usage
    /// Constructs a new instance of XmlTextWriter and forces it to use the
    /// specified xmlBuffer object.
    /// @param buf An xmlBuffer object to use
    ASPOSECPP_SHARED_API XmlTextWriter(xmlBuffer* buf);
    /// Constructs a new instance of XmlTextWriter and forces it to use the
    /// specified xmlOutputBuffer object.
    /// @param buf An xmlOutputBuffer object to use
    ASPOSECPP_SHARED_API XmlTextWriter(xmlOutputBuffer* buf);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XmlTextWriter();

    // XmlWriter interface

    // properties
    /// Returns a value indicating the state of the current writer.
    ASPOSECPP_SHARED_API WriteState get_WriteState() override;

    // methods
    /// Closes the write stream.
    ASPOSECPP_SHARED_API void Close() override;
    /// Flushes the content of the buffers to the underlying stream and also flushes the underlying stream.
    ASPOSECPP_SHARED_API void Flush() override;

    /// Writes an XML declaration with version "1.0".
    ASPOSECPP_SHARED_API void WriteStartDocument() override;
    /// Writes an XML declaration with version "1.0" and the 'standalone' attribute with the specified value.
    /// @param standalone The value of the 'standalone' attribute in the XML declaration 
    ASPOSECPP_SHARED_API void WriteStartDocument(bool standalone) override;

    /// Writes out a start tag of an element with the specified local name.
    /// @param localName The element's local name
    ASPOSECPP_SHARED_API void WriteStartElement(String localName) override;
    /// Writes out a start tag of an element with the specified local name and associates it with the specified namespace.
    /// @param localName The element's local name
    /// @param ns The namespace to associate the element with
    ASPOSECPP_SHARED_API void WriteStartElement(String localName, String ns) override;
    /// Writes out a start tag of an element with the specified local name and prefix 
    /// and associates it with the specified namespace.
    /// @param prefix The element's prefix
    /// @param localName The element's local name
    /// @param ns The namespace to associate the element with
    ASPOSECPP_SHARED_API void WriteStartElement(String prefix, String localName, String ns) override;

    /// Writes the start of an attribute with the specified local name.
    /// @param localName The attribute's local name
    ASPOSECPP_SHARED_API void WriteStartAttribute(String localName) override;

    /// Writes out an attribute with the specified local name and value.
    /// @param localName The attribute's local name
    /// @param value The attribute's value
    ASPOSECPP_SHARED_API void WriteAttributeString(String localName, String value) override;
    /// Writes out an attribute with the specified local name and value and associates it with the 
    /// specified namespace.
    /// @param localName The attribute's local name
    /// @param ns The namespace to associate the attribute with
    /// @param value The attribute's value
    ASPOSECPP_SHARED_API void WriteAttributeString(String localName, String ns, String value) override;
    /// Writes out an attribute with the specified prefix, local name and value and associates it with the 
    /// specified namespace.
    /// @param prefix The attribute's prefix
    /// @param localName The attribute's local name
    /// @param ns The namespace to associate the attribute with
    /// @param value The attribute's value
    ASPOSECPP_SHARED_API void WriteAttributeString(String prefix, String localName, String ns, String value) override;

    /// Writes out all the attributes found at the current position in the XmlReader.
    /// @param reader The XmlReader from which to copy the attributes.
    /// @param defattr true to copy the default attributes from the XmlReader; otherwise, false.
    ASPOSECPP_SHARED_API void WriteAttributes(SharedPtr<XmlReader> reader, bool defattr) override;

    /// Writes out an element with the specified local name and value.
    /// @param localName The element's local name
    /// @param value The element's value
    ASPOSECPP_SHARED_API void WriteElementString(String localName, String value) override;
    /// Writes out an element with the specified local name and value and associates it with the specified namespace.
    /// @param localName The element's local name
    /// @param ns The namespace to associate the element with
    /// @param value The element's value
    ASPOSECPP_SHARED_API void WriteElementString(String localName, String ns, String value) override;
    /// Writes out an element with the specified prefix, local name and value and associates it with the specified namespace.
    /// @param prefix The attribute's prefix
    /// @param localName The element's local name
    /// @param ns The namespace to associate the element with
    /// @param value The element's value
    ASPOSECPP_SHARED_API void WriteElementString(String prefix, String localName, String ns, String value) override;

    /// Writes out a DOCTYPE declaration with the specified name and attributes.
    /// @param name The name of DOCTYPE declaration
    /// @param pubid The public identifier of DOCTYPE declaration
    /// @param sysid The system identifier of DOCTYPE declaration
    /// @param subset The subset parameter of DOCTYPE declaration
    ASPOSECPP_SHARED_API void WriteDocType(String name, String pubid, String sysid, String subset) override;
    /// Writes out a CData node.
    /// @param text The content of the node
    ASPOSECPP_SHARED_API void WriteCData(String text) override;
    /// Writes out a comment node.
    /// @param text The content of the node
    ASPOSECPP_SHARED_API void WriteComment(String text) override;
    /// Writes out a processing instruction with the specified name and text.
    /// @param name The name of the processing instruction
    /// @param text The text to be added to the processing instruction
    ASPOSECPP_SHARED_API void WriteProcessingInstruction(String name, String text) override;
    /// Writes out an entity reference as {ampersand}name;.
    /// @param name The name of the entity reference.
    ASPOSECPP_SHARED_API void WriteEntityRef(String name) override;

    /// Writes the specified text content.
    /// @param text The text to write
    ASPOSECPP_SHARED_API void WriteString(String text) override;
    /// Writes the specified white spaces.
    /// @param ws The string with white space characters to write
    ASPOSECPP_SHARED_API void WriteWhitespace(String ws) override;
    /// Writes the specified string content without escaping the special characters.
    /// @param text The text to write
    ASPOSECPP_SHARED_API void WriteRaw(String text) override;
    /// Writes the specified range of characters without escaping the special characters.
    /// @param buffer The character array
    /// @param index A 0-based index at which the range to write begins
    /// @param count The number of characters in the range
    ASPOSECPP_SHARED_API void WriteRaw(ArrayPtr<char_t> buffer, int index, int count) override;

    /// Base64-encodes the specified range of bytes in the specified byte array and writes out the resulting text.
    /// @param buffer A byte array
    /// @param index A 0-based index of the element in the array at which the range to encode begins
    /// @param count The number of elements in the range
    ASPOSECPP_SHARED_API void WriteBase64(ArrayPtr<uint8_t> buffer, int index, int count) override;
    /// Encodes the specified range of bytes in the specifie array as BinHex and writes out the resulting text.
    /// @param buffer A byte array
    /// @param index A 0-based index of the element in the array at which the range to encode begins
    /// @param count The number of elements in the range
    ASPOSECPP_SHARED_API void WriteBinHex(ArrayPtr<uint8_t> buffer, int index, int count) override;

    /// Closes the previous WriteStartAttribute(System::String) call.
    ASPOSECPP_SHARED_API void WriteEndAttribute() override;
    /// Closes an element and pops the corresponding namespace scope. If the element is empty, the 
    /// short form of the closing tag is used.
    ASPOSECPP_SHARED_API void WriteEndElement() override;
    /// Closes an element and pops the corresponding namespace scope. The full form of closing tag is used.
    ASPOSECPP_SHARED_API void WriteFullEndElement() override;
    /// Closes all open elements and attributes and puts the writer in the Start state.
    ASPOSECPP_SHARED_API void WriteEndDocument() override;
    /// Gets the closest prefix defined in the current namespace scope for the specified namespace URI.
    /// @param ns The namespace URI
    /// @return The closest prefix defined in the current namespace scope for @p ns
    ASPOSECPP_SHARED_API String LookupPrefix(String ns) override;

    // XmlTextWriter interface
    /// Returns a value that indicates how the output is formatted.
    ASPOSECPP_SHARED_API Formatting get_Formatting() const;
    /// Sets a value that indicates how the output is formatted.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Formatting(Formatting value);
    
    /// Sets a value that indicates whether to do namespace support.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Namespaces(bool value);

    /// Sets an integer value that indicates how many IndentChars should be writen for each level 
    /// in the hierarchy when Formatting is set to Formatting::Indented.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Indentation(int value);
    /// Returns an integer value that indicates how many IndentChars should be writen for each level 
    /// in the hierarchy when Formatting is set to Formatting::Indented.
    ASPOSECPP_SHARED_API int get_Indentation() const;

    /// Sets a character that should be used for indenting when Formatting is set to Formatting::Indented.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_IndentChar(char_t value);
    /// Returns a character that should be used for indenting when Formatting is set to Formatting::Indented.
    ASPOSECPP_SHARED_API char_t get_IndentChar() const;

    /// Sets a character that should be used to quote attribute values.
    /// @param value The value to set.
    ASPOSECPP_SHARED_API void set_QuoteChar(char_t value);

    /// Returns the underlying stream object.
    ASPOSECPP_SHARED_API SharedPtr<System::IO::Stream> get_BaseStream() const;

    // special methods
    /// Returns a pointer to the underlying libxml2 xmlTextWriter object.
    ASPOSECPP_SHARED_API xmlTextWriter* native() const;

protected:
    /// The underlynig libxml2 XML text writer.
    xmlTextWriter* m_writer;
    /// Indicates how the output is formatted.
    Formatting m_formatting;
    /// Indicates how many IndentChars should be writen for each level
    /// in the hierarchy when Formatting is set to Formatting::Indented.
    int m_indentation;
    /// A character that should be used for indenting when Formatting is set to Formatting::Indented.
    char_t m_indent_char;
    /// Indicates the state of the current writer.
    WriteState m_state;

    /// The current XmlWriter object's settings.
    SharedPtr<XmlWriterSettings> m_settings;

private:
    /// libxml2 output buffer.
    xmlOutputBuffer* m_xmlOutputBuf;

    /// A shared pointer to a System::IO::Stream object to which the current object
    /// writes XML data.
    SharedPtr<System::IO::Stream> m_stream;
    /// Writes the specified number of bytes from the specified source buffer to the specified destination object.
    /// @param context A pointer to a System::IO::Stream object cast to a pointer to void to write data to
    /// @param buffer A pointer to the beginning of the source buffer
    /// @param len The number of bytes to write
    /// @returns The total number of bytes written
    static int s_stream_write(void *context, const char *buffer, int len);
    /// Flushes the specified stream.
    /// @param context A pointer to a System::IO::Stream object cast to a pointer to void
    /// @returns Always 0
    static int s_stream_close(void *context);

    /// A shared pointer to a System::IO::TextWriter object to which the current object
    /// writes XML data.
    SharedPtr<System::IO::TextWriter> m_text_writer;
    /// Writes the specified number of bytes from the specified source buffer to the specified destination TextWriter object.
    /// @param context A pointer to a System::IO::TextWriter object cast to a pointer to void to write data to
    /// @param buffer A pointer to the beginning of the source buffer
    /// @param len The number of bytes to write
    /// @returns The total number of bytes written
    static int s_twriter_write(void *context, const char *buffer, int len);
    /// Flushes the specified stream.
    /// @param context A pointer to a System::IO::TextWriter object cast to a pointer to void
    /// @returns Always 0
    static int s_twriter_close(void *context);

    /// A shared pointer to a System::Text::StringBuilder object to which the current object
    /// writes XML data.
    SharedPtr<System::Text::StringBuilder> m_string_builder;
    /// Writes the specified number of bytes from the specified source buffer to the specified destination StringBuilder object.
    /// @param context A pointer to a System::IO::StringBuilder object cast to a pointer to void to write data to
    /// @param buffer A pointer to the beginning of the source buffer
    /// @param len The number of bytes to write
    /// @returns The total number of bytes written
    static int s_sbuilder_write(void *context, const char *buffer, int len);
    /// Does nothing.
    /// @param context IGNORED
    /// @returns Always 0
    static int s_sbuilder_close(void *context);
    /// Throws an XmlException exception describing the last error that occurred in xmllib2.
    /// @param msg An error message that is passed to XmlException object's constructor if 
    /// no libxml2 error has occurred; this parameter is ignored if xmlGetLastError returns non-null value
    /// in which case libxml2 error message is passed to exception object's constructor
    void process_error(const char* msg = "");
    /// Registers namespace and sets scope stack head to a new state.
    /// @param prefix Namespace prefix.
    /// @param ns Namespace URI.
    void register_element_ns(const String & prefix, const String & ns);
    /// Adds xmlns attribute-defined namespace to the context which is on top of the stack.
    /// @param prefix Prefix to test for being "xmlns" (otherwise later arguments are ignored).
    /// @param name Name of the namespace to register.
    /// @param ns Namespace URI.
    void register_attribute_ns(const String & prefix, const String & name, const String & ns);
    /// Associates the specified namespace with the specified prefix.
    /// @param prefix A prefix to associate with the namespace @p ns
    /// @param prefix A namespace to associate with the prefix @p prefix
    void register_attribute_ns(const String & prefix, const String & ns);
    /// Removes the top element from the stack of namespace scopes.
    /// @returns True if an elemenet was removed; false if the stack was already empty 
    /// at the moment the method was called
    bool unregister_element_ns();
    /// Gets the closest prefix defined in the current namespace scope for the specified namespace URI.
    /// @param ns The namespace URI
    /// @return The closest prefix defined in the current namespace scope for @p ns
    String lookup_prefix(const String & ns);
    /// Returns a ordinal position of the current namespace in the stack of namespace scopes.
    /// @returns The number of elements if the namespace scopes stack + 1
    int prefix_idx();
    /// Represents an association of a namespace and a prefix.
    typedef std::map<String, String> ElementNamespaces;
    /// Represents a stack of namespace scopes.
    std::deque<ElementNamespaces> m_ns_stack;

    /// Base constructor.
    XmlTextWriter();
};

}} // namespace System::Xml

#endif // _aspose_xml_xml_text_writer_h_
