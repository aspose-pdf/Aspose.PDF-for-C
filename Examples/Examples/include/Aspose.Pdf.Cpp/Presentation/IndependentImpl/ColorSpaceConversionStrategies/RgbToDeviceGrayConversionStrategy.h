#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Presentation/IndependentImpl/IColorSpaceConversionStrategy.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents rgb to device gray color spaces conversion strategy.
/// </summary>
class ASPOSE_PDF_SHARED_API RgbToDeviceGrayConversionStrategy : public Aspose::Pdf::IColorSpaceConversionStrategy
{
    typedef RgbToDeviceGrayConversionStrategy ThisType;
    typedef Aspose::Pdf::IColorSpaceConversionStrategy BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Converts the page of document.
    /// </summary>
    /// <param name="page">The page of document.</param>
    void Convert(System::SharedPtr<Page> page);
    
private:

    static void ConvertImages(System::SharedPtr<Resources> resources);
    static void ConvertForms(System::SharedPtr<Resources> resources);
    static void ConvertForm(System::SharedPtr<XForm> form);
    
};

} // namespace Pdf
} // namespace Aspose


