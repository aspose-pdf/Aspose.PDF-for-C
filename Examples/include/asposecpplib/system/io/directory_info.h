/// @file system/io/directory_info.h
#ifndef _directory_info_h_
#define _directory_info_h_

#include "fwd.h"
#include "system/object.h"
#include "system/io/directory.h"
#include "system/io/file_system_info.h"
#include "system/io/file_info.h"
#include "system/io/search_option.h"
#include "system/collections/ienumerable.h"

namespace System { namespace IO {
    /// Represents a file system path, a directory referred to by this path and provides instance
    /// methods for manipulating directories.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS DirectoryInfo : public FileSystemInfo {
        /// An alias for System::Collections::Generic::IEnumerable template.
        template<class T>
        using IEnumerable = System::Collections::Generic::IEnumerable<T>;

    public:
        /// Constructs an instnace of DirectoryInfo class on the specified path.
        /// @param path A path on which to create an instance; the path does not have to refer to existing entity
        ASPOSECPP_SHARED_API DirectoryInfo(const String& path);

        //***** Properties
        /// Determines if the path represented by the current object refers to existing directory.
        /// @returns True if the path refers to existing directory, otherwise - false
        virtual ASPOSECPP_SHARED_API bool get_Exists() override;
        /// Returns the name of the entity referred to by the path represented by the current object. 
        virtual ASPOSECPP_SHARED_API String get_Name() override;
        /// Returns a shared pointer to DirectoryInfo object that represents a path referring the parent directory
        /// of the directory represented by the current object.
        ASPOSECPP_SHARED_API DirectoryInfoPtr get_Parent();
        /// Returns a shared pointer to DirectoryInfo object that represents a path referring the root directory
        /// of the directory represented by the current object.
        ASPOSECPP_SHARED_API DirectoryInfoPtr get_Root();

        //***** Methods
        /// Creates a directory at the path represented by the current object.
        ASPOSECPP_SHARED_API void Create();

        /// Creates subdirectories on the specified path.
        /// @param path The specified path
        /// @returns The last directory specified in @p path.
        ASPOSECPP_SHARED_API DirectoryInfoPtr CreateSubdirectory(const String& path);
        /// Removes the directory referred to by the path represented by the current object if the directory is empty.
        virtual ASPOSECPP_SHARED_API void Delete() override; //delete current if empty
        /// Removes the directory referred to by the path represented by the current object. A parameter specifies if 
        /// the content of the directory should be recursively removed if the directory is not empty.
        /// @param recursive Specifies if the content of the directory should be recursively removed if it is not empty
        ASPOSECPP_SHARED_API void Delete(bool recursive);

        /// Returns enumerable collection containing all directories located in the directory represented by the 
        /// current object.
        ASPOSECPP_SHARED_API SharedPtr<IEnumerable<DirectoryInfoPtr> > EnumerateDirectories();
        /// Searches for the directories that satisfy the specified search criteria in the directory represented by the 
        /// current object.
        /// @param searchPattern The name pattern of the directories to search for
        /// @returns The enumerable collection of shared pointers to DirectoryInfo objects representing
        /// the found directories whose names match @p searchPattern
        ASPOSECPP_SHARED_API SharedPtr<IEnumerable<DirectoryInfoPtr> > EnumerateDirectories(const String& searchPattern);
        /// Searches for the directories that satisfy the specified search criteria either in the directory represented by the 
        /// current object or in the whole directory tree rooted in the directory represented by the current object.
        /// @param searchPattern The name pattern of the directories to search for
        /// @param searchOption Specifies whether the search has to be performed in the directory represented by the current object
        /// only or in the whole directory tree rooted in the directory represented by the current object
        /// @returns The enumerable collection of shared pointers to DirectoryInfo objects representing
        /// the found directories whose names match @p searchPattern
        ASPOSECPP_SHARED_API SharedPtr<IEnumerable<DirectoryInfoPtr> > EnumerateDirectories(const String& searchPattern, SearchOption searchOption);

        /// Returns enumerable collection containing all files located in the directory represented by the 
        /// current object.
        ASPOSECPP_SHARED_API SharedPtr<IEnumerable<FileInfoPtr> > EnumerateFiles();
        /// Searches for the files that satisfy the specified search criteria in the directory represented by the 
        /// current object.
        /// @param searchPattern The name pattern of the files to search for
        /// @returns The enumerable collection of shared pointers to FileInfo objects representing
        /// the found files whose names match @p searchPattern
        ASPOSECPP_SHARED_API SharedPtr<IEnumerable<FileInfoPtr> > EnumerateFiles(const String& searchPattern);
        /// Searches for the files that satisfy the specified search criteria either in the directory represented by the 
        /// current object or in the whole directory tree rooted in the directory represented by the current object.
        /// @param searchPattern The name pattern of the files to search for
        /// @param searchOption Specifies whether the search has to be performed in the directory represented by the current object
        /// only or in the whole directory tree rooted in the directory represented by the current object
        /// @returns The enumerable collection of shared pointers to FileInfo objects representing
        /// the found files whose names match @p searchPattern
        ASPOSECPP_SHARED_API SharedPtr<IEnumerable<FileInfoPtr> > EnumerateFiles(const String& searchPattern, SearchOption searchOption);

