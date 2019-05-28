/// @file system/io/file.h
#ifndef _aspose_system_io_file_h_
#define _aspose_system_io_file_h_

#include "fwd.h"
#include "system/object.h"
#include "system/array.h"
#include "system/date_time.h"
#include "system/collections/ienumerable.h"
#include "system/text/encoding.h"
#include "system/io/file_stream.h"
#include "system/io/stream_writer.h"
#include "system/io/stream_reader.h"
#include "system/io/file_mode.h"
#include "system/io/file_share.h"
#include "system/io/file_options.h"
#include "system/io/file_access.h"
#include "system/io/file_attributes.h"
#include "system/io/path.h"

#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

namespace System { namespace IO {
    /// Provides methods for manipulating files.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    class File
    {
        public:
            /// Default value of the number of bytes bufferred during reading from and writing to a file.
            static const int ASPOSECPP_SHARED_API DefaultBufferSize;

            /// Appends strings from the specified collection of strings to the specified file using the specified encoding by writing each string in a new line.
            /// If the specified file does not exist, it is created. The file is closed after writing all strings.
            /// @param path The path of the file to append the strings to
            /// @param contents The strings to write to the file
            /// @param encoding The character encoding to use
            static ASPOSECPP_SHARED_API void AppendAllLines(const String& path, const SharedPtr<Collections::Generic::IEnumerable<String>>& contents, const EncodingPtr& encoding = Text::Encoding::get_UTF8Unmarked());
            /// Appends the specified string to the specified file using the specified encoding.
            /// @param path The path of the file to append the string to
            /// @param contents The string to write to the file
            /// @param encoding The character encoding to use
            static ASPOSECPP_SHARED_API void AppendAllText(const String& path, const String& contents, const EncodingPtr& encoding = Text::Encoding::get_UTF8Unmarked());

            /// Creates a StreamWriter object that appends text to the specified file using UTF-8 encoding.
            /// If the specified file does not exist, it is created.
            /// @param path The path of the file to open or create
            /// @returns A shared pointer to the created StreamWriter object associated with the specified file
            static ASPOSECPP_SHARED_API StreamWriterPtr AppendText(const String& path);

            /// Copies the specified file to the specified location. If the destination 
            /// file already exists, a paremeter specifies if it should be overwritten.
            /// @param sourceFileName A path of the file to copy
            /// @param destFileName A path of the new location of the file to copy
            /// @returns A FileInfo object that represents the copy
            /// @param overwrite True if the existing destination file should be overwritten, false if copying should fail if 
            /// the destination file already exists
            static ASPOSECPP_SHARED_API void Copy(const String& sourceFileName, const String& destFileName, bool overwrite = false);

            /// Creates a new file (or overwrites existing) and opens it for reading and writing access using the specified buffer size and options.
            /// @param path The path of the file to create or overwrite
            /// @param bufferSize The number of bytes bufferred when reading from and writing to the file
            /// @param options Specifies how to create or overwrite the file
            /// @returns A shared pointer to the FileStream object associated with the specified file
            static ASPOSECPP_SHARED_API FileStreamPtr Create(const String& path, int bufferSize=DefaultBufferSize, FileOptions options=FileOptions::None);
            /// Creates a new or opens existing file for writing UTF-8 encoded text.
            /// @param path The path of the file to create or open
            /// @returns A shared pointer to the StreamWriter object associated with the specified file
            static ASPOSECPP_SHARED_API StreamWriterPtr CreateText(const String& path);

            /// NOT IMPLEMENTED.
            /// @throws NotImplementedException Always
            static ASPOSECPP_SHARED_API void Decrypt(const String& path);
            /// Deletes the specified file or directory.
            /// @param path The path of the file or directory to delete
            static ASPOSECPP_SHARED_API void Delete(const String& path);
            /// NOT IMPLEMENTED.
            /// @throws NotImplementedException Always
            static ASPOSECPP_SHARED_API void Encrypt(const String& path);
            /// Determines if the specified path references an existing file.
            /// @param path The path to test
            /// @returns True if the @p path references an existing file, otherwise - false
            static ASPOSECPP_SHARED_API bool Exists(const String& path);

            /// Returns the attributes of the specified entity.
            /// @param path The path of the entity whose attributes to return
            /// @returns The attributes of the entity referenced by @p path
            static ASPOSECPP_SHARED_API FileAttributes GetAttributes(const String& path);
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

            /// Moves the specified file to the new location.
            /// @param sourceFileName A file to move
            /// @param destFileName The new location of a file referenced by @p sourceFileName
            static ASPOSECPP_SHARED_API void Move(const String& sourceFileName, const String& destFileName);

            /// Opens the specified file in the specified mode for reading and writing and with no sharing.
            /// @param path The path of the file to open
            /// @param mode Specifies the mode in which to open the flie
            /// @returns A FileStream object associated with the opened file
            static ASPOSECPP_SHARED_API FileStreamPtr Open(const String& path, FileMode mode);
            /// Opens the specified file in the specified mode, with the specified access type and sharing option.
            /// @param path The path of the file to open
            /// @param mode Specifies the mode in which to open the flie
            /// @param access The requested access type 
            /// @param share The type of access that other FileStream objects have to the opened file
            /// @returns A FileStream object associated with the opened file
            static ASPOSECPP_SHARED_API FileStreamPtr Open(const String& path, FileMode mode, FileAccess access, FileShare share = FileShare::None);
            /// Opens the specified filefor reading only, in 'Open' mode with shared access for reading.
            /// @param path The path of the file to open
            /// @returns A FileStream object associated with the opened file
            static ASPOSECPP_SHARED_API FileStreamPtr OpenRead(const String& path);
            /// Opens the specified existing file for reading text using UTF-8 encoding with no sharing.
            /// @param path The path of the file to open
            /// @param encoding The character encoding to use
            /// @returns A shared pointer to a StreamWriter object associated with the opened file
            static ASPOSECPP_SHARED_API StreamReaderPtr OpenText(const String& path, const EncodingPtr& encoding = Text::Encoding::get_UTF8Unmarked());
            /// Opens the specified file for writing only, in 'OpenOrCreate' mode with no sharing.
            /// @param path The path of the file to open
            /// @returns A FileStream object associated with the opened file
            static ASPOSECPP_SHARED_API FileStreamPtr OpenWrite(const String& path);

            /// Reads the content of the specified binary file to a byte array.
            /// @param path The path of the file to read
            /// @returns A byte array containing the content of the file
            static ASPOSECPP_SHARED_API ArrayPtr<uint8_t> ReadAllBytes(const String& path);
            /// Reads the content of the specified text file line by line to an array of strings using the specified 
            /// character encoding.
            /// @param path The path of the file to read
            /// @param encoding The character encoding to use
            /// @returns A string array each element of which represents a single line from the specified file
            static ASPOSECPP_SHARED_API ArrayPtr<String> ReadAllLines(const String& path, const EncodingPtr& encoding = Text::Encoding::get_UTF8Unmarked());
            /// Reads the content of the specified text file to a single String object using the specified 
            /// character encoding.
            /// @param path The path of the file to read
            /// @param encoding The character encoding to use
            /// @returns A string containing the contet of the specified file
            static ASPOSECPP_SHARED_API String ReadAllText(const String& path, const EncodingPtr& encoding = Text::Encoding::get_UTF8Unmarked());
            /// Reads the content of the specified text file line by line using the specified character encoding and
            /// returns enumerable collection of strings each of which represents a single line of the file's content.
            /// @param path The path of the file to read
            /// @param encoding The character encoding to use
            /// @returns An anumerable collection of strings representing the content of the specified file
            static ASPOSECPP_SHARED_API SharedPtr<Collections::Generic::IEnumerable<String> > ReadLines(const String& path, const EncodingPtr& encoding = Text::Encoding::get_UTF8Unmarked());
            /// Replaces the contents of a one file with another and creates a backup of the replaced file.
            /// @param sourceFileName A name of the file to replace with
            /// @param destinationFileName A name of the file to replace
            /// @param destinationBackupFileName A name of the backup file
            /// @param ignoreMetadataErrors Specifies if the merge errors from the replaced file to the replacement file should be ignored (true) or not (false)
            /// @returns A FileInfor object that represents the file pointed to by @p destinationFileName
            static ASPOSECPP_SHARED_API void Replace(const String& sourceFileName, const String& destinationFileName, const String& destinationBackupFileName, bool ignoreMetadataErrors = true);

            /// Sets the specified attributes on the specified file.
            /// @param path The path of the file on which the attributes to be set
            /// @param fileAttributes A bitwise combination of FileAttributes values representing the attributes to set
            static ASPOSECPP_SHARED_API void SetAttributes(const String& path, FileAttributes fileAttributes);
            /// NOT IMPLEMENTED.
            /// @throws NotImplementedException Always
            static ASPOSECPP_SHARED_API void SetCreationTime(const String& path, DateTime creationTime);
            /// NOT IMPLEMENTED.
            /// @throws NotImplementedException Always
            static ASPOSECPP_SHARED_API void SetCreationTimeUtc(const String& path, DateTime creationTimeUtc);
            /// Sets the last write time of the specified entity as local time.
            /// @param path The entity whose last write time to set
            /// @param lastWriteTime A DateTime object representing the time to set as local time
            static ASPOSECPP_SHARED_API void SetLastWriteTime(const String& path, DateTime lastWriteTime);
            /// Sets the last write time of the specified entity as UTC time.
            /// @param path The entity whose last write time to set
            /// @param lastWriteTimeUtc A DateTime object representing the time to set as UTC time
            static ASPOSECPP_SHARED_API void SetLastWriteTimeUtc(const String& path, DateTime lastWriteTimeUtc);
            /// NOT IMPLEMENTED.
            /// @throws NotImplementedException Always
            static ASPOSECPP_SHARED_API void SetLastAccessTime(const String& path, DateTime lastWriteTime);
            /// NOT IMPLEMENTED.
            /// @throws NotImplementedException Always
            static ASPOSECPP_SHARED_API void SetLastAccessTimeUtc(const String& path, DateTime lastWriteTimeUtc);

            /// Overwrites the specified binary file and writes the specified bytes to it.
            /// @param path The file to write to
            /// @param bytes The byte array containing the bytes to write to the specified file
            static ASPOSECPP_SHARED_API void WriteAllBytes(const String& path, const ArrayPtr<uint8_t>& bytes);

            /// Creates a new text file or overwrites the existing one and writes all strings from the specified enumerable collection of strings to it,
            /// each string on a new line, using the specified encoding. 
            /// @param path The file to create or overwrite
            /// @param contents An enumerable collection of strings
            /// @param encoding The character encoding to use
            static ASPOSECPP_SHARED_API void WriteAllLines(const String& path, const SharedPtr<Collections::Generic::IEnumerable<String>>& contents, const EncodingPtr& encoding = Text::Encoding::get_UTF8Unmarked());
            /// Creates a new text file or overwrites the existing one and writes all strings from the specified array of strings to it,
            /// each string on a new line, using the specified encoding. 
            /// @param path The file to create or overwrite
            /// @param contents A string array
            /// @param encoding The character encoding to use
            static ASPOSECPP_SHARED_API void WriteAllLines(const String& path, const ArrayPtr<String>& contents, const EncodingPtr& encoding = Text::Encoding::get_UTF8Unmarked());
            /// Creates a new text file or overwrites the existing one and writes the content of the specified string to it using the specified encoding. 
            /// @param path The file to create or overwrite
            /// @param contents A string array
            /// @param encoding The character encoding to use
            static ASPOSECPP_SHARED_API void WriteAllText(const String& path, const String& contents, const EncodingPtr& encoding = Text::Encoding::get_UTF8Unmarked());
    };
}}

#endif // _aspose_system_io_file_h_

