/// @file xml/dtd_processing.h
#ifndef _aspose_xml_dtd_processing_h_
#define _aspose_xml_dtd_processing_h_

namespace System { namespace Xml {

/// Specifies the options for processing DTDs.
enum class DtdProcessing
{
    /// Specifies that when a DTD is encountered, an System.Xml.XmlException is thrown
    /// with a message that states that DTDs are prohibited. This is the default behavior.
    Prohibit = 0,

    /// Causes the DOCTYPE element to be ignored. No DTD processing occurs.
    Ignore = 1,

    /// Used for parsing DTDs.
    Parse = 2
};

}}

#endif //_aspose_xml_dtd_processing_h_
