#ifndef _aspose_xml_xml_node_list_h_
#define _aspose_xml_xml_node_list_h_

#include "xml_node.h"
#include <system/collections/ienumerable.h>

namespace System { namespace Xml {

typedef System::Collections::Generic::IEnumerable<XmlNode::Ptr> IXmlNodeEnumerable;
typedef System::Collections::Generic::IEnumerator<XmlNode::Ptr> IXmlNodeEnumerator;

class XmlNodeList : public IXmlNodeEnumerable
{
    RTTI_INFO(XmlNodeList, ::System::BaseTypesInfo<IXmlNodeEnumerable>);

public:

    typedef SharedPtr<XmlNodeList> Ptr;

    // IEnumerable interface

    SharedPtr<IXmlNodeEnumerator> GetEnumerator() override = 0;

    // XmlNodeList interface

    virtual int get_Count() = 0;
    virtual XmlNode::Ptr Item(int idx) = 0;

    virtual XmlNode::Ptr operator[](int index) { return Item(index); }
    virtual XmlNode::Ptr idx_get(int index) { return Item(index); }

protected:

    XmlNodeList() = default;
};

}} // namespace System::Xml

#endif //_aspose_xml_xml_node_list_h_
