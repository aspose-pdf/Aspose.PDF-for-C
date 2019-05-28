/// @file system/component_model/container.h
#ifndef _system_component_model_container_h_
#define _system_component_model_container_h_

#include "system/object.h"
#include "system/exceptions.h"

namespace System { namespace ComponentModel {
    
/// Dummy class for ported code using Container class to work.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Container : public System::Object
{
    /// RTTI information.
    RTTI_INFO(Container, ::System::BaseTypesInfo<System::Object>)
public:
    /// Disposable pattern support; does nothing.
    ASPOSECPP_SHARED_API void Dispose();
    /// Disposable pattern support; does nothing.
    /// @param disposing Indicates whether Dispose() method is called from Dispose() method rather than from finalizer; ignored.
    ASPOSECPP_SHARED_API void Dispose(bool disposing);
};

}} // System::ComponentModel

#endif
