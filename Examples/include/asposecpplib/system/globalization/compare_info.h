/// @file system/globalization/compare_info.h
#pragma once

#include <system/globalization/compare_options.h>
#include <system/globalization/sort_key.h>
#include <system/globalization/sort_version.h>
#include <system/globalization/details/culture_data_ptr.h>
#include <system/reflection/assembly.h>
#include <system/details/lazy.h>

namespace System { namespace Globalization {

class CompareInfo;
/// CompareInfo pointer type.
typedef SharedPtr<CompareInfo> CompareInfoPtr;

/// Makes culture-sensitive string comparison.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS CompareInfo
    : public virtual Object 
    //, public IDeserializationCallback
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::CompareInfo, ::System::BaseTypesInfo<System::Object>)

public:
    CompareInfo(const CompareInfo&) = delete;
    CompareInfo& operator=(const CompareInfo&) = delete;

    /// Gets name of the culture associated with comparer.
    virtual ASPOSECPP_SHARED_API String get_Name() const;
    /// Gets LCID of the culture associated with comparer.
    ASPOSECPP_SHARED_API int get_LCID() const;
    /// Gets information about sort version.
    ASPOSECPP_SHARED_API SortVersionPtr get_Version() const;

    /// Gets CompareInfo associated with the specified culture and using string comparison methods in the specified assembly.
    /// @param culture Culture identifier (LCID).
    /// @param assembly Assembly that contains string comparison methods.
    /// @return CompareInfo object.
    static ASPOSECPP_SHARED_API CompareInfoPtr GetCompareInfo(int culture, const SharedPtr<Reflection::Assembly>& assembly);
    /// Gets CompareInfo associated with the specified culture and using string comparison methods in the specified assembly.
    /// @param name Culture name.
    /// @param assembly Assembly that contains string comparison methods.
    /// @return CompareInfo object.
    static ASPOSECPP_SHARED_API CompareInfoPtr GetCompareInfo(const String& name, const SharedPtr<Reflection::Assembly>& assembly);
    /// Gets CompareInfo associated with the specified culture.
    /// @param culture Culture identifier (LCID).
    /// @return CompareInfo object.
    static ASPOSECPP_SHARED_API CompareInfoPtr GetCompareInfo(int culture);
    /// Gets CompareInfo associated with the specified culture.
    /// @param name Culture name.
    /// @return CompareInfo object.
    static ASPOSECPP_SHARED_API CompareInfoPtr GetCompareInfo(const String& name);
    /// Checks whether a specified character is sortable.
    /// @param ch Unicode character.
    /// @return True if @p ch is sortable; otherwise false.
    static ASPOSECPP_SHARED_API bool IsSortable(char16_t ch);
    /// Checks whether a specified string is sortable.
    /// @param text A string.
    /// @return True if @p text is not empty and all characters in @p text are sortable; otherwise false.
    static ASPOSECPP_SHARED_API bool IsSortable(const String& text);

