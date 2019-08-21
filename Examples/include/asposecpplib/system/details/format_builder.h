/// @file system/details/format_builder.h
#pragma once

#ifndef _aspose_system_string_h_
#error "Don't include this file directly, use <system/string.h> instead"
#endif

#include <system/icustomformatter.h>
#include <system/iformatprovider.h>
#include <system/iformattable.h>
#include <system/details/format_parser.h>
#include <system/details/is_defined.h>
#include <system/details/has_tostring.h>
#include <system/shared_ptr.h>

namespace System {

class DateTime;
class DateTimeOffset;
class TimeSpan;
class Decimal;
class Guid;

template<class E, class G>
struct Enum;

namespace Globalization { class CultureInfo; }

namespace Details {

/// Implements String::Format() invocation.
class ASPOSECPP_SHARED_CLASS FormatBuilder final
{
public:
    /// Creates formatter to format single string.
    /// @param format C#-styled format string.
    ASPOSECPP_SHARED_API FormatBuilder(const String& format, std::nullptr_t = nullptr);
    /// Creates formatter to format single string.
    /// @param format C#-styled format string.
    /// @param fp FormatProvider to use.
    ASPOSECPP_SHARED_API FormatBuilder(const String& format, SharedPtr<IFormatProvider> fp);
    /// Creates formatter to format single string.
    /// @param format C#-styled format string.
    /// @param culture Culture to use.
    ASPOSECPP_SHARED_API FormatBuilder(const String& format, SharedPtr<Globalization::CultureInfo> culture);

    /// Joins all values and separators to result string.
    /// @return String formatting result.
    ASPOSECPP_SHARED_API String BuildResult() const;

    /// Accepts free arguments of String::Format to paste them into result string.
    /// Uses variadic templates to treat arguments one by one.
    /// @tparam T Type of first free argument.
    /// @tparam Args Types of remaining free arguments.
    /// @param formatter Formatter to use.
    /// @param value Value to paste.
    /// @param args Remaining arguments.
    template<typename T, typename... Args>
    static void AddArguments(FormatBuilder& formatter, const T& value, const Args&... args)
    {
        formatter.AddArgument(value);
        AddArguments(formatter, args...);
    }
    /// Finishes argument substitution.
    static void AddArguments(FormatBuilder&)
    {}
    /// Null args.
    static void AddArguments(FormatBuilder&, std::nullptr_t)
    {
        ThrowArgumentNullException(u"args");
    }

    /// Accepts free arguments of String::Format to paste them into result string.
    /// Uses array to treat arguments one by one.
    /// @tparam T Type of free arguments.
    /// @param formatter Formatter to use.
    /// @param args Array of arguments to treat.
    template<typename T>
    static void AddArguments(FormatBuilder& formatter, const ArrayPtr<T>& args)
    {
        const int length = args->get_Length();
        for (int i = 0; i < length; i++)
            formatter.AddArgument(args[i]);
    }

private:
    /// Parser to parse format string.
    FormatParser m_parser;
    /// Index of next element to handle.
    int m_index = 0;
    /// Format provider.
    SharedPtr<IFormatProvider> m_format_provider;
    /// Custom formatter.
    SharedPtr<ICustomFormatter> m_custom_formatter;
    /// Culture info.
    SharedPtr<Globalization::CultureInfo> m_culture_info;

    /// Applies argument value to current argument.
    /// @tparam T Argument type.
    /// @param obj Argument value.
    template<typename T>
    void AddArgument(const T& obj)
    {
        for (auto& fi : m_parser.items())
        {
            if (fi.arg_index == m_index)
            {
                fi.text_or_format = m_custom_formatter == nullptr
                    ? ConvertToString(obj, fi.text_or_format)
                    : CustomFormat(obj, fi.text_or_format);
            }
        }
        ++m_index;
    }

    /// Converts value to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    template<class T>
    String ConvertToString(const T& value, const String& format) const
    {
        return ConvertToStringGeneric(value, format);
    }

    /// Converts null pointer to string.
    /// @return Empty string.
    String ConvertToString(std::nullptr_t, const String& /*format*/) const
    {
        return String::Empty;
    }

    /// Converts single character to string.
    /// @param value Value to convert.
    /// @return One-character string. 
    String ConvertToString(char16_t value, const String& /*format*/) const
    {
        return String(value);
    }

    /// Returns same string. Conversion not performed.
    /// @param value Input string.
    /// @return Same string. 
    String ConvertToString(const String& value, const String& /*format*/) const
    {
        return value;
    }

