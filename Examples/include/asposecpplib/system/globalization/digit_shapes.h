/// @file system/globalization/digit_shapes.h
#pragma once

#include <system/details/enum_meta_info.h>

namespace System { namespace Globalization {

/// Specifies display of digits.
enum class DigitShapes : int32_t
{
    /// Digit shape depends on previous text.
    Context = 0,
    /// Digit shape is not changed.
    None = 1,
    /// ASCII digits 0..9 replaced by native national digits.
    NativeNational = 2
};

}} // namespace System::Globalization

template<>
struct EnumMetaInfo<System::Globalization::DigitShapes>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Globalization::DigitShapes, const char16_t*>, 3>& values();
};
