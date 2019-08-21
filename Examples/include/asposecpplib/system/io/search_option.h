/// @file system/io/search_option.h
#ifndef _SearchOption_h_
#define _SearchOption_h_

namespace System { namespace IO {
    /// Specifies a search should be performed only in the current directory, 
    /// or in the current directory and all its subdirectories.
    enum class SearchOption {
        /// Search in the current directory and all its subdirectories.
        AllDirectories,
        /// Search in the current directory only.
        TopDirectoryOnly
    };
}}

#endif
