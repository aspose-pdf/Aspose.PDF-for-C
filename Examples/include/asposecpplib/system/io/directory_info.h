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

    class DirectoryInfo : public FileSystemInfo {
        template<class T>
        using IEnumerable = System::Collections::Generic::IEnumerable<T>;

    public:
        DirectoryInfo(String path);

        //***** Properties
        virtual bool get_Exists();
        virtual String get_Name();
        DirectoryInfoPtr get_Parent();
        DirectoryInfoPtr get_Root();

        //***** Methods
        void Create();
        DirectoryInfoPtr CreateSubdirectory(String path);
        virtual void Delete(); //delete current if empty
        void Delete(bool recursive);

        SharedPtr<IEnumerable<DirectoryInfoPtr> > EnumerateDirectories();
        SharedPtr<IEnumerable<DirectoryInfoPtr> > EnumerateDirectories(String searchPattern);
        SharedPtr<IEnumerable<DirectoryInfoPtr> > EnumerateDirectories(String searchPattern, SearchOption searchOption);

        SharedPtr<IEnumerable<FileInfoPtr> > EnumerateFiles();
        SharedPtr<IEnumerable<FileInfoPtr> > EnumerateFiles(String searchPattern);
        SharedPtr<IEnumerable<FileInfoPtr> > EnumerateFiles(String searchPattern, SearchOption searchOption);

        SharedPtr<IEnumerable<FileSystemInfoPtr> > EnumerateFileSystemInfos();
        SharedPtr<IEnumerable<FileSystemInfoPtr> > EnumerateFileSystemInfos(String searchPattern);
        SharedPtr<IEnumerable<FileSystemInfoPtr> > EnumerateFileSystemInfos(String searchPattern, SearchOption searchOption);

        ArrayPtr<DirectoryInfoPtr> GetDirectories();
        ArrayPtr<DirectoryInfoPtr> GetDirectories(String searchPattern);
        ArrayPtr<DirectoryInfoPtr> GetDirectories(String searchPattern, SearchOption searchOption);

        ArrayPtr<FileInfoPtr> GetFiles();
        ArrayPtr<FileInfoPtr> GetFiles(String searchPattern);
        ArrayPtr<FileInfoPtr> GetFiles(String searchPattern, SearchOption searchOption);

        ArrayPtr<FileSystemInfoPtr> GetFileSystemInfos();
        ArrayPtr<FileSystemInfoPtr> GetFileSystemInfos(String searchPattern);
        ArrayPtr<FileSystemInfoPtr> GetFileSystemInfos(String searchPattern, SearchOption searchOption);

        void MoveTo(String destDirName);
        String ToString() ASPOSE_CONST override;
    };

}}

#endif // _directory_info_h_

