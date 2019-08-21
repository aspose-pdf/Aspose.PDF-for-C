/// @file system/version.h
/// Contains the declaration System::Version class.
#ifndef _version_h_
#define _version_h_

#include "system/string.h"

namespace System
{

/// Represents a version number.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS Version
{
public:
    /// Constructs an instance that represent the specified major, minor, build and revsion values.
    /// @param major The major version number
    /// @param minor The minor version numebr
    /// @param build The build number
    /// @param revision The revision number
    ASPOSECPP_SHARED_API Version(int major, int minor, int build, int revision);
    /// Constructs an instance that represent the specified major, minor and build values.
    /// @param major The major version number
    /// @param minor The minor version numebr
    /// @param build The build number
    ASPOSECPP_SHARED_API Version(int major, int minor, int build);
    /// Constructs an instance that represent the specified major and values.
    /// @param major The major version number
    /// @param minor The minor version numebr
    ASPOSECPP_SHARED_API Version(int major, int minor);
    /// Constructs an instance that represent the version number represented as a string.
    /// @param version The string containing a version number
    ASPOSECPP_SHARED_API Version(const String& version);
    /// Constructs an instance that represents version number 0.0.-1.-1 
    ASPOSECPP_SHARED_API Version();

    /// Returns the major version
    ASPOSECPP_SHARED_API int get_Major() const;
    /// Returns the minor version
    ASPOSECPP_SHARED_API int get_Minor() const;
    /// Returns the build number
    ASPOSECPP_SHARED_API int get_Build() const;
    /// Returns the revision number
    ASPOSECPP_SHARED_API int get_Revision() const;
    /// Returns the high 16-bit value of the revision number
    ASPOSECPP_SHARED_API int16_t get_MajorRevision() const;
    /// Returns the low 16-bit value of the revision number
    ASPOSECPP_SHARED_API int16_t get_MinorRevision() const;
    /// Compares the versions represented by the current object and the specified object.
    /// @param ver A Version object to compare with the current object
    /// @returns -1 if the version number represented by the current object is less than that represented by @p ver; 0 if the version numbers are equal; 1 if the version number represented by the current object is greater than the value represented by @p ver
    ASPOSECPP_SHARED_API int CompareTo(const Version& ver) const;
    /// Returns a hash code for the current object.
    ASPOSECPP_SHARED_API int GetHashCode() const;
    /// Determines if the version numbers represented by the current and the specified objects are equal.
    /// @param ver A Version object to compare the current object with
    /// @returns True if version numbers represented by the current object and the specified object are equal, otherwise - false
    ASPOSECPP_SHARED_API bool Equals(const Version& ver) const;

    /// Returns the string representation of the version number represented by the current object.
    ASPOSECPP_SHARED_API String ToString() const;
    /// Returns the string representation of the specified number of sections of version number represented by the current object.
    /// @param fieldCount The number of sections of the version number to include in the string representation returned
    /// @returns The string representation of the version number represented by the current object
    ASPOSECPP_SHARED_API String ToString(int fieldCount) const;

    // .NET 2.0 does not have this method
    /// Converts the string representation of a version number into equivalent instance of Version class.
    /// @param input A string containing the string representation of a version number
    /// @returns An instance of Version class that represents the version number equivalent to that represented by the @p input
    static ASPOSECPP_SHARED_API Version Parse(const String& input);

    /// Determines if the version numbers represented by the specified Version objects are equal.
    /// @param lhs The first comparand
    /// @param rhs The second comparand
    /// @returns True if the version numbers represented by @p lhs and @p rhs are equal, otherwise - false
    friend ASPOSECPP_SHARED_API bool operator==(const Version& lhs, const Version& rhs);
    /// Determines if the version numbers represented by the specified Version objects are not equal.
    /// @param lhs The first comparand
    /// @param rhs The second comparand
    /// @returns True if the version numbers represented by @p lhs and @p rhs are not equal, otherwise - false
    friend ASPOSECPP_SHARED_API bool operator!=(const Version& lhs, const Version& rhs);
    /// Determines the relation between the version numbers represented by the specified Version objects
    /// @param lhs The first comparand
    /// @param rhs The second comparand
    /// @returns True if the version number represented by @p lhs is less than the version number represented @p rh, otherwise - false
    friend ASPOSECPP_SHARED_API bool operator<(const Version& lhs, const Version& rhs);
    /// Determines the relation between the version numbers represented by the specified Version objects
    /// @param lhs The first comparand
    /// @param rhs The second comparand
    /// @returns True if the version number represented by @p lhs is less than or equal to the version number represented @p rh, otherwise - false
    friend ASPOSECPP_SHARED_API bool operator<=(const Version& lhs, const Version& rhs);
    /// Determines the relation between the version numbers represented by the specified Version objects
    /// @param lhs The first comparand
    /// @param rhs The second comparand
    /// @returns True if the version number represented by @p lhs is greater than the version number represented @p rh, otherwise - false
    friend ASPOSECPP_SHARED_API bool operator>(const Version& lhs, const Version& rhs);
    /// Determines the relation between the version numbers represented by the specified Version objects
    /// @param lhs The first comparand
    /// @param rhs The second comparand
    /// @returns True if the version number represented by @p lhs is greater than or equal to the version number represented @p rh, otherwise - false
    friend ASPOSECPP_SHARED_API bool operator>=(const Version& lhs, const Version& rhs);

private:
    /// The major version number
    int m_major;
    /// The minor version number
    int m_minor;
    /// The build numeber
    int m_build;
    /// The revision numebr
    int m_revision;
};

}

#endif // _version_h_
