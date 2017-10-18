#ifndef _FileAccess_h_
#define _FileAccess_h_
#include <system/enum_helpers.h>

namespace System { namespace IO {

    enum class FileAccess
    {
        Read = 0x00000001,
        Write = 0x00000002,
        ReadWrite = Read | Write
    };
    DECLARE_ENUM_OPERATORS(FileAccess);

}}

#endif