#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "UnifiedSaveOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to SVG format
/// </summary>
class ASPOSE_PDF_SHARED_API PptxSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef PptxSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// If set to true then all the content is recognized as images (one per page)
    /// </summary>
    bool get_SlidesAsImages();
    /// <summary>
    /// If set to true then all the content is recognized as images (one per page)
    /// </summary>
    void set_SlidesAsImages(bool value);
    /// <summary>
    /// Gets the image resolution (dpi). Default is 192 dpi.
    /// </summary>
    int32_t get_ImageResolution();
    /// <summary>
    /// Sets the image resolution (dpi). Default is 192 dpi.
    /// </summary>
    void set_ImageResolution(int32_t value);
    /// <summary>
    /// If set to true then images are separated from all other graphics
    /// </summary>
    bool get_SeparateImages();
    /// <summary>
    /// If set to true then images are separated from all other graphics
    /// </summary>
    void set_SeparateImages(bool value);
    /// <summary>
    /// Toggles text columns recognition
    /// </summary>
    bool get_OptimizeTextBoxes();
    /// <summary>
    /// Toggles text columns recognition
    /// </summary>
    void set_OptimizeTextBoxes(bool value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    PptxSaveOptions();
    
private:

    int32_t _imageResolution;
    bool pr_SlidesAsImages;
    bool pr_SeparateImages;
    bool pr_OptimizeTextBoxes;
    
};

} // namespace Pdf
} // namespace Aspose


