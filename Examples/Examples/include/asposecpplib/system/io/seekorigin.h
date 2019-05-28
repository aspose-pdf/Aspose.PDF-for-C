/// @file system/io/seekorigin.h
#ifndef __SeekOrigin_h__
#define __SeekOrigin_h__

namespace System { namespace IO {
    /// Specifies the reference position in the stream relative to which the position
    /// to seek to is specified.
    enum class SeekOrigin
    {
        /// Beginning of the stream.
        Begin = 0,
        /// Current stream position.
        Current,
        /// End of the stream.
        End
    };
}}

#endif
