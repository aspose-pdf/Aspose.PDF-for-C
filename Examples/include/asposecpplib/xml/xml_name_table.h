#ifndef _aspose_xml_xml_name_table_h_
#define _aspose_xml_xml_name_table_h_

#include <system/string.h>
#include <system/array.h>

namespace System { namespace Xml {


class XmlNameTable : public System::Object
{
public:

    typedef SharedPtr<XmlNameTable> Ptr;

    virtual String Add(const String& arr) = 0;
    virtual String Add(const ArrayPtr<wchar_t>& arr, int offset, int length) = 0;

    virtual String Get(const String& arr) const = 0;
    virtual String Get(const ArrayPtr<wchar_t>& arr, int offset, int length) const = 0;

protected:

    XmlNameTable() {}
};


} } // namespace System::Xml

#endif // _aspose_xml_xml_name_table_h_
