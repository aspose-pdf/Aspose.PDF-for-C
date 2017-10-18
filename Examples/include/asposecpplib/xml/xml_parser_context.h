#ifndef _aspose_xml_xml_parser_context_h_
#define _aspose_xml_xml_parser_context_h_

#include "xml/xml_name_table.h"
#include "xml/xml_namespace_manager.h"
#include "xml/xml_space.h"
#include "xml/xml_name_table.h"

#include <system/text/encoding.h>

namespace System { namespace Xml {

class XmlParserContext : public Object
{
public:

    typedef SharedPtr<XmlParserContext> Ptr;

    String baseUri;
    String docTypeName;
    SharedPtr<System::Text::Encoding> encoding;
    String subset;
    XmlNamespaceManager::Ptr nsManager;
    XmlNameTable::Ptr nameTable;
    String publicId;
    String systemId;
    String xmlLang;
    XmlSpace xmlSpace;

    XmlParserContext(const XmlNameTable::Ptr& nt, const XmlNamespaceManager::Ptr& nsMgr, const String& lang, XmlSpace space,
        const SharedPtr<System::Text::Encoding>& enc = SharedPtr<System::Text::Encoding>());

    XmlParserContext(const XmlNameTable::Ptr& nt, const XmlNamespaceManager::Ptr& nsMgr, const String& doctypename, const String& pubId, const String& sysId,
                     const String& internalSubset, const String& baseuri, const String& lang, XmlSpace space,
        const SharedPtr<System::Text::Encoding>& enc = SharedPtr<System::Text::Encoding>());

    String get_BaseURI() const;
    void set_BaseURI(const String& value);

    String get_DocTypeName() const;
    void set_DocTypeName(const String& value);

    SharedPtr<System::Text::Encoding> get_Encoding() const;
    void set_Encoding(const SharedPtr<System::Text::Encoding>& value);

    String get_InternalSubset() const;
    void set_InternalSubset(const String& value);

    XmlNamespaceManager::Ptr get_NamespaceManager() const;
    void set_NamespaceManager(const XmlNamespaceManager::Ptr& value);

    XmlNameTable::Ptr get_NameTable() const;
    void set_NameTable(const XmlNameTable::Ptr& value);

    String get_PublicId() const;
    void set_PublicId(const String& value);

    String get_SystemId() const;
    void set_SystemId(const String& value);

    String get_XmlLang() const;
    void set_XmlLang(const String& value);

    XmlSpace get_XmlSpace() const;
    void set_XmlSpace(XmlSpace value);

};

}} // namespace System::Xml

#endif // _aspose_xml_xml_parser_context_h_
