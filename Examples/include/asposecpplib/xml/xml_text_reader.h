#ifndef _aspose_xml_text_reader_h_
#define _aspose_xml_text_reader_h_

#include "xml/xml_reader.h"
#include "xml/whitespace_handling.h"
#include "xml/xml_reader_settings.h"
#include "xml/xml_parser_context.h"
#include "xml/xml_resolver.h"

#include "xml/detail/xml_3rd_party_types.h"

namespace System { namespace Xml {

namespace Schema { class XmlSchema; }

class XmlResolver;

class XmlTextReader : public XmlReader
{
    RTTI_INFO(XmlTextReader, ::System::BaseTypesInfo<System::Xml::XmlReader>);

    friend class XmlReader;
    friend class Schema::XmlSchema;

public:

    typedef SharedPtr<XmlTextReader> Ptr;

    XmlTextReader(const String& inputUri);
    XmlTextReader(const SharedPtr<System::IO::Stream>& input);
    XmlTextReader(const SharedPtr<System::IO::TextReader>& input);
    XmlTextReader(const String& url, const SharedPtr<System::IO::Stream>& input);

    XmlTextReader(const String& inputUri, const XmlReaderSettings::Ptr& settings);
    XmlTextReader(const SharedPtr<System::IO::Stream>& input, const XmlReaderSettings::Ptr& settings);
    XmlTextReader(const SharedPtr<System::IO::TextReader>& input, const XmlReaderSettings::Ptr& settings);
    XmlTextReader(const SharedPtr<System::IO::TextReader>& input, const XmlReaderSettings::Ptr& settings, const XmlParserContext::Ptr& context);

    XmlTextReader(const SharedPtr<System::IO::Stream>& input, XmlNodeType fragType, const XmlParserContext::Ptr& context);
    XmlTextReader(const String& xmlFragment, XmlNodeType fragType, const XmlParserContext::Ptr& context);
    XmlTextReader(const SharedPtr<System::IO::Stream>& input, const XmlReaderSettings::Ptr& settings, const XmlParserContext::Ptr& context);
    XmlTextReader(const String& xmlFragment, const XmlReaderSettings::Ptr& settings, const XmlParserContext::Ptr& context);

    virtual ~XmlTextReader();

    // XmlReader

    String get_Name() override;
    String get_Prefix() override;
    String get_LocalName() override;
    String get_NamespaceURI() override;
    String get_BaseURI() override;
    String get_Value() override;

    ReadState get_ReadState() override;
    bool get_IsEmptyElement() override;
    bool get_IsDefault() override;
    int get_Depth() override;
    bool get_EOF() override;
    bool get_HasAttributes() override;
    int get_AttributeCount() override;
    bool get_HasValue() override;
    String get_XmlLang() override;
    UChar get_QuoteChar() override;
    XmlNodeType get_NodeType() override;

    String GetAttribute(const String& name) override;
    bool MoveToAttribute(const String& name) override;
    void MoveToAttribute(int index) override;
    bool MoveToNextAttribute() override;
    bool MoveToFirstAttribute() override;

    XmlNodeType MoveToContent() override;
    bool MoveToElement() override;
    bool Read() override;
    String LookupNamespace(const String & prefix) override;
    void Skip() override;
    void Close() override;
    String ReadString() override;
    void ReadStartElement() override;
    void ReadStartElement(const String& name) override;
    void ReadStartElement(const String& localName, const String& namespaceUri) override;
    String ReadInnerXml() override;
    String ReadOuterXml() override;

    // XmlTextReader

    String get_Encoding() const;

    void set_XmlResolver(const SharedPtr<XmlResolver>& value)
    { m_xmlResolver = value; }

    void set_WhitespaceHandling(WhitespaceHandling value)
    {
        //throw NotSupportedException();
    }

    int ReadBinHex(const ArrayPtr<uint8_t>& buffer, int startPosition, int length);

    // special

    xmlTextReader* native() const { return m_reader; }
    int native_parse_flags() const { return m_parseFlags; }

protected:

    xmlTextReader* m_reader;
    int m_parseFlags = 0;
    SharedPtr<XmlReaderSettings> m_settings;
    XmlParserContext::Ptr m_context;

    XmlTextReader();

private:

    xmlParserInputBuffer* m_xmlInputBuf;
    XmlResolver::Ptr m_xmlResolver;

    std::string m_tmpUtf8Buffer;

    ReadState m_read_state;

    void init_from_stream(const SharedPtr<System::IO::Stream>& input, const String& url);
    void init_from_text_reader(const SharedPtr<System::IO::TextReader>& input);
    void apply_settings(const XmlReaderSettings::Ptr& settings, const XmlParserContext::Ptr& context = nullptr);

    struct ReaderErrorHandler;
    static const char* reader_namespace_provider(void* arg, void* dict, const char* prefix);

    SharedPtr<System::IO::Stream> m_stream;
    static int s_stream_read(void *context, char *buffer, int len);
    static int s_stream_close(void *context);

    SharedPtr<System::IO::TextReader> m_text_reader;
    static int s_treader_read(void *context, char *buffer, int len);
    static int s_treader_close(void *context);

    static String error_message_to_string(const char* msg);
};

}} // namespace System::Xml

#endif // _aspose_xml_text_reader_h_
