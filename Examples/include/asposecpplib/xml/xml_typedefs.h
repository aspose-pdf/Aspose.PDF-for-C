#ifndef _aspose_xml_typedefs_h_
#define _aspose_xml_typedefs_h_

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <libxml/xmlerror.h>
#endif

#include <defines.h>


ASPOSECPP_3RD_PARTY_CONSTANT(XML_ERR_OK, int, 0);


namespace System { namespace Xml {

enum LibxmlError {
    LIBXML_ER = -1,
    LIBXML_OK = XML_ERR_OK // 0
};

}}

#endif // _aspose_xml_typedefs_h_