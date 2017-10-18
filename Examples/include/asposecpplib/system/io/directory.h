#ifndef _aspose_system_io_directory_h_
#define _aspose_system_io_directory_h_

#include "system/array.h"
#include "system/io/search_option.h"
#include "system/io/file_attributes.h"
#include "system/io/file.h"
#include "system/io/directory_info.h"
#include "system/collections/ienumerable.h"
#include "system/date_time.h"

namespace System { namespace IO {

    class Directory {
    public:
        static void CreateDirectory_(const String& path);
        static void Delete(const String& path, bool recursive = false);

        using StringEnumerablePtr = SharedPtr<Collections::Generic::IEnumerable<String>>;

        static StringEnumerablePtr EnumerateDirectories(const String& path, const String& searchPattern = L"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);
        static StringEnumerablePtr EnumerateFiles(const String& path, const String& searchPattern = L"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);
        static StringEnumerablePtr EnumerateFileSystemEntries(const String& path, const String& searchPattern = L"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);

        static ArrayPtr<String> GetDirectories(const String& path, const String& searchPattern = L"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);
        static ArrayPtr<String> GetFiles(const String& path, const String& searchPattern = L"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);
        static ArrayPtr<String> GetFileSystemEntries(const String& path, const String& searchPattern = L"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);

        static ArrayPtr<String> GetLogicalDrives();

        static bool Exists(const String& path);

        static DateTime GetCreationTime(const String& path);
        static DateTime GetCreationTimeUtc(const String& path);
        static DateTime GetLastAccessTime(const String& path);
        static DateTime GetLastAccessTimeUtc(const String& path);
        static DateTime GetLastWriteTime(const String& path);
        static DateTime GetLastWriteTimeUtc(const String& path);

        static void SetCreationTime(const String& path, DateTime date);
        static void SetCreationTimeUtc(const String& path, DateTime date);
        static void SetLastAccessTime(const String& path, DateTime date);
        static void SetLastAccessTimeUtc(const String& path, DateTime date);
        static void SetLastWriteTime(const String& path, DateTime date);
        static void SetLastWriteTimeUtc(const String& path, DateTime date);

        static String GetCurrentDirectory();
        static String GetDirectoryRoot(const String& path);
        static DirectoryInfoPtr GetParent(const String& path);

        static void Move(const String& sourceDirName, const String& destDirName);
        static void SetCurrentDirectory(const String& path);

    private:

        static ArrayPtr<String> GetEntries(const String& path, const String& searchPattern, SearchOption searchOption, FileAttributes attr);
        static void GetEntries(const String& path, const String& searchPattern, FileAttributes attr, ArrayPtr<String> list);
        static ArrayPtr<String> GetEntries(const String& path, const String& searchPattern, FileAttributes attr);
        static bool match(const String& str, const String& mask);

    };

}}

#endif // _aspose_system_io_directory_h_

