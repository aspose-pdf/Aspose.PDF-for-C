#ifndef _aspose_xml_xml_node_changed_event_args_h_
#define _aspose_xml_xml_node_changed_event_args_h_

#include <system/eventargs.h>

#include "xml/xml_node.h"
#include "xml/xml_node_changed_action.h"

namespace System { namespace Xml {

class XmlNodeChangedEventArgs : public EventArgs
{
public:

    typedef SharedPtr<XmlNodeChangedEventArgs> Ptr;

    XmlNodeChangedEventArgs(const XmlNode::Ptr& node, const XmlNode::Ptr& oldParent, const XmlNode::Ptr& newParent,
                            const String& oldValue, const String& newValue, XmlNodeChangedAction action)
        : m_action(action), m_node(node), m_oldParent(oldParent), m_newParent(newParent),
          m_oldValue(oldValue), m_newValue(newValue)
    { }

    XmlNodeChangedAction get_XmlNodeChangedAction() const { return m_action; }
    XmlNode::Ptr get_Node() const { return m_node; }
    XmlNode::Ptr get_OldParent() const { return m_oldParent; }
    XmlNode::Ptr get_NewParent() const { return m_newParent; }
    String get_OldValue() const { return m_oldValue; }
    String get_NewValue() const { return m_newValue; }

private:

    XmlNodeChangedAction m_action;
    XmlNode::Ptr m_node;
    XmlNode::Ptr m_oldParent;
    XmlNode::Ptr m_newParent;
    String m_oldValue;
    String m_newValue;
};

}}

#endif //_aspose_xml_xml_node_changed_event_args_h_
