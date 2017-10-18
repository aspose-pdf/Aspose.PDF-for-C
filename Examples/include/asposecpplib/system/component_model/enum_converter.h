#ifndef _system_component_model_enum_converter_h_
#define _system_component_model_enum_converter_h_

#include "system/shared_ptr.h"
#include "system/type_info.h"
#include "system/globalization/culture_info.h"

#include "system/component_model/type_converter.h"
#include "system/component_model/itype_descriptor_context.h"

namespace System { namespace ComponentModel {
class EnumConverter : public TypeConverter
{
    RTTI_INFO(EnumConverter, ::System::BaseTypesInfo<TypeConverter>)
public:
    EnumConverter(const System::TypeInfo& type);

    bool CanConvertFrom(System::SharedPtr<ITypeDescriptorContext> context, const System::TypeInfo& sourceType);
    bool CanConvertTo(System::SharedPtr<ITypeDescriptorContext> context, const System::TypeInfo& destinationType);

    System::SharedPtr<System::Object> ConvertFrom(System::SharedPtr<ITypeDescriptorContext> context,
        System::SharedPtr<System::Globalization::CultureInfo> culture, System::SharedPtr<System::Object> value);

    System::SharedPtr<System::Object> ConvertTo(System::SharedPtr<ITypeDescriptorContext> context,
        System::SharedPtr<System::Globalization::CultureInfo> culture, System::SharedPtr<System::Object> value,
        const System::TypeInfo& destinationType);

    const System::TypeInfo& get_EnumType();
};

}} // System::ComponentModel
#endif