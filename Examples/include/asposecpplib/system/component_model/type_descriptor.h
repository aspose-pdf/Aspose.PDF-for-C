#ifndef _system_component_model_type_descriptor_h_
#define _system_component_model_type_descriptor_h_

#include "system/type_info.h"
#include "system/shared_ptr.h"
#include "system/object.h"
#include "system/exceptions.h"

#include "system/component_model/type_converter.h"

namespace System { namespace ComponentModel {

class TypeDescriptor final : public System::Object
{
    RTTI_INFO(TypeDescriptor, ::System::BaseTypesInfo<System::Object>)
public:
    static System::SharedPtr<TypeConverter> GetConverter(const TypeInfo& type);
};

}}

#endif