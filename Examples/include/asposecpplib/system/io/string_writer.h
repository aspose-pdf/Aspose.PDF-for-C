/// @file system/io/string_writer.h
#ifndef string_writer_h
#define string_writer_h

#include "fwd.h"

#include "system/iformatprovider.h"
#include "system/exceptions.h"
#include "system/reflection.h"
#include "system/globalization/culture_info.h"
#include "system/io/text_writer.h"
#include "system/text/string_builder.h"
#include "system/text/unicode_encoding.h"

namespace System { namespace IO {
    /// Implements a TextWriter that writes information to a string.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS StringWriter : public TextWriter
    {
        RTTI_INFO(System::IO::StringWriter, ::System::BaseTypesInfo<System::IO::TextWriter>)

    public:
        /// Constructs a new instance of StringWriter using the specified StringBuilder and IFormatProvider.
        /// @param sb The StringBuilder object to be used by the StringWriter being constructed
        /// @param formatProvider An IFormatProvider object to be used by the object being constructed
        StringWriter(System::SharedPtr<Text::StringBuilder> sb, IFormatProviderPtr formatProvider) : TextWriter(formatProvider)
        {
            if (sb == nullptr)
                throw ArgumentNullException(u"StringBuilder");
            _sb = sb;
        }

        /// Constructs a new instance of StringWriter using the specified StringBuilder and IFormatProvider from the current culture.
        /// @param sb The StringBuilder object to be used by the StringWriter being constructed
        StringWriter(System::SharedPtr<Text::StringBuilder> sb)
            : StringWriter(sb, Globalization::CultureInfo::get_CurrentCulture()) {}

        /// Constructs a new instance of StringWriter using the specified IFormatProvider.
        /// @param formatProvider An IFormatProvider object to be used by the object being constructed
        StringWriter(IFormatProviderPtr formatProvider)
            : StringWriter(MakeObject<Text::StringBuilder>(), formatProvider) {}

        /// Constructs a new instance of StringWriter using IFormatProvider from the current culture.
        StringWriter()
            : StringWriter(MakeObject<Text::StringBuilder>(), Globalization::CultureInfo::get_CurrentCulture()) {}

        /// Returns the currently used encoding.
        virtual SharedPtr<Text::Encoding> get_Encoding() override
        {
            if (m_Encoding == nullptr)
                m_Encoding = MakeObject<Text::UnicodeEncoding>(false, false);
            return m_Encoding;
        };

        /// Returns the currently used StringBuilder.
        virtual SharedPtr<Text::StringBuilder> GetStringBuilder()
        {
            return _sb;
        }

        /// Writes the specified character to the stream.
        /// @param value The value to write
        virtual void Write(char_t value) override {
            _sb->Append(value);
        }

        /// Writes the specified subrange of characters from the specified character array to the stream.
        /// @param buffer The array containing the characters to write
        /// @param index A 0-based index of the elemnet in @p buffer at which the subrange to write begins
        /// @param count The number of characters in the subrange to write
        virtual void Write(ArrayPtr<char_t> buffer, int index, int count) override {
            if (buffer == nullptr)
                throw ArgumentNullException(u"buffer");
            if (index < 0)
                throw ArgumentOutOfRangeException(u"index");
            if (count < 0)
                throw ArgumentOutOfRangeException(u"count");
            if (buffer->get_Length() - index < count)
                throw ArgumentException(u"insufficient buffer length");

            _sb->Append(buffer, index, count);
        }

        /// Writes the specified string to the stream.
        /// @param value The string to write
        virtual void Write(const String& value) override {
            if (!value.IsNull()) _sb->Append(value);
        }

        /// Returns the underlying string.
        virtual String ToString() ASPOSE_CONST override
        {
            return _sb->ToString();
        }

    private:

        /// The StringBuilder used by the current object.
        SharedPtr<Text::StringBuilder> _sb = nullptr;
        /// The encoding currently used.
        static SharedPtr<Text::UnicodeEncoding> ASPOSECPP_SHARED_API m_Encoding;

    };

}} // namespace System{ namespace IO{

#endif //string_writer_h
