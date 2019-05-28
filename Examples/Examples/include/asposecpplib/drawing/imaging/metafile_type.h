/// @file drawing/imaging/metafile_type.h
#ifndef _metafile_type_h_
#define _metafile_type_h_

#include "system/enum.h"

namespace System { namespace Drawing { namespace Imaging {
    /// Represents a type of a graphic metafile.
    enum class MetafileType {
        /// Invalid metafile.
        Invalid,            
        /// Standard WMF.
        Wmf,                
        /// Placeable Metafile format.
        WmfPlaceable,       
        /// EMF (not EMF+).
        Emf,                
        /// EMF+ without dual, down-level records.
        EmfPlusOnly,        
        /// EMF+ with dual, down-level records.
        EmfPlusDual,        
    };
}}}

/// Specialization for System::Drawing::Imaging::MetafileType; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::Imaging::MetafileType>
{
	/// Returns a array of pairs that associate System::Drawing::Imaging::MetafileType enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Imaging::MetafileType, const char_t*>, 6>& values();
};

#endif
