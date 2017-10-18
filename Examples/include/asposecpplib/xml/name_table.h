#ifndef _aspose_xml_name_table_h_
#define _aspose_xml_name_table_h_

#include "xml_name_table.h"
#include "xml_typedefs.h"
#include "xml/detail/xml_3rd_party_types.h"

namespace System { namespace Xml {

class XmlDocument;

class NameTable : public XmlNameTable
{
    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlDocument;

public:

    typedef SharedPtr<NameTable> Ptr;

    NameTable();
    virtual ~NameTable();

    String Add(const String& key) override;
    String Add(const ArrayPtr<wchar_t>& key, int start, int len) override;

    String Add(const std::string& key_utf8);

    String Get(const String& key) const override;
    String Get(const ArrayPtr<wchar_t>& key, int start, int len) const override;

    String Get(const std::string& key_utf8) const;

protected:

    xmlDict* m_dict;

    // internal tools

    NameTable(xmlDict* base_dict);

    void reassign(xmlDict* new_sub);

    static void merge(xmlDict* from, xmlDict* to);

private:

    NameTable(const NameTable& table);
    NameTable& operator=(const NameTable& table);

};

} } // namespace System::Xml

#endif // _aspose_xml_name_table_h_
