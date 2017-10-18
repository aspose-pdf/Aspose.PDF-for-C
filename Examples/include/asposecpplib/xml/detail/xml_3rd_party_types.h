#ifndef _aspose_xml_detail_xml_3rd_party_types_
#define _aspose_xml_detail_xml_3rd_party_types_


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <libxml/xmlreader.h>
#include <libxml/xmlwriter.h>
#include <libxml/xmlschemas.h>
#include <libxml/xpath.h>
#include <libxslt/xsltInternals.h>
#include <libxslt/transform.h>
#else
#define LIBXML_ATTR_FORMAT(a,b) ;
#endif


ASPOSECPP_3RD_PARTY_TYPEDEF(xmlAttr, struct _xmlAttr);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlBuffer, struct _xmlBuffer);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlChar, unsigned char);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlDict, struct _xmlDict);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlDoc, struct _xmlDoc);
ASPOSECPP_3RD_PARTY_TYPEDEF_WITH_PTR(xmlNode, struct _xmlNode);
ASPOSECPP_3RD_PARTY_TYPEDEF_WITH_PTR(xmlNs, struct _xmlNs);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlOutputBuffer, struct _xmlOutputBuffer);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlParserInputBuffer, struct _xmlParserInputBuffer);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlSchema, struct _xmlSchema);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlSchemaParserCtxt, struct _xmlSchemaParserCtxt);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlSchemaValidCtxt, struct _xmlSchemaValidCtxt);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlTextReader, struct _xmlTextReader);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlTextWriter, struct _xmlTextWriter);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlXPathCompExpr, struct _xmlXPathCompExpr);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlXPathContext, struct _xmlXPathContext);
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlXPathObject, struct _xmlXPathObject);
ASPOSECPP_3RD_PARTY_TYPEDEF(xsltStylesheet, struct _xsltStylesheet);
ASPOSECPP_3RD_PARTY_TYPEDEF(xsltTransformContext, struct _xsltTransformContext);


#endif //_aspose_xml_detail_xml_3rd_party_types_
