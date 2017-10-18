#ifndef _FileMode_h_
#define _FileMode_h_

namespace System { namespace IO {

    enum class FileMode
    {
        CreateNew = 1,
        Create = 2,
        Open = 3,
        OpenOrCreate = 4,
        Truncate = 5,
        Append = 6
    };

}}

#endif