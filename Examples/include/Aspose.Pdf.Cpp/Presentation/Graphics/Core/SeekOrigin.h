#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Provides the fields that represent reference points in <see cref="StreamContainer"/> for seeking.
/// </summary>
enum class SeekOrigin
{
    /// <summary>
    /// Specifies the beginning of a stream.
    /// </summary>
    Begin = 0,
    /// <summary>
    /// Specifies the current position within a stream.
    /// </summary>
    Current = 1,
    /// <summary>
    ///  Specifies the end of a stream.
    /// </summary>
    End = 2
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::SeekOrigin>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::SeekOrigin, const char_t*>, 3>& values();
};



