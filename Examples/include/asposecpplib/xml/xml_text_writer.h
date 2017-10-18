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

class XmlTextWriter : public XmlWriter
{
    RTTI_INFO(XmlTextWriter, ::System::BaseTypesInfo<System::Xml::XmlWriter>);

    friend class XmlWriter;

public:

    typedef SharedPtr<XmlTextWriter> Ptr;

    XmlTextWriter(const String& outputFileName, const SharedPtr<System::Text::Encoding>& encoding = SharedPtr<System::Text::Encoding>());
    XmlTextWriter(const SharedPtr<System::IO::Stream>& stream, const SharedPtr<System::Text::Encoding>& encoding = SharedPtr<System::Text::Encoding>());
    XmlTextWriter(const SharedPtr<System::IO::TextWriter>& text_writer);
    XmlTextWriter(const SharedPtr<System::Text::StringBuilder>& string_builder);

    // for debug and internal usage
    XmlTextWriter(xmlBuffer* buf);
    XmlTextWriter(xmlOutputBuffer* buf);

    virtual ~XmlTextWriter();

    // XmlWriter interface

    // properties

    WriteState get_WriteState() override;

    // methods

    void Close() override;
    void Flush() override;

    void WriteStartDocument() override;
    void WriteStartDocument(bool standalone) override;

    void WriteStartElement(String localName) override;
    void WriteStartElement(String localName, String ns) override;
    void WriteStartElement(String prefix, String localName, String ns) override;

    void WriteAttributeString(String localName, String value) override;
    void WriteAttributeString(String localName, String ns, String value) override;
    void WriteAttributeString(String prefix, String localName, String ns, String value) override;

    void WriteElementString(String localName, String value) override;
    void WriteElementString(String localName, String ns, String value) override;
    void WriteElementString(String prefix, String localName, String ns, String value) override;

    void WriteDocType(String name, String pubid, String sysid, String subset) override;
    void WriteCData(String text) override;
    void WriteComment(String text) override;
    void WriteProcessingInstruction(String name, String text) override;

    void WriteString(String text) override;
    void WriteWhitespace(String ws) override;
    void WriteRaw(String text) override;
    void WriteRaw(ArrayPtr<wchar_t> buffer, int index, int count) override;

    void WriteBase64(ArrayPtr<uint8_t> buffer, int index, int count) override;
    void WriteBinHex(ArrayPtr<uint8_t> buffer, int index, int count) override;

    void WriteEndElement() override;
    void WriteFullEndElement() override;
    void WriteEndDocument() override;

    String LookupPrefix(String ns) override;

    // XmlTextWriter interface

    void set_Formatting(Formatting value);
    Formatting get_Formatting() const;

    void set_Namespaces(bool value);

    void set_Indentation(int value);
    int get_Indentation() const;

    void set_IndentChar(char_t value);

    char_t get_IndentChar() const;

    void set_QuoteChar(char_t value);

    SharedPtr<System::IO::Stream> get_BaseStream() const;

    // special methods

    xmlTextWriter* native() const;

protected:

    xmlTextWriter* m_writer;
    int m_indentation;
    char_t m_indent_char;
    Formatting m_formatting;
    WriteState m_state;

    SharedPtr<XmlWriterSettings> m_settings;

private:

    xmlOutputBuffer* m_xmlOutputBuf;

    SharedPtr<System::IO::Stream> m_stream;
    static int s_stream_write(void *context, const char *buffer, int len);
    static int s_stream_close(void *context);

    SharedPtr<System::IO::TextWriter> m_text_writer;
    static int s_twriter_write(void *context, const char *buffer, int len);
    static int s_twriter_close(void *context);

    SharedPtr<System::Text::StringBuilder> m_string_builder;
    static int s_sbuilder_write(void *context, const char *buffer, int len);
    static int s_sbuilder_close(void *context);

    void process_error(const char* msg = "");

    void register_element_ns(const String & prefix, const String & ns);
    void register_attribute_ns(const String & prefix, const String & name, const String & ns);
    void register_attribute_ns(const String & prefix, const String & ns);
    bool unregister_element_ns();
    String lookup_prefix(const String & ns);
    int prefix_idx();

    typedef std::map<String, String> ElementNamespaces;
    std::deque<ElementNamespaces> m_ns_stack;
};

}} // namespace System::Xml

#endif // _aspose_xml_xml_text_writer_h_
