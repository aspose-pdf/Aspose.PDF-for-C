#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// The buffer processor.
/// </summary>
class ASPOSE_PDF_SHARED_API IBufferProcessor : public virtual System::Object
{
    typedef IBufferProcessor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Processes the buffer.
    /// </summary>
    /// <param name="buffer">The buffer to process.</param>
    /// <param name="bufferLength">The buffer length to process.</param>
    virtual void ProcessBuffer(System::ArrayPtr<uint8_t> buffer, int32_t bufferLength) = 0;
    
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


