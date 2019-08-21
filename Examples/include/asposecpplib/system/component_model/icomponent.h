/// @file system/component_model/icomponent.h
#ifndef _system_component_model_icomponent_h_
#define _system_component_model_icomponent_h_

#include "system/object.h"

namespace System { namespace ComponentModel {

/// Dummy class for IComponent-using code to compile after porting.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS IComponent : virtual public System::Object
{
    /// RTTI information.
    RTTI_INFO(IComponent, ::System::BaseTypesInfo<System::Object>)
public:
};

}}

#endif
