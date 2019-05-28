/// @file xml/xml_node_changed_action.h
#ifndef _aspose_xml_xml_node_changed_action_h_
#define _aspose_xml_xml_node_changed_action_h_

namespace System { namespace Xml {

/// Specifies the type of XML node change.
enum class XmlNodeChangedAction
{
    /// An XML node has been inserted in a nodes tree.
    Insert = 0,
    /// An XML node has been removed from a nodes tree.
    Remove = 1,
    /// A node's value has been changed.
    Change = 2,
};

}}

#endif //_aspose_xml_xml_node_changed_action_h_
