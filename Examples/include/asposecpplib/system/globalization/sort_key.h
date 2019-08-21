/// @file system/globalization/sort_key.h
#pragma once

#include <system/object.h>
#include <system/string.h>
#include <system/array.h>
#include <system/globalization/compare_options.h>

namespace System { namespace Globalization {

class SortKey;
/// SortKey pointer type.
typedef SharedPtr<SortKey> SortKeyPtr;

/// Mapping of a string to its sort key.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SortKey : public Object
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::SortKey, ::System::BaseTypesInfo<System::Object>)

    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor designed to be called from CompareInfo.
    /// @param locale_name Culture name.
    /// @param str String used in sort operations.
    /// @param options Compare options.
    /// @param key_data Additional data.
    ASPOSECPP_SHARED_API SortKey(const String& locale_name, const String& str, CompareOptions options, const ByteArrayPtr& key_data);

public:
    SortKey(const SortKey&) = delete;
    SortKey& operator=(const SortKey&) = delete;

    /// Gets original string used to create this object.
    /// @return Original string used to create this object.
    virtual ASPOSECPP_SHARED_API String get_OriginalString();
    /// Gets byte array representing current object.
    /// @return A byte array representing current object.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> get_KeyData();

    /// Compares two sort keys.
    /// @param sortkey1 First sort key.
    /// @param sortkey2 Second sort key.
    /// @return -1 if @p sortkey1 is less then @p sortkey2, 1 - if @p sortkey1 is greater then @p sortkey2, 0 - if @p sortkey1 is equal to @p sortkey2.
    static ASPOSECPP_SHARED_API int Compare(const SortKeyPtr& sortkey1, const SortKeyPtr& sortkey2);

    // Object methods
    /// Checks if the specified object is equal to the current SortKey object.
    /// @param value The object to compare with the current SortKey object.
    /// @return true if objects are equals, otherwise - false.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> value) override;
    /// Gets hash code for the current SortKey object.
    /// @return A 32-signed integer hash code.
    ASPOSECPP_SHARED_API int GetHashCode() const override;
    /// Converts current object to its string representation.
    /// @return A string that represents the current SortKey object.
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;

private:
    /// Locale name.
    const String m_locale_name;
    /// Original string used to create this object.
    const String m_original_string;
    /// Compare options.
    const CompareOptions m_compare_options;
    /// Byte array representing current object
    const ByteArrayPtr m_key_data;

    /// Compares two sort keys.
    static int Compare(const SortKey& sortkey1, const SortKey& sortkey2);
};

}} // namespace System::Globalization
