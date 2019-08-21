#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace FileFormats {

namespace Gif {

/// <summary>
/// Represents GIF block interface.
/// </summary>
class ASPOSE_PDF_SHARED_API IGifBlock : public virtual System::Object
{
    typedef IGifBlock ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Saves the block to the specified stream.
    /// </summary>
    /// <param name="stream">The stream to save data to.</param>
    virtual void Save(System::SharedPtr<System::IO::Stream> stream) = 0;
    
};

} // namespace Gif
} // namespace FileFormats
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


