#ifndef _aspose_system_convert_h_
#define _aspose_system_convert_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "fwd.h"
#include "system/primitive_types.h"
#include "system/math.h"
#include "system/exceptions.h"
#include "system/array.h"
#include "system/decimal.h"
#include "system/date_time.h"
#include "system/globalization/number_style.h"
#include "system/globalization/culture_info.h"
#include "system/iformatprovider.h"
#include "system/guid.h"
#include "system/type_code.h"

#include <bitset>
#include <iostream>
#include <iomanip>
#include <cwctype>
#include <type_traits>

#include "globalization/convert_impl.h"


#define ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type, from) \
    static type To##name(from value);
#define ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(name, type_) \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, char); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, unsigned char); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, short); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, unsigned short); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, int); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, unsigned int); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, long); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, unsigned long); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, long long); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, unsigned long long); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, float); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, double); \
    template <typename Enum, typename = typename std::enable_if<std::is_enum<Enum>::value, int>::type> static type_ To##name(Enum value) \
    { \
        return To##name(static_cast<typename std::underlying_type<Enum>::type>(value)); \
    }


namespace System
{
    enum class Base64FormattingOptions
    {
        None = 0,
        InsertLineBreaks = 1,
    };

struct Convert
{
    static SharedPtr<Object> ChangeType(SharedPtr<Object> value, const TypeInfo& conversionType);

    // ---------- Base64 Conversions ----------

    static int ToBase64CharArray(const ArrayPtr<uint8_t>& inArray, int offsetIn, int length, const ArrayPtr<wchar_t>& outArray, int offsetOut, bool insertLineBreaks = false);
    static String ToBase64String(const ArrayPtr<uint8_t>& inArray, bool insertLineBreaks = false);
    static String ToBase64String(const ArrayPtr<uint8_t>& inArray, int offsetIn, int length, bool insertLineBreaks = false);

    static int ToBase64CharArray(const ArrayPtr<uint8_t>& inArray, int offsetIn, int length, const ArrayPtr<char_t>& outArray, int offsetOut, Base64FormattingOptions options);
    static String ToBase64String(const ArrayPtr<uint8_t>& inArray, Base64FormattingOptions options);
    static String ToBase64String(const ArrayPtr<uint8_t>& inArray, int offsetIn, int length, Base64FormattingOptions options);

    static ArrayPtr<uint8_t> FromBase64CharArray(const ArrayPtr<wchar_t>& inArray, int offset, int length);
    static ArrayPtr<uint8_t> FromBase64String(const String& s);

    // ---------- Boolean Conversions ----------

    template <typename T>
    static bool ToBoolean(T value) { return value != 0; }

    static bool ToBoolean(bool value);
    static bool ToBoolean(const wchar_t* value) { return ToBoolean(String(value)); }
    static bool ToBoolean(const String& value);
    static bool ToBoolean(const Decimal& value);

    template <typename U>
    static bool ToBoolean(const SharedPtr<U>& value) { return value.get() != 0; }

    // ---------- Byte Conversions ----------
    template <class... Args>
    static uint8_t ToByteNative(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToByte(value, args...);
    }

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Byte, uint8_t);

