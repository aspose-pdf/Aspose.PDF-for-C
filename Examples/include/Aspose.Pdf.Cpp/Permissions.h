#ifndef _Aspose_Pdf_Permissions_h_
#define _Aspose_Pdf_Permissions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>

namespace Aspose {

namespace Pdf {

/// <summary>
/// This enum represents user's permissions for a pdf.
/// </summary>
enum class Permissions
{
    PrintDocument = 1 << 2,
    ModifyContent = 1 << 3,
    ExtractContent = 1 << 4,
    ModifyTextAnnotations = 1 << 5,
    FillForm = 1 << 8,
    ExtractContentWithDisabilities = 1 << 9,
    AssembleDocument = 1 << 10,
    PrintingQuality = 1 << 11
};

} // namespace Pdf
} // namespace Aspose

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Permissions);


#endif // _Aspose_Pdf_Permissions_h_

