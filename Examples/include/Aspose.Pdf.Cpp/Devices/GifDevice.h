#ifndef _Aspose_Pdf_Devices_GifDevice_h_
#define _Aspose_Pdf_Devices_GifDevice_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <cstdint>

#include "Devices/ImageDevice_.h"

namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents image device that helps to save pdf document pages into gif. 
/// </summary>
class ASPOSE_PDF_SHARED_API GifDevice FINAL : public Aspose::Pdf::Devices::ImageDevice
{
    typedef GifDevice ThisType;
    typedef Aspose::Pdf::Devices::ImageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="GifDevice"/> class with default resolution.
    /// </summary>
    GifDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="GifDevice"/> class.
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    /// </summary>
    GifDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="GifDevice"/> class with provided image dimensions and
    /// resolution.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    GifDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="GifDevice"/> class with provided page size and
    /// resolution.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    GifDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    
    /// <summary>
    /// Converts the page into gif and saves it in the output stream.
    /// </summary>
    /// <param name="page">
    /// The page to convert.
    /// </param>
    /// <param name="output">
    /// Output stream with gif image.
    /// </param>
    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="GifDevice"/> class with provided image dimensions, 
    /// default resolution (=150).
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    GifDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="GifDevice"/> class with provided page size, 
    /// default resolution (=150).
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    GifDevice(System::SharedPtr<PageSize> pageSize);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_GifDevice_h_

