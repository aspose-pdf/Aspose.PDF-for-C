#ifndef _aspose_xml_xml_writer_settings_h_
#define _aspose_xml_xml_writer_settings_h_

#include <xml/xml_output_method.h>
#include <xml/new_line_handling.h>
#include <xml/conformance_level.h>

#include <system/exceptions.h>
#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

namespace System { namespace Xml {

    class XmlWriterSettings : public System::Object
    {
        typedef XmlWriterSettings ThisType;
        typedef System::Object BaseType;

        RTTI_INFO_DECL();

    public:

        bool get_CheckCharacters() const;
        void set_CheckCharacters(bool value);
        bool get_CloseOutput() const;
        void set_CloseOutput(bool value);
        System::Xml::ConformanceLevel get_ConformanceLevel() const;
        void set_ConformanceLevel(System::Xml::ConformanceLevel value);
        bool get_DoNotEscapeUriAttributes() const;
        void set_DoNotEscapeUriAttributes(bool value);
        System::SharedPtr<System::Text::Encoding> get_Encoding() const;
        void set_Encoding(System::SharedPtr<System::Text::Encoding> value);
        bool get_Indent() const;
        void set_Indent(bool value);
        String get_IndentChars() const;
        void set_IndentChars(const String& value);
        String get_NewLineChars() const;
        void set_NewLineChars(const String& value);
        NewLineHandling get_NewLineHandling() const;
        void set_NewLineHandling(NewLineHandling value);
        bool get_NewLineOnAttributes() const;
        void set_NewLineOnAttributes(bool value);
        bool get_OmitXmlDeclaration() const;
        void set_OmitXmlDeclaration(bool value);
        XmlOutputMethod get_OutputMethod() const;

        XmlWriterSettings();

        System::SharedPtr<XmlWriterSettings> Clone() const;
        void Reset();

    private:

        bool pr_CheckCharacters;
        bool pr_CloseOutput;
        System::Xml::ConformanceLevel pr_ConformanceLevel;
        bool pr_DoNotEscapeUriAttributes;
        System::SharedPtr<System::Text::Encoding> pr_Encoding;
        bool pr_Indent;
        String pr_IndentChars;
        String pr_NewLineChars;
        System::Xml::NewLineHandling pr_NewLineHandling;
        bool pr_NewLineOnAttributes;
        bool pr_OmitXmlDeclaration;
        XmlOutputMethod pr_OutputMethod;

    };


}} // namespace System::Xml

#endif //_aspose_xml_xml_writer_settings_h_
