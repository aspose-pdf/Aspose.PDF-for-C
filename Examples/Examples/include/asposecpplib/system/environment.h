/// @file system/environment.h
/// Contains the declaration of System::Environment class.
// may be defened in WinBase.h
#ifdef GetEnvironmentVariable
//#pragma message("!!! GetEnvironmentVariable defined, please do not include windows.h manually")
#undef GetEnvironmentVariable
#undef SetEnvironmentVariable
#undef GetCurrentDirectory
#undef SetCurrentDirectory
#endif

#ifndef _environment_h_
#define _environment_h_

#include "system/string.h"
#include "system/exceptions.h"
#include "system/version.h"
#include "system/array.h"
#include "system/operating_system.h"
#include "system/collections/dictionary.h"

// may be defened in WinBase.h
#ifdef GetEnvironmentVariable
//#pragma message("!!! GetEnvironmentVariable defined, please do not include windows.h manually")
#undef GetEnvironmentVariable
#undef SetEnvironmentVariable
#undef GetCurrentDirectory
#undef SetCurrentDirectory
#endif

namespace System
{
    /// Specifies the environment variable location.
    enum EnvironmentVariableTarget
    {
        /// Environment block associated with the current process.
        Process = 0,
        /// Registry key HKEY_CURRENT_USER\\Environment.
        User = 1,
        /// Registry key HKEY_LOCAL_MACHINE\\System\\CurrentControlSet\\Control\\Session Manager\\Environment 
        Machine = 2,
    };

