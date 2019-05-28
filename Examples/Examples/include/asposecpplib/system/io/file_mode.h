/// @file system/io/file_mode.h
#ifndef _FileMode_h_
#define _FileMode_h_

namespace System { namespace IO {
    /// Specifies how a file should be opened.
    enum class FileMode
    {
        /// Create a new file. If the file already exists, an exception is thrown.
        CreateNew = 1,
        /// Create a new file. If the file already exists, it is overwritten.
        Create = 2,
        /// Open an existing file. If the file does not exist, an exception is thrown. 
        Open = 3,
        /// Open an existing file or create a new one if it does not exist.
        OpenOrCreate = 4,
        /// Open an existing file and truncate it so that it is empty. If the file does not exist, an exception is thrown. 
        Truncate = 5,
        /// Open an existing file and seek to the end of it or create a new one if it does not exist.
        Append = 6
    };

}}

#endif
