/// @file xml/xml_typedefs.h
#ifndef _aspose_xml_typedefs_h_
#define _aspose_xml_typedefs_h_

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <libxml/xmlerror.h>
#endif

#include <defines.h>

/// Ensures that XML_ERR_OK enum constant is defined and its value is 0.
ASPOSECPP_3RD_PARTY_CONSTANT(XML_ERR_OK, int, 0);

namespace System { namespace Xml {
/// Specifies the status of a libxml2 operation.
enum LibxmlError {
    /// Error.
    LIBXML_ER = -1,
    /// Success.
    LIBXML_OK = XML_ERR_OK // 0
};

}}

#endif // _aspose_xml_typedefs_h_
