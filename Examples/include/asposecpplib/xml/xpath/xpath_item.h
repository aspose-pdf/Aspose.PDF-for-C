/// @file xml/xpath/xpath_item.h
#ifndef _aspose_xml_xpath_xpath_item_h_
#define _aspose_xml_xpath_xpath_item_h_

#include <system/object.h>
#include <system/date_time.h>

namespace System { namespace Xml { namespace XPath {

/// Represents an item in the XQuery 1.0 and XPath 2.0 Data Model.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT XPathItem : virtual public System::Object
{
public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XPathItem> Ptr;
    /// Returns the item's value as a string.
    virtual ASPOSECPP_SHARED_API String get_Value() const = 0;
    /// Returns the item's value as a 32-bit integer.
    virtual ASPOSECPP_SHARED_API int get_ValueAsInt() const = 0;
    /// Returns the item's value as an instance of DateTime object.
    virtual ASPOSECPP_SHARED_API System::DateTime get_ValueAsDateTime() const = 0;
    /// Returns the item's value as a double-precision floating point number.
    virtual ASPOSECPP_SHARED_API double get_ValueAsDouble() const = 0;
    /// Returns the item's value as a 64-bit integer.
    virtual ASPOSECPP_SHARED_API int64_t get_ValueAsLong() const = 0;
};

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_item_h_
