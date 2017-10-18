#ifndef _aspose_xml_xml_named_node_map_h_
#define _aspose_xml_xml_named_node_map_h_

#include "xml/xml_node_list.h"

namespace System { namespace Xml {

class XmlNamedNodeMap : virtual public Object
{
public:

    typedef SharedPtr<XmlNamedNodeMap> Ptr;

    virtual int get_Count() const = 0;
    virtual XmlNode::Ptr Item(int index) = 0;
    virtual XmlNode::Ptr GetNamedItem(String name) = 0;
};

}}

#endif //_aspose_xml_xml_named_node_map_h_
