#ifndef _aspose_xml_xml_writer_h_
#define _aspose_xml_xml_writer_h_

#include <system/array.h>
#include <system/idisposable.h>
#include <system/text/string_builder.h>
#include <system/io/text_writer.h>

#include "xml_writer_settings.h"
#include "xml_write_state.h"

namespace System { namespace Xml {

class XmlWriter : public IDisposable
{
    RTTI_INFO(XmlWriter, ::System::BaseTypesInfo<System::Object>);

    FRIEND_FUNCTION_System_MakeObject;

public:

    typedef SharedPtr<XmlWriter> Ptr;

    // properties

    virtual WriteState get_WriteState() = 0;

    // methods

    virtual void Close() = 0;
    virtual void Flush() = 0;

    virtual void WriteStartDocument() = 0;
    virtual void WriteStartDocument(bool standalone) = 0;

    virtual void WriteStartElement(String localName) = 0;
    virtual void WriteStartElement(String localName, String ns) = 0;
    virtual void WriteStartElement(String prefix, String localName, String ns) = 0;

    virtual void WriteAttributeString(String localName, String value) = 0;
    virtual void WriteAttributeString(String localName, String ns, String value) = 0;
    virtual void WriteAttributeString(String prefix, String localName, String ns, String value) = 0;

    virtual void WriteElementString(String localName, String value) = 0;
    virtual void WriteElementString(String localName, String ns, String value) = 0;
    virtual void WriteElementString(String prefix, String localName, String ns, String value) = 0;

    virtual void WriteDocType(String name, String pubid, String sysid, String subset) = 0;
    virtual void WriteCData(String text) = 0;
    virtual void WriteComment(String text) = 0;
    virtual void WriteProcessingInstruction(String name, String text) = 0;

    virtual void WriteString(String text) = 0;
    virtual void WriteWhitespace(String ws) = 0;
    virtual void WriteRaw(String text) = 0;
    virtual void WriteRaw(ArrayPtr<wchar_t> buffer, int index, int count) = 0;

    virtual void WriteBase64(ArrayPtr<uint8_t> buffer, int index, int count) = 0;
    virtual void WriteBinHex(ArrayPtr<uint8_t> buffer, int index, int count) = 0;

    virtual void WriteEndElement() = 0;
    virtual void WriteFullEndElement() = 0;
    virtual void WriteEndDocument() = 0;

    virtual String LookupPrefix(String ns) = 0;

    // creating

    static XmlWriter::Ptr Create(const String& outputFileName);

    static XmlWriter::Ptr Create(const String& outputFileName, const SharedPtr<XmlWriterSettings>& settings);

    static XmlWriter::Ptr Create(const SharedPtr<System::IO::Stream>& stream, const SharedPtr<XmlWriterSettings>& settings = nullptr);

    static XmlWriter::Ptr Create(const SharedPtr<System::Text::StringBuilder>& builder, const SharedPtr<XmlWriterSettings>& settings);

    static XmlWriter::Ptr Create(const SharedPtr<System::IO::TextWriter>& text_writer, const SharedPtr<XmlWriterSettings>& settings);


protected:

    XmlWriter() {}

};

}} // namespace System::Xml

#endif //_aspose_xml_xml_writer_h_
