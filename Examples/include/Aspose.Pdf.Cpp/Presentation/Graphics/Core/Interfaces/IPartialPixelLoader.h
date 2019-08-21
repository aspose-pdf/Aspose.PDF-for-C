#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Presentation/Graphics/Core/Rectangle___.h"
#include "Presentation/Graphics/Core/Point__.h"
#include "Presentation/Graphics/Core/Color__.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Conforms to the pixels loaded partially.
/// </summary>
class ASPOSE_PDF_SHARED_API IPartialPixelLoader : public System::Object
{
    typedef IPartialPixelLoader ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Processes the loaded pixels.
    /// </summary>
    /// <param name="pixelsRectangle">The pixels rectangle.</param>
    /// <param name="pixels">The pixels.</param>
    /// <param name="start">The start pixels point. If not equal to (left,top) meaning that it is not full rectangle we have.</param>
    /// <param name="end">The end pixels point. If not equal to (right,bottom) meaning that it is not full rectangle we have.</param>
    virtual void Process(Rectangle pixelsRectangle, System::ArrayPtr<Color> pixels, Point start, Point end) = 0;
    
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


