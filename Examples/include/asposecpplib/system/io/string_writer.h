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

    class StringWriter : public TextWriter
    {
        RTTI_INFO(System::IO::StringWriter, ::System::BaseTypesInfo<System::IO::TextWriter>)

    public:

        StringWriter(System::SharedPtr<Text::StringBuilder> sb, IFormatProviderPtr formatProvider) : TextWriter(formatProvider)
        {
            if (sb == nullptr)
                throw ArgumentNullException(L"StringBuilder");
            _sb = sb;
        }

        StringWriter(System::SharedPtr<Text::StringBuilder> sb)
            : StringWriter(sb, Globalization::CultureInfo::get_CurrentCulture()) {}

        StringWriter(IFormatProviderPtr formatProvider)
            : StringWriter(MakeObject<Text::StringBuilder>(), formatProvider) {}

        StringWriter()
            : StringWriter(MakeObject<Text::StringBuilder>(), Globalization::CultureInfo::get_CurrentCulture()) {}

        virtual SharedPtr<Text::Encoding> get_Encoding()
        {
            if (m_Encoding == nullptr)
                m_Encoding = MakeObject<Text::UnicodeEncoding>(false, false);
            return m_Encoding;
        };

        virtual SharedPtr<Text::StringBuilder> GetStringBuilder()
        {
            return _sb;
        }

        virtual void Write(wchar_t value) {
            _sb->Append(value);
        }

        virtual void Write(ArrayPtr<wchar_t> buffer, int index, int count) {
            if (buffer == nullptr)
                throw ArgumentNullException(L"buffer");
            if (index < 0)
                throw ArgumentOutOfRangeException(L"index");
            if (count < 0)
                throw ArgumentOutOfRangeException(L"count");
            if (buffer->get_Length() - index < count)
                throw ArgumentException(L"insufficient buffer length");

            _sb->Append(buffer, index, count);
        }

        virtual void Write(const String& value) {
            if (!value.IsNull()) _sb->Append(value);
        }

        virtual String ToString() ASPOSE_CONST override
        {
            return _sb->ToString();
        }

    private:

        SharedPtr<Text::StringBuilder> _sb = nullptr;
        static SharedPtr<Text::UnicodeEncoding> ASPOSECPP_SHARED_API m_Encoding;

    };

}} // namespace System{ namespace IO{

#endif //string_writer_h
