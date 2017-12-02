#ifndef _aspose_system_string_h_
#define _aspose_system_string_h_

#include <system/text/normalization_form.h>
#include <system/details/format_builder.h>
#include <system/string_comparison.h>
#include <system/shared_ptr.h>
#include <system/details/icu_namespace.h>

#include <string>
#include <sstream>
#include <cassert>
#include <iterator>
#include <cstdint>

#include <fwd.h>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <unicode/unistr.h>
#endif


ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
    ASPOSECPP_3RD_PARTY_CLASS(UnicodeString);
}

#ifdef _WIN32
ASPOSECPP_3RD_PARTY_TYPEDEF(UChar, wchar_t);
#ifndef U_SIZEOF_WCHAR_T
#define U_SIZEOF_WCHAR_T 2
#endif
#else
ASPOSECPP_3RD_PARTY_TYPEDEF(UChar, std::uint16_t);
#ifndef U_SIZEOF_WCHAR_T
#define U_SIZEOF_WCHAR_T 4
#endif
#endif


namespace System { namespace Text { class StringBuilder; } }
namespace System { namespace Globalization { class TextElementEnumerator; } }

namespace System
{
    namespace Detail {
        ASPOSECPP_3RD_PARTY_TYPE_HOLDER(icu::UnicodeString, UnicodeString, 64, size_t, UnicodeStringHolder);
    }

    enum class StringSplitOptions
    {
        None = 0,
        RemoveEmptyEntries = 1
    };

    template <typename T>
    class ArrayPtr;

    using icu::UnicodeString;



    template <typename T, typename CharT>
    struct IsStringByteSequence
        : public std::integral_constant<bool, std::is_same<typename std::remove_const<typename std::remove_pointer<typename std::decay<T>::type>::type>::type, CharT>::value> {};

    template <typename T, typename CharT>
    struct IsStringPointer :
        public std::integral_constant<bool, IsStringByteSequence<T, CharT>::value && std::is_pointer<T>::value> {};

    template <typename T, typename CharT>
    struct IsNonConstStringArray :
        public std::integral_constant<bool, IsStringByteSequence<T, CharT>::value && std::is_array<T>::value && !std::is_const<T>::value> {};

    template <typename T, typename CharT>
    struct IsStringLiteral :
        public std::integral_constant<bool, IsStringByteSequence<T, CharT>::value && std::is_array<T>::value && std::is_const<T>::value> {};




    class String
    {
        friend class System::Text::StringBuilder;
        friend class System::Globalization::TextElementEnumerator;

        RTTI_INFO_VALUE_TYPE(System::String);
    public:
        using reverse_iterator = std::reverse_iterator<const UChar*>;

        String();

#if U_SIZEOF_WCHAR_T == 4
        String(const UChar* str);
        String(const UChar* str, int length);
        String(const UChar ch, int count);
#endif

        //String(std::nullptr_t);
        template<typename T>
        String(const T& value,
               typename std::enable_if<std::is_same<T, std::nullptr_t>::value>::type* = nullptr)
            : String()
        {}

        template<typename T>
        String(T& value, typename std::enable_if<IsNonConstStringArray<T, wchar_t>::value>::type* = nullptr)
            : String(value, std::extent<T>::value - 1)
        {}

        template<typename T>
            String(T& value, typename std::enable_if<IsStringLiteral<T, wchar_t>::value>::type* = nullptr)
                : String(value, std::extent<T>::value - 1)
        {}

        //String::String(const wchar_t* str)
        template<typename T>
        String(const T& value, typename std::enable_if<IsStringPointer<T, wchar_t>::value>::type* = nullptr)
            : String(value, -1)
        {}

        String(const wchar_t* str, int length);
        explicit String(const wchar_t ch, int count = 1);

        String(const String& str);
        String(String&& str);

        String(ArrayPtr<wchar_t> arr);
        String(ArrayPtr<wchar_t> arr, int offset, int len);
        ~String();

        const UChar* u_str() const;

        const UChar* begin() const;
        const UChar* end() const;
        
        reverse_iterator rbegin() const;
        reverse_iterator rend() const;

        //explicit operator bool() const;

