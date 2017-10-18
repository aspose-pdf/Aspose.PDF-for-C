#ifndef _aspose_xml_xml_schema_collection_h_
#define _aspose_xml_xml_schema_collection_h_

#include "xml/schema/xml_schema.h"

namespace System { namespace Xml {

class XmlTextReader;
class XmlReaderSettings;

}} // namespace System::Xml

namespace System { namespace Xml { namespace Schema {

class XmlSchemaSet : public Object
{
    FRIEND_FUNCTION_System_MakeObject;
    friend class System::Xml::XmlTextReader;
    friend class System::Xml::XmlReaderSettings;

public:

    typedef SharedPtr<XmlSchemaSet> Ptr;

    Schema::ValidatingEventSignal ValidationEventHandler;

    XmlSchemaSet();

    int get_Count() const { return static_cast<int>(m_schemas.size()); }

    void set_XmlResolver(const SharedPtr<XmlResolver>& value);

    XmlSchema::Ptr Add(const XmlSchema::Ptr& schema);
    void Add(const XmlSchemaSet::Ptr& schemas);
    XmlSchema::Ptr Add(const String& ns, const XmlReader::Ptr& reader);
    XmlSchema::Ptr Add(const String& ns, const String& uri);

    void Compile();

protected:

    std::vector<XmlSchema::Ptr> m_schemas;
    System::Xml::XmlReaderSettings* m_settings_owner;

    XmlSchemaSet(System::Xml::XmlReaderSettings* reader_settings);
};


}}} // namespace System::Xml::Schema

#endif // _aspose_xml_xml_schema_collection_h_
