/// @file system/globalization/convert_impl.h
#pragma once

#include <system/shared_ptr.h>
#include <system/string.h>
#include <system/globalization/number_style.h>
#include <system/iformatprovider.h>
#include <system/decimal.h>

namespace System
{
namespace Globalization
{
namespace Details
{

/// Converts random value to string.
/// @tparam T Type to convert.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
template<typename T>
System::String ToString(T value, const System::String& format = nullptr, const System::SharedPtr<System::IFormatProvider>& culture = nullptr);

/// Converts floating point value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(float value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts floating point value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(double value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts decimal value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(Decimal value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts character to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(char value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts byte value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(int8_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts unsigned byte value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(uint8_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts short value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(int16_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts unsigned short value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(uint16_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts integer value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(int32_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts unsigned integer value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(uint32_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts long value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(int64_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
/// Converts unsigned long value to string.
/// @param value Value to convert.
/// @param format Format string.
/// @param culture Culture to use.
/// @return String representation of value passed.
extern template ASPOSECPP_SHARED_API System::String ToString<>(uint64_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);

}
}
}
