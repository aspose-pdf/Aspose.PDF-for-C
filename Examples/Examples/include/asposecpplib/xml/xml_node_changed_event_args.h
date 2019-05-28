/// @file xml/xml_node_changed_event_args.h
#ifndef _aspose_xml_xml_node_changed_event_args_h_
#define _aspose_xml_xml_node_changed_event_args_h_

#include <system/eventargs.h>

#include "xml/xml_node.h"
#include "xml/xml_node_changed_action.h"

namespace System { namespace Xml {
/// Represents information about XML node events.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlNodeChangedEventArgs : public EventArgs
{
public:
    /// An alias for a shared pointer to an instance of this class.
    typedef SharedPtr<XmlNodeChangedEventArgs> Ptr;
    /// Constructs an instance of XmlNodeChangedEventArgs class that represents the specified information about the specified event.
    /// @param node The XML node which is the source of the event
    /// @param oldParent The old parent node of the @p node 
    /// @param newParent The new parent node of the @p node 
    /// @param oldValue The old value of the @p node
    /// @param newValue The new value of the @p node
    /// @param action A type of the node change
    XmlNodeChangedEventArgs(const XmlNode::Ptr& node, const XmlNode::Ptr& oldParent, const XmlNode::Ptr& newParent,
                            const String& oldValue, const String& newValue, XmlNodeChangedAction action)
        : m_action(action), m_node(node), m_oldParent(oldParent), m_newParent(newParent),
          m_oldValue(oldValue), m_newValue(newValue)
    { }

    /// Returns the node change type component of the information about the event. 
    XmlNodeChangedAction get_XmlNodeChangedAction() const { return m_action; }
    /// Returns the XmlNode object that is the source of the event.
    XmlNode::Ptr get_Node() const { return m_node; }
    /// Returns the XmlNode object that represents an XML node that is the old parent of the node
    /// that is the source of the event.
    XmlNode::Ptr get_OldParent() const { return m_oldParent; }
    /// Returns the XmlNode object that represents an XML node that is the new parent of the node
    /// that is the source of the event.
    XmlNode::Ptr get_NewParent() const { return m_newParent; }
    /// Returns the old value of the node that is the source of the event.
    String get_OldValue() const { return m_oldValue; }
    /// Returns the new value of the node that is the source of the event.
    String get_NewValue() const { return m_newValue; }

private:
    /// Node change type.
    XmlNodeChangedAction m_action;
    /// The source of the event.
    XmlNode::Ptr m_node;
    /// The old parent of the node that is the source of the event.
    XmlNode::Ptr m_oldParent;
    /// The new parent of the node that is the source of the event.
    XmlNode::Ptr m_newParent;
    /// The old value of the node that is the source of the event.
    String m_oldValue;
    /// The new value of the node that is the source of the event.
    String m_newValue;
};

}}

#endif //_aspose_xml_xml_node_changed_event_args_h_
