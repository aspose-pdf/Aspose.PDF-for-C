/// @file system/component_model/enum_converter.h
#ifndef _system_component_model_enum_converter_h_
#define _system_component_model_enum_converter_h_

#include "system/shared_ptr.h"
#include "system/type_info.h"
#include "system/globalization/culture_info.h"

#include "system/component_model/type_converter.h"
#include "system/component_model/itype_descriptor_context.h"

namespace System { namespace ComponentModel {

/// Dummy class for EnumConverter-using ported code to compile.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EnumConverter : public TypeConverter
{
    /// RTTI information.
    RTTI_INFO(EnumConverter, ::System::BaseTypesInfo<TypeConverter>)
public:
    /// Initializes EnumConverter object; not implemented.
    ASPOSECPP_SHARED_API EnumConverter(const System::TypeInfo& type);

    /// Checks if types are convertible; not implemented.
    ASPOSECPP_SHARED_API bool CanConvertFrom(const System::SharedPtr<ITypeDescriptorContext>& context, const System::TypeInfo& sourceType);
    /// Checks if types are convertible; not implemented.
    ASPOSECPP_SHARED_API bool CanConvertTo(const System::SharedPtr<ITypeDescriptorContext>& context, const System::TypeInfo& destinationType);

    /// Does actual type conversion; not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertFrom(const System::SharedPtr<ITypeDescriptorContext>& context,
        const System::SharedPtr<System::Globalization::CultureInfo>& culture, const System::SharedPtr<System::Object>& value) override;
    /// Does actual type conversion; not implemented.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertTo(const System::SharedPtr<ITypeDescriptorContext>& context,
        const System::SharedPtr<System::Globalization::CultureInfo>& culture, const System::SharedPtr<System::Object>& value,
        const System::TypeInfo& destinationType) override;

    /// Gets enum type EnumConverter is working with; not implemented.
    ASPOSECPP_SHARED_API const System::TypeInfo& get_EnumType();
};

}} // System::ComponentModel
#endif
