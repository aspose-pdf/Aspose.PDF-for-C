#ifndef _fmt_details_format_builder_h_
#define _fmt_details_format_builder_h_

#include <system/icustomformatter.h>
#include <system/details/format_parser.h>
#include <system/details/is_defined.h>
#include <system/shared_ptr.h>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <sstream>

namespace System {
    class ICustomFormatter;
    class String;
    class DateTime;
    class TimeSpan;
    class Decimal;
    class Guid;

    namespace Details {

    class FormatBuilder
    {
    public:
        FormatBuilder(const std::wstring& format, SharedPtr<IFormatProvider> fp = nullptr);

        const std::wstring& str() const { return m_result; }

        template<typename T, typename... Args>
        static void add_arguments(FormatBuilder& formatter, const T& value, const Args&... args)
        {
            formatter.add_argument(value);
            add_arguments(formatter, args...);
        }
        static void add_arguments(FormatBuilder& formatter)
        {
            formatter.build_result();
        }

    private:
        FormatParser m_parser;
        int          m_index;
        std::wstring m_result;
        SharedPtr<IFormatProvider> m_formatprovider;
        SharedPtr<ICustomFormatter> m_customformatter;

        template<typename T>
        void add_argument(T const& obj)
        {
            for(auto& fi : m_parser.items() )
            {
                if( fi.arg_index == m_index )
                {
                    fi.text_or_format = m_customformatter == nullptr ?
                        ConvertToString(obj, fi.padding, fi.text_or_format) :
                        CustomFormat(fi.text_or_format, obj);
                }
            }

            ++m_index;
        }

        void build_result();

        template<class T>
        static typename std::enable_if<Details::HasToString<T>::value, std::wstring>::type
        ConvertToString(const T& value, int padding, const std::wstring& format)
        {
            return value.ToString().ToWCS();
        }

        template<class T>
        static typename std::enable_if<System::IsSharedPtr<T>::value, std::wstring>::type
        ConvertToString(const T& value, int padding, const std::wstring& format)
        {
            return ((nullptr != value) ? value->ToString().ToWCS() : L"");
        }

        template<class T>
        static typename std::enable_if<!System::IsSharedPtr<T>::value && 
                                            !Details::HasToString<T>::value &&
                                            !std::is_enum<T>::value, std::wstring>::type
        ConvertToString(const T& value, int padding, const std::wstring& format)
        {
            std::wstringstream wss;
            auto it = format.cbegin();
            auto cend = format.cend();
            if (it != cend)
            {
                wchar_t wc = *it;
                if (wc == L'D' || wc == L'd' || wc == L'X' || wc == L'x') // formats like "D4, x2"
                {
                    if (wc == L'X')
                        wss << std::uppercase;
                    if (wc == L'X' || wc == L'x')
                        wss << std::hex;
                    int len = 0;
                    while (++it != cend && *it >= L'0' && *it <= L'9')
                        len = len * 10 + (*it - L'0');
                    if (len > 0)
                    {
                        wss << std::setfill(L'0');
                        wss << std::setw(len);
                    }
                } 
                else if (wc == L'0') // formats like "000"
                {
                    int len = 1;
                    while (++it != cend && *it == L'0')
                        len++;
                    if (len > 0)
                    {
                        wss << std::setfill(L'0');
                        wss << std::setw(len);
                    }
                }
            }
            SetPrecision(wss, &value);
            wss << value;
            return wss.str();
        }

        template <class T>
        static void SetPrecision(std::wstringstream&, T*)
        {}
        static void SetPrecision(std::wstringstream &stream, const double*)
        {
            stream << std::setprecision(15);
        }

        template<class T>
        static typename std::enable_if<!Details::HasPtrToString<T>::value &&
                                       !Details::HasToString<T>::value &&
                                       std::is_enum<T>::value &&
                                       !Details::IsDefined<EnumMetaInfo<T>>::value, std::wstring>::type
        ConvertToString(const T& value, int /*padding*/, const std::wstring& /*format*/)
        {
            std::wostringstream stream;
            stream << static_cast<typename std::underlying_type<T>::type>(value);
            return stream.str();
        }

        template<class T>
        static typename std::enable_if<!Details::HasPtrToString<T>::value &&
                                       !Details::HasToString<T>::value &&
                                       std::is_enum<T>::value &&
                                       Details::IsDefined<EnumMetaInfo<T>>::value, std::wstring>::type
        ConvertToString(const T& value, int /*padding*/, const std::wstring& /*format*/)
        {
            const auto& values = EnumMetaInfo<T>::values();
            for (auto val : values)
            {
                if (value == val.first)
                    return val.second;
            }
            return L"";
        }

        std::wstring CustomFormat(const std::wstring &format, const SharedPtr<Object> &arg);
        std::wstring CustomFormat(const std::wstring &format, const String &arg);
        std::wstring CustomFormat(const std::wstring &format, const DateTime &arg);
        std::wstring CustomFormat(const std::wstring &format, const TimeSpan &arg);
        std::wstring CustomFormat(const std::wstring &format, const Decimal &arg);
        std::wstring CustomFormat(const std::wstring &format, const Guid &arg);
        std::wstring CustomFormat(const std::wstring &format, const int32_t arg);
        std::wstring CustomFormat(const std::wstring &format, const uint32_t arg);
        std::wstring CustomFormat(const std::wstring &format, const int64_t arg);
        std::wstring CustomFormat(const std::wstring &format, const uint64_t arg);
        std::wstring CustomFormat(const std::wstring &format, const double arg);

        template<class T>
        typename std::enable_if<std::is_enum<T>::value, std::wstring>::type
        CustomFormat(const std::wstring &format, const T &arg)
        {
            return CustomFormat(format, (int)arg);
        }

        template<class T>
        typename std::enable_if<!std::is_enum<T>::value, std::wstring>::type
        CustomFormat(const std::wstring &format, const T &arg)
        {
            // Can't use System::Exception there as it requires String and String requires format_builder.h.
            // This is just a stub function anyway, so this code shouldn't normally be called (as discussed with
            // Alex who was the developer of new formatting framework).
            // This doesn't mean that this approach can't be improved in the future - but for now it is just a breakfix.
            throw std::invalid_argument("Unsupported type passed to FormatBuilder::CustomFormat");
        }

    };

}} // namespace System::Details
#endif // _fmt_details_format_parser_h_
