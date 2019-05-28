/// @file version_info/version_info.h
#ifndef _ASPOSE_VERSION_INFO_H
#define _ASPOSE_VERSION_INFO_H

#include "defines.h"

#include <cstdint>
#include <cstddef>
#include <cstdio>

namespace asposecpplib {

/// Max size of git revision string. 
/// Git revisions are SHA-1 hashes. Max size of SHA-1 hash in HEX (40 chars).
#define GIT_REVISION_SIZE 40
/// Size of buffer to hold null-terminated git revision.
/// Git revision string + 1 char for terminating NULL
#define GIT_REVISION_BUFFER_SIZE (GIT_REVISION_SIZE + 1)

#define MODULE_NAME_BUFFER_SIZE FILENAME_MAX 

/// Describes aspose_cpp version which includes revision and compiler options used.
struct VersionInfo 
{
    /// Size of encoded version info parts delimiter.
    /// '#' is used as a delimiter between version info segments.
    static constexpr std::size_t ENCODED_VERSION_INFO_DELIMITER_SIZE = 1;

    /// Version segment max size.
    /// Each out of four segments is represented with uint16_t, which 
    /// represents a number up to 65534 is decimal representation, hence 5 chars.
    static constexpr std::size_t ENCODED_VERSIO_INFO_VERSION_SEGMENT_SIZE = 5;

    /// Size of version number parts delimiter.
    /// '.' is used a a delimiter between version segments.
    static constexpr std::size_t ENCODED_VERSION_INFO_VERSION_SEGMENTS_DELIMITER_SIZE = 1;

    /// The size of a string representig a version which has following format:
    /// \<int16_t\>\.\<int16_t\>\.\<int16_t\>\.\<int16_t\>
    static constexpr std::size_t ENCODED_VERSION_INFO_FOUR_SEGMENT_VERSION_STRING_SIZE = ENCODED_VERSIO_INFO_VERSION_SEGMENT_SIZE * 4 + ENCODED_VERSION_INFO_VERSION_SEGMENTS_DELIMITER_SIZE * 3;
      
    /// Size of compiler definitions bitmap which is encoded into version info.
    static constexpr std::size_t ENCODED_VERSION_INFO_PRECOMPILER_DEFINITIONS_BITMAP_SIZE = 16;

    /// Full size of encoded version info.
    /// Encoded version info has following format:
    /// [asposecpplib_version]#[product_version]#[asposecpplib_revision]#[procompiler_definitions_bitmap][NULL]
    static constexpr std::size_t ENCODED_VERSION_INFO_SIZE = ENCODED_VERSION_INFO_FOUR_SEGMENT_VERSION_STRING_SIZE * 2 + GIT_REVISION_SIZE + ENCODED_VERSION_INFO_PRECOMPILER_DEFINITIONS_BITMAP_SIZE + ENCODED_VERSION_INFO_DELIMITER_SIZE * 3 + 1;

    /// Major aspose_cpp library version.
    uint16_t asposecpplib_version_major;
    /// Minor aspose_cpp library version.
    uint16_t asposecpplib_version_minor;
    /// aspose_cpp library revision.
    uint16_t asposecpplib_version_revision;
    /// aspose_cpp library build number.
    uint16_t asposecpplib_version_build;

    /// Major ported product version.
    uint16_t product_version_major;
    /// Minor ported product version.
    uint16_t product_version_minor;
    /// ported product revision.
    uint16_t product_version_revision;
    /// ported product build number.
    uint16_t product_version_build;
    
    /// Git revision from which aspose_cpp library headers were taken and/or library was built.
    char asposecpplib_revision[GIT_REVISION_BUFFER_SIZE];

    /// Whether __DBG_FOR_EACH_MEMEBR define was set.
    bool defined___DBG_FOR_EACH_MEMEBR;
    /// Whether ___DBG_GARBAGE_COLLECTION define was set.
    bool defined___DBG_GARBAGE_COLLECTION;
    /// Whether ___DBG_TOOLS define was set.
    bool defined___DBG_TOOLS;
    /// Whether ASPOSE_COMPARE_BY_REF define was set.
    bool defined_ASPOSE_COMPARE_BY_REF;
    /// Whether ASPOSE_FOUNDATION_NS define was set.
    bool defined_ASPOSE_FOUNDATION_NS;
    /// Whether ASPOSE_THREADSAFE_DELEGATES define was set.
    bool defined_ASPOSE_THREADSAFE_DELEGATES;
    /// Whether ASPOSE_NO_ATOMIC_REFCOUNT define was set.
    bool defined_ASPOSE_NO_ATOMIC_REFCOUNT;
    /// Whether DISABLE_EXTERNAL_REFCOUNT define was set.
    bool defined_DISABLE_EXTERNAL_REFCOUNT;
    /// Whether DISABLE_ASTRAL define was set.
    bool defined_DISABLE_ASTRAL;
    /// Whether CALL_DISPOSE define was set.
    bool defined_CALL_DISPOSE;
    /// Whether ENABLE_CYCLES_DETECTION_EXT define was set.
    bool defined_ENABLE_CYCLES_DETECTION_EXT;
    /// Whether ENABLE_CYCLES_DETECTION define was set.
    bool defined_ENABLE_CYCLES_DETECTION;
    /// Whether USE_NANOSECONDS define was set.
    bool defined_USE_NANOSECONDS;
    /// Whether ASPOSE_NO_CONST_METHODS define was set.
    bool defined_ASPOSE_NO_CONST_METHODS;
    /// Whether SHOW_DISPOSE_GUARD_MESSAGE define was set.
    bool defined_SHOW_DISPOSE_GUARD_MESSAGE;

    /// Compares version info values.
    /// @return True if all revisions and flags match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const VersionInfo& other);
    /// Compares version info values.
    /// @return False if all revisions and flags match, true otherwise.
    ASPOSECPP_SHARED_API bool operator!=(const VersionInfo& other);

    /// Encodes version info into string.
    /// @param encoded_vi Array to fill with result string.
    ASPOSECPP_SHARED_API void encode(char(&encoded_vi)[ENCODED_VERSION_INFO_SIZE]) const;
};

/// Information on version info mismatch between system module and ported module.
struct MismatchedVersionInfo 
{
    /// Name of the module that triggered error.
    wchar_t module_name[MODULE_NAME_BUFFER_SIZE];
    /// Version info of ported product module.
    VersionInfo product_version_info;
};

/// Gets version info for system library.
ASPOSECPP_SHARED_API void _getVersionInfo(VersionInfo& versionInfo);
/// Registers information on version info mismatch.
ASPOSECPP_SHARED_API void _registerVersionMismatch(const MismatchedVersionInfo& mvi);
/// Fills mismatch version info array.
/// @param mvi_arr Array to fill.
/// @param mvi_arr_size Size of array passed.
/// @param all_items_returned Pointer to variable to set to true if array size was sufficient to hold information on all modules and to false otherwise.
/// @return Number of records written to array.
ASPOSECPP_SHARED_API int _getMismatchedVersionInfo(MismatchedVersionInfo* mvi_arr, int mvi_arr_size, bool* all_items_returned);

} // namespace asposecpplib

#endif // _ASPOSE_VERSION_INFO_H
