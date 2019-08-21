#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/bitmap.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// This interface declared for customization algorithms of quantization. 
/// Users can implement their own realization of this algorithms (for example algorithms based on unmanaged code).
/// </summary>
class ASPOSE_PDF_SHARED_API IIndexBitmapConverter : public virtual System::Object
{
    typedef IIndexBitmapConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns 1Bpp bitmap representation
    /// </summary>
    /// <param name="src">Source bitmap.</param>
    /// <returns>Bitmap in 1 bpp image format.</returns>
    virtual System::SharedPtr<System::Drawing::Bitmap> Get1BppImage(System::SharedPtr<System::Drawing::Bitmap> src) = 0;
    /// <summary>
    /// Returns 4Bpp bitmap representation
    /// </summary>
    /// <param name="src">Source bitmap.</param>
    /// <returns>Bitmap in 4 bpp image format.</returns>
    virtual System::SharedPtr<System::Drawing::Bitmap> Get4BppImage(System::SharedPtr<System::Drawing::Bitmap> src) = 0;
    /// <summary>
    /// Returns 8Bpp bitmap representation
    /// </summary>
    /// <param name="src">Source bitmap.</param>
    /// <returns>Bitmap in 8 bpp image format.</returns>
    virtual System::SharedPtr<System::Drawing::Bitmap> Get8BppImage(System::SharedPtr<System::Drawing::Bitmap> src) = 0;
    
};

} // namespace Pdf
} // namespace Aspose


