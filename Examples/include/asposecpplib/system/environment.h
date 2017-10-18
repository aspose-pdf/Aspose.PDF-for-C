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

    enum EnvironmentVariableTarget
    {
        Process = 0,
        User = 1,
        Machine = 2,
    };

    struct Environment
    {
        enum class SpecialFolder
        {
            Desktop = 0,
            Programs = 2,
            Personal = 5,
            MyDocuments = 5,
            Favorites = 6,
            Startup = 7,
            Recent = 8,
            SendTo = 9,
            StartMenu = 11,
            MyMusic = 13,
            DesktopDirectory = 16,
            MyComputer = 17,
            Templates = 21,
            ApplicationData = 26,
            LocalApplicationData = 28,
            InternetCache = 32,
            Cookies = 33,
            History = 34,
            CommonApplicationData = 35,
            System = 37,
            ProgramFiles = 38,
            MyPictures = 39,
            CommonProgramFiles = 43,
        };

        static String get_CommandLine();
        static String get_CurrentDirectory();                 // +
        static void set_CurrentDirectory(const String& path); // +
        static int get_ExitCode();
        static void set_ExitCode(int value);
        static bool get_HasShutdownStarted();
        static String get_MachineName();
        static String get_NewLine();
        static const OperatingSystem& get_OSVersion();
        static int get_ProcessorCount();
        static String get_StackTrace();
        static String get_SystemDirectory();
        static int get_TickCount();
        static String get_UserDomainName();
        static bool get_UserInteractive();
        static String get_UserName();
        static Version get_Version();
        static long get_WorkingSet();

        static void Exit(int exitCode);
        static String ExpandEnvironmentVariables(const String& name);
        static void FailFast(const String& message);
        static ArrayPtr<String> GetCommandLineArgs();
        static String GetEnvironmentVariable(const String& variable);
        static String GetEnvironmentVariableA(const String& variable) { return GetEnvironmentVariable(variable); }
        static String GetEnvironmentVariableW(const String& variable) { return GetEnvironmentVariable(variable); }
        static String GetEnvironmentVariable(const String& variable, EnvironmentVariableTarget target);
        static Collections::Generic::DictionaryPtr<String, String> GetEnvironmentVariables();
        static Collections::Generic::DictionaryPtr<String, String> GetEnvironmentVariables(EnvironmentVariableTarget target);
        static String GetFolderPath(SpecialFolder folder);
        static ArrayPtr<String> GetLogicalDrives();
        static void SetEnvironmentVariable(const String& variable, const String& value);
        static void SetEnvironmentVariable(const String& variable, const String& value,
                                           EnvironmentVariableTarget target);
    };
}
#endif // _environment_h_