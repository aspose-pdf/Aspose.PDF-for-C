/// @file system/io/directory.h
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
    /// Contains methods for manipulating directories.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    class Directory {
    public:
        /// Creates all directories in the specified path if those don't exist.
        /// @param path The path containing the directories to create
        static ASPOSECPP_SHARED_API void CreateDirectory_(const String& path);
        /// Removes the specified file or directory. Does not throw.
        /// @param path The path to the directory or file to be removed
        /// @param recursive If @p path spacifies a non-empty directory then @p recursive specifies if
        /// if all directory's content should be removed recursively; if the directory specified by @p path
        /// is not empty and @p recursive is 'false' then the operation fails
        static ASPOSECPP_SHARED_API void Delete(const String& path, bool recursive = false);

        /// An alias for a shared pointer to IEnumerable object that enumerates over a set of String objects.
        using StringEnumerablePtr = SharedPtr<Collections::Generic::IEnumerable<String>>;

        /// Searches for the directories that satisfy the specified search criteria either in the specified directory or in the whole 
        /// directory tree rooted in the specified directory.
        /// @param path Full or relative path to the directory to search in
        /// @param searchPattern The name pattern of the directories to search for
        /// @param searchOption Specifies whether the search has to be performed in the specified directory only or in the
        /// whole directory tree rooted in the specified directory
        /// @returns The enumerable collection of full paths of the found directories whose names match @p searchPattern
        static ASPOSECPP_SHARED_API StringEnumerablePtr EnumerateDirectories(const String& path, const String& searchPattern = u"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);
        /// Searches for the files that satisfy the specified search criteria either in the specified directory or in the whole 
        /// directory tree rooted in the specified directory.
        /// @param path Full or relative path to the directory to search in
        /// @param searchPattern The name pattern of the files to search for
        /// @param searchOption Specifies whether the search has to be performed in the specified directory only or in the
        /// whole directory tree rooted in the specified directory
        /// @returns The enumerable collection of full paths of the found files whose names match @p searchPattern
        static ASPOSECPP_SHARED_API StringEnumerablePtr EnumerateFiles(const String& path, const String& searchPattern = u"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);
        /// Searches for the files and directories that satisfy the specified search criteria either in the specified directory or in the whole 
        /// directory tree rooted in the specified directory.
        /// @param path Full or relative path to the directory to search in
        /// @param searchPattern The name pattern of the files and directories to search for
        /// @param searchOption Specifies whether the search has to be performed in the specified directory only or in the
        /// whole directory tree rooted in the specified directory
        /// @returns The enumerable collection of full paths of the found files and directories whose names match @p searchPattern
        static StringEnumerablePtr EnumerateFileSystemEntries(const String& path, const String& searchPattern = u"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);

        /// Searches for the directories that satisfy the specified search criteria either in the specified directory or in the whole 
        /// directory tree rooted in the specified directory.
        /// @param path Full or relative path to the directory to search in
        /// @param searchPattern The name pattern of the directories to search for
        /// @param searchOption Specifies whether the search has to be performed in the specified directory only or in the
        /// whole directory tree rooted in the specified directory
        /// @returns An array of full paths of the found directories whose names match @p searchPattern
        static ASPOSECPP_SHARED_API ArrayPtr<String> GetDirectories(const String& path, const String& searchPattern = u"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);
        /// Searches for the files that satisfy the specified search criteria either in the specified directory or in the whole 
        /// directory tree rooted in the specified directory.
        /// @param path Full or relative path to the directory to search in
        /// @param searchPattern The name pattern of the files to search for
        /// @param searchOption Specifies whether the search has to be performed in the specified directory only or in the
        /// whole directory tree rooted in the specified directory
        /// @returns An array of full paths of the found files whose names match @p searchPattern
        static ASPOSECPP_SHARED_API ArrayPtr<String> GetFiles(const String& path, const String& searchPattern = u"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);
        /// Searches for the files and directories that satisfy the specified search criteria either in the specified directory or in the whole 
        /// directory tree rooted in the specified directory.
        /// @param path Full or relative path to the directory to search in
        /// @param searchPattern The name pattern of the files and directories to search for
        /// @param searchOption Specifies whether the search has to be performed in the specified directory only or in the
        /// whole directory tree rooted in the specified directory
        /// @returns An array of full paths of the found files and directories whose names match @p searchPattern
        static ASPOSECPP_SHARED_API ArrayPtr<String> GetFileSystemEntries(const String& path, const String& searchPattern = u"*", SearchOption searchOption = SearchOption::TopDirectoryOnly);

        /// NOT IMPLEMENTED
        /// @throws IOException Always
        static ASPOSECPP_SHARED_API ArrayPtr<String> GetLogicalDrives();

        /// Determines if the specified path refers to existing directory.
        /// @param path The path to check
        /// @returns True if the specified path refers to existing directory, otherwise - false
        static ASPOSECPP_SHARED_API bool Exists(const String& path);

        /// Returns the creation time of the specified entity as local time.
        /// @param path The entity whose creating time to retrieve
        /// @returns A DateTime object representing the creation time of the specified entity as local time
        static ASPOSECPP_SHARED_API DateTime GetCreationTime(const String& path);
        /// Returns the creation time of the specified entity as UTC time.
        /// @param path The entity whose creating time to retrieve
        /// @returns A DateTime object representing the creation time of the specified entity as UTC time
        static ASPOSECPP_SHARED_API DateTime GetCreationTimeUtc(const String& path);
        /// Returns the last access time of the specified entity as local time.
        /// @param path The entity whose last access time to retrieve
        /// @returns A DateTime object representing the last access time of the specified entity as local time
        static ASPOSECPP_SHARED_API DateTime GetLastAccessTime(const String& path);
        /// Returns the last access time of the specified entity as UTC time.
        /// @param path The entity whose last access time to retrieve
        /// @returns A DateTime object representing the last access time of the specified entity as UTC time
        static ASPOSECPP_SHARED_API DateTime GetLastAccessTimeUtc(const String& path);
        /// Returns the last write time of the specified entity as local time.
        /// @param path The entity whose last write time to retrieve
        /// @returns A DateTime object representing the last write time of the specified entity as local time
        static ASPOSECPP_SHARED_API DateTime GetLastWriteTime(const String& path);
        /// Returns the last write time of the specified entity as UTC time.
        /// @param path The entity whose last write time to retrieve
        /// @returns A DateTime object representing the last write time of the specified entity as UTC time
        static ASPOSECPP_SHARED_API DateTime GetLastWriteTimeUtc(const String& path);

        /// Sets the creation time of the specified entity as local time.
        /// @param path The entity whose creating time to set
        /// @param date A DateTime object representing the time to set as local time
        static ASPOSECPP_SHARED_API void SetCreationTime(const String& path, DateTime date);
        /// Sets the creation time of the specified entity as UTC time.
        /// @param path The entity whose creating time to set
        /// @param date A DateTime object representing the time to set as UTC time
        static ASPOSECPP_SHARED_API void SetCreationTimeUtc(const String& path, DateTime date);
        /// Sets the last access time of the specified entity as local time.
        /// @param path The entity whose last access time to set
        /// @param date A DateTime object representing the time to set as local time
        static ASPOSECPP_SHARED_API void SetLastAccessTime(const String& path, DateTime date);
        /// Sets the last access time of the specified entity as UTC time.
        /// @param path The entity whose last access time to set
        /// @param date A DateTime object representing the time to set as UTC time
        static ASPOSECPP_SHARED_API void SetLastAccessTimeUtc(const String& path, DateTime date);
        /// Sets the last write time of the specified entity as local time.
        /// @param path The entity whose last write time to set
        /// @param date A DateTime object representing the time to set as local time
        static ASPOSECPP_SHARED_API void SetLastWriteTime(const String& path, DateTime date);
        /// Sets the last write time of the specified entity as UTC time.
        /// @param path The entity whose last write time to set
        /// @param date A DateTime object representing the time to set as UTC time
        static ASPOSECPP_SHARED_API void SetLastWriteTimeUtc(const String& path, DateTime date);

        /// Returns the full name (including path) of the current directory.
        static ASPOSECPP_SHARED_API String GetCurrentDirectory();

        /// Returns the root directory of the specified path.
        /// @param path A path from which a root directory is to be obtained
        /// @returns The name of the root directory in @p path
        static ASPOSECPP_SHARED_API String GetDirectoryRoot(const String& path);

        /// Returns a shared pointer to DirectoryInfo object representing the parent directory of the specified entity.
        /// @param path The path to the entity whose parent is to be obtained
        /// @returns A shared pointer to DirectoryInfo object representing the parent directory of the entity specified by @p path
        static ASPOSECPP_SHARED_API DirectoryInfoPtr GetParent(const String& path);

        /// Moves the specified entity to the new location. If the entity to move is a directory, it is moved
        /// with all its content.
        /// @param sourceDirName A direcotry or file to move
        /// @param destDirName The new location of @p sourceDirName
        static ASPOSECPP_SHARED_API void Move(const String& sourceDirName, const String& destDirName);
        /// Sets the current directory.
        /// @param path The path to the directory to make current
        static ASPOSECPP_SHARED_API void SetCurrentDirectory(const String& path);

    private:
        /// Searches for the entries that satisfy the specified search criteria either in the specified directory or in the whole 
        /// directory tree rooted in the specified directory.
        /// @param path Full or relative path to the directory to search in
        /// @param searchPattern The name pattern of the entries to search for
        /// @param searchOption Specifies whether the search has to be performed in the specified directory only or in the
        /// whole directory tree rooted in the specified directory
        /// @param attr A bitwise combination of FileAttributes values specifying the attributes of the entities to look for
        /// @returns An array of full paths of the found entities whose names match @p searchPattern and that have at least one 
        /// attribute specified in @p attr  
        static ArrayPtr<String> GetEntries(const String& path, const String& searchPattern, SearchOption searchOption, FileAttributes attr);
        /// Searches for the entries that satisfy the specified search criteria in all directories of the directory tree rooted in the specified directory.
        /// @param path Full or relative path to the directory which is the root of the directory tree to search in
        /// @param searchPattern The name pattern of the entries to search for
        /// @param attr A bitwise combination of FileAttributes values specifying the attributes of the entities to look for
        /// @param list The output argument; Contains the full paths of the entities located in directory tree rooted in @p path directory
        /// whose names match @p searchPattern and that have at least one attribute specified in @p attr 
        static void GetEntries(const String& path, const String& searchPattern, FileAttributes attr, const ArrayPtr<String>& list);
        /// Searches for the entries that satisfy the specified search criteria in the specified directory.
        /// @param path Full or relative path to the directory to search in
        /// @param searchPattern The name pattern of the entries to search for
        /// @param attr A bitwise combination of FileAttributes values specifying the attributes of the entities to look for
        /// @returns An array of full paths to the entities in @p path whose names match @p searchPattern and that have at least one 
        /// attribute specified in @p attr 
        static ArrayPtr<String> GetEntries(const String& path, const String& searchPattern, FileAttributes attr);
        /// Determines if the specified string matches the specified pattern.
        /// @param str The string to check
        /// @param mask The pattern to match @p str against
        /// @returns True if @p str matches @p mask, otherwise - false
        static bool match(const String& str, const String& mask);

    };

}}

#endif // _aspose_system_io_directory_h_