    /// Environment services.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    struct Environment
    {
        /// Represents system special folders.
        enum class SpecialFolder
        {
            /// The logical Desktop
            Desktop = 0,
            /// The folder that contains the user's program groups
            Programs = 2,
            /// The folder that serves as a common repository for documents
            Personal = 5,
            /// The "My Documents" directory
            MyDocuments = 5,
            /// The folder that serves as a common repository for the user's favorite items
            Favorites = 6,
            /// The folder that corresponds to the user's Startup program group
            Startup = 7,
            /// The folder that contains the user's most recently used documents
            Recent = 8,
            /// The folder that serves as a container for the Send To menu items.
            SendTo = 9,
            /// The folder that serves as a container for the Start menu items.
            StartMenu = 11,
            /// The "My Music" directory
            MyMusic = 13,
            /// The folder that is used to physically store items on the desktop
            DesktopDirectory = 16,
            /// The "My Computer" directory
            MyComputer = 17,
            /// The folder that serves as a common container for document templates
            Templates = 21,
            /// The folder that is used to store application-specific data for the current roaming user
            ApplicationData = 26,
            /// The folder that is used to store application-specific data for the current non-roaming user
            LocalApplicationData = 28,
            /// The folder that is used as a storage for temporary Internet files
            InternetCache = 32,
            /// The folder that is used as a storage for Internet cookies
            Cookies = 33,
            /// The folder that is used as a storage for Internet history items
            History = 34,
            /// The folder that is used to store application-specific data that is used by all users
            CommonApplicationData = 35,
            /// The system folder
            System = 37,
            /// The program files folder
            ProgramFiles = 38,
            /// The "My picutres" folder
            MyPictures = 39,
            /// The directory used as a storage for components that are shared by applications
            CommonProgramFiles = 43,
        };

        /// Returns the command line used to start the current process.
        static ASPOSECPP_SHARED_API String get_CommandLine();
        /// Returns the path to the current working directory.
        static ASPOSECPP_SHARED_API String get_CurrentDirectory();                 // +
        /// Sets the specified directory as the current working directory.
        /// @param path The fully qualified path to the directory to be set as current working directory 
        static ASPOSECPP_SHARED_API void set_CurrentDirectory(const String& path); // +
        /// Returns the exit code for the current process.
        static ASPOSECPP_SHARED_API int get_ExitCode();
        /// Sets the specified value as exit code for the current process.
        /// @param value The exit code to be set for the current process
        static ASPOSECPP_SHARED_API void set_ExitCode(int value);
        /// Checks if shutdown is in progress. Not implemented.
        /// @return true if it is in progress, false otherwise.
        static ASPOSECPP_SHARED_API bool get_HasShutdownStarted();
        /// Returns the NetBIOS name of this computer.
        static ASPOSECPP_SHARED_API String get_MachineName();
        /// Returns the newline string set for the current environment.
        static ASPOSECPP_SHARED_API String get_NewLine();
        /// Returns the OperatingSystem object that contains information about the current operating system.
        static ASPOSECPP_SHARED_API const OperatingSystem& get_OSVersion();
        /// Returns the number of processors or the current machine.
        static ASPOSECPP_SHARED_API int get_ProcessorCount();
        /// Returns the string that contains the current stack trace inofrmation.
        static ASPOSECPP_SHARED_API String get_StackTrace();
        /// Returns the path to the system directory.
        static ASPOSECPP_SHARED_API String get_SystemDirectory();
        /// Returns the number of milliseconds passed since the system started.
        static ASPOSECPP_SHARED_API int get_TickCount();
        /// Returns the network domain name of the current user.
        static ASPOSECPP_SHARED_API String get_UserDomainName();
        /// Determines whether the current process is running in user interactive mode.
        /// @returns True if the current protess is running in user interactive mode, otherwise - false
        static ASPOSECPP_SHARED_API bool get_UserInteractive();
        /// Returns the name of the user currently logged on to the Windows OS.
        static ASPOSECPP_SHARED_API String get_UserName();
        /// Returns the Version object that represents the information about the version of the common language runtime.
        /// The version number returned by this method is rather dummy and does not mean that all library classes behave in accordance with the returned version.
        static ASPOSECPP_SHARED_API Version get_Version();
        /// Returns the amount of physical memory mapped to the process context.
        static ASPOSECPP_SHARED_API long get_WorkingSet();

        /// Terminates the current process and returns the specified exit code to the operating system.
        /// @param exitCode The exit code to be returned to the operating system
        static ASPOSECPP_SHARED_API void Exit(int exitCode);
        /// Replaces the names of environment variables found in the specified string with the values of those variables and returns the resulting string.
        /// @param name The string containing the names of environment varibles
        /// @returns The string that results from replacing of the varibale names in @p name with their values.
        static ASPOSECPP_SHARED_API String ExpandEnvironmentVariables(const String& name);
        /// Aborts the current process.
        /// @param message IGNORED
        static ASPOSECPP_SHARED_API void FailFast(const String& message);
        /// Returns an array containing the command-line arguments used to start the current process.
        static ASPOSECPP_SHARED_API ArrayPtr<String> GetCommandLineArgs();
        /// Returns the value of the specified environment varibale associated with the current process.
        /// @param variable The string containing the name of the variable to retrieve
        /// @returns The value of the specified variable
        static ASPOSECPP_SHARED_API String GetEnvironmentVariable(const String& variable);
        /// Returns the value of the specified environment varibale associated with the current process.
        /// @param variable The string containing the name of the variable to retrieve
        /// @returns The value of the specified variable
        static String GetEnvironmentVariableA(const String& variable) { return GetEnvironmentVariable(variable); }
        /// Returns the value of the specified environment varibale associated with the current process.
        /// @param variable The string containing the name of the variable to retrieve
        /// @returns The value of the specified variable
        static String GetEnvironmentVariableW(const String& variable) { return GetEnvironmentVariable(variable); }
        /// Returns the value of the specified environment varibale from the specified location.
        /// @param variable The string containing the name of the variable to retrieve
        /// @param target The location of the variable
        /// @returns The value of the specified variable
        static ASPOSECPP_SHARED_API String GetEnvironmentVariable(const String& variable, EnvironmentVariableTarget target);
        /// Returns a dictionary containing all environment variables names and their values associated with the current process.
        static ASPOSECPP_SHARED_API Collections::Generic::DictionaryPtr<String, String> GetEnvironmentVariables();
        /// Returns a dictionary containing all environment variables' names and their values from the specified location.
        /// @param target The location of the variables
        /// @returns A dictionary containing all environment variables' names and their values from the specified location
        static ASPOSECPP_SHARED_API Collections::Generic::DictionaryPtr<String, String> GetEnvironmentVariables(EnvironmentVariableTarget target);
        /// Returns fully qualified path to the specified system folder.
        /// @param folder Value representing the system folder 
        /// @returns Fully qualified path to the specified system folder
        static ASPOSECPP_SHARED_API String GetFolderPath(SpecialFolder folder);
        /// Returns an array containing the names of all logical drives on the current computer.
        static ASPOSECPP_SHARED_API ArrayPtr<String> GetLogicalDrives();
        /// NOT IMPLEMENTED
        static ASPOSECPP_SHARED_API void SetEnvironmentVariable(const String& variable, const String& value);
        /// NOT IMPLEMENTED
        static ASPOSECPP_SHARED_API void SetEnvironmentVariable(const String& variable, const String& value,
                                           EnvironmentVariableTarget target);
    };
}
#endif // _environment_h_
