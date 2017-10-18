#ifndef _aspose_xml_xpath_xpath_document_h_
#define _aspose_xml_xpath_xpath_document_h_

#include "xml/xml_document.h"
#include "xml/xpath/i_xpath_navigable.h"
#include "xml/xpath/xpath_navigator.h"

namespace System { namespace Xml { namespace XPath {

class XPathDocument : public IXPathNavigable
{
public:

    typedef SharedPtr<XPathDocument> Ptr;

    XPathDocument(const String& uri);
    XPathDocument(const SharedPtr<XmlDocument>& doc);
    virtual ~XPathDocument();

    virtual XPathNavigator::Ptr CreateNavigator() override;

    XmlDocument::Ptr GetDocument() const { return m_doc; }

private:

    String m_uri;
    XmlDocument::Ptr m_doc;
};

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_document_h_