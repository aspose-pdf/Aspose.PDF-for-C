#ifndef _aspose_xml_xpath_xpath_node_iterator_h_
#define _aspose_xml_xpath_xpath_node_iterator_h_

#include <system/object.h>
#include <system/collections/ienumerable.h>
#include "xml/xpath/xpath_document.h"

namespace System { namespace Xml { namespace XPath {

class XPathNodeIterator : public System::Collections::Generic::IEnumerable<XPathNavigator::Ptr>,
                          public System::Collections::Generic::IEnumerator<XPathNavigator::Ptr>
{
    FRIEND_FUNCTION_System_MakeObject;
    friend class XPathNavigator;

public:

    typedef SharedPtr<XPathNodeIterator> Ptr;

    virtual int get_Count();
    XPathNavigator::Ptr get_Current() ASPOSE_CONST override;
    virtual int get_CurrentPosition();

    virtual XPathNodeIterator::Ptr Clone();
    SharedPtr<System::Collections::Generic::IEnumerator<XPathNavigator::Ptr>> GetEnumerator() override;
    bool MoveNext() override;

protected:
    XPathNodeIterator();
    XPathNodeIterator(const XPathDocument::Ptr& doc, const XPathNavigator::Ptr& parent_navigator, xmlXPathObject* xpath_obj);
    virtual ~XPathNodeIterator();

private:

    XPathDocument::Ptr m_xpath_doc;
    xmlXPathObject* m_xpath_obj;
    int m_pos;
    XPathNavigator::Ptr m_navigator;
};

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_node_iterator_h_