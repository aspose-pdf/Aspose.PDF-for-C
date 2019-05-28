/// @file xml/xpath/xpath_node_iterator.h
#ifndef _aspose_xml_xpath_xpath_node_iterator_h_
#define _aspose_xml_xpath_xpath_node_iterator_h_

#include <system/object.h>
#include <system/collections/ienumerable.h>
#include "xml/xpath/xpath_document.h"

namespace System { namespace Xml { namespace XPath {
/// Represents an iterator that iterates over a selected set of nodes.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XPathNodeIterator : public System::Collections::Generic::IEnumerable<XPathNavigator::Ptr>,
                          public System::Collections::Generic::IEnumerator<XPathNavigator::Ptr>
{
    FRIEND_FUNCTION_System_MakeObject;
    friend class XPathNavigator;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XPathNodeIterator> Ptr;
    /// Returns the index of the last node in the set.
    /// @returns The inde of the last node in the set; 0 if the set is empty
    virtual ASPOSECPP_SHARED_API int get_Count();
    /// Returns an XPathNavigator object positioned at the current context node.
    ASPOSECPP_SHARED_API XPathNavigator::Ptr get_Current() ASPOSE_CONST override;
    /// Returns the current position of the iterator.
    virtual ASPOSECPP_SHARED_API int get_CurrentPosition();
    /// Returns a copy of the current XPathNodeIterator object.
    virtual ASPOSECPP_SHARED_API XPathNodeIterator::Ptr Clone();
    /// Returns an IEnumerator object that iterates through the selected node set.
    SharedPtr<System::Collections::Generic::IEnumerator<XPathNavigator::Ptr>> GetEnumerator() override;
    ///  Moves the XPathNavigator object returned by the get_Current() method to the next node in the selected node set.
    ASPOSECPP_SHARED_API bool MoveNext() override;

protected:
    /// Constructs a new instance of XPathNodeIterator class.
    ASPOSECPP_SHARED_API XPathNodeIterator();
    /// Constructor.
    /// @param doc Document iterator works in.
    /// @param parent_navigator Navigator of parent element to get context information from.
    /// @param xpath_obj Xpath object.
    ASPOSECPP_SHARED_API XPathNodeIterator(const XPathDocument::Ptr& doc, const XPathNavigator::Ptr& parent_navigator, xmlXPathObject* xpath_obj);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XPathNodeIterator();

private:
    /// XPath document.
    XPathDocument::Ptr m_xpath_doc;
    /// XPath object.
    xmlXPathObject* m_xpath_obj;
    /// The current position of the iterator.
    int m_pos;
    /// XPath navigator.
    XPathNavigator::Ptr m_navigator;
};

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_node_iterator_h_
