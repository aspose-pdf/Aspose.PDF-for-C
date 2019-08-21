/// @file system/globalization/idn_mapping.h
#pragma once

#include <system/object.h>
#include <system/string.h>
#include <system/details/icu_namespace.h>

/// Begins an ICU namspace scope.
ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START{
    /// Forward declaration of IDNA class from ICU
    ASPOSECPP_3RD_PARTY_CLASS(IDNA);
}

namespace System { namespace Globalization {

class IdnMapping;
/// IdnMapping pointer type.
typedef SharedPtr<IdnMapping> IdnMappingPtr;

/// IdnMapping used to map names to Punycode.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS IdnMapping final : public Object
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::IdnMapping, ::System::BaseTypesInfo<System::Object>)

    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor.
    ASPOSECPP_SHARED_API IdnMapping();

public:
    IdnMapping(const IdnMapping&) = delete;
    IdnMapping& operator=(const IdnMapping&) = delete;

    /// Gets flag that indicates if unassigned code points used in operations.
    ASPOSECPP_SHARED_API bool get_AllowUnassigned() const;
    /// Sets flag that indicates if unassigned code points used in operations.
    /// @param value Flag that indicates if unassigned code points used in operations.
    ASPOSECPP_SHARED_API void set_AllowUnassigned(bool value);
    /// Gets flag that indicates if standard naming conventions used in operations.
    ASPOSECPP_SHARED_API bool get_UseStd3AsciiRules() const;
    /// Sets flag that indicates if standard naming conventions used in operations.
    /// @param value Flag that indicates if standard naming conventions used in operations.
    ASPOSECPP_SHARED_API void set_UseStd3AsciiRules(bool value);

    /// Convert unicode domain name to ascii equivalent.
    /// @param unicode String to convert.
    /// @return Ascii equivalent of unicode string.
    ASPOSECPP_SHARED_API String GetAscii(const String& unicode) const;
    /// Convert unicode domain name to ascii equivalent.
    /// @param unicode String to convert.
    /// @param index Start index of the substring to convert
    /// @return Ascii equivalent of unicode string.
    ASPOSECPP_SHARED_API String GetAscii(const String& unicode, int index) const;
    /// Convert unicode domain name to ascii equivalent.
    /// @param unicode String to convert.
    /// @param index Start index of the substring to convert
    /// @param count Number of characters to convert.
    /// @return Ascii equivalent of unicode string.
    ASPOSECPP_SHARED_API String GetAscii(const String& unicode, int index, int count) const;

    /// Convert ascii domain name to unicode equivalent.
    /// @param ascii String to convert.
    /// @return Unicode equivalent of ascii string.
    ASPOSECPP_SHARED_API String GetUnicode(const String& ascii) const;
    /// Convert ascii domain name to unicode equivalent.
    /// @param ascii String to convert.
    /// @param index Start index of the substring to convert
    /// @return Unicode equivalent of ascii string.
    ASPOSECPP_SHARED_API String GetUnicode(const String& ascii, int index) const;
    /// Convert ascii domain name to unicode equivalent.
    /// @param ascii String to convert.
    /// @param index Start index of the substring to convert
    /// @param count Number of characters to convert.
    /// @return Unicode equivalent of ascii string.
    ASPOSECPP_SHARED_API String GetUnicode(const String& ascii, int index, int count) const;

    // Object interface
    /// Compares two IdnMapping objects.
    /// @param value The object to compare to the current object.
    /// @return true if two objects are equal, otherwise - false.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> value) override;
    /// Gets hash code for current IdnMapping object.
    /// @return A 32-bit signed integer hash code.
    ASPOSECPP_SHARED_API int GetHashCode() const override;

private:
    /// Flag that indicates if unassigned code points used in operations.
    bool m_allow_unassigned;
    /// Flag that indicates if standard naming conventions used in operations.
    bool m_use_std3_ascii_rules;

    /// Create icu::IDNA object.
    std::unique_ptr<icu::IDNA> CreateIDNA() const;
};

}} // namespace System::Globalization
