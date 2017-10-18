#ifndef _system_component_model_type_converter_h_
#define _system_component_model_type_converter_h_

#include <system/type_info.h>
#include <system/shared_ptr.h>
#include <system/object.h>

namespace System {

namespace ComponentModel {

class TypeConverter : public System::Object
{
    typedef TypeConverter ThisType;
    typedef System::Object BaseType;

    RTTI_INFO_DECL();

public:

    TypeConverter();

    virtual System::SharedPtr<Object> ConvertTo(System::SharedPtr<Object> value, const TypeInfo& destinationType);
    System::SharedPtr<Object> ConvertFromString(System::String text);
    System::String ConvertToString(System::SharedPtr<System::Object> o);
};

} // namespace ComponentModel
} // namespace System

#endif // _system_component_model_type_converter_h_

