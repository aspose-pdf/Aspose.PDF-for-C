#ifndef _system_component_model_icontainer_h_
#define _system_component_model_icontainer_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "system/string.h"
#include "system/exceptions.h"

#include "system/component_model/icomponent.h"

namespace System { namespace ComponentModel {
    
class IContainer : public virtual System::Object
{
    RTTI_INFO(IContainer, ::System::BaseTypesInfo<System::Object>)
public:
    virtual void Add(System::SharedPtr<IComponent> component) = 0;
};

}} // System::ComponentModel

#endif