#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

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
/// The tiff tag enum.
/// </summary>
enum class TiffTags
{
    /// <summary>
    /// Subfile data descriptor.
    /// </summary>
    SubFileType = 254,
    /// <summary>
    ///   [obsoleted by TIFF rev. 5.0]<br />
    ///   Kind of data in subfile. 
    /// </summary>
    OsubfileType = 255,
    /// <summary>
    ///   Image width in pixels.
    /// </summary>
    ImageWidth = 256,
    /// <summary>
    ///   Image height in pixels.
    /// </summary>
    ImageLength = 257,
    /// <summary>
    ///   Bits per channel (sample).
    /// </summary>
    BitsPerSample = 258,
    /// <summary>
    ///   Data compression technique.
    /// </summary>
    Compression = 259,
    /// <summary>
    ///   Photometric interpretation.
    /// </summary>
    Photometric = 262,
    /// <summary>
    ///   [obsoleted by TIFF rev. 5.0]<br />
    ///   Thresholding used on data. 
    /// </summary>
    Thresholding = 263,
    /// <summary>
    ///   [obsoleted by TIFF rev. 5.0]<br />
    ///   Dithering matrix width.
    /// </summary>
    CellWidth = 264,
    /// <summary>
    ///   [obsoleted by TIFF rev. 5.0]<br />
    ///   Dithering matrix height.
    /// </summary>
    CellLength = 265,
    /// <summary>
    ///   Data order within a byte.
    /// </summary>
    FillOrder = 266,
    /// <summary>
    ///   Name of document which holds for image.
    /// </summary>
    DocumentName = 269,
    /// <summary>
    ///   Information about image.
    /// </summary>
    ImageDescription = 270,
    /// <summary>
    ///   Scanner manufacturer name.
    /// </summary>
    Make = 271,
    /// <summary>
    ///   Scanner model name/number.
    /// </summary>
    Model = 272,
    /// <summary>
    ///   Offsets to data strips.
    /// </summary>
    StripOffsets = 273,
    /// <summary>
    ///   [obsoleted by TIFF rev. 5.0]<br />
    ///   Image orientation. 
    /// </summary>
    Orientation = 274,
    /// <summary>
    ///   Samples per pixel.
    /// </summary>
    SamplesPerPixel = 277,
    /// <summary>
    ///   Rows per strip of data.
    /// </summary>
    RowsPerStrip = 278,
    /// <summary>
    ///   Bytes counts for strips.
    /// </summary>
    StripByteCounts = 279,
    /// <summary>
    ///   [obsoleted by TIFF rev. 5.0]<br />
    ///   Minimum sample value.
    /// </summary>
    MinSampleValue = 280,
    /// <summary>
    ///   [obsoleted by TIFF rev. 5.0]<br />
    ///   Maximum sample value.
    /// </summary>
    MaxSampleValue = 281,
    /// <summary>
    ///   Pixels/resolution in x.
    /// </summary>
    Xresolution = 282,
    /// <summary>
    ///   Pixels/resolution in y.
    /// </summary>
    Yresolution = 283,
    /// <summary>
    ///   Storage organization.
    /// </summary>
    PlanarConfig = 284,
    /// <summary>
    ///   Page name image is from.
    /// </summary>
    PageName = 285,
    /// <summary>
    ///   X page offset of image lhs.
    /// </summary>
    Xposition = 286,
    /// <summary>
    ///   Y page offset of image lhs.
    /// </summary>
    Yposition = 287,
    /// <summary>
    ///   [obsoleted by TIFF rev. 5.0]<br />
    ///   Byte offset to free block.
    /// </summary>
    FreeOffsets = 288,
    /// <summary>
    ///   [obsoleted by TIFF rev. 5.0]<br />
    ///   Sizes of free blocks.
    /// </summary>
    FreeByteCounts = 289,
    /// <summary>
    ///   [obsoleted by TIFF rev. 6.0]<br />
    ///   Gray scale curve accuracy.
    /// </summary>
    GrayResponseUnit = 290,
    /// <summary>
    ///   [obsoleted by TIFF rev. 6.0]<br />
    ///   Gray scale response curve.
    /// </summary>
    GrayResponseCurve = 291,
    /// <summary>
    ///   TIFF 6.0 proper name alias for GROUP3OPTIONS.
    ///   Options for CCITT Group 3 fax encoding. 32 flag bits.
    /// </summary>
    T4Options = 292,
    /// <summary>
    ///  Options for CCITT Group 4 fax encoding. 32 flag bits.
    ///   TIFF 6.0 proper name alias for GROUP4OPTIONS.
    /// </summary>
    T6Options = 293,
    /// <summary>
    ///   Units of resolutions.
    /// </summary>
    ResolutionUnit = 296,
    /// <summary>
    ///   Page numbers of multi-page.
    /// </summary>
    PageNumber = 297,
    /// <summary>
    ///   [obsoleted by TIFF rev. 6.0]<br />
    ///   Color curve accuracy.
    /// </summary>
    ColorResponseUnit = 300,
    /// <summary>
    ///   Colorimetry info.
    /// </summary>
    TransferFunction = 301,
    /// <summary>
    ///   Name &amp; release.
    /// </summary>
    Software = 305,
    /// <summary>
    ///   Creation date and time.
    /// </summary>
    DateTime = 306,
    /// <summary>
    ///   Creator of image.
    /// </summary>
    Artist = 315,
    /// <summary>
    ///   Machine where created.
    /// </summary>
    HostComputer = 316,
    /// <summary>
    ///   Prediction scheme w/ LZW.
    /// </summary>
    Predictor = 317,
    /// <summary>
    ///   Image white point.
    /// </summary>
    WhitePoint = 318,
    /// <summary>
    ///   Primary chromaticities.
    /// </summary>
    PrimaryChromaticities = 319,
    /// <summary>
    ///   RGB map for pallette image.
    /// </summary>
    ColorMap = 320,
    /// <summary>
    ///   Highlight + shadow info.
    /// </summary>
    HalftoneHints = 321,
    /// <summary>
    ///   Tile width in pixels.
    /// </summary>
    TileWidth = 322,
    /// <summary>
    ///   Tile height in pixels.
    /// </summary>
    TileLength = 323,
    /// <summary>
    ///   Offsets to data tiles.
    /// </summary>
    TileOffsets = 324,
    /// <summary>
    ///   Byte counts for tiles.
    /// </summary>
    TileByteCounts = 325,
    /// <summary>
    ///   Lines with wrong pixel count.
    /// </summary>
    BadFaxLines = 326,
    /// <summary>
    ///   Regenerated line info.
    /// </summary>
    CleanFaxData = 327,
    /// <summary>
    ///   Max consecutive bad lines.
    /// </summary>
    ConsecutiveBadFaxLines = 328,
    /// <summary>
    ///   Subimage descriptors.
    /// </summary>
    SubIfd = 330,
    /// <summary>
    ///   Inks in separated image.
    /// </summary>
    InkSet = 332,
    /// <summary>
    ///   ASCII names of inks.
    /// </summary>
    InkNames = 333,
    /// <summary>
    ///   Number of inks.
    /// </summary>
    NumberOfInks = 334,
    /// <summary>
    ///   0% and 100% dot codes.
    /// </summary>
    DotRange = 336,
    /// <summary>
    ///   Separation target.
    /// </summary>
    TargetPrinter = 337,
    /// <summary>
    ///   Information about extra samples.
    /// </summary>
    ExtraSamples = 338,
    /// <summary>
    ///   Data sample format.
    /// </summary>
    SampleFormat = 339,
    /// <summary>
    ///   Variable MinSampleValue.
    /// </summary>
    SminSampleValue = 340,
    /// <summary>
    ///   Variable MaxSampleValue.
    /// </summary>
    SmaxSampleValue = 341,
    /// <summary>
    ///   Variable TransferRange
    /// </summary>
    TransferRange = 342,
    /// <summary>
    ///   ClipPath. Introduced post TIFF rev 6.0 by Adobe TIFF technote 2.
    /// </summary>
    ClipPath = 343,
    /// <summary>
    ///   XClipPathUnits. Introduced post TIFF rev 6.0 by Adobe TIFF technote 2.
    /// </summary>
    Xclippathunits = 344,
    /// <summary>
    ///   YClipPathUnits. Introduced post TIFF rev 6.0 by Adobe TIFF technote 2.
    /// </summary>
    Yclippathunits = 345,
    /// <summary>
    ///   Indexed. Introduced post TIFF rev 6.0 by Adobe TIFF Technote 3.
    /// </summary>
    Indexed = 346,
    /// <summary>
    ///   JPEG table stream. Introduced post TIFF rev 6.0.
    /// </summary>
    JpegTables = 347,
    /// <summary>
    ///   OPI Proxy. Introduced post TIFF rev 6.0 by Adobe TIFF technote.
    /// </summary>
    OpiProxy = 351,
    /// <summary>
    ///   [obsoleted by Technical Note #2 which specifies a revised JPEG-in-TIFF scheme]<br />
    ///   JPEG processing algorithm.
    /// </summary>
    JpegProc = 512,
    /// <summary>
    ///   [obsoleted by Technical Note #2 which specifies a revised JPEG-in-TIFF scheme]<br />
    ///   Pointer to SOI marker.
    /// </summary>
    JpegInerchangeFormat = 513,
    /// <summary>
    ///   [obsoleted by Technical Note #2 which specifies a revised JPEG-in-TIFF scheme]<br />
    ///   JFIF stream length
    /// </summary>
    JpegInterchangeFormatLength = 514,
    /// <summary>
    ///   [obsoleted by Technical Note #2 which specifies a revised JPEG-in-TIFF scheme]<br />
    ///   Restart interval length.
    /// </summary>
    JpegRestartInterval = 515,
    /// <summary>
    ///   [obsoleted by Technical Note #2 which specifies a revised JPEG-in-TIFF scheme]<br />
    ///   Lossless proc predictor.
    /// </summary>
    JpegLosslessPredictors = 517,
    /// <summary>
    ///   [obsoleted by Technical Note #2 which specifies a revised JPEG-in-TIFF scheme]<br />
    ///   Lossless point transform.
    /// </summary>
    JpegPointTransform = 518,
    /// <summary>
    ///   [obsoleted by Technical Note #2 which specifies a revised JPEG-in-TIFF scheme]<br />
    ///   Q matrice offsets.
    /// </summary>
    JpegQTables = 519,
    /// <summary>
    ///   [obsoleted by Technical Note #2 which specifies a revised JPEG-in-TIFF scheme]<br />
    ///   DCT table offsets.
    /// </summary>
    JpegDCtables = 520,
    /// <summary>
    ///   [obsoleted by Technical Note #2 which specifies a revised JPEG-in-TIFF scheme]<br />
    ///   AC coefficient offsets.
    /// </summary>
    JpegACtables = 521,
    /// <summary>
    ///   RGB -> YCbCr transform.
    /// </summary>
    YcbcrCoefficients = 529,
    /// <summary>
    ///   YCbCr subsampling factors.
    /// </summary>
    YcbcrSubSampling = 530,
    /// <summary>
    ///   Subsample positioning.
    /// </summary>
    YcbcrPositioning = 531,
    /// <summary>
    ///   Colorimetry info.
    /// </summary>
    ReferenceBlackWhite = 532,
    /// <summary>
    ///   XML packet. Introduced post TIFF rev 6.0 by Adobe XMP Specification, January 2004.
    /// </summary>
    XmlPacket = 700,
    /// <summary>
    ///   OPI ImageID. Introduced post TIFF rev 6.0 by Adobe TIFF technote.
    /// </summary>
    OpiImageid = 32781,
    /// <summary>
    ///   Image reference points. Private tag registered to Island Graphics.
    /// </summary>
    Refpts = 32953,
    /// <summary>
    ///   Copyright string. This tag is listed in the TIFF rev. 6.0 w/ unknown ownership.
    /// </summary>
    Copyright = 33432,
    /// <summary>
    /// The embedded ICC device profile
    /// </summary>
    IccProfile = 34675,
    /// <summary>
    /// A pointer to the Exif IFD.
    /// </summary>
    ExifIfdPointer = 34665
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffTags>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffTags, const char_t*>, 90>& values();
};



