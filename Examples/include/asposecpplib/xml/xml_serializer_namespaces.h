#ifndef _aspose_xml_xml_serializer_namespaces_h_
#define _aspose_xml_xml_serializer_namespaces_h_

#include "system/object.h"
#include "system/string.h"
#include "system/exceptions.h"

namespace System { namespace Xml { namespace Serialization {
class XmlSerializerNamespaces : public System::Object
{
    RTTI_INFO(XmlSerializerNamespaces, ::System::BaseTypesInfo<System::Object>);
public:
    void Add(const System::String& prefix, const System::String& ns);

};

}}} // System::Xml::Serialization

#endif