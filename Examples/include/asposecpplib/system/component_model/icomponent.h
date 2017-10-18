#ifndef _system_component_model_icomponent_h_
#define _system_component_model_icomponent_h_

#include "system/object.h"

namespace System { namespace ComponentModel {
class IComponent : virtual public System::Object
{
    RTTI_INFO(IComponent, ::System::BaseTypesInfo<System::Object>)
public:
    
};

}}

#endif