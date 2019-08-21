/// @file system/component_model/type_converter.h
#ifndef _system_component_model_type_converter_h_
#define _system_component_model_type_converter_h_

#include <system/type_info.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/component_model/itype_descriptor_context.h>
#include <system/globalization/culture_info.h>

namespace System { namespace ComponentModel {

/// Class that handles type conversion in component model.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TypeConverter : public System::Object
{
    /// This type.
    typedef TypeConverter ThisType;
    /// Parent type.
    typedef System::Object BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Constructor.
    ASPOSECPP_SHARED_API TypeConverter();

    /// Converts objects.
    /// @param value Object to convert.
    /// @return converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertFrom(const System::SharedPtr<System::Object>& value);
    // override this in deriverd class for ConvertFrom
    /// Converts objects.
    /// @param context Object conversion context information.
    /// @param culture Culture to use when converting objects.
    /// @param value Object to convert.
    /// @return converted object.
    virtual ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertFrom(const System::SharedPtr<ITypeDescriptorContext>& context, const System::SharedPtr<System::Globalization::CultureInfo>& culture, const System::SharedPtr<System::Object>& value);
    /// Converts string to object.
    /// @param context Object conversion context information.
    /// @param culture Culture to use when converting objects.
    /// @param value Value to convert.
    /// @return converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertFrom(const System::SharedPtr<ITypeDescriptorContext>& context, const System::SharedPtr<System::Globalization::CultureInfo>& culture, const System::String& value);
    /// Converts invariant string to object.
    /// @param text Value to convert.
    /// @return converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertFromInvariantString(const System::String& text);
    /// Converts invariant string to object.
    /// @param context Object conversion context information.
    /// @param text Value to convert.
    /// @return converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertFromInvariantString(const System::SharedPtr<ITypeDescriptorContext>& context, const System::String& text);
    /// Converts string to object.
    /// @param text Value to convert.
    /// @return converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertFromString(const System::String& text);
    /// Converts string to object.
    /// @param context Object conversion context information.
    /// @param text Value to convert.
    /// @return converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertFromString(const System::SharedPtr<ITypeDescriptorContext>& context, const System::String& text);
    /// Converts string to object.
    /// @param context Object conversion context information.
    /// @param culture Culture to use when converting objects.
    /// @param text Value to convert.
    /// @return converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertFromString(const System::SharedPtr<ITypeDescriptorContext>& context, const System::SharedPtr<System::Globalization::CultureInfo>& culture, const System::String& text);

    /// Converts object to specific type.
    /// @param value Object to convert.
    /// @param destinationType Type to convert to.
    /// @return Converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertTo(const System::SharedPtr<System::Object>& value, const System::TypeInfo& destinationType);
    // override this in derived class to implement ConvertTo
    /// Converts object to specific type.
    /// @param context Object conversion context information.
    /// @param culture Culture to use when converting objects.
    /// @param value Object to convert.
    /// @param destinationType Type to convert to.
    /// @return Converted object.
    virtual ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertTo(const System::SharedPtr<ITypeDescriptorContext>& context, const System::SharedPtr<System::Globalization::CultureInfo>& culture, const System::SharedPtr<System::Object>& value, const System::TypeInfo& destinationType);
    /// Converts object to invariant string.
    /// @param value Object to convert.
    /// @return Converted object.
    ASPOSECPP_SHARED_API System::String ConvertToInvariantString(const System::SharedPtr<System::Object>& value);
    /// Converts object to invariant string.
    /// @param context Object conversion context information.
    /// @param value Object to convert.
    /// @return Converted object.
    ASPOSECPP_SHARED_API System::String ConvertToInvariantString(const System::SharedPtr<ITypeDescriptorContext>& context, const System::SharedPtr<System::Object>& value);
    /// Converts object to string.
    /// @param value Object to convert.
    /// @return Converted object.
    ASPOSECPP_SHARED_API System::String ConvertToString(const System::SharedPtr<System::Object>& value);
    /// Converts object to string.
    /// @param context Object conversion context information.
    /// @param value Object to convert.
    /// @return Converted object.
    ASPOSECPP_SHARED_API System::String ConvertToString(const System::SharedPtr<ITypeDescriptorContext>& context, const System::SharedPtr<System::Object>& value);    
    /// Converts object to string.
    /// @param context Object conversion context information.
    /// @param culture Culture to use when converting objects.
    /// @param value Object to convert.
    /// @return Converted object.
    ASPOSECPP_SHARED_API System::String ConvertToString(const System::SharedPtr<ITypeDescriptorContext>& context, const System::SharedPtr<System::Globalization::CultureInfo>& culture, const System::SharedPtr<System::Object>& value);
};

}} // namespace System::ComponentModel

#endif // _system_component_model_type_converter_h_

