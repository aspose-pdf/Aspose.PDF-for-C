#ifndef _aspose_xml_i_xml_serialization_h_
#define _aspose_xml_i_xml_serialization_h_

#include "xml/schema/xml_schema.h"
#include "xml/xml_reader.h"
#include "xml_writer.h"

namespace System { namespace Xml { namespace Serialization {
class IXmlSerializable : virtual public Object {
    RTTI_INFO(IXmlSerializable, ::System::BaseTypesInfo<System::Object>);
public:
    virtual System::SharedPtr<System::Xml::Schema::XmlSchema> GetSchema() = 0;
    virtual void ReadXml(System::SharedPtr<System::Xml::XmlReader> reader) = 0;
    virtual void WriteXml(System::SharedPtr<System::Xml::XmlWriter> writer) = 0;
    virtual ~IXmlSerializable() {}
};

}}} // namesace System::Xml::Serialization
#endif