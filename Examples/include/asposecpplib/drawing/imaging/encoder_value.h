#ifndef _encoder_value_h_
#define _encoder_value_h_

namespace System {  namespace Drawing { namespace Imaging {

    enum class EncoderValue {
        ///    Specifies the CMYK color space.
        ColorTypeCMYK,
    ///    Specifies the YCCK color space.
        ColorTypeYCCK,
    ///    Specifies the LZW compression method.
    CompressionLZW,
    ///    For a TIFF image, specifies the CCITT3 compression method.
    CompressionCCITT3,
    ///    For a TIFF image, specifies the CCITT4 compression method.
    CompressionCCITT4,
    ///    For a TIFF image, specifies the RLE compression method.
    CompressionRle,
    ///    For a TIFF image, specifies no compression.
    CompressionNone,
    ///    Specifies interlaced mode.
    ScanMethodInterlaced,
    ///    Specifies non-interlaced mode.
    ScanMethodNonInterlaced,
    ///    For a GIF image, specifies version 87.
    VersionGif87,
    ///    For a GIF images, specifies version 89a.
    VersionGif89,
    ///    Specifies progressive mode.
    RenderProgressive,
    ///    Specifies non-progressive mode.
    RenderNonProgressive,
    ///    For a JPEG image, specifies lossless 90-degree clockwise rotation.
    TransformRotate90,
    ///    For a JPEG image, specifies lossless 180-degree rotation.
    TransformRotate180,
    ///    For a JPEG image, specifies lossless 270-degree clockwise rotation.
    TransformRotate270,
    ///    For a JPEG image, specifies a lossless horizontal flip.
    TransformFlipHorizontal,
    ///    For a JPEG image, specifies a lossless vertical flip.
    TransformFlipVertical,
    ///    Specifies multiframe encoding.
    MultiFrame,
    ///    Specifies the last frame of a multi-frame image.
    LastFrame,
    ///    Specifies that the encoder object is to be closed.
    Flush,
    ///    For a GIF image, specifies the time frame dimension.
    FrameDimensionTime,
    ///    Specifies the resolution frame dimension.
    FrameDimensionResolution,
    ///    For a TIFF image, specifies the page frame dimension
    FrameDimensionPage
    };
}}}
#endif