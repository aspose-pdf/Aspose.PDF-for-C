/// @file xml/xml_resolver.h
#ifndef _aspose_xml_xml_resolver_h_
#define _aspose_xml_xml_resolver_h_

#include <system/uri.h>

namespace System { namespace Net { class ICredentials; } }

namespace System { namespace Xml {

/// Resolves external XML resources specified by URI.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT XmlResolver: virtual public Object
{
public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlResolver> Ptr;
    /// Sets the credentials that are used to authenticate web requests.
    /// @param value The ICredentials object representing the credentials to set
    virtual ASPOSECPP_SHARED_API void set_Credentials(SharedPtr<System::Net::ICredentials> value);
    /// Returns an object that contains a resource specified by a URI.
    /// @param absoluteUri The URI
    /// @param role NOT USED
    /// @param ofObjectToReturn The type of object to return; must always be System.IO.Stream
    /// @returns A stream object representing the specified resource
    virtual ASPOSECPP_SHARED_API SharedPtr<Object> GetEntity(SharedPtr<Uri> absoluteUri, String role, const TypeInfo& ofObjectToReturn) = 0;
    /// Creates an absolute URI from the specified base and relative URIs.
    /// @param baseUri A base URI
    /// @param relativeUri A relative URI
    /// @returns An absolute URI
    virtual ASPOSECPP_SHARED_API SharedPtr<Uri> ResolveUri(SharedPtr<Uri> baseUri, String relativeUri);
    /// Determines if the XmlResolver::GetEntity() can return objects of the specified type.
    /// @param absoluteUri IGNORED
    /// @param type The type to check
    /// @returns True if @p type is supported by XmlResolver::GetEntity(), otherwise - false
    virtual ASPOSECPP_SHARED_API bool SupportsType(SharedPtr<Uri> absoluteUri, const TypeInfo& type);

protected:
    /// Escapes the specified string.
    /// @param src The string to escape
    /// @returns The escaped string
    static ASPOSECPP_SHARED_API String EscapeRelativeUriBody(const String& src);
    /// Unescapes the specified string.
    /// @param src The string to unescape
    /// @returns The unescaped string
    static ASPOSECPP_SHARED_API String UnescapeRelativeUriBody(const String& src);

};

}} // namespace System::Xml

#endif // _aspose_xml_xml_resolver_h_
