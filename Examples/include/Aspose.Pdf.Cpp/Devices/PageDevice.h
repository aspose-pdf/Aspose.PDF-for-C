#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/io/stream.h>
#include <drawing/graphics.h>

#include "Devices/Device.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfConverter; } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Abstract class for all devices which is used to process certain page the pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API PageDevice : public Aspose::Pdf::Devices::Device
{
    typedef PageDevice ThisType;
    typedef Aspose::Pdf::Devices::Device BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfConverter;
    
public:

    /// <summary>
    /// Perfoms some operation on the given page, e.g. converts page into graphic image.
    /// </summary>
    /// <param name="page">
    /// The page to process.
    /// </param>
    /// <param name="output">
    /// This stream contains the results of processing.
    /// </param>
    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output) = 0;
    /// <summary>
    /// Perfoms some operation on the given page and saves results into the file.
    /// </summary>
    /// <param name="page">
    /// The page to process.
    /// </param>
    /// <param name="outputFileName">
    /// This file contains the results of processing.
    /// </param>
    void Process(System::SharedPtr<Page> page, System::String outputFileName);
    
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


