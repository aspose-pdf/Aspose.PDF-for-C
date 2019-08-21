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
/// Specifies the cache type to use.
/// </summary>
enum class CacheType
{
    /// <summary>
    /// Specifies auto cache type. The auto cache scheme will try to cache in-memory first then on disk.
    /// </summary>
    Auto,
    /// <summary>
    /// The disk cache only.
    /// </summary>
    CacheOnDiskOnly,
    /// <summary>
    /// The in-memory cache only.
    /// </summary>
    CacheInMemoryOnly
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::CacheType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::CacheType, const char_t*>, 3>& values();
};



