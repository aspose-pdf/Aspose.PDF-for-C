#ifndef _Aspose_Pdf_ColorSpace_h_
#define _Aspose_Pdf_ColorSpace_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// The color spaces enumeration.
/// </summary>
enum class ColorSpace
{
    /// <summary>
    /// The device-dependent RGB color space.
    /// </summary>
    DeviceRGB,
    /// <summary>
    /// The device-dependent CMYK color space.
    /// </summary>
    DeviceCMYK,
    /// <summary>
    /// The device-dependent gray color space.
    /// </summary>
    DeviceGray
};

class ASPOSE_PDF_SHARED_API ColorSpaceConverter : public System::Object
{
    typedef ColorSpaceConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(ColorSpace value);
    static ColorSpace ToEnum(System::String value);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ColorSpace_h_

