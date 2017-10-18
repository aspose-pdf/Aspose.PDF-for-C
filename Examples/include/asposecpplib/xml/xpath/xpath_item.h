#ifndef _aspose_xml_xpath_xpath_item_h_
#define _aspose_xml_xpath_xpath_item_h_

#include <system/object.h>
#include <system/date_time.h>

namespace System { namespace Xml { namespace XPath {

class ABSTRACT XPathItem : virtual public System::Object
{
public:

    typedef SharedPtr<XPathItem> Ptr;

    virtual String get_Value() const = 0;
    virtual int get_ValueAsInt() const = 0;
    virtual System::DateTime get_ValueAsDateTime() const = 0;
    virtual double get_ValueAsDouble() const = 0;
    virtual int64_t get_ValueAsLong() const = 0;
};

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_item_h_
