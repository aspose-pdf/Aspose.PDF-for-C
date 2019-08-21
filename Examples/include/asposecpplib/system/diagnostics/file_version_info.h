/// @file system/diagnostics/file_version_info.h
#ifndef _file_version_info_h_
#define _file_version_info_h_

#include "fwd.h"
#include "system/string.h"

namespace System { namespace Diagnostics { 

/// Provides information on file version.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS FileVersionInfo
{
public:
    /// Gets file version info; not implemented.
    /// @param fileName Path to file to get information for.
    static ASPOSECPP_SHARED_API SharedPtr<System::Diagnostics::FileVersionInfo> GetVersionInfo(const String& fileName);
    /// Gets product version field.
    /// @return Product version string.
    String ASPOSECPP_SHARED_API get_ProductVersion() const;

private:
    /// File name.
    String m_file_name;
    /// Company name.
    String m_company_name;
    /// File description.
    String m_file_description;
    /// File version.
    String m_file_version;
    /// Internal name.
    String m_internal_name;
    /// Legal copyright.
    String m_legal_copyright;
    /// Original filename.
    String m_original_filename;
    /// Product name.
    String m_product_name;
    /// Product version.
    String m_product_version;
    /// Comments.
    String m_comments;
    /// Trademarks.
    String m_legal_trademarks;
    /// Private build information.
    String m_private_build;
    /// Special build information.
    String m_special_build;
    /// Language information.
    String m_language;
    /// Major file version.
    int m_file_major;
    /// Minor file version.
    int m_file_minor;
    /// File build number.
    int m_file_build;
    /// File private version.
    int m_file_private;
    /// Major product version.
    int m_product_major;
    /// Minor product version.
    int m_product_minor;
    /// Product build number.
    int m_product_build;
    /// Product private version
    int m_product_private;
    /// Flags.
    int m_file_flags;

};
    
}}
#endif
