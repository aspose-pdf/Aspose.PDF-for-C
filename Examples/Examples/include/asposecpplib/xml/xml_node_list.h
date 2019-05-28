/// @file xml/xml_node_list.h
#ifndef _aspose_xml_xml_node_list_h_
#define _aspose_xml_xml_node_list_h_

#include "xml_node.h"
#include <system/collections/ienumerable.h>

namespace System { namespace Xml {
/// An alias for IEnumerabe that points to a collection of shared pointers to instances of XmlNode.
typedef System::Collections::Generic::IEnumerable<XmlNode::Ptr> IXmlNodeEnumerable;
/// An alias for IEnumerator that points to a collection of shared pointers to instances of XmlNode.
typedef System::Collections::Generic::IEnumerator<XmlNode::Ptr> IXmlNodeEnumerator;

/// Represents a list of XML nodes.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlNodeList : public IXmlNodeEnumerable
{
    RTTI_INFO(XmlNodeList, ::System::BaseTypesInfo<IXmlNodeEnumerable>);

public:
    /// An alias for a shared pointer to an instance of this class.
    typedef SharedPtr<XmlNodeList> Ptr;

    // IEnumerable interface
    /// Returns an enumerator that can be used to enumerate over the node list
    /// represented by the current object.
    ASPOSECPP_SHARED_API SharedPtr<IXmlNodeEnumerator> GetEnumerator() override = 0;

    // XmlNodeList interface
    /// Returns the number of the elements in the node list represented by the current object.
    virtual ASPOSECPP_SHARED_API int get_Count() = 0;
    /// Returns an element at the specified position.
    /// @param idx The 0-based index of the element to return
    /// @returns An XmlNode object at the specified position in the list
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr Item(int idx) = 0;

    /// Returns an element at the specified position.
    /// @param index The 0-based index of the element to return
    /// @returns An XmlNode object at the specified position in the list
    virtual XmlNode::Ptr operator[](int index) { return Item(index); }
    /// Returns an element at the specified position.
    /// @param index The 0-based index of the element to return
    /// @returns An XmlNode object at the specified position in the list
    virtual XmlNode::Ptr idx_get(int index) { return Item(index); }

protected:
    /// Constructs an object that represents an empty list.
    XmlNodeList() = default;
};

}} // namespace System::Xml

#endif //_aspose_xml_xml_node_list_h_
