#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_ScalingReason_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_ScalingReason_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// The circumstances under which the icon shall be scaled inside the annotation rectangle.
/// </summary>
enum class ScalingReason
{
    /// <summary>
    /// Always scale.
    /// </summary>
    Always,
    /// <summary>
    /// BScale only when the icon is bigger than the annotation rectangle.
    /// </summary>
    IconIsBigger,
    /// <summary>
    /// Scale only when the icon is smaller than the annotation rectangle.
    /// </summary>
    IconIsSmaller,
    /// <summary>
    /// Never scale.
    /// </summary>
    Never
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_ScalingReason_h_

