#ifndef _aspose_xml_xml_reader_h_
#define _aspose_xml_xml_reader_h_

#include "xml_node_type.h"
#include "xml_read_state.h"

#include <system/io/stream.h>
#include <system/io/text_reader.h>

namespace System { namespace Xml {

class XmlTextReader;
class XmlReaderSettings;
class XmlParserContext;

class XmlReader : public Object
{
    RTTI_INFO(XmlReader, ::System::BaseTypesInfo<System::Object>);

public:

    typedef SharedPtr<XmlReader> Ptr;

    virtual String get_Name();
    virtual String get_Prefix();
    virtual String get_LocalName();
    virtual String get_NamespaceURI();
    virtual String get_BaseURI();
    virtual String get_Value();

    String idx_get(const String& name);

    virtual ReadState get_ReadState();
    virtual bool get_IsEmptyElement();
    virtual bool get_IsDefault();
    virtual int get_Depth();
    virtual bool get_EOF();
    virtual bool get_HasAttributes();
    virtual int get_AttributeCount();
    virtual bool get_HasValue();
    virtual String get_XmlLang();
    virtual UChar get_QuoteChar();
    virtual XmlNodeType get_NodeType() = 0;

    virtual String GetAttribute(int32_t index);
    virtual String GetAttribute(const String& name);
    virtual bool MoveToAttribute(const String& name);
    virtual void MoveToAttribute(int index);
    virtual bool MoveToNextAttribute();
    virtual bool MoveToFirstAttribute();
    virtual bool ReadToNextSibling(const String& name);
    virtual Ptr ReadSubtree();

    virtual XmlNodeType MoveToContent() = 0;
    virtual bool MoveToElement() = 0;
    virtual bool Read() = 0;
    virtual String LookupNamespace(const String & prefix) = 0;
    virtual void Skip() = 0;
    virtual void Close() = 0;
    virtual String ReadString() = 0;
    virtual void ReadStartElement() = 0;
    virtual void ReadStartElement(const String& value) = 0;
    virtual void ReadStartElement(const String& localName, const String& namespaceUri) = 0;
    virtual String ReadInnerXml() = 0;
    virtual String ReadOuterXml() = 0;
    virtual bool ReadToFollowing(const String &name);
    virtual bool ReadToFollowing(const String &localName, const String &namespaceURI);
    virtual int ReadElementContentAsInt(const String &localName, const String &namespaceURI);
    virtual bool ReadElementContentAsBoolean(const String &localName, const String &namespaceURI);
    virtual String ReadElementContentAsString(const String &localName, const String &namespaceURI);
    virtual void ReadEndElement();
    virtual bool IsStartElement();
    virtual bool IsStartElement(const String &name);
    virtual String ReadElementString() = 0;
    virtual String ReadElementString(const String& value) = 0;
    virtual String ReadElementString(const String& localName, const String& namespaceUri) = 0;

    static XmlReader::Ptr Create(const String& inputUri);
    static XmlReader::Ptr Create(const SharedPtr<System::IO::Stream>& input);
    static XmlReader::Ptr Create(const SharedPtr<System::IO::TextReader>& input);

    static XmlReader::Ptr Create(const String& inputUri, const SharedPtr<XmlReaderSettings>& settings);
    static XmlReader::Ptr Create(const SharedPtr<System::IO::Stream>& input, const SharedPtr<XmlReaderSettings>& settings);
    static XmlReader::Ptr Create(const SharedPtr<System::IO::TextReader>& input, const SharedPtr<XmlReaderSettings>& settings);
    static XmlReader::Ptr Create(const SharedPtr<System::IO::TextReader>& input, const SharedPtr<XmlReaderSettings>& settings, const SharedPtr<XmlParserContext>& inputContext);

    static XmlReader::Ptr Create(const SharedPtr<System::IO::Stream>& input, const SharedPtr<XmlReaderSettings>& settings,
                                 const SharedPtr<XmlParserContext>& inputContext);

    static XmlReader::Ptr Create(const SharedPtr<System::IO::TextReader>& input, const SharedPtr<XmlReaderSettings>& settings,
        const System::String& baseUrl);

    static XmlReader::Ptr Create(const XmlReader::Ptr& input, const SharedPtr<XmlReaderSettings>& settings);

protected:

    XmlReader();

    static bool is_content(XmlNodeType type);

private:
    static XmlReader::Ptr Init(const SharedPtr<XmlTextReader>& reader);
};

}} // namespace System::Xml

#endif //  _aspose_xml_xml_reader_h_
