#ifndef _system_component_model_container_h_
#define _system_component_model_container_h_

#include "system/object.h"
#include "system/exceptions.h"

namespace System { namespace ComponentModel {
    
class Container : public System::Object
{
    RTTI_INFO(Container, ::System::BaseTypesInfo<System::Object>)
public:
    void Dispose();
    void Dispose(bool disposing);
};

}} // System::ComponentModel

#endif