/// @file xml/schema/validation_event_handler.h
#ifndef _aspose_xml_validation_event_handler_h_
#define _aspose_xml_validation_event_handler_h_

#include "xml/schema/validation_event_args.h"

#include <functional>
#include "system/event.h"

namespace System { namespace Xml { namespace Schema {
/// An alias for a function object type that is used to handle validation events.
typedef std::function<void(SharedPtr<Object>, SharedPtr<ValidationEventArgs>)> ValidationEventHandler;
/// An alias for an event type that signals a validation event.
typedef System::Event<void(SharedPtr<Object>, SharedPtr<ValidationEventArgs>)> ValidatingEventSignal;

}}} // namespace System::Xml::Schema

#endif //_aspose_xml_validation_event_handler_h_
