#ifndef _Aspose_Pdf_InteractiveFeatures_ExplicitDestinationType_h_
#define _Aspose_Pdf_InteractiveFeatures_ExplicitDestinationType_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Enumerates the types of explicit destinations.
/// </summary>
enum class ExplicitDestinationType
{
    /// <summary>
    /// Display the page with the coordinates (left,�top) positioned at the upper-left corner of the window
    /// and the contents of the page magnified by the factor zoom. A null value for any of the parameters
    /// left, top, or zoom specifies that the current value of that parameter is to be retained unchanged. 
    /// A zoom value of 0 has the same meaning as a null value.
    /// </summary>
    XYZ,
    /// <summary>
    /// Display the page with its contents magnified just enough to fit the entire page within the window
    /// both horizontally and vertically. If the required horizontal and vertical magnification factors are
    /// different, use the smaller of the two, centering the page within the window in the other dimension.
    /// </summary>
    Fit,
    /// <summary>
    /// Display the page with the vertical coordinate top positioned at the top edge of the window and
    /// the contents of the page magnified just enough to fit the entire width of the page within the window.
    /// A null value for top specifies that the current value of that parameter is to be retained unchanged.
    /// </summary>
    FitH,
    /// <summary>
    /// Display the page with the horizontal coordinate left positioned at the left edge of the window
    /// and the contents of the page magnified just enough to fit the entire height of the page within the window.
    /// A null value for left specifies that the current value of that parameter is to be retained unchanged.
    /// </summary>
    FitV,
    /// <summary>
    /// Display the page with its contents magnified just enough to fit the rectangle specified by the
    /// coordinates left, bottom, right, and topentirely within the window both horizontally and vertically.
    /// If the required horizontal and vertical magnification factors are different, use the smaller of
    /// the two, centering the rectangle within the window in the other dimension. A null value for any
    /// of the parameters may result in unpredictable behavior.
    /// </summary>
    FitR,
    /// <summary>
    /// Display the page with its contents magnified just enough to fit its bounding box entirely within
    /// the window both horizontally and vertically. If the required horizontal and vertical magnification
    /// factors are different, use the smaller of the two, centering the bounding box within the window
    /// in the other dimension.
    /// </summary>
    FitB,
    /// <summary>
    /// Display the page with the vertical coordinate top positioned at the top edge of the window and the
    /// contents of the page magnified just enough to fit the entire width of its bounding box within the window.
    /// A null value for top specifies that the current value of that parameter is to be retained unchanged.
    /// </summary>
    FitBH,
    /// <summary>
    /// Display the page with the horizontal coordinate left positioned at the left edge of the window and the
    /// contents of the page magnified just enough to fit the entire height of its bounding box within the window.
    /// A null value for left specifies that the current value of that parameter is to be retained unchanged.
    /// </summary>
    FitBV
};

class ASPOSE_PDF_SHARED_API ExplicitDestinationTypeConverter : public System::Object
{
    typedef ExplicitDestinationTypeConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(ExplicitDestinationType value);
    static ExplicitDestinationType ToEnum(System::String value);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_ExplicitDestinationType_h_

