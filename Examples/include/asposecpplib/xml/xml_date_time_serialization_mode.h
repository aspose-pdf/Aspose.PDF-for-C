#ifndef _aspose_xml_xml_date_time_serialization_mode_h_
#define _aspose_xml_xml_date_time_serialization_mode_h_

namespace System { namespace Xml {

// Specifies how to treat the time value when converting between string and System.DateTime.
enum class XmlDateTimeSerializationMode
{
    Local = 0,
    Utc = 1,
    // Treat as a local time if a System.DateTime is being converted to a string.
    Unspecified = 2,
    // Time zone information should be preserved when converting.
    RoundtripKind = 3
};

}}

#endif // _aspose_xml_xml_date_time_serialization_mode_h_