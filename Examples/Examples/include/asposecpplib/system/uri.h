/// @file system/uri.h
/// Contains the declaration System::Uri class and supporting types.
#pragma once

#include <system/uri_enum_types.h>
#include <system/uri_host_name_type.h>
#include <system/uri_partial.h>
#include <system/string_comparison.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

namespace System {

namespace UriDetails { class UriImpl; }

/// Unified resource identifier.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Uri : public Object
{
    typedef Uri ThisType;
    typedef Object BaseType;

    typedef BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject;

    friend ASPOSECPP_SHARED_API bool operator ==(const SharedPtr<Uri>& uri1, const SharedPtr<Uri>& uri2);
    friend ASPOSECPP_SHARED_API bool operator !=(const SharedPtr<Uri>& uri1, const SharedPtr<Uri>& uri2);

public:
    /// Specifies that the Uri is a pointer to a file
    static const ASPOSECPP_SHARED_API String UriSchemeFile;
    /// Specifies that the Uri is accessed through the File Transfer Protocol
    static const ASPOSECPP_SHARED_API String UriSchemeFtp;
    /// Specifies that the Uri is accessed through the Gopher protocol
    static const ASPOSECPP_SHARED_API String UriSchemeGopher;
    /// Specifies that the Uri is accessed through the Hypertext Transfer Protocol
    static const ASPOSECPP_SHARED_API String UriSchemeHttp;
    /// Specifies that the Uri is accessed through the Secure Hypertext Transfer Protocol
    static const ASPOSECPP_SHARED_API String UriSchemeHttps;
    /// Specifies that the Uri is an email address and is accessed through the Simple Mail Transport Protocol
    static const ASPOSECPP_SHARED_API String UriSchemeMailto;
    /// Specifies that the Uri is an Internet news group and is accessed through the Network News Transport Protocol
    static const ASPOSECPP_SHARED_API String UriSchemeNews;
    /// Specifies that the Uri is an Internet news group and is accessed through the Network News Transport Protocol
    static const ASPOSECPP_SHARED_API String UriSchemeNntp;
    /// Specifies that the Uri is accessed through the NetTcp scheme used by Windows Communication Foundation
    static const ASPOSECPP_SHARED_API String UriSchemeNetTcp;
    /// Specifies that the Uri is accessed through the NetPipe scheme used by Windows Communication Foundation
    static const ASPOSECPP_SHARED_API String UriSchemeNetPipe;
    /// Specifies the characters that separate the communication protocol scheme from the address portion of the Uri
    static const ASPOSECPP_SHARED_API String SchemeDelimiter;

    /// Returns the absolute path of the URI.
    ASPOSECPP_SHARED_API String get_AbsolutePath() const;
    /// Returns the absolute URI.
    ASPOSECPP_SHARED_API String get_AbsoluteUri() const;
    /// Returns the operating system representation of the file name referenced by the URI represented by the current object.
    ASPOSECPP_SHARED_API String get_LocalPath() const;
    /// Returns the host name and the port number for a server.
    ASPOSECPP_SHARED_API String get_Authority() const;
    /// Returns the host name type.
    ASPOSECPP_SHARED_API UriHostNameType get_HostNameType() const;
    /// Determines if the URI represented by the current object has defualt port for the URI's scheme.
    ASPOSECPP_SHARED_API bool get_IsDefaultPort() const;
    /// Determines if the URI represented by the current object is a file.
    ASPOSECPP_SHARED_API bool get_IsFile() const;
    /// Determines if the URI represented by the current object references a local host.
    ASPOSECPP_SHARED_API bool get_IsLoopback() const;
    /// Returns the absolute path and query components of the URI represented by the current object separated by a question mark (?).
    ASPOSECPP_SHARED_API String get_PathAndQuery() const;
    /// Returns an array of strings containing the path segments of the URI represented by the current object.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_Segments() const;
    /// Determines if the URI represented by the current object is a UNC path.
    ASPOSECPP_SHARED_API bool get_IsUnc() const;
    /// Returns the host name.
    ASPOSECPP_SHARED_API String get_Host() const;
    /// Returns the port number of the URI represented by the current object.
    ASPOSECPP_SHARED_API int32_t get_Port() const;
    /// Returns the query information included in the URI represented by the current object.
    ASPOSECPP_SHARED_API String get_Query() const;
    /// Returns the escaped URI fragment.
    ASPOSECPP_SHARED_API String get_Fragment() const;
    /// Returns the scheme of the URI represented by the current object.
    ASPOSECPP_SHARED_API String get_Scheme() const;
    /// Returns the URI string that was passed to the constructor when current object was constructed.
    ASPOSECPP_SHARED_API String get_OriginalString() const;
    /// Returns an unescaped host name.
    ASPOSECPP_SHARED_API String get_DnsSafeHost() const;
    /// Returns an International Domain Name of the host.
    ASPOSECPP_SHARED_API String get_IdnHost() const;
    /// Determines if the URI represented by the current object is absolute.
    ASPOSECPP_SHARED_API bool get_IsAbsoluteUri() const;
    /// Determines if the URI string passed to the constructor of the current object was fully escaped.
    ASPOSECPP_SHARED_API bool get_UserEscaped() const;
    /// Returns a uer name, password and other user information associated with the URI represented by the current object.
    ASPOSECPP_SHARED_API String get_UserInfo() const;

    /// Constructs a Uri object that represents the specified URI
    /// @param uriString The string URI to be represented by the object being constructed
    ASPOSECPP_SHARED_API Uri(const String& uriString);
    /// Constructs a Uri object that represents the specified URI; an argument specifies if the URI shoud be escaped
    /// @param uriString The string URI to be represented by the object being constructed
    /// @param dontEscape Specifies if the URI should not be escaped
    ASPOSECPP_SHARED_API Uri(const String& uriString, bool dontEscape);
    /// Constructs an Uri abject from the specified Uri object representing the base URI
    /// and the string representation of relative URI; an argument specifies if the URI shoud be escaped
    /// @param baseUri The base URI
    /// @param relativeUri The relative URI that is added to the base URI
    /// @param dontEscape Specifies if the URI should not be escaped
    ASPOSECPP_SHARED_API Uri(const SharedPtr<Uri>& baseUri, const String& relativeUri, bool dontEscape);
    /// Constructs a Uri object that represents the specified URI; an argument specifies the URI kind
    /// @param uriString The string URI to be represented by the object being constructed
    /// @param uriKind Specifies the URI kind
    ASPOSECPP_SHARED_API Uri(const String& uriString, UriKind uriKind);
    /// Constructs an Uri abject from the specified base and relative URIs.
    /// @param baseUri The base URI
    /// @param relativeUri The relative URI that is added to the base URI
    ASPOSECPP_SHARED_API Uri(const SharedPtr<Uri>& baseUri, const String& relativeUri);
    /// Constructs an Uri abject from the specified base and relative URIs.
    /// @param baseUri The base URI
    /// @param relativeUri The relative URI that is added to the base URI
    ASPOSECPP_SHARED_API Uri(const SharedPtr<Uri>& baseUri, SharedPtr<Uri> relativeUri);

    /// Determines the type of the specified host name.
    /// @param name The host name to test
    /// @returns The type of the specified host name
    static ASPOSECPP_SHARED_API UriHostNameType CheckHostName(String name);
    /// Returns the specified portion of the URI represented by the current object.
    /// @param part Specifies which portion of the URI to return
    /// @returns The specified part of the URI represented by the current object
    ASPOSECPP_SHARED_API String GetLeftPart(UriPartial part);
    /// Returns a hexadecimal equivalent of the specified character.
    /// @param character The character to convert
    /// @returns The hexadecimal representation of the specified character
    static ASPOSECPP_SHARED_API String HexEscape(char16_t character);
    /// Converts the specified hexadecimal representation of a character to a character.
    /// @param pattern A string containing the hexadecimal representation of a character
    /// @param index The position in @p pattern where the hexadecimal representation of a character begins
    /// @returns The character represented by the hexadecimal encoding at position @p index.
    /// If the character at @p index is not hexadecimal encoded, the character at @p index is returned.
    /// The value of @p index is incremented to point to the character following the one returned.
    static ASPOSECPP_SHARED_API char16_t HexUnescape(const String& pattern, int32_t& index);
    /// Determines if a character in the specified string at the specified position is hexadecimal encoded.
    /// @param pattern The string to check
    /// @param index Zero-based position of the character to test
    /// @returns True if the specified character is hexadecimal encoded, otherwise - false
    static ASPOSECPP_SHARED_API bool IsHexEncoding(const String& pattern, int32_t index);
    /// Determines if the specified scheme is valid.
    /// @param schemeName The name of the scheme to test
    /// @returns True if the specified string is a valid scheme, otherwise - false
    static ASPOSECPP_SHARED_API bool CheckSchemeName(const String& schemeName);
    /// Determines if the specified character represents a valid hexadecimal digit.
    /// @param character The character to check
    /// @returns True if the specified character is hexadecimal digit, otherwise - false
    static ASPOSECPP_SHARED_API bool IsHexDigit(char16_t character);
    /// Gets the decimal value of a hexadecimal digit
    /// @param digit The hexadecimal digit to convert
    /// @returns A value that contains a number that corresponds to the specified hexadecimal digit
    static ASPOSECPP_SHARED_API int32_t FromHex(char16_t digit);
    /// Gets the hash code for the URI
    /// @returns The hash value generated for this URI
    virtual ASPOSECPP_SHARED_API int32_t GetHashCode() const override;
    /// Returns the string representation of the URI represented by the current object.
    virtual ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;
    /// Determines if the URIs represented by the current and specified objects are equal.
    /// @param comparand The Uri object to compare the current object with
    /// @returns True if URIs are equal, otherwise - false
    virtual ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> comparand) override;
    /// Determines the difference between URIs represented by the current and the specified Uri objects.
    /// @param uri The comparand
    /// @returns If the hostname and scheme of the URIs represented by the current object and @p toUri are the same, then this method returns a relative Uri that, when appended to the current URI instance, yields @p toUri.
    /// If the hostname or scheme is different, then this method returns a Uri object that represents the @p uri parameter.
    ASPOSECPP_SHARED_API SharedPtr<Uri> MakeRelativeUri(SharedPtr<Uri> uri);
    /// Determines the difference between two Uri instances
    /// @param toUri The URI to compare to the current URI
    /// @returns If the hostname and scheme of the URIs represented by the current object and @p toUri are the same, then this method returns a String that represents a relative Uri, when appended to the current URI instance, yields @p toUri.
    /// If the hostname or scheme is different, then this method returns a String that represents the @p uri parameter.
    ASPOSECPP_SHARED_API String MakeRelative(SharedPtr<Uri> toUri);
    /// Constructs a Uri object that represents the specified URI; an argument specifies the URI kind
    /// @param uriString The string URI to be represented by the object being constructed
    /// @param uriKind Specifies the URI kind
    /// @param result The output argument that, if the construction succeeds, points to the newly constructed Uri object on method return
    /// @returns True if the construction suceeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryCreate(const String& uriString, UriKind uriKind, SharedPtr<Uri>& result);
    /// Constructs an Uri abject from the specified Uri object representing the base URI
    /// and the string representation of relative URI
    /// @param baseUri The base URI
    /// @param relativeUri The relative URI that is added to the base URI
    /// @param result The output argument that, if the construction succeeds, points to the newly constructed Uri object on method return
    /// @returns True if the construction suceeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryCreate(SharedPtr<Uri> baseUri, const String& relativeUri, SharedPtr<Uri>& result);
    /// Constructs an Uri abject from the specified base and relative URIs.
    /// @param baseUri The base URI
    /// @param relativeUri The relative URI that is added to the base URI
    /// @param result The output argument that, if the construction succeeds, points to the newly constructed Uri object on method return
    /// @returns True if the construction suceeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryCreate(const SharedPtr<Uri>& baseUri, SharedPtr<Uri> relativeUri, SharedPtr<Uri>& result);
    /// Returns the specified components of the URI represented by the current object using the specified escaping.
    /// @param components A bitwise combination of the UriComponents values that specifies which parts of URI to return
    /// @param format Specifies how the special characters are escaped
    /// @returns The requested components
    ASPOSECPP_SHARED_API String GetComponents(UriComponents components, UriFormat format) const;
    /// Compares the specified Uri objects using the specified comparison rules.
    /// @param uri1 The first comparand
    /// @param uri2 The second comparand
    /// @param partsToCompare Specifies the parts of @p uri1 and @p uri2 to compare
    /// @param compareFormat Specifies the character escaping used when components of URIs are compared
    /// @param comparisonType One of the StringComparison values
    /// @returns A negative value if @p uri1 is less than @p uri2; 0 if uri1 and uri2 are equal; a positive value if @p uri1 is greater than @p uri2
    static ASPOSECPP_SHARED_API int32_t Compare(const SharedPtr<Uri>& uri1, const SharedPtr<Uri>& uri2,
                                                UriComponents partsToCompare,
                                                UriFormat compareFormat, StringComparison comparisonType);
    /// Indicates whether the string used to construct this Uri was well-formed and is not required to be further escaped
    ASPOSECPP_SHARED_API bool IsWellFormedOriginalString() const;
    /// Determines if the specified string is a well-formed URI.
    /// @param uriString The URI to test
    /// @param uriKind The type of the specified URI
    /// @returns True if the specified URI is well-formed, otherwise - false
    static ASPOSECPP_SHARED_API bool IsWellFormedUriString(const String& uriString, UriKind uriKind);
    /// Unescapes the specified escaped string.
    /// @param stringToUnescape The string to unescape
    /// @returns A new string containing the unescaped representation of @p stringToUnescape
    static ASPOSECPP_SHARED_API String UnescapeDataString(const String& stringToUnescape);
    /// Converts a URI string to its escaped representation
    /// @param stringToEscape The string to escape
    /// @returns A String that contains the escaped representation of @p stringToEscape
    static ASPOSECPP_SHARED_API String EscapeUriString(const String& stringToEscape);
    /// Converts a string to its escaped representation.
    /// @param stringToEscape The string to escape
    /// @returns A new string containing the escaped representation of @p stringToEscape
    static ASPOSECPP_SHARED_API String EscapeDataString(const String& stringToEscape);
    /// Determines of the URI represented by the current Uri object is a base of URI represented by the specified Uri object.
    /// @param uri The Uri object to test
    /// @returns True if the URI represented by the current Uri object is a base of URI represented by @p uri
    ASPOSECPP_SHARED_API bool IsBaseOf(const SharedPtr<Uri>& uri) const;

protected:
    /// Obsolete method
    virtual ASPOSECPP_SHARED_API void Parse();
    /// Obsolete method
    virtual ASPOSECPP_SHARED_API void Canonicalize();
    /// Obsolete method
    virtual ASPOSECPP_SHARED_API void Escape();
    /// Obsolete method
    virtual ASPOSECPP_SHARED_API String Unescape(const String& path);
    /// Obsolete method
    static ASPOSECPP_SHARED_API String EscapeString(const String& str);
    /// Obsolete method
    virtual ASPOSECPP_SHARED_API void CheckSecurity();
    /// Obsolete method
    virtual ASPOSECPP_SHARED_API bool IsReservedCharacter(char16_t character);
    /// Obsolete method
    static ASPOSECPP_SHARED_API bool IsExcludedCharacter(char16_t character);
    /// Obsolete method
    virtual ASPOSECPP_SHARED_API bool IsBadFileSystemCharacter(char16_t character);
    /// Implements loop reference lookup.
    ASPOSECPP_SHARED_API shared_members_type GetSharedMembers() override;

private:
    explicit Uri(const SharedPtr<UriDetails::UriImpl>& impl);
    static SharedPtr<UriDetails::UriImpl> GetImpl(const SharedPtr<Uri>& uri);
    SharedPtr<UriDetails::UriImpl> m_impl;
};

/// Determines if the URIs represented by the current and specified objects are equal.
/// @param uri1 The first Uri object to compare
/// @param uri2 The second Uri object to compare
/// @returns True if URIs are equal, otherwise - false
ASPOSECPP_SHARED_API bool operator ==(const SharedPtr<Uri>& uri1, const SharedPtr<Uri>& uri2);
/// Determines if the URIs represented by the current and specified objects are not equal.
/// @param uri1 The first Uri object to compare
/// @param uri2 The second Uri object to compare
/// @returns True if URIs not equal, otherwise - false
ASPOSECPP_SHARED_API bool operator !=(const SharedPtr<Uri>& uri1, const SharedPtr<Uri>& uri2);

} // namespace System
