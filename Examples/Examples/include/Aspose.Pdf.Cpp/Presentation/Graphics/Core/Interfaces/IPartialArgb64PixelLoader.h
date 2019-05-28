#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Presentation/Graphics/Core/Interfaces/IPartialArgb32PixelLoader.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// The 64-bit ARGB pixels loader.
/// </summary>
class ASPOSE_PDF_SHARED_API IPartialArgb64PixelLoader : public Aspose::Pdf::Engine::Presentation::Graphics::IPartialArgb32PixelLoader
{
    typedef IPartialArgb64PixelLoader ThisType;
    typedef Aspose::Pdf::Engine::Presentation::Graphics::IPartialArgb32PixelLoader BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Processes the loaded pixels.
    /// </summary>
    /// <param name="pixelsRectangle">The pixels rectangle.</param>
    /// <param name="pixels">The 64-bit ARGB pixels.</param>
    /// <param name="start">The start pixels point. If not equal to (left,top) meaning that it is not full rectangle we have.</param>
    /// <param name="end">The end pixels point. If not equal to (right,bottom) meaning that it is not full rectangle we have.</param>
    virtual void Process64(Rectangle pixelsRectangle, System::ArrayPtr<int64_t> pixels, Point start, Point end) = 0;
    
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


