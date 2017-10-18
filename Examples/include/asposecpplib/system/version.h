#ifndef _version_h_
#define _version_h_

#include "system/string.h"

namespace System
{
    class Version
    {
    public:
        Version(int major, int minor, int build, int revision);
        Version(int major, int minor, int build);
        Version(int major, int minor);
        Version(const String& version);
        Version();

        int get_Major() const;
        int get_Minor() const;
        int get_Build() const;
        int get_Revision() const;
        int16_t get_MajorRevision() const;
        int16_t get_MinorRevision() const;

        int CompareTo(const Version& ver) const;

        int GetHashCode() const;

        bool Equals(const Version& ver) const;

        String ToString() const;
        String ToString(int fieldCount) const;

        // .NET 2.0 does not have this method
        static Version Parse(const String& input);

        friend bool operator==(const Version& lhs, const Version& rhs);
        friend bool operator!=(const Version& lhs, const Version& rhs);
        friend bool operator<(const Version& lhs, const Version& rhs);
        friend bool operator<=(const Version& lhs, const Version& rhs);
        friend bool operator>(const Version& lhs, const Version& rhs);
        friend bool operator>=(const Version& lhs, const Version& rhs);

    private:
        int m_major;
        int m_minor;
        int m_build;
        int m_revision;
    };

}

#endif // _version_h_