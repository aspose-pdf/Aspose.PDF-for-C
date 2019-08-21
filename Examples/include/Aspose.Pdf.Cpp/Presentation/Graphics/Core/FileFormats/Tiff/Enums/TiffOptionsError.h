#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace ImageOptions {

/// <summary>
/// The tiff options error codes.
/// </summary>
enum class TiffOptionsError
{
    /// <summary>
    /// No error code.
    /// </summary>
    NoError,
    /// <summary>
    /// The color map is not defined.
    /// </summary>
    NoColorMap,
    /// <summary>
    /// The color map length is invalid.
    /// </summary>
    ColorMapLengthInvalid,
    /// <summary>
    /// The compression does not match the samples per pixel count.
    /// </summary>
    CompressionSppMismatch,
    /// <summary>
    /// The compression does not match the photometric settings.
    /// </summary>
    PhotometricCompressionMismatch,
    /// <summary>
    /// The photometric does not match the samples per pixel count.
    /// </summary>
    PhotometricSppMismatch,
    /// <summary>
    /// The alpha storage is not supported.
    /// </summary>
    NotSupportedAlphaStorage,
    /// <summary>
    /// The photometric bits per sample is invalid
    /// </summary>
    PhotometricBitsPerSampleMismatch,
    /// <summary>
    /// The specified TIFF options parameters don't conform to TIFF Baseline 6.0 standard
    /// </summary>
    Baseline6OptionsMismatch
};

} // namespace ImageOptions
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::ImageOptions::TiffOptionsError>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::ImageOptions::TiffOptionsError, const char_t*>, 9>& values();
};



