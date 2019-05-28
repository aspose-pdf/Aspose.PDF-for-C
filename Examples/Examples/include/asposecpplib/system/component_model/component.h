/// @file system/component_model/component.h
#ifndef _system_component_model_component_h_
#define _system_component_model_component_h_

#include "system/marshal_by_ref_object.h"
#include "system/component_model/icomponent.h"

namespace System { namespace ComponentModel {

/// Dummy class to make ported code using Component class compilable.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Component : public MarshalByRefObject, public IComponent
{
    /// Information on base types.
    typedef System::BaseTypesInfo<MarshalByRefObject, IComponent> ThisBaseTypesInfo;
    /// RTTI information.
    RTTI_INFO(Component, ThisBaseTypesInfo)
public:
    /// Constructs Component object.
    ASPOSECPP_SHARED_API Component();
    /// Disposable pattern support; does nothing.
    /// @param disposing Indicates whether Dispose() method is called from Dispose() method rather than from finalizer; ignored.
    ASPOSECPP_SHARED_API void Dispose(bool disposing = false);
    /// Checks if component is in design mode.
    /// @return Always returns false.
    ASPOSECPP_SHARED_API bool get_DesignMode();
};

}} // System.ComponentModel
#endif
