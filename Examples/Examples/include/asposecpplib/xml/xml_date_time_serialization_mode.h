/// @file xml/xml_date_time_serialization_mode.h
#ifndef _aspose_xml_xml_date_time_serialization_mode_h_
#define _aspose_xml_xml_date_time_serialization_mode_h_

namespace System { namespace Xml {

/// Specifies how to treat the time value when converting between string and System::DateTime.
enum class XmlDateTimeSerializationMode
{
    /// The time value represents a local time.
    Local = 0,
    /// The time value represents a UTC time.
    Utc = 1,
    /// The time value represents a local time if a System::DateTime object is being converted to a string.
    Unspecified = 2,
    /// Preserve the time zone information when converting.
    RoundtripKind = 3
};

}}

#endif // _aspose_xml_xml_date_time_serialization_mode_h_
