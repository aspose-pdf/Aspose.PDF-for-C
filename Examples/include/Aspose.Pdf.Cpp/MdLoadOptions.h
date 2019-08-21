#pragma once

#include "LoadOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Load options for MArkdown format conversion.
/// </summary>
class ASPOSE_PDF_SHARED_API MdLoadOptions : public Aspose::Pdf::LoadOptions
{
    typedef MdLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates load options for converting markdown into pdf document.
    /// </summary>
    MdLoadOptions();
    
};

} // namespace Pdf
} // namespace Aspose