        /// Returns enumerable collection containing all files and directories located in the directory represented by the 
        /// current object.
        ASPOSECPP_SHARED_API SharedPtr<IEnumerable<FileSystemInfoPtr> > EnumerateFileSystemInfos();
        /// Searches for the files and directories that satisfy the specified search criteria in the directory represented by the 
        /// current object.
        /// @param searchPattern The name pattern of the files and directories to search for
        /// @returns The enumerable collection of shared pointers to FileSystemInfo objects representing
        /// the found files and directories whose names match @p searchPattern
        ASPOSECPP_SHARED_API SharedPtr<IEnumerable<FileSystemInfoPtr> > EnumerateFileSystemInfos(const String& searchPattern);
        /// Searches for the files and directories that satisfy the specified search criteria either in the directory represented by the 
        /// current object or in the whole directory tree rooted in the directory represented by the current object.
        /// @param searchPattern The name pattern of the files and directories to search for
        /// @param searchOption Specifies whether the search has to be performed in the directory represented by the current object
        /// only or in the whole directory tree rooted in the directory represented by the current object
        /// @returns The enumerable collection of shared pointers to FileSystemInfo objects representing
        /// the found files and directories whose names match @p searchPattern
        ASPOSECPP_SHARED_API SharedPtr<IEnumerable<FileSystemInfoPtr> > EnumerateFileSystemInfos(const String& searchPattern, SearchOption searchOption);

        /// Returns an array containing shared pointers to DirectoryInfo objects representing all directories located in the 
        /// directory represented by the current object.
        ASPOSECPP_SHARED_API ArrayPtr<DirectoryInfoPtr> GetDirectories();
        /// Searches for the directories that satisfy the specified search criteria in the directory represented by the 
        /// current object.
        /// @param searchPattern The name pattern of the directories to search for
        /// @returns An array of shared pointers to DirectoryInfo objects representing the found directories 
        /// whose names match @p searchPattern
        ASPOSECPP_SHARED_API ArrayPtr<DirectoryInfoPtr> GetDirectories(const String& searchPattern);
        /// Searches for the directories that satisfy the specified search criteria either in the directory represented by the 
        /// current object or in the whole directory tree rooted in the directory represented by the current object.
        /// @param searchPattern The name pattern of the directories to search for
        /// @param searchOption Specifies whether the search has to be performed in the directory represented by the current object
        /// only or in the whole directory tree rooted in the directory represented by the current object
        /// @returns An array of shared pointers to DirectoryInfo objects representing
        /// the found directories whose names match @p searchPattern
        ASPOSECPP_SHARED_API ArrayPtr<DirectoryInfoPtr> GetDirectories(const String& searchPattern, SearchOption searchOption);

        /// Returns an array containing shared pointers to FileInfo objects representing all directories located in the 
        /// directory represented by the current object.
        ASPOSECPP_SHARED_API ArrayPtr<FileInfoPtr> GetFiles();
        /// Searches for the files that satisfy the specified search criteria in the directory represented by the 
        /// current object.
        /// @param searchPattern The name pattern of the files to search for
        /// @returns An array of shared pointers to FileInfo objects representing the found files whose names 
        /// match @p searchPattern
        ASPOSECPP_SHARED_API ArrayPtr<FileInfoPtr> GetFiles(const String& searchPattern);
        /// Searches for the files that satisfy the specified search criteria either in the directory represented by the 
        /// current object or in the whole directory tree rooted in the directory represented by the current object.
        /// @param searchPattern The name pattern of the files to search for
        /// @param searchOption Specifies whether the search has to be performed in the directory represented by the current object
        /// only or in the whole directory tree rooted in the directory represented by the current object
        /// @returns An array of shared pointers to FileInfo objects representing
        /// the found files whose names match @p searchPattern
        ASPOSECPP_SHARED_API ArrayPtr<FileInfoPtr> GetFiles(const String& searchPattern, SearchOption searchOption);

        /// Returns an array containing shared pointers to FileSystemInfo objects representing all files and directories located in the 
        /// directory represented by the current object.
        ASPOSECPP_SHARED_API ArrayPtr<FileSystemInfoPtr> GetFileSystemInfos();
        /// Searches for the files and directories that satisfy the specified search criteria in the directory represented by the 
        /// current object.
        /// @param searchPattern The name pattern of the files and directories to search for
        /// @returns An array of shared pointers to FileSystemInfo objects representing the found files and directories whose names 
        /// match @p searchPattern
        ASPOSECPP_SHARED_API ArrayPtr<FileSystemInfoPtr> GetFileSystemInfos(const String& searchPattern);
        /// Searches for the files and directories that satisfy the specified search criteria either in the directory represented by the 
        /// current object or in the whole directory tree rooted in the directory represented by the current object.
        /// @param searchPattern The name pattern of the files and directories to search for
        /// @param searchOption Specifies whether the search has to be performed in the directory represented by the current object
        /// only or in the whole directory tree rooted in the directory represented by the current object
        /// @returns An array of shared pointers to FileSystemInfo objects representing
        /// the found files and directories whose names match @p searchPattern
        ASPOSECPP_SHARED_API ArrayPtr<FileSystemInfoPtr> GetFileSystemInfos(const String& searchPattern, SearchOption searchOption);
        /// Moves the directory represented by the current object and all its contentto the specified location. 
        /// @param destDirName The new location
        ASPOSECPP_SHARED_API void MoveTo(const String& destDirName);
        /// Returns a string containing the path represented by the current object.
        ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;
    };

}}

#endif // _directory_info_h_

