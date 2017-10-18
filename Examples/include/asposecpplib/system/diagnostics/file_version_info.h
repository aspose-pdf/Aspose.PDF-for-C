#ifndef _file_version_info_h_
#define _file_version_info_h_

#include "fwd.h"
#include "system/string.h"

namespace System { namespace Diagnostics { 
class FileVersionInfo
{
public:

    static SharedPtr<System::Diagnostics::FileVersionInfo> GetVersionInfo(String fileName);
    String get_ProductVersion() const;

private:
    String m_file_name;
    String m_company_name;
    String m_file_description;
    String m_file_version;
    String m_internal_name;
    String m_legal_copyright;
    String m_original_filename;
    String m_product_name;
    String m_product_version;
    String m_comments;
    String m_legal_trademarks;
    String m_private_build;
    String m_special_build;
    String m_language;
    int m_file_major;
    int m_file_minor;
    int m_file_build;
    int m_file_private;
    int m_product_major;
    int m_product_minor;
    int m_product_build;
    int m_product_private;
    int m_file_flags;

};
    
}}
#endif