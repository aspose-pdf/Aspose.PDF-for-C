#ifndef _Aspose_Pdf_ExtractImageMode_h_
#define _Aspose_Pdf_ExtractImageMode_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

/// <summary>
/// Defines different modes which can be used while extracting images from documents.
/// </summary>
enum class ExtractImageMode
{
    /// <summary>
    /// Defines image extraction mode in which all images defined in resources for particular page are extracted.
    /// </summary>
    DefinedInResources = 0,
    /// <summary> 
    /// Defines image extraction mode in which only those images are extracted that are actually shown on a page.
    /// </summary>
    ActuallyUsed = 1
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ExtractImageMode_h_

