#pragma once

// C# preprocessor directive: #if UNIT_TEST && !MONO


#include "LoadOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing PCL file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API AutoDetectedFormatLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef AutoDetectedFormatLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates <see cref="PclLoadOptions"/> object.
    /// </summary>
    AutoDetectedFormatLoadOptions();
    
};

} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif



