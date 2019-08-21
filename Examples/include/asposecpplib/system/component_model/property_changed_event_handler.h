/// @file system/component_model/property_changed_event_handler.h
#ifndef _System_ComponentModel_PropertyChangedEventHandler_h_
#define _System_ComponentModel_PropertyChangedEventHandler_h_

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventhandler.h>
#include <system/component_model/property_changed_event_args.h>

namespace System {
namespace ComponentModel {

/// Handler type to handle PropertyChanged event.
using PropertyChangedEventHandler = System::EventHandler<System::SharedPtr<PropertyChangedEventArgs>>;

} // namespace ComponentModel
} // namespace System

#endif // _System_ComponentModel_PropertyChangedEventHandler_h_

