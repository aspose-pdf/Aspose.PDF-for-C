/// @file system/details/format_builder.h
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
#include "fwd.h"

namespace System {

class ICustomFormatter;
class String;
class DateTime;
class TimeSpan;
class Decimal;
class Guid;

namespace Details {

/// Allows sending char16_t string literals into unmatching ostream specializations.
/// @param stream Stream to send string literal to.
/// @param string String to send into stream.
/// @return Stream reference.
inline std::wostream& operator << (std::wostream& stream, const char16_t* string)
{
    std::wstring str(string, string + std::char_traits<char_t>::length(string));
    stream << str;
    return stream;
};

/// Allows sending char16_t symbols into unmatching ostream specializations.
/// @param stream Stream to send symbol to.
/// @param chr Symbol to send into stream.
/// @return Stream reference.
inline std::wostream& operator << (std::wostream& stream, char16_t chr)
{
    stream << static_cast<wchar_t>(chr);
    return stream;
};

/// Converts double and float to string using specific culture.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return std::u16string representation of value passed.
template <typename T>
ASPOSECPP_SHARED_API std::u16string FormatValue(T value, const std::u16string& format,
                                                const System::SharedPtr<System::IFormatProvider>& culture);

/// Converts double to string using specific culture.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return std::u16string representation of value passed.
extern template ASPOSECPP_SHARED_API std::u16string
FormatValue<>(double value, const std::u16string& format, const System::SharedPtr<System::IFormatProvider>& culture);

/// Converts float to string using specific culture.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return std::u16string representation of value passed.
extern template ASPOSECPP_SHARED_API std::u16string
FormatValue<>(float value, const std::u16string& format, const System::SharedPtr<System::IFormatProvider>& culture);

/// Implements String::Format() invocation.
/// Uses wchar_t internal representation instead of char16_t as ostringstream<char16_t> is unsupported by our language version.
class ASPOSECPP_SHARED_CLASS FormatBuilder
{
public:
    /// Creates formatter to format single string.
    /// @param format C#-styled format string.
    /// @param fp FormatProvider to use.
    ASPOSECPP_SHARED_API FormatBuilder(const std::u16string& format, const SharedPtr<IFormatProvider>& fp = nullptr);

    /// Gets result string.
    /// @return String formatting result.
    const std::u16string& str() const { return m_result; }

    /// Accepts free arguments of String::Format to paste them into result string.
    /// Uses variadic templates to treat arguments one by one.
    /// @tparam T Type of first free argument.
    /// @tparam Args Types of remaining free arguments.
    /// @param formatter Formatter to use.
    /// @param value Value to paste.
    /// @param args Remaining arguments.
    template<typename T, typename... Args>
    static void add_arguments(FormatBuilder& formatter, const T& value, const Args&... args)
    {
        formatter.add_argument(value);
        add_arguments(formatter, args...);
    }
    /// Finishes argument substitution.
    /// @param formatter Formatter we were working with.
    static void add_arguments(FormatBuilder& formatter)
    {
        formatter.build_result();
    }

    /// Accepts free arguments of String::Format to paste them into result string.
    /// Uses array to treat arguments one by one.
    /// @tparam T Type of free arguments.
    /// @param formatter Formatter to use.
    /// @param args Array of arguments to treat.
    template<typename T>
    static void add_arguments(FormatBuilder& formatter, const System::ArrayPtr<T>& args)
    {
        for (int i = 0; i < args->get_Length(); i++)
        {
            formatter.add_argument(args[i]);
        }

        formatter.build_result();
    }

private:
    /// Parser to parse format string.
    FormatParser m_parser;
    /// Index of next element to handle.
    int          m_index;
    /// Result string.
    std::u16string m_result;
    /// Format provider.
    SharedPtr<IFormatProvider> m_formatprovider;
    /// Custom formatter.
    SharedPtr<ICustomFormatter> m_customformatter;

    /// Applies argument value to current argument.
    /// @tparam T Argument type.
    /// @param obj Argument value.
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

