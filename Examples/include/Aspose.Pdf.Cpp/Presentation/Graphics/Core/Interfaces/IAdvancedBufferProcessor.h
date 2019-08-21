#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Presentation/Graphics/Core/Interfaces/IBufferProcessor.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// The advanced buffer processor.
/// </summary>
class ASPOSE_PDF_SHARED_API IAdvancedBufferProcessor : public Aspose::Pdf::Engine::Presentation::Graphics::IBufferProcessor
{
    typedef IAdvancedBufferProcessor ThisType;
    typedef Aspose::Pdf::Engine::Presentation::Graphics::IBufferProcessor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Finishes the row.
    /// </summary>
    virtual void FinishRow() = 0;
    /// <summary>
    /// Finishes the rows.
    /// </summary>
    /// <param name="rowsCount">The rows count.</param>
    virtual void FinishRows(int32_t rowsCount) = 0;
    
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


