/// @file system/diagnostics/process.h
#ifndef _aspose_system_diagnostics_process_h_
#define _aspose_system_diagnostics_process_h_

#include <stdio.h>
#include "fwd.h"
#include "system/object.h"
#include "system/string.h"
#include "system/io/stream_reader.h"
#include "system/diagnostics/process_start_info.h"

#if !_WIN32
#include <sys/types.h>
#endif

namespace System { namespace Diagnostics {

/// Encapsulates process information and manipulation.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Process : public System::Object //Component
{
public:
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~Process();

    /// Gets information on current process.
    /// Windows only.
    static ASPOSECPP_SHARED_API SharedPtr<Process> GetCurrentProcess();

    /// Starts process with pre-defined parameters.
    ASPOSECPP_SHARED_API bool Start();

    /// Starts process with specified path and arguments.
    /// @param filename Process path.
    /// @param arguments Process parameters.
    /// @return Object attached to newly started process.
    static ASPOSECPP_SHARED_API SharedPtr<Process> Start(const String& filename, const String& arguments = String::Empty);
    /// Starts process with specified path and arguments.
    /// @param start_info Information on process to start.
    /// @return Object attached to newly started process.
    static ASPOSECPP_SHARED_API SharedPtr<Process> Start(const SharedPtr<ProcessStartInfo>& start_info);

    /// Waits for process to exit. Not implemented.
    /// @param milliseconds Maximum waiting delay.
    /// @return True if process is finished, false if timeout exceeds.
    ASPOSECPP_SHARED_API bool WaitForExit(int milliseconds);
    /// Waits for process to exit, doesn't return until it's over.
    ASPOSECPP_SHARED_API void WaitForExit();

    /// Gets process name.
    /// @return Process name.
    ASPOSECPP_SHARED_API String get_ProcessName() const;

    /// Provides reader to read from process standard output. Not implemented.
    ASPOSECPP_SHARED_API SharedPtr<System::IO::StreamReader> get_StandardOutput() const;
    /// Provides reader to read from process error output. Not implemented.
    ASPOSECPP_SHARED_API SharedPtr<System::IO::StreamReader> get_StandardError() const;
    /// Gets process exit code.
    /// @return Process exit code.
    ASPOSECPP_SHARED_API int get_ExitCode() const;
    /// Gets process start information.
    /// @return Object encapsulating process start information.
    ASPOSECPP_SHARED_API SharedPtr<ProcessStartInfo> get_StartInfo() const;
    /// Gets process private memory set size. Windows only.
    /// @return Process private memory size.
    ASPOSECPP_SHARED_API int64_t get_PrivateMemorySize64() const;
    /// Gets process memory working set size. Windows only.
    /// @return Process memory working set size.
    ASPOSECPP_SHARED_API int64_t get_WorkingSet64() const;

    /// Gets process output text.
    /// @return Process output text.
    ASPOSECPP_SHARED_API String GetOutputText() const;

private:
    /// Detaches from precess (if attached).
    ASPOSECPP_SHARED_API void ResetPipe();

    /// Process start info.
    SharedPtr<ProcessStartInfo> m_process_start_info = System::MakeObject<ProcessStartInfo>();
    /// Pipe connected to process.
    FILE* m_pipe = nullptr;
    /// Process output.
    std::string m_output;
    /// Process exit code.
    int m_exit_code = 0;
#if _WIN32
    /// Process handle.
    void* m_process_handle = 0x0;
#else
    pid_t m_pid = 0;
#endif
};

}}
#endif
