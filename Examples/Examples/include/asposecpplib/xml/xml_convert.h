/// @file xml/xml_convert.h
#ifndef _aspose_xml_xml_convert_h_
#define _aspose_xml_xml_convert_h_

#include <system/string.h>
#include <system/guid.h>
#include <system/date_time.h>
#include <system/timespan.h>
#include <system/decimal.h>
#include <xml/xml_date_time_serialization_mode.h>

#include <iostream>

namespace System { namespace Xml {

/// Contains methods for encoding and decoding XML names and methods for converting between C++ types and XSD types.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
class XmlConvert
{
public:
    /// Converts the specified name into valid XML name by escaping all invalid characters.
    /// @param name The name to be converted
    /// @returns The valid XML name with all invalid characters escaped
    static ASPOSECPP_SHARED_API String EncodeName(const String& name);
    /// Converts the specified name into valid XML local name by escaping all invalid characters.
    /// @param name The name to be converted
    /// @returns The valid XML local name with all invalid characters escaped
    static ASPOSECPP_SHARED_API String EncodeLocalName(const String& name);
    /// Decodes the specified name by unescaping the escaped characters.
    /// @param name The name to decode
    /// @returns The decoded name
    static ASPOSECPP_SHARED_API String DecodeName(const String& name);

    /// Converts the specified boolean value to its string representation.
    /// @param value The boolean value to convert
    /// @returns "true" if @p value = true, otherwise - "false"
    static ASPOSECPP_SHARED_API String ToString(bool value);

    /// Converts the specified 8-bit integer value to its string representation.
    /// @param value An 8-bit integer value to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(int8_t value);
    /// Converts the specified unsigned 8-bit integer value to its string representation.
    /// @param value An unsigned 8-bit integer value to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(uint8_t value);
    /// Converts the specified 16-bit integer value to its string representation.
    /// @param value A 16-bit integer value to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(int16_t value);
    /// Converts the specified unsigned 16-bit integer value to its string representation.
    /// @param value An unsigned 16-bit integer value to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(uint16_t value);
    /// Converts the specified 32-bit integer value to its string representation.
    /// @param value A 32-bit integer value to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(int32_t value);
    /// Converts the specified unsigned 32-bit integer value to its string representation.
    /// @param value An unsigned 32-bit integer value to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(uint32_t value);
    /// Converts the specified 64-bit integer value to its string representation.
    /// @param value A 64-bit integer value to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(int64_t value);
    /// Converts the specified unsigned 64-bit integer value to its string representation.
    /// @param value An unsigned 64-bit integer value to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(uint64_t value);
    /// Converts the specified double-precision floating point value to its string representation.
    /// @param value A double-precision floating point value to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(double value);
    /// Converts the specified single-precision floating point value to its string representation.
    /// @param value A single-precision floating point value to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(float value);
    /// Converts the specified Guid object to its string representation.
    /// @param value A Guid objet to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(const System::Guid& value);
    /// Converts the specified DateTime object to its string representation using the specified string format.
    /// @param value An 8-bit integer value to convert
    /// @param format The string format
    /// @returns The string representation of @p value in format @p format
    static ASPOSECPP_SHARED_API String ToString(DateTime value, const String& format = u"yyyy-MM-ddTHH:mm:ss.fffffffzzzzzz");
    /// Converts the specified Decimal object to its string representation.
    /// @param value A Decimal object to convert
    /// @returns The string representation of @p value
    static ASPOSECPP_SHARED_API String ToString(const Decimal& value);
    /// Returns the first character of the specified string.
    /// @param s The string
    /// @returns The first character of the @p s or 0 if the length of @p s is 0.
    static ASPOSECPP_SHARED_API char_t ToChar(const String& s);
    /// Converts the string representation of an 8-bit integer value to equivalent 8-bit integer value.
    /// @param s The string representation of an 8-bit integer value
    /// @returns An 8-bit integer value equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& s);
    /// Converts the string representation of an unsigned 8-bit integer value to equivalent unsigned 8-bit integer value.
    /// @param s The string representation of an unsigned 8-bit integer value
    /// @returns An unsigned 8-bit integer value equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& s);
    /// Converts the string representation of a boolean value to equivalent boolean value.
    /// @param s The string representation of a boolean value
    /// @returns True if the specified string contains "true", "True" or "1"; 
    /// false if the specified string contains "false", "False" or "0"
    static ASPOSECPP_SHARED_API bool ToBoolean(const String& s);
    /// Converts the string representation of a double-precision floating point value to equivalent double-precision floating point value value.
    /// @param s The string representation of a double-precision floating point value
    /// @returns A double-precision floating point value equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API double ToDouble(const String& s);
    /// Converts the string representation of a single-precision floating point value to equivalent single-precision floating point value.
    /// @param s The string representation of a single-precision floating point value
    /// @returns A single-precision floating point value equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API float ToSingle(const String& s);
    /// Converts the string representation of a 16-bit integer value to equivalent 16-bit integer value.
    /// @param s The string representation of a 16-bit integer value
    /// @returns A 16-bit integer value equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& s);
    /// Converts the string representation of an unsigned 16-bit integer value to equivalent unsigned 16-bit integer value.
    /// @param s The string representation of an unsigned 16-bit integer value
    /// @returns An unsigned 16-bit integer value equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& s);
    /// Converts the string representation of a 32-bit integer value to equivalent 32-bit integer value.
    /// @param s The string representation of a 32-bit integer value
    /// @returns A 32-bit integer value equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API int ToInt32(const String& s);
    /// Converts the string representation of an unsigned 32-bit integer value to equivalent unsigned 32-bit integer value.
    /// @param s The string representation of an unsigned 32-bit integer value
    /// @returns An unsigned 32-bit integer value equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& s);
    /// Converts the string representation of a 64-bit integer value to equivalent 64-bit integer value.
    /// @param s The string representation of a 64-bit integer value
    /// @returns A 64-bit integer value equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& s);
    /// Converts the string representation of an unsigned 64-bit integer value to equivalent unsigned 64-bit integer value.
    /// @param s The string representation of an unsigned 64-bit integer value
    /// @returns An unsigned 64-bit integer value equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& s);
    /// Converts the string representation of a GUID to equivalent Guid object.
    /// @param s The string representation of a GUID
    /// @returns A Guid object representing the GUID equivalent to the string representation in @p s
    static ASPOSECPP_SHARED_API System::Guid ToGuid(const String& s);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException
    static ASPOSECPP_SHARED_API System::DateTime ToDateTime(const String& s);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException
    static ASPOSECPP_SHARED_API System::DateTime ToDateTime(const String& s, XmlDateTimeSerializationMode mode);
    /// Converts the specified string representation of date and time to equivalent DateTime object using the specified string format.
    /// @param s The string representation of date and time to convert
    /// @param format The string format to use when parsing the string @p s
    /// @returns The DateTime object representing the date and time represented by @p s
    static ASPOSECPP_SHARED_API System::DateTime ToDateTime(const String& s, const String& format);
    /// Converts the specified string representation of date and time to equivalent DateTime object using one of the specified string formats.
    /// @param s The string representation of date and time to convert
    /// @param formats Array of string formats to use when parsing the string @p s
    /// @returns The DateTime object representing the date and time represented by @p s
    static ASPOSECPP_SHARED_API System::DateTime ToDateTime(const String& s, const SharedPtr<Array<String>>& formats);
    /// Converts the specified string representation of a time interval to equivalent TimeSpan object.
    /// @param s The string to convert
    /// @returns The TimeSpan object representing the time interval represented by @p s
    static ASPOSECPP_SHARED_API System::TimeSpan ToTimeSpan(const String& s);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException
    static ASPOSECPP_SHARED_API System::TimeSpan ToTimeSpan(const String& s, const String& format);
    /// Converts the specified string representation of a decimal number to equivalent Decimal object.
    /// @param s The string to convert
    /// @returns The Decimal object representing the decimal value equivalent to the one represented by @p s
    static ASPOSECPP_SHARED_API System::Decimal ToDecimal(const String& s);

private:

