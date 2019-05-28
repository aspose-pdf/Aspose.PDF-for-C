/// @file drawing/imaging/encoder_parameter_value_type.h
#ifndef _encoder_parameter_value_type_h_
#define _encoder_parameter_value_type_h_

namespace System {  namespace Drawing { namespace Imaging {
    /// Specifies the type of a value represented by EncoderParameter class.
    enum class EncoderParameterValueType {
        /// An 8-bit unsigned integer.
        ValueTypeByte = 1,   
        /// An 8-bit unsigned integer containing one 7-bit ASCII.
        ValueTypeAscii = 2,   
        /// A 16-bit unsigned integer.
        ValueTypeShort = 3,  
        /// A 32-bit unsigned integer.
        ValueTypeLong = 4,   
        /// A fraction specified by two longs - numerator and denominator.
        ValueTypeRational = 5,   
        /// A range of integers.
        ValueTypeLongRange = 6,
        // A 8-bit integer that can take any value.
        ValueTypeUndefined = 7,   
        /// A range of fractions.
        ValueTypeRationalRange = 8 
    };

}}}

#endif
