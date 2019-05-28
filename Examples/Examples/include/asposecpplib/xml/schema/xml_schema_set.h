/// @file xml/schema/xml_schema_set.h
#ifndef _aspose_xml_xml_schema_collection_h_
#define _aspose_xml_xml_schema_collection_h_

#include "xml/schema/xml_schema.h"

namespace System { namespace Xml {

class XmlTextReader;
class XmlReaderSettings;

}} // namespace System::Xml

namespace System { namespace Xml { namespace Schema {

/// Represents a cache of XSD schemas.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlSchemaSet : public Object
{
    FRIEND_FUNCTION_System_MakeObject;
    friend class System::Xml::XmlTextReader;
    friend class System::Xml::XmlReaderSettings;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlSchemaSet> Ptr;
    /// Represents events generated during schema validation.
    Schema::ValidatingEventSignal ValidationEventHandler;
    /// Constructs a new instance of XmlSchemaSet class.
    ASPOSECPP_SHARED_API XmlSchemaSet();
    /// Returns the number of the elements of the set.
    int get_Count() const { return static_cast<int>(m_schemas.size()); }
    /// Sets the XML Resolver object used to access external XML documents.
    /// @param value The XmlResolver object to set
    ASPOSECPP_SHARED_API void set_XmlResolver(const SharedPtr<XmlResolver>& value);

    /// Adds the specified schema to the set.
    /// @param schema The schema to add
    /// @returns The added XmlSchema object if the schema represented by this object is valid, otherwise - false
    ASPOSECPP_SHARED_API XmlSchema::Ptr Add(const XmlSchema::Ptr& schema);
    /// Adds all schemas from the specified set the set represented by the current object.
    /// @param schemas The schema set containing schemas to add
    ASPOSECPP_SHARED_API void Add(const XmlSchemaSet::Ptr& schemas);
    /// Adds the XML schema read from the specified XmlReader to the set.
    /// @param ns The targetNamespace property of the schema, or null to use the value specified in the schema
    /// @param reader The XmlReader to read the schema from
    /// @returns The added XmlSchema object if the schema represented by this object is valid, otherwise - false
    ASPOSECPP_SHARED_API XmlSchema::Ptr Add(const String& ns, const XmlReader::Ptr& reader);
    /// Adds the XML schema loaded from the specified URI to the set.
    /// @param ns The targetNamespace property of the schema, or null to use the value specified in the schema
    /// @param uri The URI to load the schema from
    /// @returns The added XmlSchema object if the schema represented by this object is valid, otherwise - false
    ASPOSECPP_SHARED_API XmlSchema::Ptr Add(const String& ns, const String& uri);
    /// Compiles each schema in the set.
    ASPOSECPP_SHARED_API void Compile();

protected:
    /// Container used to store the elements of the set.
    std::vector<XmlSchema::Ptr> m_schemas;
    /// Settings specifying the behavior of the current object.
    System::Xml::XmlReaderSettings* m_settings_owner;
    /// Constructs a new instance of XmlSchemaSet object and initializes it with the specified XmlReaderSettings object.
    /// @param reader_settings The XmlReaderSettings to use
    ASPOSECPP_SHARED_API XmlSchemaSet(System::Xml::XmlReaderSettings* reader_settings);
};


}}} // namespace System::Xml::Schema

#endif // _aspose_xml_xml_schema_collection_h_
