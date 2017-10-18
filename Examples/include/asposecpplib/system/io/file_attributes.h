#ifndef _FileAttributes_h_
#define _FileAttributes_h_
#include <system/enum_helpers.h>

namespace System { namespace IO {

    enum class FileAttributes
    {
        Archive = 0x00020,
        Compressed = 0x00800,
        Device = 0x00040, // Reserved for future use (NOT the w32 value).
        Directory = 0x00010,
        Encrypted = 0x04000, // NOT the w32 value
        Hidden = 0x00002,
        IntegrityStream = 0x8000,
        Normal = 0x00080,
        NotContentIndexed = 0x02000,
        NoScrubData = 0x20000,
        Offline = 0x01000,
        ReadOnly = 0x00001,
        ReparsePoint = 0x00400,
        SparseFile = 0x00200,
        System = 0x00004,
        Temporary = 0x00100,
        Invalid = 0
    };
    DECLARE_ENUM_OPERATORS(FileAttributes);

    //template<class T>
    //inline FileAttributes operator|(FileAttributes a, T b)
    //{
    //    return static_cast<FileAttributes>( static_cast<std::underlying_type_t<FileAttributes>>(a) | static_cast<std::underlying_type_t<FileAttributes>>(b) );
    //}

    //template<class T>
    //inline FileAttributes operator&(FileAttributes a, T b)
    //{
    //    auto res = static_cast<std::underlying_type_t<FileAttributes>>(a) & static_cast<std::underlying_type_t<FileAttributes>>(b);
    //    return static_cast<FileAttributes>(res);
    //}

    //inline std::underlying_type_t<FileAttributes> operator~(FileAttributes a)
    //{
    //    return ~static_cast<std::underlying_type_t<FileAttributes>>(a);
    //}

}}

#endif