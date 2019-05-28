/// @file xml/xml_attribute_overrides.h
#ifndef _aspose_xml_xml_attribute_overrides_h_
#define _aspose_xml_xml_attribute_overrides_h_

#include "system/object.h"
#include "system/exceptions.h"

namespace System { namespace Xml { namespace Serialization {
/// Allows overriding attributes when XmlSerializer is used to serialize or deserialize an object.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlAttributeOverrides : public System::Object
{
    RTTI_INFO(XmlAttributeOverrides, ::System::BaseTypesInfo<System::Object>)
public:
    /// Constructor.
    ASPOSECPP_SHARED_API XmlAttributeOverrides();
};

}}} // System::Xml::Serialization

#endif