    /// Compares strings. Not implemented.
    /// @param string1 LHS string.
    /// @param string2 RHS string.
    /// @return Negative value if LHS string preceeds RHS one, zero if they match, positive value otherwise.
    virtual ASPOSECPP_SHARED_API int Compare(const String& string1, const String& string2) const;
    /// Compares strings. Only Ordinal and OrdinalIgnoreCase modes are supported.
    /// @param a LHS string.
    /// @param b RHS string.
    /// @param options String comparison type.
    /// @return Negative value if LHS string preceeds RHS one, zero if they match, positive value otherwise.
    virtual ASPOSECPP_SHARED_API int Compare(const String& a, const String& b, CompareOptions options) const;
    /// Compares a section of one string with a section of second string. Not implemented.
    /// @param string1 First string.
    /// @param offset1 Start index of characters in @p string1.
    /// @param length1 Number of characters in @p string1 to compare.
    /// @param string2 Second string.
    /// @param offset2 Start index of characters in @p string2.
    /// @param length2 Number of characters in @p string2 to compare.
    /// @return Negative value if first string section preceeds second string section, zero if they match, positive value otherwise.
    virtual ASPOSECPP_SHARED_API int Compare(const String& string1, int offset1, int length1, const String& string2, int offset2, int length2) const;
    /// Compares the end section of one string with the end section of second string using string comparison methods. Not implemented.
    /// @param string1 First string.
    /// @param offset1 Start index of characters in @p string1.
    /// @param string2 Second string.
    /// @param offset2 Start index of characters in @p string2.
    /// @param options String comparison options.
    /// @return Negative value if first string section preceeds second string section, zero if they match, positive value otherwise.
    virtual ASPOSECPP_SHARED_API int Compare(const String& string1, int offset1, const String& string2, int offset2, CompareOptions options) const;
    /// Compares the end section of one string with the end section of second string. Not implemented.
    /// @param string1 First string.
    /// @param offset1 Start index of characters in @p string1.
    /// @param string2 Second string.
    /// @param offset2 Start index of characters in @p string2.
    /// @return Negative value if first string section preceeds second string section, zero if they match, positive value otherwise.
    virtual ASPOSECPP_SHARED_API int Compare(const String& string1, int offset1, const String& string2, int offset2) const;
    /// Compares a section of one string with a section of second string using string comparison methods. Not implemented.
    /// @param string1 First string.
    /// @param offset1 Start index of characters in @p string1.
    /// @param length1 Number of characters in @p string1 to compare.
    /// @param string2 Second string.
    /// @param offset2 Start index of characters in @p string2.
    /// @param length2 Number of characters in @p string2 to compare.
    /// @param options String comparison options.
    /// @return Negative value if first string section preceeds second string section, zero if they match, positive value otherwise.
    virtual ASPOSECPP_SHARED_API int Compare(const String& string1, int offset1, int length1, const String& string2, int offset2, int length2, CompareOptions options) const;
    
    /// Gets SortKey object for the specified string using specified compare options.
    /// @param value Input string.
    /// @param options Compare options.
    /// @return SortKey object.
    virtual ASPOSECPP_SHARED_API SortKeyPtr GetSortKey(const String& value, CompareOptions options) const;
    /// Gets SortKey object for the specified string.
    /// @param value Input string.
    /// @return SortKey object.
    virtual ASPOSECPP_SHARED_API SortKeyPtr GetSortKey(const String& value) const;

    /// Looks for substring.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @param count Number of characters in source string.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, const String& value, int start_index, int count) const;
    /// Looks for substring. Only Ordinal mode is supported.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @param options Lookup options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, const String& value, int start_index, CompareOptions options) const;
    /// Looks for substring. Only Ordinal mode is supported.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @param count Number of characters in source string.
    /// @param options Lookup options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, const String& value, int start_index, int count, CompareOptions options) const;
    /// Looks for the specified character. Only Ordinal mode is supported.
    /// @param source Source string.
    /// @param value Character.
    /// @param start_index Lookup start index in source string.
    /// @param count Number of characters in source string.
    /// @param options Lookup options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, char16_t value, int start_index, int count, CompareOptions options) const;
    /// Looks for substring.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, const String& value, int start_index) const;
    /// Looks for the specified character.
    /// @param source Source string.
    /// @param value Character.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, char16_t value) const;
    /// Looks for substring.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, const String& value) const;
    /// Looks for the specified character. Only Ordinal mode is supported.
    /// @param source Source string.
    /// @param value Character.
    /// @param start_index Lookup start index in source string.
    /// @param options Lookup options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, char16_t value, int start_index, CompareOptions options) const;
    /// Looks for the specified character.
    /// @param source Source string.
    /// @param value Character.
    /// @param start_index Lookup start index in source string.
    /// @param count Number of characters in source string.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, char16_t value, int start_index, int count) const;
    /// Looks for the specified character.
    /// @param source Source string.
    /// @param value Character.
    /// @param start_index Lookup start index in source string.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, char16_t value, int start_index) const;
    /// Looks for substring. Only Ordinal mode is supported.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param options Lookup options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, const String& value, CompareOptions options) const;
    /// Looks for the specified character. Only Ordinal mode is supported.
    /// @param source Source string.
    /// @param value Character.
    /// @param options Lookup options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int IndexOf(const String& source, char16_t value, CompareOptions options) const;

