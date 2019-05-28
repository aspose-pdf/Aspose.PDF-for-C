/// @file xml/schema/xml_schema.h
#ifndef _aspose_xml_xml_schema_h_
#define _aspose_xml_xml_schema_h_

#include "xml/xml_reader.h"
#include "xml/xml_resolver.h"
#include "xml/schema/validation_event_handler.h"

#include "xml/detail/xml_3rd_party_types.h"

namespace System { namespace Xml { namespace Schema {

class XmlSchemaSet;

/// Represents an XML schema.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlSchema : public Object
{
    friend class XmlSchemaSet;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlSchema> Ptr;

    /// The XML schema instance namespace.
    static const String ASPOSECPP_SHARED_API InstanceNamespace;
    /// The XML schema namespace.
    static const String ASPOSECPP_SHARED_API Namespace;

    /// Constructs a new instance of XmlSchema object.
    ASPOSECPP_SHARED_API XmlSchema();
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XmlSchema();

    /// Returns the URI of schema target namespace.
    String get_TargetNamespace() const { return m_target_ns; }
    /// Sets the URI of schema target namespace.
    /// @param value The value to set
    void set_TargetNamespace(const String& value) { m_target_ns = value; }
    
    /// Determines if the schema has been compiled.
    /// @returns True if the schema has been compiled, otherwise - false
    ASPOSECPP_SHARED_API bool get_IsCompiled() const;

    // Obsolete. Use System.Xml.Schema.XmlSchemaSet for schema compilation and validation.
    /// Compiles the XML Schema Object Model into schema information for validation.
    ASPOSECPP_SHARED_API void Compile();
    /// Compiles the XML Schema Object Model into schema information for validation.
    /// The specified validation event handler receives validation events.
    /// @param validationEventHandler The validation event handler
    ASPOSECPP_SHARED_API void Compile(const ValidationEventHandler& validationEventHandler);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void Compile(const ValidationEventHandler& validationEventHandler, const SharedPtr<XmlResolver>& resolver);
    /// Reads an XML Schema from the specified XmlReader.
    /// @param reader The XmlReader to read from
    /// @param validationEventHandler The validation event handler
    static ASPOSECPP_SHARED_API XmlSchema::Ptr Read(const XmlReader::Ptr& reader, const ValidationEventHandler& validationEventHandler);
    /// Returns a pointer to the underlying libxml2 xmlSchema object.
    xmlSchema* native_schema() const { return m_schema; }
    /// Returns a pointer to the underlying libxml2 xmlSchemaValidCtxt object. 
    xmlSchemaValidCtxt* native_valid_ctx() const { return m_valid_ctx; }

private:
    /// If the schema is take from an xmlDoc object, this variable stores a pointer to a copy of that xmlDoc object.
    xmlDoc* m_tmp_doc;
    /// Schema parser context.
    xmlSchemaParserCtxt* m_parser_ctx;
    /// The underlying libxml2 object representing a parsed schema.
    xmlSchema* m_schema;
    /// Schema validation context; contains information about the results of schema validation.
    xmlSchemaValidCtxt* m_valid_ctx;
    /// Represents events generated during schema validation.
    ValidatingEventSignal m_validationEventHandler;
    /// The schema target namespace.
    String m_target_ns;
    /// Initilizes the XmlSchema object by reading an XML Schema from the specified XmlReader
    /// and setting the specifying validation event handler.
    /// @param reader The XmlReader to read from
    /// @param validationEventHandler The validation event handler
    void init(const XmlReader::Ptr& reader, const ValidationEventHandler* validationEventHandler);
    /// Initializes the XmlSchema object with the schema from the specified XML document.
    /// @param doc The XML document to take the schema from 
    void init(xmlDoc* doc);
    /// Initializes the XmlSchema object with the specified schama.
    /// @param path The URI of the schema 
    void init(const char* path);
    /// Parses a schema definition resource and builds an internal struture which
    /// can be used for validation of instances.
    bool parse();
    /// Releases resources of libxml2 library.
    void free_();
    /// Determines if the schema is valid; applicable only after validation.
    bool is_valid() const;
    /// Validates the specified node.
    /// @param node The node to validate
    int validate_element(xmlNode* node) const;
    /// Triggers a schema validation error event.
    static void schema_validity_error(void *ctx, const char *msg, ...) LIBXML_ATTR_FORMAT(2,3);
    /// Triggers a schema validation warning event.
    static void schema_validity_warning(void *ctx, const char *msg, ...) LIBXML_ATTR_FORMAT(2,3);
};



}}} // namespace System::Xml::Schema

#endif // _aspose_xml_xml_schema_h_
