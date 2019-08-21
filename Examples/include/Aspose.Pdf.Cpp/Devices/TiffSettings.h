#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Devices { class Margins; } } }
namespace Aspose { namespace Pdf { namespace Devices { enum class CompressionType; } } }
namespace Aspose { namespace Pdf { namespace Devices { enum class ColorDepth; } } }
namespace Aspose { namespace Pdf { namespace Devices { enum class ShapeType; } } }
namespace Aspose { namespace Pdf { enum class PageCoordinateType; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// This class represents settings for importing pdf to Tiff.
/// </summary>
class ASPOSE_PDF_SHARED_API TiffSettings FINAL : public System::Object
{
    typedef TiffSettings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the margins.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Devices::Margins> get_Margins();
    /// <summary>
    /// Gets or sets a value indicating whether to skip blank pages.
    /// </summary>
    /// <remarks>
    /// Default value is false
    /// </remarks>
    /// <value><c>true</c> if need to skip blank pages; otherwise, <c>false</c>.</value>
    bool get_SkipBlankPages();
    /// <summary>
    /// Gets or sets a value indicating whether to skip blank pages.
    /// </summary>
    /// <remarks>
    /// Default value is false
    /// </remarks>
    /// <value><c>true</c> if need to skip blank pages; otherwise, <c>false</c>.</value>
    void set_SkipBlankPages(bool value);
    /// <summary>
    /// Gets or sets the type of the compression.
    /// </summary>
    /// <remarks>
    /// Default value is CompressionType.LZW
    /// </remarks>
    /// <value>The type of the compression.</value>
    CompressionType get_Compression();
    /// <summary>
    /// Gets or sets the type of the compression.
    /// </summary>
    /// <remarks>
    /// Default value is CompressionType.LZW
    /// </remarks>
    /// <value>The type of the compression.</value>
    void set_Compression(CompressionType value);
    /// <summary>
    /// Gets or sets the color depth.
    /// </summary>
    /// <remarks>
    /// Default value is ColorDepth.Default
    /// </remarks>
    /// <value>The color depth.</value>
    ColorDepth get_Depth();
    /// <summary>
    /// Gets or sets the color depth.
    /// </summary>
    /// <remarks>
    /// Default value is ColorDepth.Default
    /// </remarks>
    /// <value>The color depth.</value>
    void set_Depth(ColorDepth value);
    /// <summary>
    /// Gets or sets the type of the shape.
    /// </summary>
    /// <remarks>
    /// Default value is ShapeType.None
    /// </remarks>
    /// <value>The type of the shape.</value>
    ShapeType get_Shape();
    /// <summary>
    /// Gets or sets the type of the shape.
    /// </summary>
    /// <remarks>
    /// Default value is ShapeType.None
    /// </remarks>
    /// <value>The type of the shape.</value>
    void set_Shape(ShapeType value);
    /// <summary>
    /// Get or sets a value boundary of the transformation of colors in white and black.
    /// This parameter can be applied with EncoderValue.CompressionCCITT4, EncoderValue.CompressionCCITT3, EncoderValue.CompressionRle or ColorDepth.Format1bpp == 1
    /// </summary>
    /// <value>Value of brightness should be in the range from 0 to 1. By default value is equal to 0.33f</value>
    float get_Brightness();
    /// <summary>
    /// Get or sets a value boundary of the transformation of colors in white and black.
    /// This parameter can be applied with EncoderValue.CompressionCCITT4, EncoderValue.CompressionCCITT3, EncoderValue.CompressionRle or ColorDepth.Format1bpp == 1
    /// </summary>
    /// <value>Value of brightness should be in the range from 0 to 1. By default value is equal to 0.33f</value>
    void set_Brightness(float value);
    /// <summary>
    /// Get or sets the page coordinate type (Media/Crop boxes). CropBox value is used by default.        
    /// </summary>
    PageCoordinateType get_CoordinateType();
    /// <summary>
    /// Get or sets the page coordinate type (Media/Crop boxes). CropBox value is used by default.        
    /// </summary>
    void set_CoordinateType(PageCoordinateType value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"/> class.
    /// </summary>
    TiffSettings();
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"/> class.
    /// </summary>
    /// <param name="shapeType">Type of the shape.</param>
    TiffSettings(ShapeType shapeType);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"/> class.
    /// </summary>
    /// <param name="compressionType">Type of the compression.</param>
    TiffSettings(CompressionType compressionType);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"/> class.
    /// </summary>
    /// <param name="colorDepth">The color depth.</param>
    TiffSettings(ColorDepth colorDepth);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"/> class.
    /// </summary>
    /// <param name="margins">The margins.</param>
    TiffSettings(System::SharedPtr<Aspose::Pdf::Devices::Margins> margins);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"/> class.
    /// </summary>
    /// <param name="compressionType">Type of the compression.</param>
    /// <param name="colorDepth">The color depth.</param>
    /// <param name="margins">The margins.</param>
    TiffSettings(CompressionType compressionType, ColorDepth colorDepth, System::SharedPtr<Aspose::Pdf::Devices::Margins> margins);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"/> class.
    /// </summary>
    /// <param name="compressionType">Type of the compression.</param>
    /// <param name="colorDepth">The color depth.</param>
    /// <param name="margins">The margins.</param>
    /// <param name="skipBlankPages">if set to <c>true</c> need to skip blank pages.</param>
    TiffSettings(CompressionType compressionType, ColorDepth colorDepth, System::SharedPtr<Aspose::Pdf::Devices::Margins> margins, bool skipBlankPages);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"/> class.
    /// </summary>
    /// <param name="compressionType">Type of the compression.</param>
    /// <param name="colorDepth">The color depth.</param>
    /// <param name="margins">The margins.</param>
    /// <param name="skipBlankPages">if set to <c>true</c> need to skip blank pages.</param>
    /// <param name="shapeType">Type of the shape.</param>
    TiffSettings(CompressionType compressionType, ColorDepth colorDepth, System::SharedPtr<Aspose::Pdf::Devices::Margins> margins, bool skipBlankPages, ShapeType shapeType);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"/> class.
    /// </summary>
    /// <param name="skipBlankPages">if set to <c>true</c> [skip blank pages].</param>
    TiffSettings(bool skipBlankPages);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Devices::Margins> margins;
    bool skipBlankPages;
    CompressionType compression;
    ColorDepth depth;
    ShapeType shape;
    float brightness;
    PageCoordinateType coordinateType;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


