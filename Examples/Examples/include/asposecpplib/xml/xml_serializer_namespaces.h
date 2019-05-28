/// @file xml/xml_serializer_namespaces.h
#ifndef _aspose_xml_xml_serializer_namespaces_h_
#define _aspose_xml_xml_serializer_namespaces_h_

#include "system/object.h"
#include "system/string.h"
#include "system/exceptions.h"

namespace System { namespace Xml { namespace Serialization {
/// Contains the XML namespaces and prefixes that are used by the XmlSerializer to generate qualified names 
/// in an XML document
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlSerializerNamespaces : public System::Object
{
    RTTI_INFO(XmlSerializerNamespaces, ::System::BaseTypesInfo<System::Object>);
public:
    /// Adds a prefix and the associated namespace to the XmlSerializerNamespaces object.
    /// @param prefix The prefix associated with namespace @p ns to add
    /// @param ns The namespace associated with prefix @p prefix to add
    ASPOSECPP_SHARED_API void Add(const System::String& prefix, const System::String& ns);

};

}}} // System::Xml::Serialization

#endif
