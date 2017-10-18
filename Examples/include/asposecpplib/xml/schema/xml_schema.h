#ifndef _aspose_xml_xml_schema_h_
#define _aspose_xml_xml_schema_h_

#include "xml/xml_reader.h"
#include "xml/xml_resolver.h"
#include "xml/schema/validation_event_handler.h"

#include "xml/detail/xml_3rd_party_types.h"

namespace System { namespace Xml { namespace Schema {

class XmlSchemaSet;

class XmlSchema : public Object
{
    friend class XmlSchemaSet;

public:

    typedef SharedPtr<XmlSchema> Ptr;

    static const String ASPOSECPP_SHARED_API InstanceNamespace;
    static const String ASPOSECPP_SHARED_API Namespace;

    XmlSchema();
    virtual ~XmlSchema();

    String get_TargetNamespace() const { return m_target_ns; }
    void set_TargetNamespace(const String& value) { m_target_ns = value; }

    bool get_IsCompiled() const;

    // Obsolete. Use System.Xml.Schema.XmlSchemaSet for schema compilation and validation.
    void Compile();
    void Compile(const ValidationEventHandler& validationEventHandler);
    void Compile(const ValidationEventHandler& validationEventHandler, SharedPtr<XmlResolver> resolver);

    static XmlSchema::Ptr Read(const XmlReader::Ptr& reader, const ValidationEventHandler& validationEventHandler);

    xmlSchema* native_schema() const { return m_schema; }
    xmlSchemaValidCtxt* native_valid_ctx() const { return m_valid_ctx; }


private:

    xmlDoc* m_tmp_doc;
    xmlSchemaParserCtxt* m_parser_ctx;
    xmlSchema* m_schema;
    xmlSchemaValidCtxt* m_valid_ctx;

    ValidatingEventSignal m_validationEventHandler;
    String m_target_ns;

    void init(const XmlReader::Ptr& reader, const ValidationEventHandler* validationEventHandler);
    void init(xmlDoc* doc);
    void init(const char* path);
    bool parse();
    void free_();

    bool is_valid() const;
    int validate_element(xmlNode* node) const;

    static void schema_validity_error(void *ctx, const char *msg, ...) LIBXML_ATTR_FORMAT(2,3);
    static void schema_validity_warning(void *ctx, const char *msg, ...) LIBXML_ATTR_FORMAT(2,3);
};



}}} // namespace System::Xml::Schema

#endif // _aspose_xml_xml_schema_h_