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
            template<typename T>
            System::String ToString(T value, const System::String& format = nullptr, const System::SharedPtr<System::IFormatProvider>& culture = nullptr);

            // template function instantiation
            extern template System::String ToString<>(float value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(double value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(Decimal value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(char value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(int8_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(uint8_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(int16_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(uint16_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(int32_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(uint32_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(int64_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
            extern template System::String ToString<>(uint64_t value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& culture);
        }
    }
}
