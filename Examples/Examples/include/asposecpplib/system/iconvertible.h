/// @file system/iconvertible.h
/// Contains the declaration of System::IConvertible class.
#ifndef _aspose_system_iconvertible_h_
#define _aspose_system_iconvertible_h_

#include "system/object.h"
#include "system/string.h"
#include "system/decimal.h"
#include "system/type_code.h"
#include "system/date_time.h"
#include "system/shared_ptr.h"
#include "system/reflection.h"

namespace System
{
    /// Defines methods that convert the value of the implementing reference or value type to a common language runtime type that has an equivalent value.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS IConvertible : virtual public Object
    {
        RTTI_INFO(System::IConvertible, ::System::BaseTypesInfo<System::Object>);
    public:
        /// Returns the type code for this instance.
        /// @returns The enumerated constant that is the System::TypeCode of the class or value type that implements this interface.
        virtual ASPOSECPP_SHARED_API System::TypeCode GetTypeCode() = 0;

        /// Converts the value of this instance to an equivalent Boolean value using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A Boolean value equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API bool ToBoolean(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent Unicode character using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A Unicode character equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API char_t ToChar(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent 8-bit signed integer using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns An 8-bit signed integer equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API int8_t ToSByte(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent 8-bit uint32_teger using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A 8-bit unsigned integer value equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API uint8_t ToByte(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent 16-bit signed integer using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A 16-bit signed integer equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API int16_t ToInt16(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent 16-bit uint32_teger using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A 16-bit unsigned integer value equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API uint16_t ToUInt16(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent 32-bit signed integer using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A 32-bit signed integer equivalent to the value of this instance
        virtual ASPOSECPP_SHARED_API int32_t ToInt32(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent 32-bit uint32_teger using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A 32-bit unsigned integer value equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API uint32_t ToUInt32(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent 64-bit signed integer using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A 64-bit signed integer equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API int64_t ToInt64(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent 64-bit uint32_teger using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A 64-bit unsigned integer value equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API uint64_t ToUInt64(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent single-precision floating-point number using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A single-precision floating-point number equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API float ToSingle(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent double-precision floating-point number using the specified culture-specific formatting information.\
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A double-precision floating-point number equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API double ToDouble(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent System::Decimal number using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A System::Decimal number equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API System::Decimal ToDecimal(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent System::DateTime using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A System::DateTime instance equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API System::DateTime ToDateTime(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to an equivalent System::String using the specified culture-specific formatting information.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A System::String instance equivalent to the value of this instance.
        virtual ASPOSECPP_SHARED_API System::String ToString(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// Converts the value of this instance to a System::Object of the specified System::Type that has an equivalent value, using the specified culture-specific formatting information.
        /// @param conversionType The System::Type to which the value of this instance is converted.
        /// @param provider A System::IFormatProvider interface implementation that supplies culture-specific formatting information.
        /// @returns A System::Object instance of type conversionType whose value is equivalent to the value of this instance.
        //virtual ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ToType(Type conversionType, System::SharedPtr<System::IFormatProvider> provider) = 0;
    };
}

#endif
