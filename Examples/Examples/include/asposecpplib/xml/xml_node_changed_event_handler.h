/// @file xml/xml_node_changed_event_handler.h
#ifndef _aspose_xml_xml_node_changed_event_handler_h_
#define _aspose_xml_xml_node_changed_event_handler_h_

#include "xml/xml_node_changed_event_args.h"

#include <functional>
#include <system/event.h>

namespace System { namespace Xml {
/// An alias for a function object type that is used to handle XML node change events.
typedef std::function<void(SharedPtr<Object>, SharedPtr<XmlNodeChangedEventArgs>)> XmlNodeChangedEventHandler;
/// An alias for an event type that signals that an XML node has been changed.
typedef System::Event<void(SharedPtr<Object>, SharedPtr<XmlNodeChangedEventArgs>)> XmlNodeChangedEventSignal;

}} // namespace System::Xml

#endif //_aspose_xml_xml_node_changed_event_handler_h_
