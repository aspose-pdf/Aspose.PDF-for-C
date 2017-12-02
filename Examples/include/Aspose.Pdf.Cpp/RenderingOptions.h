#ifndef _Aspose_Pdf_RenderingOptions_h_
#define _Aspose_Pdf_RenderingOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents rendering options.
/// </summary>
class ASPOSE_PDF_SHARED_API RenderingOptions FINAL : public System::Object
{
    typedef RenderingOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets barcode optimization mode. 
    /// </summary>
    bool get_BarcodeOptimization();
    /// <summary>
    /// Gets or sets barcode optimization mode. 
    /// </summary>
    void set_BarcodeOptimization(bool value);
    /// <summary>
    /// Gets or sets a mode where system fonts are rendered natively. 
    /// </summary>
    bool get_SystemFontsNativeRendering();
    /// <summary>
    /// Gets or sets a mode where system fonts are rendered natively. 
    /// </summary>
    void set_SystemFontsNativeRendering(bool value);
    /// <summary>
    /// Gets or sets a flag determines whether new imaging engine is used or not.
    /// </summary>
    bool get_UseNewImagingEngine();
    /// <summary>
    /// Gets or sets a flag determines whether new imaging engine is used or not.
    /// </summary>
    void set_UseNewImagingEngine(bool value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="RenderingOptions"/> object.
    /// </summary>
    RenderingOptions();
    
private:

    bool _barcodeOptimization;
    bool _systemFontsNativeRendering;
    bool _useNewImagingEngine;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_RenderingOptions_h_

