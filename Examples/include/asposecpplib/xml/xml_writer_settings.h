/// @file xml/xml_writer_settings.h
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
    /// Specifies a set of features to support on the XmlWriter object created by the Create() method.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS XmlWriterSettings : public System::Object
    {
        /// An alias for this class.
        typedef XmlWriterSettings ThisType;
        /// An alias for this class' base class.
        typedef System::Object BaseType;

        ASPOSECPP_SHARED_RTTI_INFO_DECL();

    public:
        /// Returns a value that indicates whether the XML writer should 
        /// determine if all characters in the document conform to the "2.2 Characters" 
        /// section of the W3C XML 1.0 Recommendation.
        ASPOSECPP_SHARED_API bool get_CheckCharacters() const;
        /// Sets a value that indicates whether the XML writer should
        /// determine if all characters in the document conform to the "2.2 Characters" 
        /// section of the W3C XML 1.0 Recommendation.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_CheckCharacters(bool value);
        /// Returns a value that indicates if the XmlWriter should close the underlying stream
        /// or XmlWriter object when method Close() is called.
        ASPOSECPP_SHARED_API bool get_CloseOutput() const;
        /// Sets a value that indicates if the XmlWriter should close the underlying stream
        /// or XmlWriter object when method Close() is called.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_CloseOutput(bool value);
        /// Returns the conformance level that the XmlWriter checks the XML output for.
        ASPOSECPP_SHARED_API System::Xml::ConformanceLevel get_ConformanceLevel() const;
        /// Sets the conformance level that the XmlWriter checks the XML output for.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_ConformanceLevel(System::Xml::ConformanceLevel value);
        /// Returns a value that indicates if the XmlWriter should not escape URI attributes.
        ASPOSECPP_SHARED_API bool get_DoNotEscapeUriAttributes() const;
        /// Sets a value that indicates if the XmlWriter should not escape URI attributes.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_DoNotEscapeUriAttributes(bool value);
        /// Returns the encoding to use.
        ASPOSECPP_SHARED_API System::SharedPtr<System::Text::Encoding> get_Encoding() const;
        /// Sets the encoding to use.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_Encoding(const System::SharedPtr<System::Text::Encoding>& value);
        /// Returns a value that indicates whether elements should be indented.
        ASPOSECPP_SHARED_API bool get_Indent() const;
        /// Sets a value that indicates whether elements should be indented.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_Indent(bool value);
        /// Returns a character string used for indenting.
        ASPOSECPP_SHARED_API String get_IndentChars() const;
        /// Sets a character string used for indenting.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_IndentChars(const String& value);
        /// Returns a string that should be used for line breaks.
        ASPOSECPP_SHARED_API String get_NewLineChars() const;
        /// Sets the string that should be used for line breaks.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_NewLineChars(const String& value);
        /// Returns a value that specifies how the line endings are handled.
        ASPOSECPP_SHARED_API NewLineHandling get_NewLineHandling() const;
        /// Sets a value that specifies how the line endings are handled.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_NewLineHandling(NewLineHandling value);
        /// Returns a value that specifies whether attributes should be written on a new line.
        ASPOSECPP_SHARED_API bool get_NewLineOnAttributes() const;
        /// Sets a value that specifies whether attributes should be written on a new line.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_NewLineOnAttributes(bool value);
        /// Returns a value that indicates if an XML declaration should be omitted.
        ASPOSECPP_SHARED_API bool get_OmitXmlDeclaration() const;
        /// Sets a value that indicates if an XML declaration should be omitted.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_OmitXmlDeclaration(bool value);
        /// Returns a value that indicates the method used to serialize the output.
        ASPOSECPP_SHARED_API XmlOutputMethod get_OutputMethod() const;

        /// Constructs an instance of XmlWriterSettings class with all settings set
        /// to default values.
        ASPOSECPP_SHARED_API XmlWriterSettings();

        /// Returns a copy of the current object.
        ASPOSECPP_SHARED_API System::SharedPtr<XmlWriterSettings> Clone() const;

        /// Resets all the settings to default values.
        ASPOSECPP_SHARED_API void Reset();

    private:
        /// Indicates whether the XML writer should 
        /// determine if all characters in the document conform to the "2.2 Characters" 
        /// section of the W3C XML 1.0 Recommendation.
        bool pr_CheckCharacters;
        /// Indicates if the XmlWriter should close the underlying stream
        /// or XmlWriter object when method Close() is called.
        bool pr_CloseOutput;
        /// The conformance level that the XmlWriter checks the XML output for.
        System::Xml::ConformanceLevel pr_ConformanceLevel;
        /// Indicates if the XmlWriter should not escape URI attributes.
        bool pr_DoNotEscapeUriAttributes;
        /// The encoding to use.
        System::SharedPtr<System::Text::Encoding> pr_Encoding;
        /// Indicates whether elements should be indented.
        bool pr_Indent;
        /// A character string used for indenting.
        String pr_IndentChars;
        /// A string that should be used for line breaks.
        String pr_NewLineChars;
        /// Specifies how the line endings are handled.
        System::Xml::NewLineHandling pr_NewLineHandling;
        /// Specifies whether attributes should be written on a new line.
        bool pr_NewLineOnAttributes;
        /// Indicates if an XML declaration should be omitted.
        bool pr_OmitXmlDeclaration;
        /// Indicates the method used to serialize the output.
        XmlOutputMethod pr_OutputMethod;

    };


}} // namespace System::Xml

#endif //_aspose_xml_xml_writer_settings_h_
