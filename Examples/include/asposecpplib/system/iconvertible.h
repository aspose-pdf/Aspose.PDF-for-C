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
    class IConvertible : virtual public Object
    {
        RTTI_INFO(System::IConvertible, ::System::BaseTypesInfo<System::Object>);
    public:
        /// <summary>Returns the T:System.TypeCode for this instance.</summary>
        /// <returns>The enumerated constant that is the T:System.TypeCode of the class or value type that implements this interface.</returns>
        virtual System::TypeCode GetTypeCode() = 0;

        /// <summary>Converts the value of this instance to an equivalent Boolean value using the specified culture-specific formatting information.</summary>
        /// <returns>A Boolean value equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual bool ToBoolean(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent Unicode character using the specified culture-specific formatting information.</summary>
        /// <returns>A Unicode character equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual wchar_t ToChar(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent 8-bit signed integer using the specified culture-specific formatting information.</summary>
        /// <returns>An 8-bit signed integer equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual int8_t ToSByte(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent 8-bit uint32_teger using the specified culture-specific formatting information.</summary>
        /// <returns>An 8-bit uint32_teger equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual uint8_t ToByte(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent 16-bit signed integer using the specified culture-specific formatting information.</summary>
        /// <returns>An 16-bit signed integer equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual int16_t ToInt16(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent 16-bit uint32_teger using the specified culture-specific formatting information.</summary>
        /// <returns>An 16-bit uint32_teger equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual uint16_t ToUInt16(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent 32-bit signed integer using the specified culture-specific formatting information.</summary>
        /// <returns>An 32-bit signed integer equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual int32_t ToInt32(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent 32-bit uint32_teger using the specified culture-specific formatting information.</summary>
        /// <returns>An 32-bit uint32_teger equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual uint32_t ToUInt32(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent 64-bit signed integer using the specified culture-specific formatting information.</summary>
        /// <returns>An 64-bit signed integer equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual int64_t ToInt64(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent 64-bit uint32_teger using the specified culture-specific formatting information.</summary>
        /// <returns>An 64-bit uint32_teger equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual uint64_t ToUInt64(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent single-precision floating-point number using the specified culture-specific formatting information.</summary>
        /// <returns>A single-precision floating-point number equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual float ToSingle(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent double-precision floating-point number using the specified culture-specific formatting information.</summary>
        /// <returns>A double-precision floating-point number equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual double ToDouble(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent T:System.Decimal number using the specified culture-specific formatting information.</summary>
        /// <returns>A T:System.Decimal number equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual System::Decimal ToDecimal(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent T:System.DateTime using the specified culture-specific formatting information.</summary>
        /// <returns>A T:System.DateTime instance equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual System::DateTime ToDateTime(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an equivalent T:System.String using the specified culture-specific formatting information.</summary>
        /// <returns>A T:System.String instance equivalent to the value of this instance.</returns>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        virtual System::String ToString(System::SharedPtr<System::IFormatProvider> provider) = 0;

        /// <summary>Converts the value of this instance to an T:System.Object of the specified T:System.Type that has an equivalent value, using the specified culture-specific formatting information.</summary>
        /// <returns>An T:System.Object instance of type conversionType whose value is equivalent to the value of this instance.</returns>
        /// <param name="conversionType">The T:System.Type to which the value of this instance is converted.</param>
        /// <param name="provider">An T:System.IFormatProvider interface implementation that supplies culture-specific formatting information.</param>
        //virtual System::SharedPtr<System::Object> ToType(Type conversionType, System::SharedPtr<System::IFormatProvider> provider) = 0;
    };
}

#endif
