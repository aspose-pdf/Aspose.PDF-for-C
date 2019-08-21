/// @file system/io/file_options.h
#ifndef _FileOptions_h_
#define _FileOptions_h_

namespace System { namespace IO {
    /// Represents advanced options for creating FileStream object.
    enum class FileOptions {
        /// No additional options.
        None = 0,
        /// The file is encrypted.
        Encrypted = 0x4000,
        /// The file should be automatically deleted when it is not in use anymore.
        DeleteOnClose = 0x4000000,
        /// The file shoud be accesses sequentially.
        SequentialScan = 0x8000000,
        /// The file is accessed randomly.
        RandomAccess = 0x10000000,
        /// The file can be used for asynchronous I/O operations.
        Asynchronous = 0x40000000,
        /// All writes should go directly to the disk bypassing any intermediate cache.
        WriteThrough = -1
        //WriteThrough = 0xffffffff80000000 //-2147483648
    };
}}

#endif //_FileOptions_h_
