#ifndef _FileShare_h_
#define _FileShare_h_

namespace System { namespace IO {

    enum class FileShare
    {
        None = 0,
        Read = 1,
        Write = 2,
        ReadWrite = 3,
        Delete = 4,
        Inheritable = 16
    };
}}

#endif