        bool IsNullOrEmpty() const;

        inline bool IsNull() const { return m_is_null; }

        bool IsEmpty() const;

        std::string ToUtf8String() const;
        std::wstring ToWCS() const;

        // special method. Called when a string is set to null: String s; ... s = null;
        String& reset();

        int get_Length() const;
        wchar_t operator[](int index) const;
        String& SetCharAt(int index, wchar_t ch);

        //String& operator=(std::nullptr_t);
        //String& operator=(const wchar_t* str);
        String& operator=(const String& str);
        String& operator=(String&& str);

        //String operator+(const wchar_t* str) const;
        String operator+(const String& str) const;
        template <typename T>
        typename std::enable_if<IsStringLiteral<T, wchar_t>::value, String>::type operator+(const T& arg) const
        {
            return *this + String(arg, std::extent<T>::value - 1);
        }

        String operator+(wchar_t x) const;
        String operator+(int i) const;
        String operator+(uint32_t i) const;
        String operator+(double d) const;
        String operator+(int64_t v) const;
        template <typename T>
        typename std::enable_if<IsSharedPtr<T>::value, String>::type operator+(const T& value) const
        {
            return *this + value->ToString();
        }
        template <typename T>
        typename std::enable_if<!IsSharedPtr<T>::value && !std::is_scalar<T>::value && !std::is_array<T>::value, String>::type operator+(const T& value) const
        {
            return *this + value.ToString();
        }

        String& operator+=(wchar_t c);
        //String& operator+=(const wchar_t* str);
        String& operator+=(const String& str);

        //bool operator==(const wchar_t* str) const;
        bool operator==(const String& str) const;
        bool operator==(std::nullptr_t) const;


        //bool operator!=(const wchar_t* str) const;
        bool operator!=(const String& str) const;
        bool operator!=(std::nullptr_t) const;

        //bool operator<(const wchar_t* str) const;
        bool operator<(const String& str) const;

        String Clone() const;

        String ToString() const { return *this; }
        String ToString(const SharedPtr<IFormatProvider>&) const { return *this; }

        int GetHashCode() const;
        bool Equals(const String& str, System::StringComparison comparison_type) const;
        bool Equals(const String& str) const;

        bool Contains(const String& str) const;
        int CompareTo(const String& str) const;
        void CopyTo(int sourceIndex, const ArrayPtr<wchar_t>& destination, int destinationIndex, int count) const;
        String Normalize(System::Text::NormalizationForm);
        bool IsNormalized(System::Text::NormalizationForm);

        bool StartsWith(const String& value, System::StringComparison comparisonType) const;
        bool StartsWith(const String& value, bool ignoreCase = false, SharedPtr<System::Globalization::CultureInfo> culture = nullptr) const;

        bool EndsWith(const String& value, System::StringComparison comparisonType) const;
        bool EndsWith(const String& value, bool ignoreCase = false, SharedPtr<System::Globalization::CultureInfo> culture = nullptr) const;

        ArrayPtr<wchar_t> ToCharArray(int32_t startIndex = 0, int32_t length = INT32_MAX) const;
        ArrayPtr<uint8_t> ToByteArray(int32_t startIndex = 0, int32_t length = INT32_MAX, bool LE = true) const;

        String ToUpper() const;
        String ToLower() const;

        String ToLower(SharedPtr<System::Globalization::CultureInfo> cultureInfo) const;
        String ToUpper(SharedPtr<System::Globalization::CultureInfo> cultureInfo) const;

        String ToUpperInvariant() const;
        String ToLowerInvariant() const;

        String Substring(int32_t startIndex, int32_t length = INT32_MAX) const;
        String Remove(int32_t startIndex, int32_t count = INT32_MAX) const;

        bool Is(const System::TypeInfo &target) const
        {
            return GetType() == target;
        }

        // Finds

        int IndexOf(const String& str, System::StringComparison comparison_type) const;
        int IndexOf(wchar_t c, int startIndex = 0) const;
        int IndexOf(wchar_t c, int startIndex, int count) const;
        int IndexOf(const String& str, int startIndex = 0) const;
        int IndexOf(const String& str, int startIndex, System::StringComparison comparison_type) const;
        int IndexOf(const String& value, int startIndex, int count, System::StringComparison comparisonType) const;
        int IndexOf(const String& str, int startIndex, int count) const;

