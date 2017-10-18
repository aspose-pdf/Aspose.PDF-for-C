#ifndef _aspose_xml_xml_node_changed_event_handler_h_
#define _aspose_xml_xml_node_changed_event_handler_h_

#include "xml/xml_node_changed_event_args.h"

#include <functional>
#include <system/event.h>

namespace System { namespace Xml {

typedef std::function<void(SharedPtr<Object>, SharedPtr<XmlNodeChangedEventArgs>)> XmlNodeChangedEventHandler;
typedef System::Event<void(SharedPtr<Object>, SharedPtr<XmlNodeChangedEventArgs>)> XmlNodeChangedEventSignal;

}} // namespace System::Xml

#endif //_aspose_xml_xml_node_changed_event_handler_h_
