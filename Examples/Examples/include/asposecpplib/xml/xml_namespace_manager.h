/// @file xml/xml_namespace_manager.h
#ifndef _aspose_xml_xml_namespace_manager_h_
#define _aspose_xml_xml_namespace_manager_h_

#include "xml_name_table.h"

#include <list>
#include <stack>

namespace System { namespace Xml {

namespace XPath { class XPathNavigator; }
namespace Details { class XmlAttributeDetachedImpl; }

/// Represents a collection of XML namespaces and provides scope management for them.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlNamespaceManager: public Object
{
    friend class XmlNode;
    friend class XPath::XPathNavigator;
    friend class Details::XmlAttributeDetachedImpl;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlNamespaceManager> Ptr;
    /// Constructs an XmlNamespaceManager object and initialized it with the specified name table.
    /// @param nameTable The name tabel to use
    ASPOSECPP_SHARED_API XmlNamespaceManager(const XmlNameTable::Ptr& nameTable);

    /// Returns the default namespace's URI.
    virtual ASPOSECPP_SHARED_API String get_DefaultNamespace() const;
    /// Returns the name table used by the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<XmlNameTable> get_NameTable() const;

    /// Adds a namespace with the specified prefix and URI to the collection.
    /// @param prefix The prefix of the namespace to add
    /// @param uri The namespace URI of the namespace to add
    virtual ASPOSECPP_SHARED_API void AddNamespace(String prefix, String uri);
    /// Removes a namespace with the specified prefix and URI to the collection.
    /// @param prefix The prefix of the namespace to remove
    /// @param uri The namespace URI of the namespace to remove
    virtual ASPOSECPP_SHARED_API void RemoveNamespace(String prefix, String uri);
    /// Determines if the namespace with the specified prefix is present in the collection.
    /// @param prefix A prefix of the namespace to look for
    /// @returns True if the namespace with the specified prefix is present in the collection, otherwise - false
    virtual ASPOSECPP_SHARED_API bool HasNamespace(const String& prefix) const;
    /// Returns the URI of the namespace associated with the specified prefix.
    /// @param prefix The prefix of the namespace to look for
    /// @returns A namespace URI of the namespace whose prefix matches @p prefix
    virtual ASPOSECPP_SHARED_API String LookupNamespace(const String& prefix) const;
    /// Returns the prefix of the namespace associated with the specified URI.
    /// @param uri The namespace URI of the namespace to look for
    /// @returns A prefix of the namespace whose URI matches @p uri
    virtual ASPOSECPP_SHARED_API String LookupPrefix(const String& uri) const;
    /// Pushes a namespace scope onto the stack.
    virtual ASPOSECPP_SHARED_API void PushScope();
    /// Pops a namespace scope from the stack.
    virtual ASPOSECPP_SHARED_API void PopScope();

protected:
    /// The namespace tabel used by the current object.
    SharedPtr<XmlNameTable> m_nameTable;
    
    /// Represents a single namespace.
    struct ns_decl
    {
        /// Namespace prefix.
        String prefix;
        /// Namespace URI.
        String uri;
        /// Constructs an intance that represents a namespace with empty prefix and URI.
        ns_decl() : prefix(u""), uri(u"") { }
        /// /// Constructs an intance that represents a namespace with the specified prefix and URI.
        /// @param _prefix The prefix of the namespace represented by the instance being constructed
        /// @param _uri The URI of the namespace represented by the instance being constructed
        ns_decl(const String& _prefix, const String& _uri) : prefix(_prefix), uri(_uri) { }
    };

    /// Represents a namespace scope in a stack.
    struct ns_scope {
        /// Count of namespaces on this level.
        int count;
        /// Default namespace URI.
        String default_uri;
        /// Default constructor
        ns_scope() : count(0), default_uri(u"") { }
        /// Constructor.
        /// @param _cnt Number of namespaces at this level.
        /// @param _default Default namespace URI to use in this scope.
        ns_scope(int _cnt, const String& _default) : count(_cnt), default_uri(_default) { }
    };

    /// A storage of the collection of namespaces represented by the current object.
    std::list<ns_decl> m_decls;
    /// A stack of namespace scopes managed by the current object.
    std::stack<ns_scope> m_scopes;

    /// An alias for the namespace collection reverse iterator.
    typedef std::list<ns_decl>::reverse_iterator decl_rit;

    /// The URI of the "xml:" namespace.
    static const String s_xml_uri;
    /// The prefix of the "xml:" namespace.
    static const String s_xml_prefix;
    /// The URI of the "xmlns:" namespace.
    static const String s_xmlns_uri;
    /// The prefix of the "xmlns:" namespace.
    static const String s_xmlns_prefix;

    /// Returns a reference to the namespace scope located at the top of the stack.
    ns_scope& top() { return m_scopes.top(); }
    /// Returns a constant reference to the namespace scope located at the top of the stack.
    const ns_scope& top() const { return m_scopes.top(); }

private:
    /// No default constructor.
    XmlNamespaceManager() = delete;
    /// No copy constructor.
    XmlNamespaceManager(const XmlNamespaceManager&) = delete;

};

} } // namespace System::Xml

#endif //  _aspose_xml_xml_namespace_manager_h_
