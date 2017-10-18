#ifndef _emf_type_h_
#define _emf_type_h_

#include "drawing/imaging/metafile_type.h"

namespace System { namespace Drawing { namespace Imaging {

    enum class EmfType {
        ///       Windows enhanced metafile. Contains GDI commands. Metafiles of this type are refered to as an EMF file.
        EmfOnly = (int)MetafileType::Emf,
        ///       Windows enhanced metafile plus. Contains GDI+ commands. Metafiles of this type are refered to as an EMF+ file.
        EmfPlusOnly = (int)MetafileType::EmfPlusOnly,
        ///       Dual Windows enhanced metafile. Contains equivalent GDI and GDI+ commands.  Metafiles of this type are refered to as an EMF+ file.
        EmfPlusDual = (int)MetafileType::EmfPlusDual
    };
}}}

#endif