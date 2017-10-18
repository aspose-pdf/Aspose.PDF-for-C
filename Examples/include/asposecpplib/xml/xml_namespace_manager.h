#ifndef _aspose_xml_xml_namespace_manager_h_
#define _aspose_xml_xml_namespace_manager_h_

#include "xml_name_table.h"

#include <list>
#include <stack>

namespace System { namespace Xml {

class XmlNamespaceManager: public Object
{
    friend class XmlNode;

public:

    typedef SharedPtr<XmlNamespaceManager> Ptr;

    XmlNamespaceManager(const XmlNameTable::Ptr& nameTable);

    virtual String get_DefaultNamespace() const;
    virtual SharedPtr<XmlNameTable> get_NameTable() const;

    virtual void AddNamespace(String prefix, String uri);
    virtual void RemoveNamespace(String prefix, String uri);

    virtual bool HasNamespace(const String& prefix) const;
    virtual String LookupNamespace(const String& prefix) const;
    virtual String LookupPrefix(const String& uri) const;

    virtual void PushScope();
    virtual void PopScope();

protected:

    SharedPtr<XmlNameTable> m_nameTable;

    struct ns_decl
    {
        String prefix, uri;
        ns_decl() : prefix(L""), uri(L"") { }
        ns_decl(const String& _prefix, const String& _uri) : prefix(_prefix), uri(_uri) { }
    };

    struct ns_scope {
        int count;
        String default_uri;

        ns_scope() : count(0), default_uri(L"") { }
        ns_scope(int _cnt, const String& _default) : count(_cnt), default_uri(_default) { }
    };

    std::list<ns_decl> m_decls;
    std::stack<ns_scope> m_scopes;

    typedef std::list<ns_decl>::reverse_iterator decl_rit;

    static const String s_xml_uri;
    static const String s_xml_prefix;
    static const String s_xmlns_uri;
    static const String s_xmlns_prefix;

    ns_scope& top() { return m_scopes.top(); }
    const ns_scope& top() const { return m_scopes.top(); }

private:

    XmlNamespaceManager() = delete;
    XmlNamespaceManager(const XmlNamespaceManager&) = delete;

};

} } // namespace System::Xml

#endif //  _aspose_xml_xml_namespace_manager_h_
