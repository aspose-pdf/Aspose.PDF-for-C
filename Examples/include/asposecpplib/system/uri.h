#ifndef _aspose_system_uri_h_
#define _aspose_system_uri_h_

#include <system/string.h>
#include <system/array.h>
#include <system/object.h>

namespace System
{
    enum class UriHostNameType
    {
        Unknown = 0,
        Basic = 1,
        Dns = 2,
        IPv4 = 3,
        IPv6 = 4,
    };

    enum class UriKind
    {
        RelativeOrAbsolute = 0,
        Absolute = 1,
        Relative = 2,
    };

    enum class UriComponents
    {
        // SerializationInfoString = -2147483648,
        Scheme = 1,
        UserInfo = 2,
        Host = 4,
        Port = 8,
        SchemeAndServer = 13,
        Path = 16,
        Query = 32,
        PathAndQuery = 48,
        HttpRequestUrl = 61,
        Fragment = 64,
        AbsoluteUri = 127,
        StrongPort = 128,
        HostAndPort = 132,
        StrongAuthority = 134,
        KeepDelimiter = 1073741824,
    };

    enum class UriFormat
    {
        UriEscaped = 1,
        Unescaped = 2,
        SafeUnescaped = 3,
    };

    enum class UriPartial
    {
        Scheme = 0,
        Authority = 1,
        Path = 2,
        Query = 3,
    };

    class Uri : public Object
    {
        FRIEND_FUNCTION_System_MakeObject;
    public:

        Uri();
        Uri(const String& uriString, bool dontEscape = false);
        Uri(const String& uriString, UriKind uriKind);
        Uri(SharedPtr<Uri> baseUri, const String& relativeUri, bool dontEscape = false);

        bool operator!=(SharedPtr<Uri> uri) const;
        bool operator==(SharedPtr<Uri> uri) const;

        String get_AbsolutePath() const;
        String get_AbsoluteUri() const;
        String get_Authority() const;
        String get_DnsSafeHost() const;
        String get_Fragment() const;
        String get_Host() const;
        UriHostNameType get_HostNameType() const;
        bool get_IsAbsoluteUri() const;
        bool get_IsDefaultPort() const;
        bool get_IsFile() const;
        bool get_IsLoopback() const;
        bool get_IsUnc() const;
        String get_LocalPath() const;
        String get_OriginalString() const;
        String get_PathAndQuery() const;
        int get_Port() const;
        String get_Query() const;
        String get_Scheme() const;
        ArrayPtr<String> get_Segments() const;
        bool get_UserEscaped() const;
        String get_UserInfo() const;

        bool Equals(SharedPtr<Uri> comparand) const;

        String GetComponents(UriComponents components, UriFormat format) const;
        String GetLeftPart(UriPartial part) const;
        bool IsBaseOf(SharedPtr<Uri> uri) const;
        bool IsWellFormedOriginalString() const;
        String MakeRelative(SharedPtr<Uri> toUri) const;
        SharedPtr<Uri> MakeRelativeUri(SharedPtr<Uri> toUri) const;
        String ToString() ASPOSE_CONST override;

        static const String ASPOSECPP_SHARED_API UriSchemeFile;

        static bool IsHexDigit(char_t character);
        static bool IsAsciiLetter(char_t character);
        static bool IsAsciiLetterOrDigit(char_t character);
        static bool IsHexEncoding(const String& pattern, int index);
        static UriHostNameType CheckHostName(const String& name);
        static bool CheckSchemeName(const String& schemeName);
        static int Compare(SharedPtr<Uri> uri1, SharedPtr<Uri> uri2, UriComponents partsToCompare,
                           UriFormat compareFormat /*, StringComparison comparisonType*/);
        static String EscapeDataString(const String& stringToEscape);
        static String EscapeUriString(const String& stringToEscape);
        static int FromHex(char_t digit);
        static String HexEscape(char_t character);
        static char_t HexUnescape(const String& pattern, int& index);
        static bool IsWellFormedUriString(const String& uriString, UriKind uriKind);
        static bool TryCreate(const String& uriString, UriKind uriKind, SharedPtr<Uri>& result);
        static bool TryCreate(SharedPtr<Uri> baseUri, const String& relativeUri, SharedPtr<Uri>& result);
        static bool TryCreate(SharedPtr<Uri> baseUri, SharedPtr<Uri> relativeUri, SharedPtr<Uri>& result);
        static String UnescapeDataString(const String& stringToUnescape);

    private:
        Uri(const String& uriString, bool dontEscape, UriKind uriKind);
        Uri(SharedPtr<Uri> uri);
        void Init(SharedPtr<Uri> baseUri, SharedPtr<Uri> relativeUri);

        String m_uriString;
        String m_scheme;
        String m_userInfo;
        String m_host;
        int m_port;
        String m_path;
        String m_query;
        String m_fragment;

        void parse(const String& uriString, bool dontEscape = false);
        void parseAuthority(std::wstring::const_iterator& it, const std::wstring::const_iterator& end);
        void parseHostAndPort(std::wstring::const_iterator& it, const std::wstring::const_iterator& end);
        void parsePath(std::wstring::const_iterator& it, const std::wstring::const_iterator& end);
        void parseQuery(std::wstring::const_iterator& it, const std::wstring::const_iterator& end);
        void parseFragment(std::wstring::const_iterator& it, const std::wstring::const_iterator& end);
        void parsePathEtc(std::wstring::const_iterator& it, const std::wstring::const_iterator& end);

        int CalcWellKnowPort() const;
        void EnsureRelative() const;

        static wchar_t HexUnescapeImpl(const String& pattern, int& index);
        static wchar_t UnescapeDigit(wchar_t digit);
        static String CalcPathDifference(const String& path1, const String& path2);
    };

} // namespace System

#endif // _aspose_system_uri_h_
