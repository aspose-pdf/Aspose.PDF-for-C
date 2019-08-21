/// @file xml/schema/validation_event_args.h
#ifndef _aspose_xml_validation_event_args_h_
#define _aspose_xml_validation_event_args_h_

#include <system/eventargs.h>

#include "xml/schema/xml_severity_type.h"
#include "xml/xml_exceptions.h"

namespace System { namespace Xml { namespace Schema {

/// Provides detailed information related to the validation event.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ValidationEventArgs : public EventArgs
{
public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<ValidationEventArgs> Ptr;

    /// Constructs a new instance of ValidationEventArgs and initializes it with the specified
    /// exception and severity type values.
    ValidationEventArgs(const SharedPtr<XmlSchemaException>& ex, XmlSeverityType severity = XmlSeverityType::Error)
        : m_ex (ex)
        , m_severity(severity)
    {
    }

    /// Returns a value representing the severity type of the validation event.
    XmlSeverityType get_Severity()
    {
        return m_severity;
    }

    /// Returns a text description of the validation event.
    String get_Message()
    {
        return m_ex->get_Message();
    }

private:
    /// An exception associated with the validation event.
    System::SharedPtr<XmlSchemaException> m_ex;
    /// The severity of the validation event.
    XmlSeverityType m_severity;
};


}}}

#endif //_aspose_xml_validation_event_args_h_
