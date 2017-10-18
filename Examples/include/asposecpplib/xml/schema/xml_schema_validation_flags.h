#ifndef _aspose_xml_xml_schema_validation_flags_h_
#define _aspose_xml_xml_schema_validation_flags_h_

#include <system/enum_helpers.h>

namespace System { namespace Xml { namespace Schema {

enum class XmlSchemaValidationFlags
{
    //
    // Summary:
    //     Do not process identity constraints, inline schemas, schema location hints, or
    //     report schema validation warnings.
    None = 0,
    //
    // Summary:
    //     Process inline schemas encountered during validation.
    ProcessInlineSchema = 1,
    //
    // Summary:
    //     Process schema location hints (xsi:schemaLocation, xsi:noNamespaceSchemaLocation)
    //     encountered during validation.
    ProcessSchemaLocation = 2,
    //
    // Summary:
    //     Report schema validation warnings encountered during validation.
    ReportValidationWarnings = 4,
    //
    // Summary:
    //     Process identity constraints (xs:ID, xs:IDREF, xs:key, xs:keyref, xs:unique)
    //     encountered during validation.
    ProcessIdentityConstraints = 8,
    //
    // Summary:
    //     Allow xml:* attributes even if they are not defined in the schema. The attributes
    //     will be validated based on their data type.
    AllowXmlAttributes = 16
};

}}}

DECLARE_ENUM_OPERATORS(System::Xml::Schema::XmlSchemaValidationFlags);

#endif // _aspose_xml_xml_schema_validation_flags_h_
