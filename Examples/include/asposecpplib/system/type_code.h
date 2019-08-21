/// @file system/type_code.h
/// Contains the definition System::TypeCode enum.
#ifndef _aspose_system_type_code_h_
#define _aspose_system_type_code_h_

#include <array>
#include <utility>
#include <system/enum_helpers.h>
#include "fwd.h"
#include "defines.h"

template <typename T> struct EnumMetaInfo;

namespace System
{

/// Represents the type of an object.
enum class TypeCode
{
    /// A null reference.
    Empty = 0,
    /// A general type representing any reference or value type not explicitly represented by another TypeCode.
    Object = 1,
    /// A database null (column) value.
    DBNull = 2,
    /// A simple type representing Boolean values of true or false.
    Boolean = 3,
    /// An integral type representing unsigned 16-bit integers with values between 0 and 65535.
    Char = 4,
    /// An integral type representing signed 8-bit integers with values between -128 and 127.
    SByte = 5,
    /// An integral type representing unsigned 8-bit integers with values between 0 and 255.
    Byte = 6,
    /// An integral type representing signed 16-bit integers with values between -32768 and 32767.
    Int16 = 7,
    /// An integral type representing unsigned 16-bit integers with values between 0 and 65535.
    UInt16 = 8,
    /// An integral type representing signed 32-bit integers with values between -2147483648 and 2147483647.
    Int32 = 9,
    /// An integral type representing unsigned 32-bit integers with values between 0 and 4294967295.
    UInt32 = 10,
    /// An integral type representing signed 64-bit integers with values between -9223372036854775808 and 9223372036854775807.
    Int64 = 11,
    /// An integral type representing unsigned 64-bit integers with values between 0 and 18446744073709551615.
    UInt64 = 12,
    /// A floating point type representing values ranging from approximately 1.5 x 10 -45 to 3.4 x 10 38 with a precision of 7 digits.
    Single = 13,
    /// A floating point type representing values ranging from approximately 5.0 x 10 -324 to 1.7 x 10 308 with a precision of 15-16 digits.
    Double = 14,
    /// A simple type representing values ranging from 1.0 x 10 -28 to approximately 7.9 x 10 28 with 28-29 significant digits.
    Decimal = 15,
    /// A type representing a date and time value.
    DateTime = 16,
    /// A sealed class type representing Unicode character strings.
    String = 18
};

}

/// Declaration of template arithmetic operators for values of TypeCode enum type.
DECLARE_ENUM_OPERATORS(System::TypeCode);

/// Declares reflection (string representations of enum values) for TypeCode structure.
template<>
struct EnumMetaInfo<System::TypeCode>
{
    /// Returns a array of pairs that associate System::TypeCode enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::TypeCode, const char_t*>, 18>& values();
};

#endif