        int IndexOfAny(wchar_t c, int startIndex = 0) const;
        int IndexOfAny(const String& str, int startIndex = 0) const;
        int IndexOfAny(const ArrayPtr<wchar_t>& anyOf, int32_t startindex = 0, int32_t count = INT32_MAX) const;

        int LastIndexOf(wchar_t c, int startIndex = INT32_MAX) const;
        int LastIndexOf(const String& str, int startIndex = INT32_MAX) const;
        int LastIndexOf(const String& str, System::StringComparison comparison_type) const;
        int LastIndexOf(wchar_t c, int startIndex, int count) const;
        int LastIndexOf(const String& value, int startIndex, int count, StringComparison comparisonType) const;

        int LastIndexOfAny(wchar_t c, int startIndex = INT32_MAX) const;
        int LastIndexOfAny(const String& str, int startIndex = INT32_MAX) const;
        int LastIndexOfAny(const ArrayPtr<wchar_t>& anyOf, int32_t startindex = INT32_MAX, int32_t count = INT32_MAX) const;

        // Trim

        String Trim() const;
        String Trim(wchar_t ch) const;
        String Trim(const String& anyOf) const;
        String Trim(const ArrayPtr<wchar_t>& anyOf) const;

        String TrimStart() const;
        String TrimStart(wchar_t ch) const;
        String TrimStart(const String& anyOf) const;
        String TrimStart(const ArrayPtr<wchar_t>& anyOf) const;

        String TrimEnd() const;
        String TrimEnd(wchar_t ch) const;
        String TrimEnd(const String& anyOf) const;
        String TrimEnd(const ArrayPtr<wchar_t>& anyOf) const;

        String PadLeft(int totalWidth, wchar_t c = L' ') const;
        String PadRight(int totalWidth, wchar_t c = L' ') const;

        // Replace

        String Replace(wchar_t oldValue, wchar_t newValue) const;
        String Replace(const String& oldValue, const String& newValue) const;

        // Insert

        String Insert(int startIndex, const String& value) const;

        // Split
        ArrayPtr<String> Split(wchar_t separator = L' ', StringSplitOptions opt = StringSplitOptions::None) const;
        ArrayPtr<String> Split(wchar_t separatorA, wchar_t separatorB, StringSplitOptions opt = StringSplitOptions::None) const;
        ArrayPtr<String> Split(const ArrayPtr<wchar_t>& separators, StringSplitOptions opt = StringSplitOptions::None) const;
        ArrayPtr<String> Split(const String& separator, StringSplitOptions opt = StringSplitOptions::None) const;
        ArrayPtr<String> Split(const String& separator, int count, StringSplitOptions opt = StringSplitOptions::None) const;
        ArrayPtr<String> Split(const ArrayPtr<String>& separators, StringSplitOptions opt = StringSplitOptions::None) const;
        ArrayPtr<String> Split(const ArrayPtr<String>& separators, int count, StringSplitOptions opt = StringSplitOptions::None) const;

        // static members

        static const ASPOSECPP_SHARED_API String Empty;

        static bool IsNullOrEmpty(const String& str);

        static bool Equals(const String& strA, const String& strB);
        static bool Equals(const String& strA, const String& strB, System::StringComparison comparison_type);

        static int Compare(const String& strA, int indexA, const String& strB, int indexB
            , int length, bool ignoreCase = false);

        static int Compare(const String& strA, int indexA, const String& strB, int indexB
            , int length, bool ignoreCase, SharedPtr<System::Globalization::CultureInfo> ci);

        static int Compare(const String& strA, const String& strB, System::StringComparison comparison_type);
        static int Compare(const String& strA, int indexA, const String& strB, int indexB
            , int length, System::StringComparison comparison_type);

        static int Compare(const String& strA, const String& strB, bool ignoreCase = false);
        static int Compare(const String& strA, const String& strB, bool ignoreCase, SharedPtr<System::Globalization::CultureInfo> ci);