    /// Converts boolean to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(bool value, const String& format) const;
    /// Converts 8-bit signed integer to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(int8_t value, const String& format) const;
    /// Converts 8-bit unsigned integer to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(uint8_t value, const String& format) const;
    /// Converts 16-bit signed integer to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(int16_t value, const String& format) const;
    /// Converts 16-bit unsigned integer to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(uint16_t value, const String& format) const;
    /// Converts 32-bit signed integer to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(int32_t value, const String& format) const;
    /// Converts 32-bit unsigned integer to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(uint32_t value, const String& format) const;
    /// Converts 64-bit signed integer to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(int64_t value, const String& format) const;
    /// Converts 64-bit unsigned integer to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(uint64_t value, const String& format) const;
    /// Converts single precision floating-point value to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(float value, const String& format) const;
    /// Converts double precision floating-point value to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(double value, const String& format) const;
    /// Converts Decimal value to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(const Decimal& value, const String& format) const;
    /// Converts Guid value to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(const Guid& value, const String& format) const;
    /// Converts DateTime value to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(const DateTime& value, const String& format) const;
    /// Converts DateTimeOffset value to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(const DateTimeOffset& value, const String& format) const;
    /// Converts TimeSpan value to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    ASPOSECPP_SHARED_API String ConvertToString(const TimeSpan& value, const String& format) const;
    
    /// Converts value that implements IFormattable to string using the specified format string.
    /// @param value Value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    String ConvertToString(const SharedPtr<IFormattable>& value, const String& format) const
    {
        return value->ToString(format, m_format_provider);
    }

    enum class EnumFormat { G, F, D, X };

    /// Parse enum format.
    /// @param String format.
    /// @return EnumFormat value.
    static ASPOSECPP_SHARED_API EnumFormat ParseEnumFormat(const String& format);

    /// Converts enum underlying value to string using specified format string.
    /// @param value Enum underlying value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    static ASPOSECPP_SHARED_API String ConvertEnumValueToString(int32_t value, const String& format);
    /// Converts enum underlying value to string using specified format string.
    /// @param value Enum underlying value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    static ASPOSECPP_SHARED_API String ConvertEnumValueToString(uint32_t value, const String& format);
    /// Converts enum underlying value to string using specified format string.
    /// @param value Enum underlying value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    static ASPOSECPP_SHARED_API String ConvertEnumValueToString(int64_t value, const String& format);
    /// Converts enum underlying value to string using specified format string.
    /// @param value Enum underlying value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    static ASPOSECPP_SHARED_API String ConvertEnumValueToString(uint64_t value, const String& format);
    /// Converts enum underlying value to string using specified format string.
    /// @param value Enum underlying value to convert.
    /// @param format Format string.
    /// @return String representation of the value. 
    template<class T>
    static String ConvertEnumValueToString(const T& value, const String& format)
    {
        static_assert(std::is_integral<T>::value, "");
        static_assert(sizeof(T) <= sizeof(std::int32_t), "");

        constexpr auto is_signed_type = std::is_signed<T>::value;
        using result_type = std::conditional_t<is_signed_type, int32_t, uint32_t>;

        return ConvertEnumValueToString(static_cast<result_type>(value), format);
    }

    /// Converts value type (e. g. structure, string, etc.) to string.
    /// @tparam T Value type.
    /// @param value Value to convert.
    /// @return String representation of the value. 
    template<class T>
    static typename std::enable_if<Details::HasToString<T>::value, String>::type
    ConvertToStringGeneric(const T& value, const String& /*format*/)
    {
        return value.ToString();
    }

    /// Converts smart pointer type to string.
    /// @tparam T Smart pointer type.
    /// @param value Value to convert.
    /// @return String representation of the value. 
    template<class T>
    static typename std::enable_if<System::IsSmartPtr<T>::value, String>::type
    ConvertToStringGeneric(const T& value, const String& /*format*/)
    {
        return value != nullptr ? value->ToString() : String::Empty;
    }

    /// Converts enum types to string.
    /// Specialization used if no value strings are provided.
    /// @tparam T Enum type.
    /// @param value Value to convert.
    /// @return String representation of the value. 
    template<class T>
    static typename std::enable_if<std::is_enum<T>::value && !Details::IsDefined<EnumMetaInfo<T>>::value, String>::type
    ConvertToStringGeneric(const T& value, const String& format)
    {
        return ConvertEnumValueToString(static_cast<std::underlying_type_t<T>>(value), format);
    }

    /// Converts enum types to string.
    /// Specialization used if value strings are provided.
    /// @tparam T Enum type.
    /// @param value Value to convert.
    /// @return String representation of the value. 
    template<class T>
    static typename std::enable_if<std::is_enum<T>::value && Details::IsDefined<EnumMetaInfo<T>>::value, String>::type
    ConvertToStringGeneric(const T& value, const String& format)
    {
        const EnumFormat fmt = ParseEnumFormat(format);
        if (fmt == EnumFormat::G || fmt == EnumFormat::F)
        {
            // TODO: Implement full support for 'F' format specifier

            String result = Enum<T, void>::GetName(value);
            if (!result.IsNullOrEmpty())
                return result;
        }
        return ConvertEnumValueToString(static_cast<std::underlying_type_t<T>>(value), format);
    }

