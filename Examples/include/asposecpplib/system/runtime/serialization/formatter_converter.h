/// @file system/runtime/serialization/formatter_converter.h
#pragma once

#include <system/type_info.h>
#include <system/type_code.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/decimal.h>
#include <system/date_time.h>
#include <cstdint>

#include "i_formatter_converter.h"

namespace System {

namespace Runtime {

namespace Serialization {

/// Represents a base implementation of the System::Runtime::Serialization::IFormatterConverter interface
class ASPOSECPP_SHARED_CLASS FormatterConverter : public System::Runtime::Serialization::IFormatterConverter
{
    /// ThisType alias
    typedef FormatterConverter ThisType;
    /// BaseType alias
    typedef System::Runtime::Serialization::IFormatterConverter BaseType;
    
    /// ThisTypeBaseTypesInfo alias
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    /// RTTI information
    RTTI_INFO(ThisType, ThisTypeBaseTypesInfo);
    
public:

    /// Converts a value to the given System::TypeInfo.
    /// @param value The object to be converted.
    /// @param type The System::TypeInfo into which value is to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API System::SharedPtr<Object> Convert(System::SharedPtr<Object> value, const TypeInfo& type) override;
    /// Converts a value to the given System::TypeCode.
    /// @param value The object to be converted.
    /// @param typeCode The System::TypeCode into which value is to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API System::SharedPtr<Object> Convert(System::SharedPtr<Object> value, TypeCode typeCode) override;
    /// Converts a value to a bool.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API bool ToBoolean(System::SharedPtr<Object> value) override;
    /// Converts a value to a uint8_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API uint8_t ToByte(System::SharedPtr<Object> value) override;
    /// Converts a value to a char16_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API char16_t ToChar(System::SharedPtr<Object> value) override;
    /// Converts a value to a DateTime.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API DateTime ToDateTime(System::SharedPtr<Object> value) override;
    /// Converts a value to a Decimal.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API Decimal ToDecimal(System::SharedPtr<Object> value) override;
    /// Converts a value to a double.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API double ToDouble(System::SharedPtr<Object> value) override;
    /// Converts a value to a int16_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API int16_t ToInt16(System::SharedPtr<Object> value) override;
    /// Converts a value to a int32_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API int32_t ToInt32(System::SharedPtr<Object> value) override;
    /// Converts a value to a int64_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API int64_t ToInt64(System::SharedPtr<Object> value) override;
    /// Converts a value to a int8_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API int8_t ToSByte(System::SharedPtr<Object> value) override;
    /// Converts a value to a float.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API float ToSingle(System::SharedPtr<Object> value) override;
    /// Converts a value to a String.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API String ToString(System::SharedPtr<Object> value) override;
    /// Converts a value to a uint16_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API uint16_t ToUInt16(System::SharedPtr<Object> value) override;
    /// Converts a value to a uint32_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API uint32_t ToUInt32(System::SharedPtr<Object> value) override;
    /// Converts a value to a uint64_t.
    /// @param value The object to be converted.
    /// @returns The converted value.
    ASPOSECPP_SHARED_API uint64_t ToUInt64(System::SharedPtr<Object> value) override;
    
};

} // namespace Serialization
} // namespace Runtime
} // namespace System

