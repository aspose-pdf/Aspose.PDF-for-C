#ifndef _aspose_xml_xpath_ixpath_navigable_h_
#define _aspose_xml_xpath_ixpath_navigable_h_

#include <system/object.h>

namespace System { namespace Xml { namespace XPath {

class XPathNavigator;

class ABSTRACT IXPathNavigable: virtual public System::Object
{
public:

    virtual SharedPtr<XPathNavigator> CreateNavigator() = 0;
};

}}} // namespace System::Xml::XPath


#endif // _aspose_xml_xpath_ixpath_navigable_h_