    static uint8_t ToByte(bool value);
    static uint8_t ToByte(const Decimal& value);
    static uint8_t ToByte(const wchar_t* value) { return ToByte(String(value)); }
    static uint8_t ToByte(const String& value);
    static uint8_t ToByte(const String& value, int fromBase);
    static uint8_t ToByte(const String& value, const SharedPtr<IFormatProvider>& fp);
    static uint8_t ToByte(const String& value, Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    template <class... Args>
    static int8_t ToSByteNative(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToSByte(value, args...);
    }

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(SByte, int8_t);

    static int8_t ToSByte(bool value);
    static int8_t ToSByte(const Decimal& value);
    static int8_t ToSByte(const wchar_t* value) { return ToSByte(String(value)); }
    static int8_t ToSByte(const String& value);
    static int8_t ToSByte(const String& value, int fromBase);
    static int8_t ToSByte(const String& value, const SharedPtr<IFormatProvider>& fp);
    static int8_t ToSByte(const String& value, Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    // ---------- Char Conversions ----------

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Char, wchar_t);

    template <typename T>
    static inline wchar_t ToChar(T value, const System::SharedPtr<IFormatProvider>&)
    {
        return ToChar(value);
    }

    static wchar_t ToChar(const wchar_t* value) { return ToChar(String(value)); }
    static wchar_t ToChar(const String& value);

    // ---------- Int16 Conversions ----------
    template <class... Args>
    static int16_t ToInt16Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToInt16(value, args...);
    }

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Int16, int16_t);

    static int16_t ToInt16(bool value);
    static int16_t ToInt16(const wchar_t* value) { return ToInt16(String(value)); }
    static int16_t ToInt16(const Decimal &value);
    static int16_t ToInt16(const String& value);
    static int16_t ToInt16(const String& value, int fromBase);
    static int16_t ToInt16(const String& value, const SharedPtr<IFormatProvider>& fp);
    static int16_t ToInt16(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    template <class... Args>
    static uint16_t ToUInt16Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToUInt16(value, args...);
    }

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(UInt16, uint16_t);

    static uint16_t ToUInt16(bool value);
    static uint16_t ToUInt16(const wchar_t* value) { return ToUInt16(String(value)); }
    static uint16_t ToUInt16(const Decimal &value);
    static uint16_t ToUInt16(const String& value);
    static uint16_t ToUInt16(const String& value, int fromBase);
    static uint16_t ToUInt16(const String& value, const SharedPtr<IFormatProvider>& fp);
    static uint16_t ToUInt16(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    // ---------- Int32 Conversions ----------

    template <class... Args>
    static int ToInt32Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToInt32(value, args...);
    }

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Int32, int);

    template <typename T>
    static int ToInt32(T value, const SharedPtr<IFormatProvider>&)
    {
        return ToInt32(value);
    }

    static int ToInt32(bool value);
    static int ToInt32(const wchar_t* value) { return ToInt32(String(value)); }
    static int ToInt32(const String& value);
    static int ToInt32(const Decimal &value);
    static int ToInt32(const String& value, int fromBase);
    static int ToInt32(const String& value, const SharedPtr<IFormatProvider>& fp);
    static int ToInt32(const String& value, Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    // ---------- UInt32 Conversions ----------

    template <class... Args>
    static uint32_t ToUInt32Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToUInt32(value, args...);
    }

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(UInt32, uint32_t);

    static uint32_t ToUInt32(bool value);

    static uint32_t ToUInt32(const wchar_t* value) { return ToUInt32(String(value)); }
    static uint32_t ToUInt32(const String& value);
    static uint32_t ToUInt32(const String& value, int fromBase);
    static uint32_t ToUInt32(const String& value, const SharedPtr<IFormatProvider>& fp);
    static uint32_t ToUInt32(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    // ---------- TryParse Conversions ----------

    static bool TryParse(const String& value, int8_t &result);
    static bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, int8_t &result);

    static bool TryParse(const String& value, uint8_t &result);
    static bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, uint8_t &result);

    static bool TryParse(const String& value, int32_t &result);
    static bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, int32_t &result);

    static bool TryParse(const String& value, uint32_t &result);
    static bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, uint32_t &result);

    static bool TryParse(const String& value, int16_t &result);
    static bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, int16_t &result);

    static bool TryParse(const String& value, uint16_t &result);
    static bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, uint16_t &result);

    static bool TryParse(const String& value, int64_t &result);
    static bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, int64_t &result);

    static bool TryParse(const String& value, bool& result);

    // Dummy method, should be removed once implemented.
    static inline bool TryParse(const String&, System::Globalization::NumberStyles, const SharedPtr<IFormatProvider>&, Decimal&)
        { return false; }

    // ---------- Int64 Conversions ----------

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Int64, int64_t);

    template <class... Args>
    static int64_t ToInt64Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToInt64(value, args...);
    }

    static int64_t ToInt64(bool value);
    static int64_t ToInt64(const wchar_t* value) { return ToInt64(String(value)); }
    static int64_t ToInt64(const Decimal &value);
    static int64_t ToInt64(const String& value);
    static int64_t ToInt64(const String& value, int fromBase);
    static int64_t ToInt64(const String& value, const SharedPtr<IFormatProvider>& fp);
    static int64_t ToInt64(const String& value, Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    template <class... Args>
    static uint64_t ToUInt64Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToUInt64(value, args...);
    }

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(UInt64, uint64_t);

    static uint64_t ToUInt64(bool value);
    static uint64_t ToUInt64(const wchar_t* value) { return ToUInt64(String(value)); }
    static uint64_t ToUInt64(const String& value, int fromBase = 10);
    static uint64_t ToUInt64(const String& value, const SharedPtr<IFormatProvider>& fp);
    static uint64_t ToUInt64(const String& value, Globalization::NumberStyles style, SharedPtr<IFormatProvider> fp = nullptr);

    // ---------- Decimal Conversions ----------
    template <class... Args>
    static Decimal ToDecimalNative(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToDecimal(value, args...);
    }

    template <typename T>
    static Decimal ToDecimal(T value) { return Decimal(value); }

    static Decimal ToDecimal(bool value);
    static Decimal ToDecimal(const wchar_t* value) { return ToDecimal(String(value)); }
    static Decimal ToDecimal(const String& value);
    static Decimal ToDecimal(const String& value, Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);
    static Decimal ToDecimal(const String& value, SharedPtr<System::IFormatProvider> fp)
    {
        throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }

    static bool TryParse(const String& value, Decimal& result);

    // ---------- Single Conversions ----------
    template <class... Args>
    static float ToSingleNative(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToSingle(value, args...);
    }

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Single, float);

    static float ToSingle(const Decimal& value);
    static float ToSingle(const wchar_t* value) { return ToSingle(String(value)); }
    static float ToSingle(const String& value);
    static float ToSingle(const String& value, const SharedPtr<IFormatProvider>& fp);
    static float ToSingle(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    static bool TryParse(const String& value, float &result);
    static bool TryParse(const String& value, System::Globalization::NumberStyles style, SharedPtr<IFormatProvider> fp, float &result);

    // ---------- Double Conversions ----------
    template <class... Args>
    static double ToDoubleNative(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToDouble(value, args...);
    }

    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Double, double);

    static double ToDouble(const Decimal& value);
    static double ToDouble(const wchar_t* value) { return ToDouble(String(value)); }
    static double ToDouble(const String& value);

    //parameter fp can be SharedPtr<CultureInfo>, SharedPtr<NumberFormatInfo>
    static double ToDouble(const String& value, const SharedPtr<IFormatProvider>& fp);
    static double ToDouble(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    static bool TryParse(const String& value, double &result);
    static bool TryParse(const String& value, System::Globalization::NumberStyles style, SharedPtr<IFormatProvider> fp, double &result);

    // ---------- String Conversions ----------

    template <typename T>
    static String ToString(T value, const String& format = String::Empty, const SharedPtr<IFormatProvider>& fp = nullptr);

    template <size_t N>
    static String ToString(const wchar_t (&value)[N], const SharedPtr<IFormatProvider>& fp = nullptr)
    {
        return String(value, N - 1);
    }

    template <typename T>
    static String ToString(T value, const SharedPtr<IFormatProvider>& fp);


    static String ToString(const DateTime& value);
    static String ToString(const Decimal& value, const SharedPtr<IFormatProvider>& fp = nullptr);
    static String ToString(const Guid& value);
    static String ToString(const String& value);


    template <typename T>
    static String ToString(T value, int toBase)
    {
        switch (toBase)
        {
            case 2: return stream_converter_bin<T>(value);
            case 8: return stream_converter_octhex<T>(value, true);
            case 10: return ToString<T>(value);
            case 16: return stream_converter_octhex<T>(value, false);
        default: 
            throw ArgumentException(L"Invalid Base");
        }
    }

    // ---------- DateTime Conversions ----------

    static DateTime ToDateTime(const String& value);

    // ---------- Boxed Conversions ----------

    static double ToDouble(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& fp = nullptr);
    static Decimal ToDecimal(const SharedPtr<Object>& obj);
    static float ToSingle(const SharedPtr<Object>& obj);
    static int ToInt32(const SharedPtr<Object>& obj);
    static uint32_t ToUInt32(const SharedPtr<Object>& obj);
    static int16_t ToInt16(const SharedPtr<Object>& obj);
    static uint16_t ToUInt16(const SharedPtr<Object>& obj);
    static int64_t ToInt64(const SharedPtr<Object>& obj);
    static uint64_t ToUInt64(const SharedPtr<Object>& obj);
    static uint8_t ToByte(const SharedPtr<Object>& obj);
    static int8_t ToSByte(const SharedPtr<Object>& obj);

    static DateTime ToDateTime(const SharedPtr<Object>& obj);

    static String ToString(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& fp = nullptr);

    // ---------------------------------------
    static TypeCode GetTypeCode(const SharedPtr<Object>& obj);
protected:

    static const String ASPOSECPP_SHARED_API s_trueString;
    static const String ASPOSECPP_SHARED_API s_falseString;

    // base64

    static std::string to_base64(const uint8_t* data, size_t size, bool linebreaks);
    static int from_base64(const std::string& data, std::vector<uint8_t>& out);

    // numeric

    template <typename Target, typename Source>
    static Target numeric_cast_wrap(Source value);
    template <typename Target>
    static Target numeric_cast_wrap(float value);
    template <typename Target>
    static Target numeric_cast_wrap(double value);

    // numeric cast helper

    template<typename Target, typename Source, bool is_enum = std::is_enum<Source>::value>
    struct NumericCastHelper;
    template<typename Target, typename Source>
    struct NumericCastHelper<Target, Source, true>;

    // from string

    static int64_t string_to_int64(const String& value, int fromBase);
    static uint64_t string_to_uint64(const String& value, int fromBase);

    // to string

    template <typename Source>
    static String stream_converter_octhex(Source value, bool tooct_or_tohex, int len = 0)
    {
        std::wstringstream ss;
        ss << (tooct_or_tohex ? std::oct : std::hex);
        if (len > 0)
        {
            ss << std::setfill(L'0');
            ss << std::setw(len);
        }
        ss << value;
        return String(ss.str());
    }

    template <typename Source>
    static String stream_converter_bin(Source value)
    {
        std::wstring rv;
        for (int i = static_cast<int>(sizeof(Source)) - 1; i >= 0; --i)
        {
            uint8_t b = *(reinterpret_cast<uint8_t*>(&value) + i);
            for (int j = 0; j < 8; j++)
            {
                if ((b & 0x80) == 0x80)
                    rv += L'1';
                else if (rv.size() > 0)
                    rv += L'0';

                b <<= 1;
            }
        }

        return String(rv);
    }

}; // class Convert


#undef ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2
#undef ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO


template <typename T>
inline String Convert::ToString(T value, const String& format, const SharedPtr<IFormatProvider>& fp)
{
    return System::Globalization::Details::ToString(value, format, fp);
}

template <typename T>
inline String Convert::ToString(T value, const SharedPtr<IFormatProvider>& fp)
{
    return System::Globalization::Details::ToString(value, String::Empty, fp);
}

template <>
inline String Convert::ToString<wchar_t>(wchar_t value, const String& format, const SharedPtr<IFormatProvider>& provider)
{
    return String(value, 1);
}

template <>
inline String Convert::ToString<wchar_t>(wchar_t value, const SharedPtr<IFormatProvider>& provider)
{
    return String(value, 1);
}

template <>
inline String Convert::ToString<bool>(bool value, const String& format, const SharedPtr<IFormatProvider>& provider)
{
    return value ? s_trueString : s_falseString;
}

template <>
inline String Convert::ToString<bool>(bool value, const SharedPtr<IFormatProvider>& provider)
{
    return value ? s_trueString : s_falseString;
}

} // namespace System

#endif // _aspose_system_convert_h_
