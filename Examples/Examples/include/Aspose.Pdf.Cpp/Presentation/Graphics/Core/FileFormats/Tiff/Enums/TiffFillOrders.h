#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace FileFormats {

namespace Tiff {

namespace Enums {

/// <summary>
/// Data order within a byte.<br/>
///   Possible values for FILLORDER tag.
/// </summary>
enum class TiffFillOrders : uint16_t
{
    /// <summary>
    ///   Most significant -> least.
    /// </summary>
    Msb2Lsb = 1,
    /// <summary>
    ///   Least significant -> most.
    /// </summary>
    Lsb2Msb = 2
};

} // namespace Enums
} // namespace Tiff
} // namespace FileFormats
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffFillOrders>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffFillOrders, const char_t*>, 2>& values();
};



