#ifndef _aspose_xml_xml_serializer_h_
#define _aspose_xml_xml_serializer_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "system/exceptions.h"

#include "xml/xml_reader.h"
#include "xml/xml_writer.h"
#include "xml/xml_attribute_overrides.h"
#include "xml/xml_root_attribute.h"
#include "xml/xml_serializer_namespaces.h"

namespace System { namespace Xml { namespace Serialization {
class XmlSerializer : public System::Object
{
    RTTI_INFO(XmlSerializer, ::System::BaseTypesInfo<System::Object>)
public:
    XmlSerializer();
    XmlSerializer(const System::TypeInfo& type);
    XmlSerializer(const System::TypeInfo& type, System::String defaultNamespace);
    XmlSerializer(const System::TypeInfo& type, System::ArrayPtr<System::TypeInfo> extraTypes);
    XmlSerializer(const System::TypeInfo& type, System::SharedPtr<System::Xml::Serialization::XmlAttributeOverrides> overrides);
    XmlSerializer(const System::TypeInfo& type, System::SharedPtr<System::Xml::Serialization::XmlAttributeOverrides> overrides, System::ArrayPtr<System::TypeInfo> extraTypes,
        System::SharedPtr<System::Xml::Serialization::XmlRootAttribute> root, System::String defaultNamespace);
    XmlSerializer(const System::TypeInfo& type, System::SharedPtr<System::Xml::Serialization::XmlAttributeOverrides> overrides, System::ArrayPtr<System::TypeInfo> extraTypes,
        System::SharedPtr<System::Xml::Serialization::XmlRootAttribute> root, System::String defaultNamespace, System::String location);
    XmlSerializer(const System::TypeInfo& type, System::SharedPtr<System::Xml::Serialization::XmlRootAttribute> root);

    System::SharedPtr<System::Object> Deserialize(const System::SharedPtr<System::IO::TextReader>& textReader);
    System::SharedPtr<System::Object> Deserialize(const System::SharedPtr<System::Xml::XmlReader>& xmlReader);

    void Serialize(const System::SharedPtr<System::Xml::XmlWriter>& xmlWriter, const System::SharedPtr<System::Object>& o);
    void Serialize(const System::SharedPtr<System::Xml::XmlWriter>& xmlWriter, const System::SharedPtr<System::Object>& o,
                   const System::SharedPtr<XmlSerializerNamespaces>& namespaces);
};

}}} // System::Xml::Serialization

#endif