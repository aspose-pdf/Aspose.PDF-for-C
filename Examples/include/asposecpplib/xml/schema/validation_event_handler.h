#ifndef _aspose_xml_validation_event_handler_h_
#define _aspose_xml_validation_event_handler_h_

#include "xml/schema/validation_event_args.h"

#include <functional>
#include "system/event.h"

namespace System { namespace Xml { namespace Schema {

typedef std::function<void(SharedPtr<Object>, SharedPtr<ValidationEventArgs>)> ValidationEventHandler;
typedef System::Event<void(SharedPtr<Object>, SharedPtr<ValidationEventArgs>)> ValidatingEventSignal;

}}} // namespace System::Xml::Schema

#endif //_aspose_xml_validation_event_handler_h_
