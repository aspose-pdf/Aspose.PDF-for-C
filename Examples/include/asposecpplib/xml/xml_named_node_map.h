/// @file xml/xml_named_node_map.h
#ifndef _aspose_xml_xml_named_node_map_h_
#define _aspose_xml_xml_named_node_map_h_

#include "xml/xml_node_list.h"

namespace System { namespace Xml {

/// Represents a collection of XML nodes that can be accessed by index or name.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlNamedNodeMap : virtual public Object
{
public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlNamedNodeMap> Ptr;

    /// Returns the number of elements in the collection.
    virtual ASPOSECPP_SHARED_API int get_Count() const = 0;
    /// Returns an XML node at the specified index in the collection.
    /// @param index The 0-based index of the element to return
    /// @returns A shared pointer to the XmlNode object loctated at index @p index in the collection
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr Item(int index) = 0;
    /// Returns an XML node with the specified qualified name.
    /// @param name The qualified name of the XML node to return
    /// @returns A shared pointer to XmlNode object with name @p name
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr GetNamedItem(String name) = 0;
};

}}

#endif //_aspose_xml_xml_named_node_map_h_
