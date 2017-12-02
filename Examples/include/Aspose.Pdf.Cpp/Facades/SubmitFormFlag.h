#ifndef _Aspose_Pdf_Facades_SubmitFormFlag_h_
#define _Aspose_Pdf_Facades_SubmitFormFlag_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Enumeration of possible submit form flags.
/// </summary>
enum class SubmitFormFlag
{
    /// <summary>
    /// Data will be returned in FDF format.
    /// </summary>
    Fdf,
    /// <summary>
    /// Data will be returned in HTML format.
    /// </summary>
    Html,
    /// <summary>
    /// Data will be returned in XFDF format.
    /// </summary>
    Xfdf,
    /// <summary>
    /// Data will be returned in FDF format with comments.
    /// </summary>
    FdfWithComments,
    /// <summary>
    /// Data will be returned in XFDF format with comments.
    /// </summary>
    XfdfWithComments,
    /// <summary>
    /// Whole PDF file will be submitted.
    /// </summary>
    Pdf
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Facades::SubmitFormFlag);
DECLARE_USING_GLOBAL_OPERATORS

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Facades);


#endif // _Aspose_Pdf_Facades_SubmitFormFlag_h_

