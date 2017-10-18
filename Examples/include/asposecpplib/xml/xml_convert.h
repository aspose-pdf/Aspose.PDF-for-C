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

class XmlConvert
{
public:

    static String EncodeName(const String& name);
    static String EncodeLocalName(const String& name);
    static String DecodeName(const String& name);

    static String ToString(bool value);
    static String ToString(int8_t value);
    static String ToString(uint8_t value);
    static String ToString(int16_t value);
    static String ToString(uint16_t value);
    static String ToString(int32_t value);
    static String ToString(uint32_t value);
    static String ToString(int64_t value);
    static String ToString(uint64_t value);
    static String ToString(double value);
    static String ToString(float value);
    static String ToString(const System::Guid& value);
    static String ToString(DateTime value, const String& format = L"yyyy-MM-ddTHH:mm:ss.fffffffzzzzzz");
    static String ToString(const Decimal& value);

    static wchar_t ToChar(const String& s);
    static int8_t ToSByte(const String& s);
    static uint8_t ToByte(const String& s);
    static bool ToBoolean(const String& s);
    static double ToDouble(const String& s);
    static float ToSingle(const String& s);
    static int16_t ToInt16(const String& s);
    static uint16_t ToUInt16(const String& s);
    static int ToInt32(const String& s);
    static uint32_t ToUInt32(const String& s);
    static int64_t ToInt64(const String& s);
    static uint64_t ToUInt64(const String& s);
    static System::Guid ToGuid(const String& s);
    static System::DateTime ToDateTime(const String& s);
    static System::DateTime ToDateTime(const String& s, XmlDateTimeSerializationMode mode);
    static System::DateTime ToDateTime(const String& s, const String& format);
    static System::DateTime ToDateTime(const String& s, const SharedPtr<Array<String>>& formats);
    static System::TimeSpan ToTimeSpan(const String& s);
    static System::TimeSpan ToTimeSpan(const String& s, const String& format);
    static System::Decimal ToDecimal(const String& s);

private:

    template <typename T>
    static String FloatOrDoubleToString(T value);

    template <typename  T>
    static T StringToFloatOrDouble(const String& s);

    static String EncodeName(const String& name, bool nmtoken);
    static String TryDecodingName(const String& s);

    static bool IsInvalidChar(char_t c, bool firstOnlyLetter);

    static void TimeSpanErrorCheck(bool ok);
    static int64_t ReadTimeSpanData(std::wistream &input, bool &atLeastOneEntityPresent, const char_t *symbols, const int64_t *multipliers, char_t &lastDesignator);
};

}}

#endif // _aspose_xml_xml_convert_h_