    /// Checks if the specified string starts with the specified prefix using the specified compare options.
    /// @param source Source string.
    /// @param prefix Prefix string.
    /// @param options Compare options.
    /// @return True if string starts with prefix; otherwise false.
    virtual ASPOSECPP_SHARED_API bool IsPrefix(const String& source, const String& prefix, CompareOptions options) const;
    /// Checks if the specified string starts with the specified prefix.
    /// @param source Source string.
    /// @param prefix Prefix string.
    /// @return True if string starts with prefix; otherwise false.
    virtual ASPOSECPP_SHARED_API bool IsPrefix(const String& source, const String& prefix) const;
    /// Checks if the specified string ends with the specified suffix using the specified compare options.
    /// @param source Source string.
    /// @param suffix Suffix string.
    /// @param options Compare options.
    /// @return True if string ends with suffix; otherwise false.
    virtual ASPOSECPP_SHARED_API bool IsSuffix(const String& source, const String& suffix, CompareOptions options) const;
    /// Checks if the specified string ends with the specified suffix.
    /// @param source Source string.
    /// @param suffix Suffix string.
    /// @return True if string ends with suffix; otherwise false.
    virtual ASPOSECPP_SHARED_API bool IsSuffix(const String& source, const String& suffix) const;

    /// Searches last occurrence of the specified substring.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, const String& value) const;
    /// Searches last occurrence of the specified substring using the specified compare options.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @param count Number of characters in source string.
    /// @param options Compare options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, const String& value, int start_index, int count, CompareOptions options) const;
    /// Searches last occurrence of the specified character using the specified compare options.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @param count Number of characters in source string.
    /// @param options Compare options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, char16_t value, int start_index, int count, CompareOptions options) const;
    /// Searches last occurrence of the specified string.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @param count Number of characters in source string.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, const String& value, int start_index, int count) const;
    /// Searches last occurrence of the specified string using the specified compare options.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @param options Compare options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, const String& value, int start_index, CompareOptions options) const;
    /// Searches last occurrence of the specified character using the specified compare options.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @param options Compare options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, char16_t value, int start_index, CompareOptions options) const;
    /// Searches last occurrence of the specified string.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, const String& value, int start_index) const;
    /// Searches last occurrence of the specified character.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, char16_t value, int start_index) const;
    /// Searches last occurrence of the specified string using the specified compare options.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param options Compare options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, const String& value, CompareOptions options) const;
    /// Searches last occurrence of the specified character using the specified compare options.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param options Compare options.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, char16_t value, CompareOptions options) const;
    /// Searches last occurrence of the specified character.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, char16_t value) const;
    /// Searches last occurrence of the specified character.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param start_index Lookup start index in source string.
    /// @param count Number of characters in source string.
    /// @return Index of lookup value in source string or -1 if not found.
    virtual ASPOSECPP_SHARED_API int LastIndexOf(const String& source, char16_t value, int start_index, int count) const;

    /// Gets string hash code based on specified comparison options.
    /// @param value Input string.
    /// @param options String comparsion options.
    /// @return Hash code.
    virtual ASPOSECPP_SHARED_API int GetHashCode(const String& value, CompareOptions options) const;

    // Object methods
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> other) override;
    ASPOSECPP_SHARED_API int GetHashCode() const override;
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;

private:
    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor.
    /// @param culture_data Culture to use.
    CompareInfo(const Details::CultureDataPtr& culture_data);

    /// Culture data.
    const Details::CultureDataPtr m_culture_data;

    /// Sort version.
    mutable System::Details::Lazy<SortVersionPtr> m_sort_version;
};

}} // namespace System::Globalization
