/// @file xml/i_xml_serializable.h
#ifndef _aspose_xml_i_xml_serialization_h_
#define _aspose_xml_i_xml_serialization_h_

#include "xml/schema/xml_schema.h"
#include "xml/xml_reader.h"
#include "xml_writer.h"

namespace System { namespace Xml { namespace Serialization {
/// Provides custom formatting for XML serialization and deserialization.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS IXmlSerializable : virtual public Object {
    RTTI_INFO(IXmlSerializable, ::System::BaseTypesInfo<System::Object>);
public:
    /// An XmlSchema object that describes the XML representation of the object that is 
    /// returned by the WriteXml() method and accepted by the ReadXml() method.
    virtual ASPOSECPP_SHARED_API System::SharedPtr<System::Xml::Schema::XmlSchema> GetSchema() = 0;
    /// Deserializes object from its XML representation.
    /// @param reader The stream from which the object's XML representation is read.
    virtual ASPOSECPP_SHARED_API void ReadXml(System::SharedPtr<System::Xml::XmlReader> reader) = 0;
    /// Serializes the current object to XML representation.
    /// @param writer The stream to which the XML representation of the current object is written
    virtual ASPOSECPP_SHARED_API void WriteXml(System::SharedPtr<System::Xml::XmlWriter> writer) = 0;
    /// Destructor.
    virtual ~IXmlSerializable() {}
};

}}} // namesace System::Xml::Serialization
#endif
