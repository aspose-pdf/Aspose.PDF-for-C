/// @file xml/xml_parser_context.h
#ifndef _aspose_xml_xml_parser_context_h_
#define _aspose_xml_xml_parser_context_h_

#include "xml/xml_name_table.h"
#include "xml/xml_namespace_manager.h"
#include "xml/xml_space.h"
#include "xml/xml_name_table.h"

#include <system/text/encoding.h>

namespace System { namespace Xml {

/// Represents context information required by the XmlReader to parse an XML fragment.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlParserContext : public Object
{
public:
    /// An alias for a shared pointer to an instance of this class.
    typedef SharedPtr<XmlParserContext> Ptr;
    /// Base URI.
    String baseUri;
    /// The name of the document type declarations.
    String docTypeName;
    /// The encoding used.
    SharedPtr<System::Text::Encoding> encoding;
    /// The internal DTD subset.
    String subset;
    /// The name space manager.
    XmlNamespaceManager::Ptr nsManager;
    /// The name table.
    XmlNameTable::Ptr nameTable;
    /// The public ID.
    String publicId;
    /// The system ID.
    String systemId;
    /// The xml:lang scope.
    String xmlLang;
    /// The xml:space scope.
    XmlSpace xmlSpace;

    /// Constructs an XmlParserContext object and initializes it with the specified name table, namespace manager,
    /// xml:space, xml:lang and encoding values.
    /// @param nt The XmlNameTable object to be used by the object being constructed
    /// @param nsMgr The XmlNamespaceManager object to be used by the object being constructed
    /// @param lang The xml:lang scope
    /// @param space The xml:space scope
    /// @param enc The encoding used
    ASPOSECPP_SHARED_API XmlParserContext(const XmlNameTable::Ptr& nt, const XmlNamespaceManager::Ptr& nsMgr, const String& lang, XmlSpace space,
        const SharedPtr<System::Text::Encoding>& enc = SharedPtr<System::Text::Encoding>());

    /// Constructs an XmlParserContext object and initializes it with the specified name table, namespace manager,
    /// document type name, public id, system id, internal DTD subset, base URI, xml:space, xml:lang and encoding values.
    /// @param nt The XmlNameTable object to be used by the object being constructed
    /// @param nsMgr The XmlNamespaceManager object to be used by the object being constructed
    /// @param doctypename The name of the document type declarations
    /// @param pubId The public identifier
    /// @param sysId The system identifier
    /// @param internalSubset The internal DTD subset
    /// @param baseuri The base URI of the location from which the XML fragment was loaded
    /// @param lang The xml:lang scope
    /// @param space The xml:space scope
    /// @param enc The encoding used
    ASPOSECPP_SHARED_API XmlParserContext(const XmlNameTable::Ptr& nt, const XmlNamespaceManager::Ptr& nsMgr, const String& doctypename, const String& pubId, const String& sysId,
                     const String& internalSubset, const String& baseuri, const String& lang, XmlSpace space,
        const SharedPtr<System::Text::Encoding>& enc = SharedPtr<System::Text::Encoding>());

    /// Returns the base URI.
    ASPOSECPP_SHARED_API String get_BaseURI() const;
    /// Sets the specified base URI.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_BaseURI(const String& value);
    /// Returns the name of the document type declarations.
    ASPOSECPP_SHARED_API String get_DocTypeName() const;
    /// Sets the name of the document type declarations.
    ASPOSECPP_SHARED_API void set_DocTypeName(const String& value);
    /// Returns the encoding used.
    ASPOSECPP_SHARED_API SharedPtr<System::Text::Encoding> get_Encoding() const;
    /// Sets the encoding used.
    ASPOSECPP_SHARED_API void set_Encoding(const SharedPtr<System::Text::Encoding>& value);
    /// Returns the internal DTD subset.
    ASPOSECPP_SHARED_API String get_InternalSubset() const;
    /// Sets the internal DTD subset.
    ASPOSECPP_SHARED_API void set_InternalSubset(const String& value);
    /// Returns the name space manager.
    ASPOSECPP_SHARED_API XmlNamespaceManager::Ptr get_NamespaceManager() const;
    /// Sets the name space manager.
    ASPOSECPP_SHARED_API void set_NamespaceManager(const XmlNamespaceManager::Ptr& value);
    /// Returns the name table.
    ASPOSECPP_SHARED_API XmlNameTable::Ptr get_NameTable() const;
    /// Sets the name table.
    ASPOSECPP_SHARED_API void set_NameTable(const XmlNameTable::Ptr& value);
    /// Returns the public ID.
    ASPOSECPP_SHARED_API String get_PublicId() const;
    /// Sets the public ID.
    ASPOSECPP_SHARED_API void set_PublicId(const String& value);
    /// Returns the system ID.
    ASPOSECPP_SHARED_API String get_SystemId() const;
    /// Sets the system ID.
    ASPOSECPP_SHARED_API void set_SystemId(const String& value);
    /// Returns the xml:lang scope.
    ASPOSECPP_SHARED_API String get_XmlLang() const;
    /// Sets the xml:lang scope.
    ASPOSECPP_SHARED_API void set_XmlLang(const String& value);
    /// Returns the xml:space scope.
    ASPOSECPP_SHARED_API XmlSpace get_XmlSpace() const;
    /// Sets the xml:space scope.
    ASPOSECPP_SHARED_API void set_XmlSpace(XmlSpace value);

};

}} // namespace System::Xml

#endif // _aspose_xml_xml_parser_context_h_
