#ifndef _FileOptions_h_
#define _FileOptions_h_

namespace System { namespace IO {

    enum class FileOptions {
        None = 0,
        Encrypted = 0x4000,
        DeleteOnClose = 0x4000000,
        SequentialScan = 0x8000000,
        RandomAccess = 0x10000000,
        Asynchronous = 0x40000000,
        WriteThrough = -1
        //WriteThrough = 0xffffffff80000000 //-2147483648
    };
}}

#endif //_FileOptions_h_