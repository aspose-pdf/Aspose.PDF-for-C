#ifndef _system_component_model_component_h_
#define _system_component_model_component_h_

#include "system/marshal_by_ref_object.h"
#include "system/component_model/icomponent.h"

namespace System { namespace ComponentModel {

class Component : public MarshalByRefObject, public IComponent
{
    typedef System::BaseTypesInfo<MarshalByRefObject, IComponent> ThisBaseTypesInfo;
    RTTI_INFO(Component, ThisBaseTypesInfo)
public:
    Component();
    void Dispose(bool disposing = false);

    bool get_DesignMode();
};

}} // System.ComponentModel
#endif