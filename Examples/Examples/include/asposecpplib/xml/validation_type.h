/// @file xml/validation_type.h
#ifndef _aspose_xml_validation_type_h_
#define _aspose_xml_validation_type_h_

namespace System { namespace Xml {

/// Specifies the validation type.
enum class ValidationType
{
    /// No validation.
    None,
    /// Validate if schema or DTD information is found.
    Auto,
    /// Validate according to DTD.
    DTD,
    /// Validate according to XDR schemas.
    XDR,
    /// Validate according to XSD schemas.
    Schema
};

}}

#endif //_aspose_xml_validation_type_h_
