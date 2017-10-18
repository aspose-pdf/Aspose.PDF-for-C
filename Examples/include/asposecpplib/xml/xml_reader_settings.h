#ifndef _aspsoe_xml_xml_reader_settings_h_
#define _aspsoe_xml_xml_reader_settings_h_

#include <system/exceptions.h>

#include "xml/validation_type.h"
#include "xml/dtd_processing.h"
#include "xml/schema/validation_event_handler.h"
#include "xml/schema/xml_schema_set.h"
#include "xml/schema/xml_schema_validation_flags.h"

namespace System { namespace Xml {

class XmlTextReader;

class XmlReaderSettings : public Object
{
    friend class XmlTextReader;

public:

    typedef SharedPtr<XmlReaderSettings> Ptr;

    XmlReaderSettings()
            : validation_type(ValidationType::None),
              dtd_processing(DtdProcessing::Ignore),
              schema_validation_flags(System::Xml::Schema::XmlSchemaValidationFlags::None),
              xmlResolver(nullptr),
              IsXmlResolverSet(false),
              lineNumberOffset(0),
              linePositionOffset(0)
    {
        schemas = MakeObject<Schema::XmlSchemaSet>(this);
    }

    bool get_IgnoreWhitespace() const { return false; }
    void set_IgnoreWhitespace(bool)
    {
        /* always false for libxml backend */
        throw System::NotSupportedException(L"Unsupported for libxml2 backend");
    }

    DtdProcessing get_DtdProcessing() const { return dtd_processing; }
    void set_DtdProcessing(DtdProcessing value) { dtd_processing = value; }

    bool get_ProhibitDtd() const { return dtd_processing == DtdProcessing::Prohibit; }
    void set_ProhibitDtd(bool value) { dtd_processing = value ? DtdProcessing::Prohibit : DtdProcessing::Ignore; }

    ValidationType get_ValidationType() const { return validation_type; }
    void set_ValidationType(ValidationType value) { validation_type = value; }

    Schema::XmlSchemaSet::Ptr get_Schemas() const { return schemas; }
    void set_Schemas(const Schema::XmlSchemaSet::Ptr& value) { schemas = value; }

    Schema::XmlSchemaValidationFlags get_ValidationFlags() const { return schema_validation_flags; }
    void set_ValidationFlags(Schema::XmlSchemaValidationFlags value) { schema_validation_flags = value; }

    Schema::ValidatingEventSignal ValidationEventHandler;


	inline int get_LineNumberOffset() { return lineNumberOffset; }

	inline int get_LinePositionOffset() { return linePositionOffset; }

	inline void set_XmlResolver(XmlResolver::Ptr xmlResolver)
	{
		this->xmlResolver = xmlResolver;
		this->IsXmlResolverSet = true;
	}

protected:

    ValidationType validation_type;
    Schema::XmlSchemaValidationFlags schema_validation_flags;
    DtdProcessing dtd_processing;
    Schema::XmlSchemaSet::Ptr schemas;
    int lineNumberOffset;
    int linePositionOffset;
    XmlResolver::Ptr xmlResolver;
    bool IsXmlResolverSet;
};

}}

#endif // _aspsoe_xml_xml_reader_settings_h_
