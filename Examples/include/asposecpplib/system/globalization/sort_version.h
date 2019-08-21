/// @file system/globalization/sort_version.h
#pragma once

#include <system/guid.h>
#include <system/iequatable.h>

namespace System { namespace Globalization {

class SortVersion;
/// SortVersion pointer type.
typedef SharedPtr<SortVersion> SortVersionPtr;

/// Provides information about Unicode version used to compare and order strings.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SortVersion final : public IEquatable<SharedPtr<SortVersion>>
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::SortVersion, ::System::BaseTypesInfo<System::Object>)

    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor.
    /// @param full_version Version number.
    /// @param sort_id A sort identifier.
    ASPOSECPP_SHARED_API SortVersion(int full_version, const Guid& sort_id);

public:
    SortVersion(const SortVersion&) = delete;
    SortVersion& operator=(const SortVersion&) = delete;

    /// Gets full version number.
    /// @return Full version number.
    ASPOSECPP_SHARED_API int get_FullVersion();
    /// Gets unique identifier for this object.
    /// @return Unique identifier for this object.
    ASPOSECPP_SHARED_API Guid get_SortId();

    // IEquatable<SharedPtr<SortVersion>> interface
    /// Checks if current SortVersion instance is equal to a specified SortVersion object.
    /// @param other The object to compare.
    /// @return true if objects represents the same version, otherwise - false.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<SortVersion> other) override;

    // Object interface
    /// Checks if current SortVersion instance is equal to a specified SortVersion object.
    /// @param other The object to compare.
    /// @return true if objects represents the same version, otherwise - false.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> other) override;
    /// Gets hash code for the current object.
    /// @return A 32-bit signed integer hash code.
    ASPOSECPP_SHARED_API int GetHashCode() const override;

    /// Checks if current SortVersion instance is equal to a specified SortVersion object.
    /// @param other The object to compare.
    /// @return true if objects represents the same version, otherwise - false.
    ASPOSECPP_SHARED_API bool operator==(const SortVersion& other);
    /// Checks if current SortVersion instance is not equal to a specified SortVersion object.
    /// @param other The object to compare.
    /// @return true if objects represents the different versions, otherwise - false.
    ASPOSECPP_SHARED_API bool operator!=(const SortVersion& other);

private:
    /// Full version number.
    const int m_full_version;
    /// Unique identifier for this object.
    const Guid m_sort_id;
};

}} // namespace System::Globalization
