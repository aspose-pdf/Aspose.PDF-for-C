#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

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
    /// Gets or sets a value used to increase or decrease the width of rectangle for AppendRectangle operator.
    /// </summary>
    float get_WidthExtraUnits();
    /// <summary>
    /// Gets or sets a value used to increase or decrease the width of rectangle for AppendRectangle operator.
    /// </summary>
    void set_WidthExtraUnits(float value);
    /// <summary>
    /// Indicates that all fonts will be converted to TTF unicode versions. That is useful for compatibility 
    /// reasons and to optimize font usage, cause every new TTF font will have not all the symbols 
    /// from source font, but only symbols which are used in text.
    /// </summary>
    bool get_ConvertFontsToUnicodeTTF();
    /// <summary>
    /// Indicates that all fonts will be converted to TTF unicode versions. That is useful for compatibility 
    /// reasons and to optimize font usage, cause every new TTF font will have not all the symbols 
    /// from source font, but only symbols which are used in text.
    /// </summary>
    void set_ConvertFontsToUnicodeTTF(bool value);
    /// <summary>
    /// Usage of this flag turn on font hinting mechanism. Font hinting is the use of mathematical instructions to adjust the display 
    /// of an outline font. In some cases turning this flag on may solve problems with text legibility. 
    /// At current moment usage of this flag could give effect only for TTF fonts, if these fonts are used in source document.
    /// </summary>
    bool get_UseFontHinting();
    /// <summary>
    /// Usage of this flag turn on font hinting mechanism. Font hinting is the use of mathematical instructions to adjust the display 
    /// of an outline font. In some cases turning this flag on may solve problems with text legibility. 
    /// At current moment usage of this flag could give effect only for TTF fonts, if these fonts are used in source document.
    /// </summary>
    void set_UseFontHinting(bool value);
    /// <summary>
    /// Gets or sets a values used to scale all images on the page to fit page's width. 
    /// </summary>
    bool get_ScaleImagesToFitPageWidth();
    /// <summary>
    /// Gets or sets a values used to scale all images on the page to fit page's width. 
    /// </summary>
    void set_ScaleImagesToFitPageWidth(bool value);
    /// <summary>
    /// Gets or sets hiqh quality mode for interpolation.
    /// </summary>
    bool get_InterpolationHighQuality();
    /// <summary>
    /// Gets or sets hiqh quality mode for interpolation.
    /// </summary>
    void set_InterpolationHighQuality(bool value);
    /// <summary>
    /// Maximum count of fonts in fonts cache. Default value is 10.
    /// </summary>
    int32_t get_MaxFontsCacheSize();
    /// <summary>
    /// Maximum count of fonts in fonts cache. Default value is 10.
    /// </summary>
    void set_MaxFontsCacheSize(int32_t value);
    /// <summary>
    /// Maximum count of symbols in symbol cache. Default value is 100.
    /// </summary>
    int32_t get_MaxSymbolsCacheSize();
    /// <summary>
    /// Maximum count of symbols in symbol cache. Default value is 100.
    /// </summary>
    void set_MaxSymbolsCacheSize(int32_t value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="RenderingOptions"/> object.
    /// </summary>
    RenderingOptions();
    
private:

    bool _barcodeOptimization;
    bool _systemFontsNativeRendering;
    bool _useNewImagingEngine;
    float _widthExtraUnits;
    bool _convertFontsToUnicodeTtf;
    bool _scaleImagesToFitPageWidth;
    bool _interpolationHighQuality;
    int32_t _maxFontsCacheSize;
    int32_t _maxSymbolsCacheSize;
    bool pr_UseFontHinting;
    
};

} // namespace Pdf
} // namespace Aspose


