/// @file xml/xml_root_attribute.h
#ifndef _aspose_xml_xml_root_attribute_h_
#define _aspose_xml_xml_root_attribute_h_

#include "system/object.h"
#include "system/exceptions.h"

namespace System { namespace Xml { namespace Serialization {
/// Marks the attribute target as an XML root element and controls its XML serialization.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlRootAttribute : public System::Object
{
    RTTI_INFO(XmlRootAttribute, ::System::BaseTypesInfo<System::Object>)
public:
    /// Constructs a new instance of XmlRootAttribute class.
    ASPOSECPP_SHARED_API XmlRootAttribute();
    /// Constructs a new instance of XmlRootAttribute class and initializes it with the 
    /// specified element name.
    /// @param elementName The name of the XML root element
    ASPOSECPP_SHARED_API XmlRootAttribute(const System::String& elementName);
};

}}} // System::Xml::Serialization

#endif
