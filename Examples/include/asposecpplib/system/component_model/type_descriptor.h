/// @file system/component_model/type_descriptor.h
#ifndef _system_component_model_type_descriptor_h_
#define _system_component_model_type_descriptor_h_

#include "system/type_info.h"
#include "system/shared_ptr.h"
#include "system/object.h"
#include "system/exceptions.h"

#include "system/component_model/type_converter.h"

namespace System { namespace ComponentModel {

/// Dummy class for TypeDescriptor-using code to compile after porting.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TypeDescriptor final : public System::Object
{
    /// RTTI information.
    RTTI_INFO(TypeDescriptor, ::System::BaseTypesInfo<System::Object>)
public:
    /// Gets converter for specific type; not implemented.
    static ASPOSECPP_SHARED_API System::SharedPtr<TypeConverter> GetConverter(const TypeInfo& type);
};

}}

#endif
