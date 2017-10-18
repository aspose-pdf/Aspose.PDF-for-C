#ifndef _aspose_system_io_path_h_
#define _aspose_system_io_path_h_

#include <system/exceptions.h>
#include <system/array.h>
#include <system/string.h>

#ifdef GetCurrentDirectory
#pragma message("!!! GetCurrentDirectory defined, please do not include windows.h manually")
#undef GetCurrentDirectory
#undef SetCurrentDirectory
#endif

namespace boost { namespace filesystem {
    class path;
} }

namespace System { namespace IO {

class File;
class Directory;

    class Path
    {
    public:
        static String ChangeExtension(const String& path, const String& extension);

        static String Combine(ArrayPtr<String> paths);
        static String Combine(const String& path1, const String& path2);
        static String Combine(const String& path1, const String& path2, const String& path3);
        static String Combine(const String& path1, const String& path2, const String& path3, const String& path4);

        static String GetDirectoryName(const String& path);
        static String GetExtension(const String& path);
        static String GetFileName(const String& path);
        static String GetFileNameWithoutExtension(const String& path);
        static String GetFullPath(const String& path);

        static ArrayPtr<wchar_t> GetInvalidFileNameChars();
        static ArrayPtr<wchar_t> GetInvalidPathChars();

        static String GetPathRoot(const String& path);
        static String GetRandomFileName();
        static String GetTempFileName_();
        static String GetTempFileNameSafe();
        static String GetTempPath();
        static bool HasExtension(const String& path);
        static bool IsPathRooted(const String& path);

        static const wchar_t ASPOSECPP_SHARED_API AltDirectorySeparatorChar;
        static const wchar_t ASPOSECPP_SHARED_API DirectorySeparatorChar;
        static const wchar_t ASPOSECPP_SHARED_API PathSeparator;
        static const wchar_t ASPOSECPP_SHARED_API VolumeSeparatorChar;

        static void CheckPath(const String& path, const String& msg = L"path", bool allow_empty = true);

        static String ToString(const boost::filesystem::path& path);
        static boost::filesystem::path ToBoost(const String& path);

        static String NormalizePath(const String& path);

    private:

        static ArrayPtr<wchar_t> ASPOSECPP_SHARED_API InvalidPathChars;
        static bool HasInvalidChars(const String& path);
        static String CombineNoCheck(String path1, String path2);

        //Is DirectorySeparatorChar
        static bool IsDSC(wchar_t ch);

        static bool IsSeparatorChar(wchar_t ch);

        static String NormalizePath_(boost::filesystem::path path);
    };
}}

#endif // _aspose_system_io_path_h_