    /// Joins all values and separators to result string.
    ASPOSECPP_SHARED_API void build_result();

    /// Converts value type (e. g. structure, string, etc.) to string. Used for everything of a kind but Decimals.
    /// @tparam T Value type.
    /// @param value Value to convert.
    /// @param padding Padding size, ignored.
    /// @param format Format string, ignored.
    template<class T>
    static typename std::enable_if<Details::HasToString<T>::value && !std::is_same<T, Decimal>::value, std::u16string>::type
    ConvertToString(const T& value, int padding, const std::u16string& format)
    {
        return value.ToString().ToU16Str();
    }

    /// Converts Decimal to string.
    /// @tparam T Decimal type.
    /// @param value Value to convert.
    /// @param padding Padding size, ignored.
    /// @param format Format string.
    template<class T>
    static typename std::enable_if<Details::HasToString<T>::value && std::is_same<T, Decimal>::value, std::u16string>::type
        ConvertToString(const T& value, int padding, const std::u16string& format)
    {
        if (format.length() > 0)
        {
            std::stringstream stringStream;

            auto cend = std::cend(format);
            const auto result = format.find(u'.');

            if (result != std::string::npos)
            {
                auto it = std::begin(format) + result;
                int precision = 0;

                while (++it != cend && *it == '0')
                    precision++;

                stringStream << std::fixed << std::setprecision(precision);
            }
            stringStream << value;

            return ReplaceByCurrentSeparator(stringStream);
        }
        else
        {
            return value.ToString().ToU16Str();
        }
    }

    /// Converts smart pointer type to string.
    /// @tparam T Smart pointer type.
    /// @param value Value to convert.
    /// @param padding Padding size, ignored.
    /// @param format Format string, ignored.
    template<class T>
    static typename std::enable_if<System::IsSmartPtr<T>::value, std::u16string>::type
    ConvertToString(const T& value, int padding, const std::u16string& format)
    {
        return ((nullptr != value) ? value->ToString().ToU16Str() : u"");
    }

    /// Converts double and float to string using current culture.
    /// @tparam T double or float type.
    /// @param value Value to convert.
    /// @param padding Padding size, ignored.
    /// @param format Format string.
    template <class T>
    static typename std::enable_if<std::is_same<T, float>::value || std::is_same<T, double>::value, std::u16string>::type
    ConvertToString(const T& value, int padding, const std::u16string& format)
    {
        return System::Details::FormatValue(value, format, nullptr);
    }

    /// Converts primitive types to string.
    /// @tparam T Primitive type.
    /// @param value Value to convert.
    /// @param padding Padding size, ignored.
    /// @param format Format string.
    template<class T>
    static typename std::enable_if<!System::IsSmartPtr<T>::value &&
        !Details::HasToString<T>::value && !std::is_enum<T>::value &&
        !std::is_same<T, float>::value && !std::is_same<T, double>::value, std::u16string>::type
    ConvertToString(const T& value, int padding, const std::u16string& format)
    {
        std::wstringstream wss;
        auto it = format.cbegin();
        auto cend = format.cend();

        if (it != cend)
        {
            char16_t wc = *it;
            if (wc == u'D' || wc == u'd' || wc == u'X' || wc == u'x') // formats like "D4, x2"
            {
                if (wc == u'X')
                    wss << std::uppercase;
                if (wc == u'X' || wc == u'x')
                    wss << std::hex;
                int len = 0;
                while (++it != cend && *it >= u'0' && *it <= u'9')
                    len = len * 10 + (*it - u'0');
                if (len > 0)
                {
                    wss << std::setfill(L'0');
                    wss << std::setw(len);
                }
            } 
            else if (wc == u'0') // formats like "000"
            {
                int len = 1;
                while (++it != cend && *it == u'0')
                    len++;
                if (len > 0)
                {
                    wss << std::setfill(L'0');
                    wss << std::setw(len);
                }
            }
        }
            
        SetPrecision(wss, &value);

        if (std::is_same<T, bool>::value) 
        {
            if (value)
            {
                wss << L"True";
            }
            else 
            {
                wss << L"False";
            }
        }
        else 
        {
            wss << value;
        }

        std::wstring res = wss.str();
        return std::u16string(res.begin(), res.end());
    }

