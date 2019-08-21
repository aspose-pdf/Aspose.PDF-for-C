/// @file xml/xml_serializer.h
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
/// Performs serialization and deserialization of objects into and from XML documents.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlSerializer : public System::Object
{
    RTTI_INFO(XmlSerializer, ::System::BaseTypesInfo<System::Object>)
public:
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlSerializer();
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlSerializer(const System::TypeInfo& type);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlSerializer(const System::TypeInfo& type, const System::String& defaultNamespace);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlSerializer(const System::TypeInfo& type, const System::ArrayPtr<System::TypeInfo>& extraTypes);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlSerializer(const System::TypeInfo& type, const System::SharedPtr<System::Xml::Serialization::XmlAttributeOverrides>& overrides);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlSerializer(const System::TypeInfo& type, const System::SharedPtr<System::Xml::Serialization::XmlAttributeOverrides>& overrides, const System::ArrayPtr<System::TypeInfo>& extraTypes,
        const System::SharedPtr<System::Xml::Serialization::XmlRootAttribute>& root, const System::String& defaultNamespace);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlSerializer(const System::TypeInfo& type, const System::SharedPtr<System::Xml::Serialization::XmlAttributeOverrides>& overrides, const System::ArrayPtr<System::TypeInfo>& extraTypes,
        const System::SharedPtr<System::Xml::Serialization::XmlRootAttribute>& root, const System::String& defaultNamespace, const System::String& location);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlSerializer(const System::TypeInfo& type, const System::SharedPtr<System::Xml::Serialization::XmlRootAttribute>& root);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> Deserialize(const System::SharedPtr<System::IO::TextReader>& textReader);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> Deserialize(const System::SharedPtr<System::Xml::XmlReader>& xmlReader);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void Serialize(const System::SharedPtr<System::Xml::XmlWriter>& xmlWriter, const System::SharedPtr<System::Object>& o);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void Serialize(const System::SharedPtr<System::Xml::XmlWriter>& xmlWriter, const System::SharedPtr<System::Object>& o,
                   const System::SharedPtr<XmlSerializerNamespaces>& namespaces);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void Serialize(const System::SharedPtr<System::IO::TextWriter>& textWriter, const System::SharedPtr<System::Object>& o);
};

}}} // System::Xml::Serialization

#endif
