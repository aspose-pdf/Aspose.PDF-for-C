/// @file system/diagnostics/process_start_info.h
#ifndef _aspose_system_diagnostics_process_start_info_h_
#define _aspose_system_diagnostics_process_start_info_h_

#include "fwd.h"
#include "system/object.h"
#include "system/string.h"
#include "system/text/encoding.h"
#include "system/diagnostics/process_window_style.h"
#include "system/collections/dictionary.h"

namespace System
{
namespace Diagnostics
{

/// Describes process start parameters.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ProcessStartInfo : public System::Object
{
public:
    /// Creates empty start info object.
    ASPOSECPP_SHARED_API ProcessStartInfo();
    /// Creates start info object.
    /// @param fileName File name or path.
    ASPOSECPP_SHARED_API ProcessStartInfo(const String& fileName);
    /// Creates start info object.
    /// @param fileName File name or path.
    /// @param arguments Process arguments.
    ASPOSECPP_SHARED_API ProcessStartInfo(const String& fileName, const String& arguments);

    /// Gets NoWindow property.
    /// @return If true, no window is created, false otherwise.
    ASPOSECPP_SHARED_API bool get_CreateNoWindow() const;
    /// Sets NoWindow property.
    /// @param value If true, no window is created, false otherwise.
    ASPOSECPP_SHARED_API void set_CreateNoWindow(bool value);
    /// Gets UseShellExecute property.
    /// @return If true, shell is used to execute process, false otherwise.
    ASPOSECPP_SHARED_API bool get_UseShellExecute() const;
    /// Sets UseShellExecute property.
    /// @param value If true, shell is used to execute process, false otherwise.
    ASPOSECPP_SHARED_API void set_UseShellExecute(bool value);
    /// Gets process arguments.
    /// @return Process arguments.
    ASPOSECPP_SHARED_API String get_Arguments() const;
    /// Sets process arguments.
    /// @param value Process arguments.
    ASPOSECPP_SHARED_API void set_Arguments(const String& value);
    /// Gets RedirectStandardOutput property.
    /// @return If true, standard output is redirected, false otherwise.
    ASPOSECPP_SHARED_API bool get_RedirectStandardOutput() const;
    /// Sets RedirectStandardOutput property.
    /// @param value If true, standard output is redirected, false otherwise.
    ASPOSECPP_SHARED_API void set_RedirectStandardOutput(bool value);
    /// Gets RedirectStandardError property.
    /// @return If true, error output is redirected, false otherwise.
    ASPOSECPP_SHARED_API bool get_RedirectStandardError() const;
    /// Sets RedirectStandardError property.
    /// @param value If true, error output is redirected, false otherwise.
    ASPOSECPP_SHARED_API void set_RedirectStandardError(bool value);
    /// Gets working directory of the process.
    /// @return Process working directory path.
    ASPOSECPP_SHARED_API String get_WorkingDirectory() const;
    /// Sets working directory of the process.
    /// @param value Process working directory path.
    ASPOSECPP_SHARED_API void set_WorkingDirectory(const String& value);
    /// Gets window style.
    /// @return Process window style.
    ASPOSECPP_SHARED_API ProcessWindowStyle get_WindowStyle() const;
    /// Sets window style.
    /// @param value Process window style.
    ASPOSECPP_SHARED_API void set_WindowStyle(ProcessWindowStyle value);
    /// Gets process file name.
    /// @return Process file name or path.
    ASPOSECPP_SHARED_API String get_FileName() const;
    /// Sets process file name.
    /// @param value Process file name or path.
    ASPOSECPP_SHARED_API void set_FileName(const String& value);
    /// Gets process environment variables.
    /// @return Process environment variables.
    ASPOSECPP_SHARED_API SharedPtr<System::Collections::Generic::Dictionary<String, String>> get_EnvironmentVariables() const;

private:
    /// Process file name.
    String m_file_name;
    /// Process arguments.
    String m_arguments;
    /// Process working directory.
    String m_directory;
    /// Process window style.
    ProcessWindowStyle m_window_style;
    /// Forces executing in shell.
    bool m_use_shell_execute;
    /// User name.
    String m_user_name;
    /// Domain.
    String m_domain;
    /// Password.
    String m_password;
    /// Forces loading user profile.
    bool m_load_user_profile;
    /// Forces standard input redirection.
    bool m_redirect_standard_input;
    /// Forces standard output redirection.
    bool m_redirect_standard_output;
    /// Forces error output redirection.
    bool m_redirect_standard_error;
    /// Disables window creation.
    bool m_create_no_window;
    /// Standard output encoding.
    SharedPtr<System::Text::Encoding> m_standard_output_encoding;
    /// Error output encoding.
    SharedPtr<System::Text::Encoding> m_standard_error_encoding;
    /// Environment variables.
    SharedPtr<System::Collections::Generic::Dictionary<String, String>> m_environment_variables;
};

}
}
#endif
