/// @file xml/detail/xml_3rd_party_types.h
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
/// A stub which does nothing.
#define LIBXML_ATTR_FORMAT(a,b) ;
#endif

/// Ensures that xmlAttr is an alias for _xmlAttr.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlAttr, struct _xmlAttr);
/// Ensures that xmlBuffer is an alias for _xmlBuffer.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlBuffer, struct _xmlBuffer);
/// Ensures that xmlChar is an alias for unsigned char.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlChar, unsigned char);
/// Ensures that xmlDict is an alias for _xmlDict.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlDict, struct _xmlDict);
/// Ensures that xmlDoc is an alias for _xmlDoc.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlDoc, struct _xmlDoc);
/// Ensures that xmlNode is an alias for _xmlNode and that
/// xmlNodePtr is an alias for a pointer to an instance of _xmlNode.
ASPOSECPP_3RD_PARTY_TYPEDEF_WITH_PTR(xmlNode, struct _xmlNode);
/// Ensures that xmlNs is an alias for _xmlNs and that
/// xmlNsPtr is an alias for a pointer to an instance of _xmlNs.
ASPOSECPP_3RD_PARTY_TYPEDEF_WITH_PTR(xmlNs, struct _xmlNs);
/// Ensures that xmlOutputBuffer is an alias for _xmlOutputBuffer.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlOutputBuffer, struct _xmlOutputBuffer);
/// Ensures that xmlParserInputBuffer is an alias for _xmlParserInputBuffer.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlParserInputBuffer, struct _xmlParserInputBuffer);
/// Ensures that xmlSchema is an alias for _xmlSchema.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlSchema, struct _xmlSchema);
/// Ensures that xmlSchemaParserCtxt is an alias for _xmlSchemaParserCtxt.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlSchemaParserCtxt, struct _xmlSchemaParserCtxt);
/// Ensures that xmlSchemaValidCtxt is an alias for _xmlSchemaValidCtxt.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlSchemaValidCtxt, struct _xmlSchemaValidCtxt);
/// Ensures that xmlTextReader is an alias for _xmlTextReader.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlTextReader, struct _xmlTextReader);
/// Ensures that xmlTextWriter is an alias for _xmlTextWriter.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlTextWriter, struct _xmlTextWriter);
/// Ensures that xmlXPathCompExpr is an alias for _xmlXPathCompExpr.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlXPathCompExpr, struct _xmlXPathCompExpr);
/// Ensures that xmlXPathContext is an alias for _xmlXPathContext.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlXPathContext, struct _xmlXPathContext);
/// Ensures that xmlXPathObject is an alias for _xmlXPathObject.
ASPOSECPP_3RD_PARTY_TYPEDEF(xmlXPathObject, struct _xmlXPathObject);
/// Ensures that xsltStylesheet is an alias for _xsltStylesheet.
ASPOSECPP_3RD_PARTY_TYPEDEF(xsltStylesheet, struct _xsltStylesheet);
/// Ensures that xsltTransformContext is an alias for _xsltTransformContext.
ASPOSECPP_3RD_PARTY_TYPEDEF(xsltTransformContext, struct _xsltTransformContext);


#endif //_aspose_xml_detail_xml_3rd_party_types_
