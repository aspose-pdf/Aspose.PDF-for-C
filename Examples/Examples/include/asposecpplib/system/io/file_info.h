/// @file system/io/file_info.h
#ifndef _file_info_h_
#define _file_info_h_

#include "fwd.h"
#include "system/io/file_system_info.h"
#include "system/io/directory_info.h"

namespace System { namespace IO {
    /// Represents a path to a file and a file referred to by this path and provides methods for manipulating it.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS FileInfo : public FileSystemInfo {
    public:
        /// Constructs a new instance of FileInfo class that represents the specified file.
        /// @param path The path to the file
        ASPOSECPP_SHARED_API FileInfo(const String& path);

        //***** Properties
        /// Returns a DirectoryInfo object that represents a directory in which the file 
        /// represented by the current object is located.
        ASPOSECPP_SHARED_API DirectoryInfoPtr get_Directory();
        /// Returns the full name of the directory in which the file represented by the 
        /// current object is loctaed.
        ASPOSECPP_SHARED_API String get_DirectoryName();
        /// Returns a value that indicates if the ReadOnly attribute is set.
        /// @returns True if the ReadOnly attribute is set, otherwise - false
        ASPOSECPP_SHARED_API bool get_IsReadOnly();
        /// Sets or unsets the ReadOnly attribute on the file.
        /// @param value True if the ReadOnly attribute has to be set, false if the ReadOnly attribute has to be unset
        ASPOSECPP_SHARED_API void set_IsReadOnly(bool value);
        /// Returns the size of the file in bytes.
        ASPOSECPP_SHARED_API int64_t get_Length();
        /// Returns a value that indicates if the file exists.
        virtual ASPOSECPP_SHARED_API bool get_Exists() override;
        /// Returns the name of the file.
        virtual ASPOSECPP_SHARED_API String get_Name() override;

        //***** Methods
        /// Copies the file represented by the current object to the specified location. If the destination 
        /// file already exists, the copying fails.
        /// @param destFileName The destination file name
        /// @returns A FileInfo object that represents the copy
        ASPOSECPP_SHARED_API FileInfoPtr CopyTo(const String& destFileName);
        /// Copies the file represented by the current object to the specified location. A parameter specifies 
        /// if existing destination file should be overwritten.
        /// @param destFileName The destination file name
        /// @param overwrite True if the existing destination file should be overwritten, false if copying should fail if 
        /// the destination file already exists
        /// @returns A FileInfo object that represents the copy
        ASPOSECPP_SHARED_API FileInfoPtr CopyTo(const String& destFileName, bool overwrite);

        /// Removes the file represented by the current object.
        virtual ASPOSECPP_SHARED_API void Delete() override;
        /// Replaces the contents of a specified destination file with the file represented by the current FileInfo object and creates a backup of the replaced file.
        /// @param destinationFileName A name of the file to replace
        /// @param destinationBackupFileName A name of the backup file
        /// @returns A FileInfor object that represents the file pointed to by @p destinationFileName
        ASPOSECPP_SHARED_API FileInfoPtr Replace(const String& destinationFileName, const String& destinationBackupFileName);
        /// Replaces the contents of a specified destination file with the file represented by the current FileInfo object and creates a backup of the replaced file.
        /// @param destinationFileName A name of the file to replace
        /// @param destinationBackupFileName A name of the backup file
        /// @param ignoreMetadataErrors Specifies if the merge errors from the replaced file to the replacement file should be ignored (true) or not (false)
        /// @returns A FileInfor object that represents the file pointed to by @p destinationFileName
        ASPOSECPP_SHARED_API FileInfoPtr Replace(const String& destinationFileName, const String& destinationBackupFileName, bool ignoreMetadataErrors);

        /// NOT IMPLEMENTED.
        /// @throws IOException Always
        ASPOSECPP_SHARED_API void Decrypt();
        /// NOT IMPLEMENTED.
        /// @throws IOException Always
        ASPOSECPP_SHARED_API void Encrypt();
        /// Moves the file represented by the current object to the specified location.
        /// @param destFileName The destination file name
        ASPOSECPP_SHARED_API void MoveTo(const String& destFileName);

        /// Opens the file represented by the current object in the specified mode for reading and writing and with no sharing.
        /// @param mode Specifies the mode in which to open the flie
        /// @returns A FileStream object associated with the file represented by the current object
        ASPOSECPP_SHARED_API FileStreamPtr Open(FileMode mode);
        /// Opens the file represented by the current object in the specified mode, with the specified access type and with no sharing.
        /// @param mode Specifies the mode in which to open the flie
        /// @param access The requested access type 
        /// @returns A FileStream object associated with the file represented by the current object
        ASPOSECPP_SHARED_API FileStreamPtr Open(FileMode mode, FileAccess access);
        /// Opens the file represented by the current object in the specified mode, with the specified access type and sharing option.
        /// @param mode Specifies the mode in which to open the flie
        /// @param access The requested access type 
        /// @param share The type of access that other FileStream objects have to the opened file
        /// @returns A FileStream object associated with the file represented by the current object
        ASPOSECPP_SHARED_API FileStreamPtr Open(FileMode mode, FileAccess access, FileShare share);

        /// Creates a file at the location specified by the path represented by the current object
        /// and opens it for reading and writing, in truncate mode and with no sharing.
        /// @returns A FileStream object associated with the created file
        ASPOSECPP_SHARED_API FileStreamPtr Create();
        /// Opens a file represented by the current object for reading only, in 'Open' mode with shared access for reading.
        /// @returns A FileStream object associated with the opened file
        ASPOSECPP_SHARED_API FileStreamPtr OpenRead();
        /// Opens a file represented by the current object for writing only, in 'OpenOrCreate' mode with no sharing.
        /// @returns A FileStream object associated with the opened file
        ASPOSECPP_SHARED_API FileStreamPtr OpenWrite();

        /// Opens a file represented by the current object for writing text using UTF-8 encoding, in 'Append' mode with no sharing.
        /// @returns A shared pointer to a StreamWriter object associated with the opened file
        ASPOSECPP_SHARED_API StreamWriterPtr AppendText();
        /// Creates a file at the location specified by the path represented by the current object
        /// and opens it for writing text using UTF-8 encoding with no sharing.
        /// @returns A shared pointer to a StreamWriter object associated with the created file
        ASPOSECPP_SHARED_API StreamWriterPtr CreateText();
        /// Opens the existing file at the location specified by the path represented by the current object
        /// for reading text using UTF-8 encoding with no sharing.
        /// @returns A shared pointer to a StreamWriter object associated with the opened file
        ASPOSECPP_SHARED_API StreamReaderPtr OpenText();

        /// Returns a path represented by the current object.
        ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;

    };

}}

#endif // _file_info_h_

