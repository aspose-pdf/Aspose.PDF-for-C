#ifndef _file_info_h_
#define _file_info_h_

#include "fwd.h"
#include "system/io/file_system_info.h"
#include "system/io/directory_info.h"

namespace System { namespace IO {

    class FileInfo : public FileSystemInfo {
    public:
        FileInfo(String path);

        //***** Properties
        DirectoryInfoPtr get_Directory();
        String get_DirectoryName();
        bool get_IsReadOnly();
        void set_IsReadOnly(bool value);
        int64_t get_Length();
        virtual bool get_Exists();
        virtual String get_Name();

        //***** Methods
        FileInfoPtr CopyTo(String destFileName);
        FileInfoPtr CopyTo(String destFileName, bool overwrite);

        virtual void Delete();
        FileInfoPtr Replace(String destinationFileName, String destinationBackupFileName);
        FileInfoPtr Replace(String destinationFileName, String destinationBackupFileName, bool ignoreMetadataErrors);

        void Decrypt();
        void Encrypt();

        void MoveTo(String destFileName);

        FileStreamPtr Open(FileMode mode);
        FileStreamPtr Open(FileMode mode, FileAccess access);
        FileStreamPtr Open(FileMode mode, FileAccess access, FileShare share);

        FileStreamPtr Create();
        FileStreamPtr OpenRead();
        FileStreamPtr OpenWrite();

        StreamWriterPtr AppendText();
        StreamWriterPtr CreateText();
        StreamReaderPtr OpenText();

        String ToString() ASPOSE_CONST override;

    };

}}

#endif // _file_info_h_

