#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <drawing/graphics.h>
#include <cstdint>

#include "Devices/ImageDevice.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents image device that helps to save pdf document pages into bmp. 
/// </summary>
class ASPOSE_PDF_SHARED_API BmpDevice FINAL : public Aspose::Pdf::Devices::ImageDevice
{
    typedef BmpDevice ThisType;
    typedef Aspose::Pdf::Devices::ImageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="BmpDevice"/> class with default resolution.
    /// </summary>
    BmpDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="BmpDevice"/> class.
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    /// </summary>
    BmpDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="BmpDevice"/> class with provided image dimensions and
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
    BmpDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="BmpDevice"/> class with provided page size and
    /// resolution.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    BmpDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    
    /// <summary>
    /// Converts the page into bmp and saves it in the output stream.
    /// </summary>
    /// <param name="page">
    /// The page to convert.
    /// </param>
    /// <param name="output">
    /// Output stream with bmp image.
    /// </param>
    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="BmpDevice"/> class with provided image dimensions, 
    /// default resolution (=150).
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    BmpDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="BmpDevice"/> class with provided page size, 
    /// default resolution (=150).
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    BmpDevice(System::SharedPtr<PageSize> pageSize);
    
protected:

    /// <summary>
    /// renders page on the graphics
    /// </summary>
    /// <param name="page"></param>
    /// <param name="gr"></param>
    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::Drawing::Graphics> gr);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


