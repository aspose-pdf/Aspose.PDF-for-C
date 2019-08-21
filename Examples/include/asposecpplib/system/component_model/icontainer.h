/// @file system/component_model/icontainer.h
#ifndef _system_component_model_icontainer_h_
#define _system_component_model_icontainer_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "system/string.h"
#include "system/exceptions.h"

#include "system/component_model/icomponent.h"

namespace System { namespace ComponentModel {
    
/// Dummy interface for IContainer-using code to compile.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS IContainer : public virtual System::Object
{
    /// RTTI information.
    RTTI_INFO(IContainer, ::System::BaseTypesInfo<System::Object>)
public:
    /// Adds component into container.
    /// @param component Component to add.
    virtual ASPOSECPP_SHARED_API void Add(System::SharedPtr<IComponent> component) = 0;
};

}} // System::ComponentModel

#endif