        static int CompareOrdinal(const String& strA, const String& strB);
        static int CompareOrdinal(const String& strA, int indexA, const String& strB, int indexB, int length);

        static String Join(const String& separator, const ArrayPtr<String>& parts, int startIndex = 0, int count = -1);

        static String Concat(const ArrayPtr<String>& parts);
        static String Concat(const String & str0, const String & str1);
        static String Concat(const String & str0, const String & str1, const String & str2);

        static String Copy(const String& str) { return str; }

        template<class... Args>
        static String Format(SharedPtr<IFormatProvider> fp, const String& format, const Args&... args)
        {
            System::Details::FormatBuilder builder(format.ToWCS(), fp);
            System::Details::FormatBuilder::add_arguments(builder, args...);

            return FromWCS(builder.str());
        }

        template<class... Args>
        static String Format(const String& format, const Args&... args)
        {
            System::Details::FormatBuilder builder(format.ToWCS());
            System::Details::FormatBuilder::add_arguments(builder, args...);

            return FromWCS(builder.str());
        }

        static String FromUtf8(const char* utf8);
        static String FromUtf8(const char* utf8, int len);
        static String FromUtf8(const uint8_t* utf8);
        static String FromUtf8(const std::string& utf8);
        static String FromWCS(const std::wstring& wcs);
        static String FromUtf32(const uint32_t *utf32, int32_t length);

        explicit String(const icu::UnicodeString& str);
        explicit String(const std::wstring& str) : String(str.data(), str.length()) {};

    protected:

        ArrayPtr<String> SplitAnyOf(const String& separators, bool skipEmpty = false) const;

        ArrayPtr<String> SplitBySpring(const String& separators, bool ignoreCase = false, bool skipEmpty = false) const;

        mutable Detail::UnicodeStringHolder m_str; // mutable because of u_str
        bool EndstWithImpl(const String& str, bool ignoreCase = false) const;

        bool m_is_null;

    }; // class String

    template<typename T>
    typename std::enable_if<IsStringLiteral<T, wchar_t>::value, String>::type  inline operator+(T&  left, const String& right)
    {
        return String(left, std::extent<T>::value - 1) + right;
    }

    template<typename T>
    typename std::enable_if<IsStringPointer<T, wchar_t>::value, String>::type  inline operator+(T&  left, const String& right)
    {
        return String(left) + right;
    }


    String inline operator+(const wchar_t left, const String& right)
    {
        return String(left, 1) + right;
    }

    template<class T, typename std::enable_if<IsStringLiteral<T, wchar_t>::value>::type* = nullptr>
    bool inline operator==(T&  left, const String& right)
    {
        return String(left, std::extent<T>::value - 1) == right;
    }

    template<class T, typename std::enable_if<IsStringPointer<T, wchar_t>::value>::type* = nullptr>
    bool inline operator==(T&  left, const String& right)
    {
        return String(left) == right;
    }

    template<class T, typename std::enable_if<IsStringLiteral<T, wchar_t>::value>::type* = nullptr>
    bool inline operator!=(T&  left, const String& right)
    {
        return !(String(left, std::extent<T>::value - 1) == right);
    }

    template<class T, typename std::enable_if<IsStringPointer<T, wchar_t>::value>::type* = nullptr>
    bool inline operator!=(T&  left, const String& right)
    {
        return !(String(left) == right);
    }


    //bool inline operator!=(const wchar_t* left, const String& right)
    //{
    //    return !(right == left);
    //}

    bool operator==(SharedPtr<Object> left, const String& right);
    bool operator!=(SharedPtr<Object> left, const String& right);

    bool operator==(std::nullptr_t, const String& str);
    bool operator!=(std::nullptr_t, const String& str);

    template <>
    struct CastResult<String>
    {
        typedef String type;
    };

    void PrintTo(const System::String& value, std::ostream* os);

} // namespace System

// boost::hash specialization for System::String

namespace std
{
    template <>
    struct hash<System::String>
    {
        std::size_t operator()(const System::String& str) const
        {
            return str.GetHashCode();
        }
    };
}

typedef wchar_t* wchar_t_array;
typedef wchar_t const* const_wchar_t_array;

#endif // _aspose_system_string_h_
