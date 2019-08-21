/// @file xml/xml_writer.h
#ifndef _aspose_xml_xml_writer_h_
#define _aspose_xml_xml_writer_h_

#include <system/array.h>
#include <system/idisposable.h>
#include <system/text/string_builder.h>
#include <system/io/text_writer.h>

#include "xml_writer_settings.h"
#include "xml_write_state.h"

namespace System { namespace Xml {

// Forward declaration
class XmlReader;

/// Represents a writer that provides a non-cached, forward-only way to generate XML data.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlWriter : public IDisposable
{
    RTTI_INFO(XmlWriter, ::System::BaseTypesInfo<System::IDisposable>);

    FRIEND_FUNCTION_System_MakeObject;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlWriter> Ptr;

    // properties
    /// Returns a value indicating the state of the current writer.
    virtual ASPOSECPP_SHARED_API WriteState get_WriteState() = 0;

    // methods
    /// Closes the write stream.
    virtual ASPOSECPP_SHARED_API void Close() = 0;
    /// Flushes the content of the buffers to the underlying stream and also flushes the underlying stream.
    virtual ASPOSECPP_SHARED_API void Flush() = 0;

    /// Writes an XML declaration with version "1.0".
    virtual ASPOSECPP_SHARED_API void WriteStartDocument() = 0;
    /// Writes an XML declaration with version "1.0" and the 'standalone' attribute with the specified value.
    /// @param standalone The value of the 'standalone' attribute in the XML declaration 
    virtual ASPOSECPP_SHARED_API void WriteStartDocument(bool standalone) = 0;

    /// Writes out a start tag of an element with the specified local name.
    /// @param localName The element's local name
    virtual ASPOSECPP_SHARED_API void WriteStartElement(String localName) = 0;
    /// Writes out a start tag of an element with the specified local name and associates it with the specified namespace.
    /// @param localName The element's local name
    /// @param ns The namespace to associate the element with
    virtual ASPOSECPP_SHARED_API void WriteStartElement(String localName, String ns) = 0;
    /// Writes out a start tag of an element with the specified local name and prefix 
    /// and associates it with the specified namespace.
    /// @param prefix The element's prefix
    /// @param localName The element's local name
    /// @param ns The namespace to associate the element with
    virtual ASPOSECPP_SHARED_API void WriteStartElement(String prefix, String localName, String ns) = 0;

    /// Writes out an attribute with the specified local name and value.
    /// @param localName The attribute's local name
    /// @param value The attribute's value
    virtual ASPOSECPP_SHARED_API void WriteAttributeString(String localName, String value) = 0;

    /// Writes the start of an attribute with the specified local name.
    /// @param localName The attribute's local name
    virtual ASPOSECPP_SHARED_API void WriteStartAttribute(String localName) = 0;

    /// Writes out an attribute with the specified local name and value and associates it with the 
    /// specified namespace.
    /// @param localName The attribute's local name
    /// @param ns The namespace to associate the attribute with
    /// @param value The attribute's value
    virtual ASPOSECPP_SHARED_API void WriteAttributeString(String localName, String ns, String value) = 0;
    /// Writes out an attribute with the specified prefix, local name and value and associates it with the 
    /// specified namespace.
    /// @param prefix The attribute's prefix
    /// @param localName The attribute's local name
    /// @param ns The namespace to associate the attribute with
    /// @param value The attribute's value
    virtual ASPOSECPP_SHARED_API void WriteAttributeString(String prefix, String localName, String ns, String value) = 0;

    /// Writes out all the attributes found at the current position in the XmlReader.
    /// @param reader The XmlReader from which to copy the attributes.
    /// @param defattr true to copy the default attributes from the XmlReader; otherwise, false.
    virtual ASPOSECPP_SHARED_API void WriteAttributes(SharedPtr<XmlReader> reader, bool defattr) = 0;

    /// Writes out an element with the specified local name and value.
    /// @param localName The element's local name
    /// @param value The element's value
    virtual ASPOSECPP_SHARED_API void WriteElementString(String localName, String value) = 0;
    /// Writes out an element with the specified local name and value and associates it with the specified namespace.
    /// @param localName The element's local name
    /// @param ns The namespace to associate the element with
    /// @param value The element's value
    virtual ASPOSECPP_SHARED_API void WriteElementString(String localName, String ns, String value) = 0;
    /// Writes out an element with the specified prefix, local name and value and associates it with the specified namespace.
    /// @param prefix The attribute's prefix
    /// @param localName The element's local name
    /// @param ns The namespace to associate the element with
    /// @param value The element's value
    virtual ASPOSECPP_SHARED_API void WriteElementString(String prefix, String localName, String ns, String value) = 0;

    /// Writes out a DOCTYPE declaration with the specified name and attributes.
    /// @param name The name of DOCTYPE declaration
    /// @param pubid The public identifier of DOCTYPE declaration
    /// @param sysid The system identifier of DOCTYPE declaration
    /// @param subset The subset parameter of DOCTYPE declaration
    virtual ASPOSECPP_SHARED_API void WriteDocType(String name, String pubid, String sysid, String subset) = 0;
    /// Writes out a CData node.
    /// @param text The content of the node
    virtual ASPOSECPP_SHARED_API void WriteCData(String text) = 0;
    /// Writes out a comment node.
    /// @param text The content of the node
    virtual ASPOSECPP_SHARED_API void WriteComment(String text) = 0;
    /// Writes out a processing instruction with the specified name and text.
    /// @param name The name of the processing instruction
    /// @param text The text to be added to the processing instruction
    virtual ASPOSECPP_SHARED_API void WriteProcessingInstruction(String name, String text) = 0;
    /// Writes out an entity reference as {ampersand}name;.
    /// @param name The name of the entity reference.
    virtual ASPOSECPP_SHARED_API void WriteEntityRef(String name) = 0;

    /// Writes the specified text content.
    /// @param text The text to write
    virtual ASPOSECPP_SHARED_API void WriteString(String text) = 0;
    /// Writes the specified white spaces.
    /// @param ws The string with white space characters to write
    virtual ASPOSECPP_SHARED_API void WriteWhitespace(String ws) = 0;
    /// Writes the specified string content without escaping the special characters.
    /// @param text The text to write
    virtual ASPOSECPP_SHARED_API void WriteRaw(String text) = 0;
    /// Writes the specified range of characters without escaping the special characters.
    /// @param buffer The character array
    /// @param index A 0-based index at which the range to write begins
    /// @param count The number of characters in the range
    virtual ASPOSECPP_SHARED_API void WriteRaw(ArrayPtr<char_t> buffer, int index, int count) = 0;

    /// Base64-encodes the specified range of bytes in the specified byte array and writes out the resulting text.
    /// @param buffer A byte array
    /// @param index A 0-based index of the element in the array at which the range to encode begins
    /// @param count The number of elements in the range
    virtual ASPOSECPP_SHARED_API void WriteBase64(ArrayPtr<uint8_t> buffer, int index, int count) = 0;
    /// Encodes the specified range of bytes in the specifie array as BinHex and writes out the resulting text.
    /// @param buffer A byte array
    /// @param index A 0-based index of the element in the array at which the range to encode begins
    /// @param count The number of elements in the range
    virtual ASPOSECPP_SHARED_API void WriteBinHex(ArrayPtr<uint8_t> buffer, int index, int count) = 0;
    
    /// Closes the previous WriteStartAttribute(System::String) call.
    virtual ASPOSECPP_SHARED_API void WriteEndAttribute() = 0;
    /// Closes an element and pops the corresponding namespace scope. If the element is empty, the 
    /// short form of the closing tag is used.
    virtual ASPOSECPP_SHARED_API void WriteEndElement() = 0;
    /// Closes an element and pops the corresponding namespace scope. The full form of closing tag is used.
    virtual ASPOSECPP_SHARED_API void WriteFullEndElement() = 0;
    /// Closes all open elements and attributes and puts the writer in the Start state.
    virtual ASPOSECPP_SHARED_API void WriteEndDocument() = 0;
    /// Gets the closest prefix defined in the current namespace scope for the specified namespace URI.
    /// @param ns The namespace URI
    /// @return The closest prefix defined in the current namespace scope for @p ns
    virtual ASPOSECPP_SHARED_API String LookupPrefix(String ns) = 0;

    // creating
    /// Constructs an instance of XmlWriter class and initializes it with the specified output file.
    /// @param outputFileName A filesystem path specifying a file to which the writer will write
    /// @returns A shared pointer to the constructed object
    static ASPOSECPP_SHARED_API XmlWriter::Ptr Create(const String& outputFileName);

    /// Constructs an instance of XmlWriter class and initializes it with the specified output file and settings.
    /// @param outputFileName A filesystem path specifying a file to which the writer will write
    /// @param settings The writer's settings
    /// @returns A shared pointer to the constructed object
    static ASPOSECPP_SHARED_API XmlWriter::Ptr Create(const String& outputFileName, const SharedPtr<XmlWriterSettings>& settings);

    /// Constructs an instance of XmlWriter class and initializes it with the specified stream and settings.
    /// @param stream A stream to which the writer will write
    /// @param settings The writer's settings
    /// @returns A shared pointer to the constructed object
    static ASPOSECPP_SHARED_API XmlWriter::Ptr Create(const SharedPtr<System::IO::Stream>& stream, const SharedPtr<XmlWriterSettings>& settings = nullptr);

    /// Constructs an instance of XmlWriter class and initializes it with the specified StringBuilder and settings.
    /// @param builder A StringBuilder to which the writer will write
    /// @param settings The writer's settings
    /// @returns A shared pointer to the constructed object
    static ASPOSECPP_SHARED_API XmlWriter::Ptr Create(const SharedPtr<System::Text::StringBuilder>& builder, const SharedPtr<XmlWriterSettings>& settings);

    /// Constructs an instance of XmlWriter class and initializes it with the specified TextWriter.
    /// @param text_writer A TextWriter to which the writer will write
    /// @returns A shared pointer to the constructed object
    static ASPOSECPP_SHARED_API XmlWriter::Ptr Create(const SharedPtr<System::IO::TextWriter>& text_writer);

    /// Constructs an instance of XmlWriter class and initializes it with the specified TextWriter and settings.
    /// @param text_writer A TextWriter to which the writer will write
    /// @param settings The writer's settings
    /// @returns A shared pointer to the constructed object
    static ASPOSECPP_SHARED_API XmlWriter::Ptr Create(const SharedPtr<System::IO::TextWriter>& text_writer, const SharedPtr<XmlWriterSettings>& settings);


protected:
    /// Constructs a new instance of XmlWriter class.
    XmlWriter() {}

};

}} // namespace System::Xml

#endif //_aspose_xml_xml_writer_h_
