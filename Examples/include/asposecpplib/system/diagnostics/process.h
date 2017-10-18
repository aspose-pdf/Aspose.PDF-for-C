#ifndef ___process_h___
#define ___process_h___

#include <stdio.h>
#include "fwd.h"
#include "system/object.h"
#include "system/string.h"
#include "system/io/stream_reader.h"
#include "system/diagnostics/process_start_info.h"


namespace System
{
    namespace Diagnostics
    {
        class Process : public System::Object //Component
        {
        public:
            virtual ~Process();

            static SharedPtr<Process> GetCurrentProcess();

            bool Start();

            static SharedPtr<Process> Start(String filename, String arguments = String::Empty);
            static SharedPtr<Process> Start(SharedPtr<ProcessStartInfo> start_info);

            bool WaitForExit(int milliseconds);

            void WaitForExit();

            String get_ProcessName() const;

            SharedPtr<System::IO::StreamReader> get_StandardOutput() const;

            SharedPtr<System::IO::StreamReader> get_StandardError() const;

            int get_ExitCode() const;

            SharedPtr<ProcessStartInfo> get_StartInfo() const;

            int64_t get_PrivateMemorySize64() const;
            int64_t get_WorkingSet64() const;

        private:

            void ResetPipe();

            SharedPtr<ProcessStartInfo> m_process_start_info = System::MakeObject<ProcessStartInfo>();
            FILE* m_pipe = nullptr;
            std::string m_output;
            int m_exit_code = 0;
        };

    }
}
#endif
