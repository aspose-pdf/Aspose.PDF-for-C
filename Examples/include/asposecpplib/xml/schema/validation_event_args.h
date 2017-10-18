#ifndef _aspose_xml_validation_event_args_h_
#define _aspose_xml_validation_event_args_h_

#include <system/eventargs.h>

#include "xml/schema/xml_severity_type.h"
#include "xml/xml_exceptions.h"

namespace System { namespace Xml { namespace Schema {

class ValidationEventArgs : public EventArgs
{
public:

    typedef SharedPtr<ValidationEventArgs> Ptr;

    ValidationEventArgs(const SharedPtr<XmlSchemaException>& ex, XmlSeverityType severity = XmlSeverityType::Error)
        : m_ex (ex)
        , m_severity(severity)
    {
    }

    XmlSeverityType get_Severity()
    {
        return m_severity;
    }

    String get_Message()
    {
        return m_ex->get_Message();
    }

private:

    System::SharedPtr<XmlSchemaException> m_ex;
    XmlSeverityType m_severity;
};


}}}

#endif //_aspose_xml_validation_event_args_h_