    /// Sets precision to print numbers.
    /// This implementation is a dummy as defaults for non-double types are same in C# and C++.
    /// @tparam T Numeric type different from double.
    template <class T>
    static void SetPrecision(std::wstringstream&, T*)
    {}
    /// Sets precision to print numbers.
    /// This implementation sets value for double as defaults differ in C# and C++.
    /// @param stream Stream to set precision for.
    static void SetPrecision(std::wstringstream &stream, const double*)
    {
        stream << std::setprecision(15);
    }

    /// Converts enum types to string.
    /// Specialization used if no value strings are provided.
    /// @tparam T Enum type.
    /// @param value Value to convert.
    template<class T>
    static typename std::enable_if<!Details::HasPtrToString<T>::value &&
                                    !Details::HasToString<T>::value &&
                                    std::is_enum<T>::value &&
                                    !Details::IsDefined<EnumMetaInfo<T>>::value, std::u16string>::type
    ConvertToString(const T& value, int /*padding*/, const std::u16string& /*format*/)
    {
        std::wostringstream stream;
        stream << static_cast<typename std::underlying_type<T>::type>(value);

        std::wstring res = stream.str();
        return std::u16string(res.begin(), res.end());
    }

    /// Converts enum types to string.
    /// Specialization used if value strings are provided.
    /// @tparam T Enum type.
    /// @param value Value to convert.
    template<class T>
    static typename std::enable_if<!Details::HasPtrToString<T>::value &&
                                    !Details::HasToString<T>::value &&
                                    std::is_enum<T>::value &&
                                    Details::IsDefined<EnumMetaInfo<T>>::value, std::u16string>::type
    ConvertToString(const T& value, int /*padding*/, const std::u16string& /*format*/)
    {
        const auto& values = EnumMetaInfo<T>::values();
        for (auto val : values)
        {
            if (value == val.first)
                return val.second;
        }
        return u"";
    }

    /// Formats object using custom formatter.
    /// @param format Format string.
    /// @param arg Object to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const SharedPtr<Object> &arg);
    /// Formats string using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const String &arg);
    /// Formats DateTime object using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const DateTime &arg);
    /// Formats TimeSpan object using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const TimeSpan &arg);
    /// Formats Decimal value using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const Decimal &arg);
    /// Formats Guid using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const Guid &arg);
    /// Formats integer using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const int32_t arg);
    /// Formats integer using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const uint32_t arg);
    /// Formats integer using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const int64_t arg);
    /// Formats integer using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const uint64_t arg);
    /// Formats floating point value using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API std::u16string CustomFormat(const std::u16string &format, const double arg);

    /// Formats enum value using custom formatter.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Formatting result.
    template<class T>
    typename std::enable_if<std::is_enum<T>::value, std::u16string>::type
    CustomFormat(const std::u16string &format, const T &arg)
    {
        return CustomFormat(format, (int)arg);
    }

    /// Stub function that throws exception if custom formatting is required for unexpected type.
    /// @tparam T Unexpected type.
    /// @param format Format string.
    /// @param arg Value to format.
    /// @return Never actually returns, throws instead.
    /// @throw ArgumentException Unconditionally.
    template<class T>
    typename std::enable_if<!std::is_enum<T>::value, std::u16string>::type
    CustomFormat(const std::u16string &format, const T &arg)
    {
        return ThrowInvalidArgument();
    }

    /// Throws ArgumentException,
    ASPOSECPP_SHARED_API std::u16string ThrowInvalidArgument();

    /// Replaces dot with current decimal separator.
    /// @param ss String to do replacement for.
    /// @return @p ss With replacements done.
    static ASPOSECPP_SHARED_API std::u16string ReplaceByCurrentSeparator(const std::stringstream &ss);
};

} // namespace Details
} // namespace System

#endif // _fmt_details_format_parser_h_
