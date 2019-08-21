#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// One of supported imaging file formats.
/// </summary>
enum class FileFormat : uint64_t
{
    /// <summary>
    /// Undefined file format.
    /// </summary>
    Undefined = 0,
    /// <summary>
    /// Custom file format.
    /// </summary>
    Custom = 1,
    /// <summary>
    /// Bmp file format.
    /// </summary>
    Bmp = 2,
    /// <summary>
    /// Gif file format.
    /// </summary>
    Gif = 4,
    /// <summary>
    /// Jpeg file format.
    /// </summary>
    Jpeg = 8,
    /// <summary>
    /// Png file format.
    /// </summary>
    Png = 16,
    /// <summary>
    /// Tiff file format.
    /// </summary>
    Tiff = 32,
    /// <summary>
    /// Psd file format.
    /// </summary>
    Psd = 64,
    /// <summary>
    /// Jpeg2000 file format
    /// </summary>
    Jpeg2000 = 512,
    /// <summary>
    /// Djvu file format
    /// </summary>
    Djvu = 1024,
    /// <summary>
    /// The webp file format
    /// </summary>
    Webp = 2048,
    /// <summary>
    /// The Emf/Emf+ file format
    /// </summary>
    Emf = 4096,
    /// <summary>
    /// The dicom format
    /// </summary>
    Dicom = 8192,
    /// <summary>
    /// SVG file format
    /// </summary>
    Svg = 16384,
    /// <summary>
    /// The Wmf file format
    /// </summary>
    Wmf = 32768,
    /// <summary>
    /// The DNG file format
    /// </summary>
    Dng = 65536,
    /// <summary>
    /// The Open document graphic format
    /// </summary>
    Odg = 131072,
    /// <summary>
    /// The Encapsulated PostScript format
    /// </summary>
    Eps = 262144
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Engine::Presentation::Graphics::FileFormat);
DECLARE_USING_GLOBAL_OPERATORS



} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Engine::Presentation::Graphics);
template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormat>
{
    typedef void Flags;
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormat, const char_t*>, 18>& values();
};



