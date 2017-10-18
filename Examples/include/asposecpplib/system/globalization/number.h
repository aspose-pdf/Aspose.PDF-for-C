#ifndef _aspose_system_number_h_
#define _aspose_system_number_h_

#include "fwd.h"
#include "system/string.h"
#include "system/globalization/number_format_info.h"
#include "system/globalization/number_style.h"
#include "system/decimal.h"

namespace System { namespace Globalization {

class Number {
public:
    static char_t ParseFormatSpecifier(const String &str, int& digits);
    static int64_t ParseInt64(const String& value, NumberStyles style, NumberFormatInfoPtr numberFormatInfo);
    static bool TryParseInt64(const String& value, NumberStyles style, NumberFormatInfoPtr numberFormatInfo,
                              int64_t& result);

    static double ParseDouble(const String& value, NumberStyles style, NumberFormatInfoPtr numberFormatInfo);
    static bool TryParseDouble(const String& value, NumberStyles style, NumberFormatInfoPtr numberFormatInfo,
                               double& result);

    static void ValidateParseStyleInteger(NumberStyles style);
    static void ValidateParseStyleFloatingPoint(NumberStyles style);

private:
    static bool IsWhite(char ch) { return (((ch) == 0x20) || ((ch) >= 0x09 && (ch) <= 0x0D)); }

    static uint64_t ParseHexString(const String& value, Globalization::NumberStyles style);
};

}}
#endif