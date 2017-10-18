#ifndef _encoder_parameter_value_type_h_
#define _encoder_parameter_value_type_h_

namespace System {  namespace Drawing { namespace Imaging {

    enum class EncoderParameterValueType {
        ValueTypeByte = 1,   // 8-bit unsigned int
        ValueTypeAscii = 2,   // 8-bit byte containing one 7-bit ASCII
        ValueTypeShort = 3,   // 16-bit unsigned int
        ValueTypeLong = 4,   // 32-bit unsigned int
        ValueTypeRational = 5,   // Two Longs. The first Long is the
        ValueTypeLongRange = 6,   // Two longs which specify a range of
        ValueTypeUndefined = 7,   // 8-bit byte that can take any value
        ValueTypeRationalRange = 8    // Two Rationals. The first Rational
    };

}}}

#endif