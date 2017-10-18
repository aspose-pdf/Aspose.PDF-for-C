#ifndef _Aspose_Pdf_Presentation_IIndexBitmapConverter_h_
#define _Aspose_Pdf_Presentation_IIndexBitmapConverter_h_

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

    virtual System::SharedPtr<System::Drawing::Bitmap> Get1BppImage(System::SharedPtr<System::Drawing::Bitmap> src) = 0;
    virtual System::SharedPtr<System::Drawing::Bitmap> Get4BppImage(System::SharedPtr<System::Drawing::Bitmap> src) = 0;
    virtual System::SharedPtr<System::Drawing::Bitmap> Get8BppImage(System::SharedPtr<System::Drawing::Bitmap> src) = 0;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Presentation_IIndexBitmapConverter_h_

