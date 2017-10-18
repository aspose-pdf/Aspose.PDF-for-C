#ifndef _aspose_system_diagnostics_process_start_info_h_
#define _aspose_system_diagnostics_process_start_info_h_

#include "fwd.h"
#include "system/object.h"
#include "system/string.h"
#include "system/text/encoding.h"
#include "system/diagnostics/process_window_style.h"

namespace System
{
    namespace Diagnostics
    {
        class ProcessStartInfo : public System::Object
        {
        public:
            ProcessStartInfo();
            ProcessStartInfo(String fileName);
            ProcessStartInfo(String fileName, String arguments);

            bool get_CreateNoWindow() const;
            void set_CreateNoWindow(bool value);

            bool get_UseShellExecute() const;
            void set_UseShellExecute(bool value);

            String get_Arguments() const;
            void set_Arguments(String value);

            bool get_RedirectStandardOutput() const;
            void set_RedirectStandardOutput(bool value);

            bool get_RedirectStandardError() const;
            void set_RedirectStandardError(bool value);

            String get_WorkingDirectory() const;
            void set_WorkingDirectory(String value);

            ProcessWindowStyle get_WindowStyle() const;
            void set_WindowStyle(ProcessWindowStyle value);

            String get_FileName() const;
            void set_FileName(String value);

        private:
            String m_file_name;
            String m_arguments;
            String m_directory;
            String m_verb;
            ProcessWindowStyle m_window_style;
            bool m_error_dialog;
            IntPtr m_error_dialog_parent_handle;
            bool m_use_shell_execute;
            String m_user_name;
            String m_domain;
            String m_password;
            bool m_load_user_profile;

            bool m_redirect_standard_input;
            bool m_redirect_standard_output;
            bool m_redirect_standard_error;

            bool m_create_no_window;

            SharedPtr<System::Text::Encoding> m_standard_output_encoding;
            SharedPtr<System::Text::Encoding> m_standard_error_encoding;
        };

    }
}
#endif
