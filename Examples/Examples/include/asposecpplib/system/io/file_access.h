/// @file system/io/file_access.h
#ifndef _FileAccess_h_
#define _FileAccess_h_
#include <system/enum_helpers.h>

namespace System { namespace IO {
    /// Specifies the type of access when opening the file.
    enum class FileAccess
    {
        /// Read-only access.
        Read = 0x00000001,
        /// Write-only access.
        Write = 0x00000002,
        /// Read and write access.
        ReadWrite = Read | Write
    };
    /// Declaration of template arithmetic operators for values of FileAccess enum type.
    DECLARE_ENUM_OPERATORS(FileAccess);

}}

#endif
