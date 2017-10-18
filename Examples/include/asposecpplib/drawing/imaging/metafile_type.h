#ifndef _metafile_type_h_
#define _metafile_type_h_

namespace System { namespace Drawing { namespace Imaging {

    enum class MetafileType {
        Invalid,            // Invalid metafile
        Wmf,                // Standard WMF
        WmfPlaceable,       // Placeable Metafile format
        Emf,                // EMF (not EMF+)
        EmfPlusOnly,        // EMF+ without dual, down-level records
        EmfPlusDual,        // EMF+ with dual, down-level records
    };
}}}

#endif