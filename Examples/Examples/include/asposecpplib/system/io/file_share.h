/// @file system/io/file_share.h
#ifndef _FileShare_h_
#define _FileShare_h_

namespace System { namespace IO {
    /// Specifies what kind of access other FileStream objects can have to a file being opened.
    enum class FileShare
    {
        /// No access.
        None = 0,
        /// Read-only access.
        Read = 1,
        /// Write-only access.
        Write = 2,
        /// Read and Write access.
        ReadWrite = 3,
        /// The file can be deleted.
        Delete = 4,
        /// NOT SUPPORTED.
        Inheritable = 16
    };
}}

#endif