    /// Converts the specified double- or single-precision floating point number to its string representation.
    /// @param value The value to convert
    /// @returns The string representation of @p value
    /// @tparam T The type of the value to convert
    template <typename T>
    static String FloatOrDoubleToString(T value);

    /// Converts the specified string representation of double- or single-precision floating point number to equivalent 
    /// double- or single-precision floating point value.
    /// @param s The string to convert
    /// @returns The value equivalent to the one represented by @p s
    /// @tparam T The type of the value to convert the string to
    template <typename  T>
    static T StringToFloatOrDouble(const String& s);
    /// Implementation of public EncodeName() function.
    /// @param name String to convert to valid XML name.
    /// @param nmtoken If false, consider first character of @p name the first character of name, otherwise we're inside the name string already, so same rules apply to the first character and to the other ones.
    /// @return Name in safe form.
    static String EncodeName(const String& name, bool nmtoken);
    /// Decodes the specified name by unescaping the escaped characters. Does not throw.
    /// In case of a failure to unescape a character, the character goes to the resulting string unescaped.
    /// @param name The name to decode
    /// @returns The decoded name
    static String TryDecodingName(const String& s);
    /// Checks whether the character is not valid XML name character.
    /// @param c Character to check.
    /// @param firstOnlyLetter If true, apply rules used for first character of the name (no digits allowed), otherwise allow digits also.
    /// @return True if the character is allowed as part of the name, false otherwise.
    static bool IsInvalidChar(char_t c, bool firstOnlyLetter);
    /// Helper method that does nothing if @p ok is true and throws FormatException if @p ok is false.
    /// @throws FormatException If @p ok is false
    static void TimeSpanErrorCheck(bool ok);
    /// Reads part of the duration entry encoded in XML format.
    /// @param input Stream to read data from.
    /// @param atLeastOneEntityPresent This reference is set to true if at least one entity is present.
    /// @param symbols Designators to look for, in allowed order.
    /// @param multipliers Multipliers corresponding to each designator compared to the base unit (e. g. one hour is 3600 seconds, one minute is 60 seconds, and so on).
    /// @param lastDesignator Reference to read designators into.
    /// @return Value that has been read, in units multipliers are defined in.
    static int64_t ReadTimeSpanData(std::wistream &input, bool &atLeastOneEntityPresent, const wchar_t *symbols, const int64_t *multipliers, wchar_t &lastDesignator);
};

}}

#endif // _aspose_xml_xml_convert_h_