    /// Converts string literal to string.
    /// @param value Value to convert.
    /// @return String representation of the value. 
    template <class T>
    static typename std::enable_if<IsStringLiteral<T, char16_t>::value, String>::type
    ConvertToStringGeneric(T& value, const String& /*format*/)
    {
        return String(value, std::extent<T>::value - 1);
    }

    /// Converts string literal to string.
    /// @param value Value to convert.
    /// @return String representation of the value. 
    template <class T>
    static typename std::enable_if<IsStringLiteral<T, char>::value, String>::type
        ConvertToStringGeneric(T& value, const String& /*format*/)
    {
        return String::FromUtf8(value, std::extent<T>::value - 1);
    }

    /// Converts characters array to string.
    /// @param value Value to convert.
    /// @return String representation of the value. 
    template <class T>
    static typename std::enable_if<IsNonConstStringArray<T, char16_t>::value, String>::type
        ConvertToStringGeneric(T& value, const String& /*format*/)
    {
        return String(value, std::extent<T>::value - 1);
    }

    /// Converts characters array to string.
    /// @param value Value to convert.
    /// @return String representation of the value. 
    template <class T>
    static typename std::enable_if<IsNonConstStringArray<T, char>::value, String>::type
        ConvertToStringGeneric(T& value, const String& /*format*/)
    {
        return String::FromUtf8(value, std::extent<T>::value - 1);
    }

    /// Converts c-style string to System::String.
    /// @param value Value to convert.
    /// @return String representation of the value. 
    template <class T>
    static typename std::enable_if<IsStringPointer<T, char16_t>::value, String>::type
        ConvertToStringGeneric(T& value, const String& /*format*/)
    {
        return String(value);
    }

    /// Converts c-style string to System::String.
    /// @param value Value to convert.
    /// @return String representation of the value. 
    template <class T>
    static typename std::enable_if<IsStringPointer<T, char>::value, String>::type
        ConvertToStringGeneric(T& value, const String& /*format*/)
    {
        return String::FromUtf8(value);
    }

    /// Converts integer to string.
    /// @param value Integer value.
    /// @return The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ConvertIntegerToString(int64_t value);

    /// Formats object using custom formatter.
    /// @param arg Object to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(const SharedPtr<Object>& arg, const String& format);
    /// Formats string using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(const String& arg, const String& format);
    /// Formats string using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(const char16_t* arg, const String& format);
    /// Formats DateTime object using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(const DateTime& arg, const String& format);
    /// Formats TimeSpan object using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(const TimeSpan& arg, const String& format);
    /// Formats Decimal value using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(const Decimal& arg, const String& format);
    /// Formats Guid using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(const Guid& arg, const String& format);
    /// Formats integer using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(int8_t arg, const String& format);
    /// Formats integer using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(uint8_t arg, const String& format);
    /// Formats integer using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(int16_t arg, const String& format);
    /// Formats integer using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(uint16_t arg, const String& format);
    /// Formats integer using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(int32_t arg, const String& format);
    /// Formats integer using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(uint32_t arg, const String& format);
    /// Formats integer using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(int64_t arg, const String& format);
    /// Formats integer using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(uint64_t arg, const String& format);
    /// Formats floating point value using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(float arg, const String& format);
    /// Formats floating point value using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    ASPOSECPP_SHARED_API String CustomFormat(double arg, const String& format);

    /// Formats enum value using custom formatter.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Formatting result.
    template<class T>
    typename std::enable_if<std::is_enum<T>::value, String>::type
    CustomFormat(const T& arg, const String& format)
    {
        return CustomFormat(static_cast<int64_t>(arg), format);
    }

    /// Stub function that throws exception if custom formatting is required for unexpected type.
    /// @tparam T Unexpected type.
    /// @param arg Value to format.
    /// @param format Format string.
    /// @return Never actually returns, throws instead.
    /// @throw ArgumentException Unconditionally.
    template<class T>
    typename std::enable_if<!std::is_enum<T>::value, String>::type
    CustomFormat(const T& arg, const String& format)
    {
        ThrowInvalidArgument();
    }

    /// Throws ArgumentException.
    [[noreturn]]
    static ASPOSECPP_SHARED_API void ThrowInvalidArgument();
    /// Throws ArgumentNullException.
    /// @param arg_name First argument of the ArgumentNullException.
    [[noreturn]]
    static ASPOSECPP_SHARED_API void ThrowArgumentNullException(const String& arg_name);
};

}} // namespace System::Details
