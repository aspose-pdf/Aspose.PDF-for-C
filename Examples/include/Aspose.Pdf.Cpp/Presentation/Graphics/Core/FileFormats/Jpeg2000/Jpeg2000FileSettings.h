#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { namespace Exporters { class Jpeg2000Exporter; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { namespace FileFormats { namespace Jpeg2000 { class Jpeg2000Image; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { namespace FileFormats { namespace Jpeg2000 { enum class Jpeg2000Codec; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { namespace Xmp { class XmpPacketWrapper; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { class ResolutionSetting; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { namespace ImageOptions { class Jpeg2000Options; } } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace FileFormats {

namespace Jpeg2000 {


// C# preprocessor directive: #if UNIT_TEST


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

/// <summary>
/// Wrapper class that stores some additional settings for JPEG2000 images and may be expanded
/// </summary>
class ASPOSE_PDF_SHARED_API Jpeg2000FileSettings : public System::Object
{
    typedef Jpeg2000FileSettings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::Presentation::Graphics::Exporters::Jpeg2000Exporter;
    friend class Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Jpeg2000::Jpeg2000Image;
    
public:

    /// <summary>
    /// Gets the vertical resolution.
    /// </summary>
    /// <value>
    /// The vertical resolution.
    /// </value>
    double get_VerticalResolution();
    /// <summary>
    /// Sets the vertical resolution.
    /// </summary>
    /// <value>
    /// The vertical resolution.
    /// </value>
    void set_VerticalResolution(double value);
    /// <summary>
    /// Gets the horizontal resolution.
    /// </summary>
    /// <value>
    /// The horizontal resolution.
    /// </value>
    double get_HorizontalResolution();
    /// <summary>
    /// Sets the horizontal resolution.
    /// </summary>
    /// <value>
    /// The horizontal resolution.
    /// </value>
    void set_HorizontalResolution(double value);
    /// <summary>
    /// Gets a value indicating whether [write resolution].
    /// </summary>
    /// <value>
    ///   <c>true</c> if [write resolution]; otherwise, <c>false</c>.
    /// </value>
    bool get_WriteResolution();
    /// <summary>
    /// Sets a value indicating whether [write resolution].
    /// </summary>
    /// <value>
    ///   <c>true</c> if [write resolution]; otherwise, <c>false</c>.
    /// </value>
    void set_WriteResolution(bool value);
    /// <summary>
    /// Gets the comments.
    /// </summary>
    /// <value>
    /// The comments.
    /// </value>
    System::ArrayPtr<System::String> get_Comments();
    /// <summary>
    /// Sets the comments.
    /// </summary>
    /// <value>
    /// The comments.
    /// </value>
    void set_Comments(System::ArrayPtr<System::String> value);
    /// <summary>
    /// Gets the codec.
    /// </summary>
    /// <value>
    /// The codec.
    /// </value>
    Jpeg2000Codec get_Codec();
    /// <summary>
    /// Sets the codec.
    /// </summary>
    /// <value>
    /// The codec.
    /// </value>
    void set_Codec(Jpeg2000Codec value);
    /// <summary>
    /// Gets the bits per pixel.
    /// </summary>
    /// <value>
    /// The bits per pixel.
    /// </value>
    int32_t get_BitsPerPixel();
    /// <summary>
    /// Sets the bits per pixel.
    /// </summary>
    /// <value>
    /// The bits per pixel.
    /// </value>
    void set_BitsPerPixel(int32_t value);
    /// <summary>
    /// Gets the compression ratios.
    /// </summary>
    /// <value>
    /// The compression ratios.
    /// </value>
    System::ArrayPtr<int32_t> get_CompressionRatios();
    /// <summary>
    /// Sets the compression ratios.
    /// </summary>
    /// <value>
    /// The compression ratios.
    /// </value>
    void set_CompressionRatios(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets a value indicating whether use the irreversible DWT 9-7 (true) or use lossless DWT 5-3 compression (default).
    /// </summary>
    bool get_Irreversible();
    /// <summary>
    /// Sets a value indicating whether use the irreversible DWT 9-7 (true) or use lossless DWT 5-3 compression (default).
    /// </summary>
    void set_Irreversible(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Jpeg2000FileSettings"/> class.
    /// </summary>
    Jpeg2000FileSettings();
    
protected:

    /// <summary>
    /// Gets the XMP metadata container.
    /// </summary>
    /// <value>
    /// The XMP data container.
    /// </value>
    System::SharedPtr<Xmp::XmpPacketWrapper> get_XmpData();
    /// <summary>
    /// Sets the XMP metadata container.
    /// </summary>
    /// <value>
    /// The XMP data container.
    /// </value>
    void set_XmpData(System::SharedPtr<Xmp::XmpPacketWrapper> value);
    /// <summary>
    /// Gets the resolution settings.
    /// </summary>
    /// <value>
    /// The resolution settings.
    /// </value>
    System::SharedPtr<ResolutionSetting> get_ResolutionSettings();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Jpeg2000FileSettings"/> class.
    /// </summary>
    /// <param name="options">The options.</param>
    Jpeg2000FileSettings(System::SharedPtr<Aspose::Pdf::Engine::Presentation::Graphics::ImageOptions::Jpeg2000Options> options);
    
    /// <summary>
    /// Sets the resolution settings.
    /// </summary>
    /// <param name="settings">The settings.</param>
    void SetResolutionSettings(System::SharedPtr<ResolutionSetting> settings);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    double verticalResolution;
    double horizontalResolution;
    bool writeResolution;
    System::ArrayPtr<System::String> comments;
    Jpeg2000Codec codec;
    int32_t bitsPerPixel;
    System::SharedPtr<Xmp::XmpPacketWrapper> xmpData;
    bool irreversible;
    System::ArrayPtr<int32_t> pr_CompressionRatios;
    
};

} // namespace Jpeg2000
} // namespace FileFormats
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


