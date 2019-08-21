/// @file xml/xpath/i_xpath_navigable.h
#ifndef _aspose_xml_xpath_ixpath_navigable_h_
#define _aspose_xml_xpath_ixpath_navigable_h_

#include <system/object.h>

namespace System { namespace Xml { namespace XPath {

class XPathNavigator;

/// Provides a factory of instances of XPathNavigator class.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT IXPathNavigable: virtual public System::Object
{
public:
    /// Constructs a new instance of XPathNavigator class.
    virtual ASPOSECPP_SHARED_API SharedPtr<XPathNavigator> CreateNavigator() = 0;
};

}}} // namespace System::Xml::XPath


#endif // _aspose_xml_xpath_ixpath_navigable_h_
